void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);
  delay(1);

}
