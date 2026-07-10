# Smart Helmet Using ESP8266

## Overview

The **Smart Helmet Using ESP8266** is an IoT-based safety system developed to improve the safety of two-wheeler riders. The project ensures that the rider is wearing the helmet and has not consumed alcohol before allowing the vehicle to start. The ESP8266 microcontroller reads data from sensors, processes the information, and controls the ignition system accordingly. This project demonstrates the integration of embedded systems, sensors, and wireless communication for real-time safety applications.

---

## Objectives

- Improve rider safety using IoT technology.
- Detect whether the rider is wearing the helmet.
- Detect alcohol consumption before vehicle ignition.
- Prevent vehicle ignition if safety conditions are not satisfied.
- Demonstrate an embedded system using ESP8266 for real-time monitoring.

---

## Features

- Helmet detection using an IR sensor
- Alcohol detection using an MQ-3 sensor
- Vehicle ignition control
- Buzzer warning system
- LED status indication
- Wireless communication using ESP8266
- Low-cost and reliable safety solution

---

## Hardware Components

| Component | Description |
|-----------|-------------|
| ESP8266 NodeMCU | Main microcontroller |
| MQ-3 Alcohol Sensor | Detects alcohol |
| IR Sensor | Detects helmet wearing |
| Relay Module / Servo Motor | Controls vehicle ignition |
| Buzzer | Warning indication |
| LEDs | Status indication |
| Breadboard | Circuit connections |
| Jumper Wires | Hardware connections |
| 5V Power Supply | System power |

---

## Software Requirements

- Arduino IDE
- Embedded C / Arduino Programming

---

## Working Principle

1. The ESP8266 initializes all connected sensors.
2. The IR sensor detects whether the rider is wearing the helmet.
3. The MQ-3 sensor checks for alcohol in the rider's breath.
4. The ESP8266 processes the sensor readings.
5. If the helmet is worn and no alcohol is detected:
   - The relay enables the vehicle ignition.
   - Green LED turns ON.
6. If either condition is not satisfied:
   - Vehicle ignition remains OFF.
   - Buzzer alerts the rider.

---

## System Architecture

```
                 +-------------------+
                 |   Power Supply    |
                 +---------+---------+
                           |
                           ▼
                    +---------------+
                    | ESP8266 NodeMCU |
                    +---------------+
                     |      |      |
                     |      |      |
                     ▼      ▼      ▼
                 IR Sensor MQ-3  LED/Buzzer
                     |
                     ▼
              Relay / Servo Motor
                     |
                     ▼
            Vehicle Ignition Control
```



## Applications

- Smart helmets
- Road safety systems
- Two-wheeler safety
- IoT-based transportation
- Educational embedded systems projects

---

## Advantages

- Improves rider safety
- Prevents drunk driving
- Reduces road accidents
- Easy to implement
- Low power consumption
- Cost-effective solution
- Reliable and efficient

---

## Future Enhancements

- GPS tracking
- GSM emergency alerts
- Accident detection
- Mobile application support
- Cloud-based data monitoring
- Real-time notifications
- AI-based rider behavior analysis

---

## Technologies Used

- ESP8266 NodeMCU
- Arduino IDE
- Embedded C
- Internet of Things (IoT)
- MQ-3 Alcohol Sensor
- IR Sensor
- Relay Module
- Electronics

---

## Results

The Smart Helmet system successfully detects helmet usage and alcohol consumption before allowing vehicle ignition. The ESP8266 processes sensor inputs in real time and ensures that the vehicle starts only when all safety conditions are met. If any condition fails, the system disables ignition and alerts the rider using visual and audible indicators.

---

## Learning Outcomes

- Embedded Systems Programming
- ESP8266 Development
- IoT Application Development
- Sensor Interfacing
- Relay Control
- Arduino Programming
- Hardware Integration
- Real-Time System Design

---

## Author

**Pasham Malathi**

B.Tech – Electronics and Communication Engineering (ECE)

Geethanjali College of Engineering & Technology

---

## License

This project is created for educational and academic purposes.
