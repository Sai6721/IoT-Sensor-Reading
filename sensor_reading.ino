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