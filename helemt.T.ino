#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Starting WiFi Scan...");

  int n = WiFi.scanNetworks();

  if (n == 0) {
    Serial.println("No networks found");
  } else {
    Serial.println("Networks found:");
    for (int i = 0; i < n; ++i) {
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.println(WiFi.SSID(i));
    }
  }
}

void loop() {}