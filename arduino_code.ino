// LED Pins for Road A (North-South)
int redA = 2; 
int yellowA = 3;
int greenA = 4;

// LED Pins for Road B (East-West)
int redB = 5;
int yellowB = 6;
int greenB = 7;

// Slide Switch Pins
int emergencySwitch = 8;
int pedestrianSwitch = 9;

void setup() {
  // LEDs as OUTPUT
  pinMode(redA, OUTPUT);
  pinMode(yellowA, OUTPUT);
  pinMode(greenA, OUTPUT);
  pinMode(redB, OUTPUT);
  pinMode(yellowB, OUTPUT);
  pinMode(greenB, OUTPUT);

  // Slide switches as INPUT with internal pull-up
  pinMode(emergencySwitch, INPUT_PULLUP);
  pinMode(pedestrianSwitch, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(emergencySwitch) == LOW) {
    emergencyMode();
  } 
  else if (digitalRead(pedestrianSwitch) == LOW) {
    pedestrianMode();
  } 
  else {
    normalCycle();
  }
}

void emergencyMode() {
  turnOffAllGreenAndYellow();
  turnOnAllRed();
  delay(5000);
  digitalWrite(greenA, HIGH);
  delay(5000);
  digitalWrite(greenA, LOW);
  digitalWrite(yellowA, HIGH);
  delay(5000);
  digitalWrite(greenB, HIGH);
  digitalWrite(redA, HIGH);
  digitalWrite(redB, LOW);
  delay(5000);
}

void pedestrianMode() {
  turnOffAllGreenAndYellow();
  turnOnAllRed();
  delay(5000);
  normalCycle();
}

void normalCycle() {
  // Road A GO
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  delay(5000);

  digitalWrite(greenA, LOW);
  digitalWrite(yellowA, HIGH);
  delay(1000);
  digitalWrite(yellowA, LOW);

  // Road B GO
  digitalWrite(redB, LOW);
  digitalWrite(redA, HIGH);
  digitalWrite(greenB, HIGH);
  delay(5000);

  digitalWrite(greenB, LOW);
  digitalWrite(yellowB, HIGH);
  delay(1000);
  digitalWrite(yellowB, LOW);
  digitalWrite(redA, LOW);
  digitalWrite(redB, HIGH);
}

void turnOffAllGreenAndYellow() {
  digitalWrite(greenA, LOW);
  digitalWrite(greenB, LOW);
  digitalWrite(yellowA, LOW);
  digitalWrite(yellowB, LOW);
}

void turnOnAllRed() {
  digitalWrite(redA, HIGH);
  digitalWrite(redB, HIGH);
}
