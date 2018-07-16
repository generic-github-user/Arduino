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
  // Wait 1 second
  delay(1000);
  // Turn off LED
  digitalWrite(LED, LOW);
  // Wait 1 second
  delay(1000);
}
