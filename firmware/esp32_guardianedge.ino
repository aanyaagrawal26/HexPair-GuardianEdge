/*
 HexPair GuardianEdge
 Edge-based AIoT Child Safety System
*/

#define MIC_PIN 34
#define PIR_PIN 27
#define LED_PIN 2

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  int audioLevel = analogRead(MIC_PIN);

  // Simulated TinyML logic
  if (motion == HIGH && audioLevel > 2000) {
    // Distress detected
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Distress detected - Alert triggered");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Normal monitoring");
  }

  delay(1000);
}
