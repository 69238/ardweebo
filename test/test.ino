const int buttonPin = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;
int ledPin1 = 11;
int ledPin2 = 10;
int ledPin3 = 9;
int ledPin4 = 6;
int ledPinO = 5;   // the pin that the LED is attached to

int ledPins[] = {5, 6, 9, 10, 11};

// Variables will change:
int aantalKliks = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  /*pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPinO, OUTPUT);*/
  for( int i=0; i<5; i++){
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}


void loop() {
  //read the pushbutton input pin:


  /*// compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button
      // wend from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes:  ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button
      // wend from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state,
  //for next time through the loop
  lastButtonState = buttonState;


  // turns on the LED every four button pushes by
  // checking the modulo of the button push counter.
  // the modulo function gives you the remainder of
  // the division of two numbers:
  if (buttonPushCounter % 4 == 0) {
    analogWrite(ledPin1, 5);
    digitalWrite(ledPin2, 1);
    digitalWrite(ledPin3, 1);
    digitalWrite(ledPin4, 1);
    digitalWrite(ledPinO, 1);
  } else {
    digitalWrite(ledPin1, 0);
    digitalWrite(ledPin2, 0);
    digitalWrite(ledPin3, 0);
    digitalWrite(ledPin4, 0);
    digitalWrite(ledPinO, 0);
  }*/
  buttonState = digitalRead(buttonPin);
  
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
        aantalKliks++;
    }
    delay(50);
  }
  
  lastButtonState = buttonState;

  if (aantalKliks % 1 == 0){
    for(int i=0; i<1; i++)
    {
       digitalWrite(ledPins[i], HIGH);
    }
  }
  
}
