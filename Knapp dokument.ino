void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop() {
  if(digitalRead(13) == LOW) {
    Serial.write(1);
   Serial.print("Funker");
   
  }
  else {
    Serial.write(0);
  }
}
