#define Servopin 18  // Connect LED to a PWM pin

void setup() {
  pinMode(Servopin, OUTPUT); // Set the pin as an output
  analogReadResolution(8);
}

void loop() {
  // Increase pos (fade in)
  for (int pos = 0; pos <= 255; pos++) {
    analogWrite(Servopin, pos);
    delay(10); // Adjust delay for desired fade speed
  }

  // Decrease pos (fade out)
  for (int pos = 255; pos >= 0; pos--) {
    analogWrite(Servopin, pos);
    delay(10); // Adjust delay for desired fade speed
  }
}