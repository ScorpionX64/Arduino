boolean left;
boolean right;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
  // Enable internal pull-up resistors
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  
  EICRA = 0b00001010; // Select the falling edge trigger
  EIMSK = 0b00000011; // Enable External Interrupts
}

void loop() {

  // MAIN LOOP 
}

ISR (INT0_vect) {
  
  // If the other signal is HIGH, this is a new rotation
  if (digitalRead(3) == HIGH) {
    left = true;
   }

}

ISR (INT1_vect) {
  
  // If the other signal is HIGH, this is a new rotation                         
  if (digitalRead(2) == HIGH) {
    right = true;
    }

}
