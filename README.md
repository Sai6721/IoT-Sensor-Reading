# IoT-Sensor-Reading
# IoT Task 2 – Sensing the Environment (Reading a Sensor)

## Project Overview

This project demonstrates how to read data from an analog sensor using an Arduino. A TMP36 temperature sensor is connected to the Arduino, and the temperature readings are displayed on the Serial Monitor.

## Objective

- Learn analog input using Arduino.
- Read sensor values through Analog Pin A0.
- Convert analog values into temperature.
- Display sensor readings on the Serial Monitor.

## Components Required

- Arduino Uno
- TMP36 Temperature Sensor
- Breadboard
- Jumper Wires
- USB Cable

## Software

- Arduino IDE

## Connections

- Left Pin → 3.3V
- Middle Pin → A0
- Right Pin → GND

## Arduino Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);

  float voltage = sensorValue * (3.3 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(2000);
}
```

## Expected Output

The Serial Monitor continuously displays the temperature in degrees Celsius every two seconds.

## Project Structure

```
IoT-Sensor-Reading/
│── README.md
│── circuit.md
│── sensor_reading.ino
└── screenshots/
```

## Learning Outcomes

- Understood analog sensor interfacing.
- Learned to use analogRead().
- Converted voltage into temperature.
- Displayed sensor data using the Serial Monitor.

## Author

SoftNexis Internship – IoT Task 2