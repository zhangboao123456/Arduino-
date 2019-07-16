#define OUT 4
#define BUZZER 3

void setup() {
  pinMode(OUT, INPUT);
  pinMode(BUZZER, OUTPUT);
  //digitalWrite(BUZZER, HIGH);
  Serial.begin(9600);
  Serial.println("Begin to detect");
}

void loop() {
  Serial.print("Sensor Value: ");      
  Serial.println(digitalRead(OUT));
  if (digitalRead(OUT)) {
    Serial.println("Alarm!!!Somebody's outthere!!!");
    alarmSound();
  }

}

void alarmSound(void) {
  tone(BUZZER, 1000);
  delay(150);
  tone(BUZZER, 1025);
  delay(150);
  tone(BUZZER, 1050);
  delay(150);
  tone(BUZZER, 1075);
  delay(150);
  tone(BUZZER, 1100);
  delay(150);
  tone(BUZZER, 1125);
  delay(150);
  tone(BUZZER, 1150);
  delay(150);
  tone(BUZZER, 1175);
  delay(150);
  tone(BUZZER, 1200);
  delay(150);
  tone(BUZZER, 1225);
  delay(150);
  tone(BUZZER, 1250);
  delay(150);
  tone(BUZZER, 1250);
  delay(150);
  tone(BUZZER, 1275);
  delay(150);
  tone(BUZZER, 1300);
  delay(150);
  tone(BUZZER, 1325);
  delay(150);
  tone(BUZZER, 1350);
  delay(150);
  tone(BUZZER, 1375);
  delay(150);
  tone(BUZZER, 1400);
  delay(150);
  tone(BUZZER, 1425);
  delay(150);
  tone(BUZZER, 1450);
  delay(150);
  tone(BUZZER, 1475);
  delay(150);
  tone(BUZZER, 1500);
  delay(150);
  tone(BUZZER, 1575);
  delay(150);
  tone(BUZZER, 1600);
  delay(150);
  tone(BUZZER, 1625);
  delay(150);
  tone(BUZZER, 1650);
  delay(150);
  tone(BUZZER,-1000000);
  delay(0);
  //digitalWrite(BUZZER, HIGH);
}
