void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("| Program Starting... |");
}

void dot(int n){
  // Sends n dot signals with 1-sec delay between each message
  for (int i=0; i<n; i++){
    digitalWrite(13, HIGH);
    Serial.println("ON");
    delay(1000);
    digitalWrite(13, LOW);
    Serial.println("OFF");
    if (i != n-1) delay(1000);
  }
}

void dash(int n){
  // Sends n dash signals with 1-sec delay between each message
  for (int i=0; i<n; i++){
    digitalWrite(13, HIGH);
    Serial.println("ON");
    delay(3000);
    digitalWrite(13, LOW);
    Serial.println("OFF");
    if (i != n-1) delay(1000);
  }
}

void loop() {
  Serial.println("Letter: S");
  dot(3);
  Serial.println("Delay: 3 seconds");
  delay(3000);
  Serial.println("Letter: O");
  dash(3);
  Serial.println("Delay: 3 seconds");
  delay(3000);
  Serial.println("Letter: S");
  dot(3);
  Serial.println("Delay: 7 seconds");
  delay(7000);
}
