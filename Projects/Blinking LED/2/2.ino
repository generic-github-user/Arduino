// LED uses pin #13
const int LED = 13;

// Setup
void setup() {
  pinMode(LED, OUTPUT);
}

// Loop
void loop() {
  // Turn on LED
  digitalWrite(LED, HIGH);
  // Wait 15 milliseconds
  delay(15);
  // Turn off LED
  digitalWrite(LED, LOW);
  // Wait 15 milliseconds
  delay(15);
}
