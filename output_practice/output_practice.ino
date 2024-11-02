// Working with 2 RGB LEDs

// Define pins for Teensy 4.1

//If you were to have two RGB LEDS, which I wish I had...
//const int ledAred = 1, ledAgreen = 2, ledAblue = 3;
//const int ledBred = 4, ledBgreen = 5, ledBblue = 6;

const int ledAred = 1, ledAgreen = 2, ledAblue = 3;
const int redLed = 4, greenLed = 5;

const int buzzer = 8;

void setup() {
  //Defining the pins as OUTPUT
  pinMode(ledAred,  OUTPUT);              
  pinMode(ledAgreen, OUTPUT);
  pinMode(ledAblue, OUTPUT);

  //If you were to have two RGB LEDs
  //pinMode(ledBred, OUTPUT);
  //pinMode(ledBgreen, OUTPUT);
  //pinMode(ledBblue, OUTPUT);

  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void  loop() {
  setLedColor(255, 0, 0, ledAred, ledAgreen, ledAblue); // Red Color
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  tone(buzzer, 1000);
  delay(1000);
  setLedColor(0,  255, 0, ledAred, ledAgreen, ledAblue); // Green Color
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  tone(buzzer, 0);
  delay(1000);
  setLedColor(0, 0, 255, ledAred, ledAgreen, ledAblue); // Blue Color
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  tone(buzzer, 1000);
  delay(1000);
  setLedColor(255, 255, 255, ledAred, ledAgreen, ledAblue); // White Color
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  tone(buzzer, 0);
  delay(1000);
  setLedColor(170, 0, 255, ledAred, ledAgreen, ledAblue); // Purple Color
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  tone(buzzer, 1000);
  delay(1000);
  setLedColor(127, 127,  127, ledAred, ledAgreen, ledAblue); // Light Blue
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  tone(buzzer, 0);
  delay(1000);
}

void setLedColor(int redValue, int greenValue,  int blueValue, char redPin, char greenPin, char bluePin) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin,  greenValue);
  analogWrite(bluePin, blueValue);
}
