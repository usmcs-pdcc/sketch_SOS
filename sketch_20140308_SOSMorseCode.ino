/*
  SOS with Morse Code
  
  hadrihl hadrihilmi@gmail.com
  pdccteam
  */
  
// assign pin 13
int led = 13;
  
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, LOW);     // by default turn the light off at the beginning
  pause_signal();
  dit(); dit(); dit();        // S
  pause_signal(); 
  dah(); dah(); dah();        // O
  pause_signal();
  dit(); dit(); dit();        // S
  pause_signal();
}

// pause for 1 second.
void pause_signal() {
  delay(1000);
}

// short signal, dots/dits
void dit() {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
}

// long signal, dashes/dahs
void dah() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
