// Automatic Street Light Using LDR
// Components:
// LDR -> A0 (with 10k resistor to GND)
// LED -> Pin 3 (with 220Ω resistor)
// Creator: Prabhav Deshpande

int ledPin = 3;          // LED connected to digital pin 3
int threshold = 50;      // Threshold for light detection (adjust based on Serial Monitor)

void setup() {
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
  Serial.begin(9600);          // Start Serial Monitor for LDR readings
}

void loop() {
  int ldrValue = analogRead(A0);   // Read LDR sensor
  Serial.println(ldrValue);        // Print value for testing

  // If darkness (value less than threshold)
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);    // Turn ON LED
  } 
  else {
    digitalWrite(ledPin, LOW);     // Turn OFF LED
  }

  delay(200);                       // Small delay for stability
}
