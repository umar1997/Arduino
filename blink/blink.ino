// the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize digital pin LED_BUILTIN as an output.
}

void loop() {
  // the loop function runs over again forever
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(100);                        // wait for a second
  digitalWrite(LED_BUILTIN, LOW);     // turn the LED on (LOW is the voltage level)
  delay(100);                        // wait for a second

}
