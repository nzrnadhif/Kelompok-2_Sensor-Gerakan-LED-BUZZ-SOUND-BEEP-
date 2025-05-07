int pirPin = 2;
int led = 9;
int buzzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int pirValue = digitalRead(pirPin);
  Serial.print("value : ");
  Serial.println(pirValue);
  delay(200);

  if (pirValue == 1) {
    Serial.println("Terdeteksi Pergerakan");
    digitalWrite(led, HIGH); // menyalakan lampu
    tone(buzzer, 1000); // 1000 Hz nada
    delay(500);         // bunyi selama 0.5 detik
    noTone(buzzer);     // matikan
  } else {
    digitalWrite(led, LOW); // matiin lampu
    digitalWrite(buzzer, LOW); // matiin buzzer
  }
}
