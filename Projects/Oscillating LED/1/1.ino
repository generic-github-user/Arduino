// LED uses pin #9
const int LED = 9;
int time_ = 0;
int sine = 0;

// Setup
void setup() {
  pinMode(LED, OUTPUT);
}

// Loop
void loop() {
  sine = round((sin(time_ / 100) + 1) * (255 / 2));
  analogWrite(LED, sine);
  // Wait 1 millisecond
  delay(1);
  time_ ++;
}
