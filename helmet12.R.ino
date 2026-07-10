#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#include <SoftwareSerial.h>

// LCD
LiquidCrystal_I2C lcd(0x3F, 16, 2);

// Bluetooth
SoftwareSerial BT(D7, D8); // RX, TX

// Servo
Servo myServo;
int servoPin = D5;

// Buzzer
int buzzer = D0;

char data;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  pinMode(buzzer, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(0); // LOCK

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("RECEIVER READY");
  delay(2000);
  lcd.clear();
}

void loop() {

  if (BT.available()) {
    data = BT.read();   // read single character
    Serial.println(data);

    lcd.clear();

    // 🚫 Helmet not worn
    if (data == 'H') {

      lcd.setCursor(0,0);
      lcd.print("NO HELMET");

      digitalWrite(buzzer, HIGH);
      myServo.write(0); // LOCK
    }

    // 🍺 Alcohol detected
    else if (data == 'A') {

      lcd.setCursor(0,0);
      lcd.print("ALCOHOL DETECTED");

      digitalWrite(buzzer, HIGH);
      myServo.write(0); // LOCK
    }

    // ✅ Safe
    else if (data == 'S') {

      lcd.setCursor(0,0);
      lcd.print("HELMET WORN");
      lcd.setCursor(0,1);
      lcd.print("SAFE");

      digitalWrite(buzzer, LOW);
      myServo.write(90); // UNLOCK
    }
  }
}