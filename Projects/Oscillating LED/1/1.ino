// LED uses pin #9
// This pin can handle analog values, allowing for a gradient when powering a component, instead of two discrete on and off states
const int LED = 9;
// Set time variable to 0
// "time_" is used because "time" is declared as an internal variable
int time_ = 0;
// Set sine variable to zero
// This will be used to store the sine of the time variable
int sine = 0;

// Setup
void setup() {
  // Set the LED pin (#9) as an output
  pinMode(LED, OUTPUT);
}

// Loop
void loop() {
  // Calculate the sine of time:
  // - Divide time by 100
  // - Calculate sine
  // - Add one to shift the output of this operation from a -1 to 1 range to a 0 to 2 range
  // - Multiply by 255 over 2 to expand the output range from 0 to 2, to 0 to 255 (255 is the analog input range of the LED)
  // - Round the result so it can be used as an analog input
  // - Store this in the sine variable
  sine = round((sin(time_ / 100) + 1) * (255 / 2));
  // Write the value of the sine variable to the LED (pin #9)
  analogWrite(LED, sine);
  // Wait 1 millisecond
  delay(1);
  // Increment the time variable by 1
  time_ ++;
}
