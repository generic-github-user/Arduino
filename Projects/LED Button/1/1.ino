// LED uses pin #13
const int LED = 13;
// Button uses pin #2
const int BUTTON = 2;
// Value of button (pressed or not)
int val = 0;

// Setup
void setup() {
  // Set up the pin corresponding to the LED as an output
  pinMode(LED, OUTPUT);
  // Set up the pin corresponding to the button as an input
  pinMode(BUTTON, INPUT);
}

// Loop
void loop() {
  // Update button status variable (val)
  val = digitalRead(BUTTON);
  // Detect if the button is pressed (val == HIGH)
  if (val == HIGH) {
    // If the button is pressed, turn on the LED
    digitalWrite(LED, HIGH);
  }
  // Detect if the button is not pressed (val != HIGH)
  else {
    // If the button is not pressed, turn off the LED
    digitalWrite(LED, LOW);
  }
}
