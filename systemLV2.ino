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
  Serial.print("Sensor Value: ");      Serial.println(digitalRead(OUT));
  if (digitalRead(OUT)) {
    Serial.println("Alarm!!!Somebody's outthere!!!");
    alarmSound();
  }

}

void alarmSound(void) {
  tone(BUZZER, 1005);
  delay(30);
  tone(BUZZER, 1010);
  delay(30);
  tone(BUZZER, 1015);
  delay(30);
  tone(BUZZER, 1020);
  delay(30);
  tone(BUZZER, 1025);
  delay(30);
  tone(BUZZER, 1030);
  delay(30);
  tone(BUZZER, 1035);
  delay(30);
  tone(BUZZER, 1040);
  delay(30);
  tone(BUZZER, 1045);
  delay(30);
  tone(BUZZER, 1050);
  delay(30);
  tone(BUZZER, 1055);
  delay(30);
  tone(BUZZER, 1060);
  delay(30);
  tone(BUZZER, 1065);
  delay(30);
  tone(BUZZER, 1070);
  delay(30);
  tone(BUZZER, 1075);
  delay(30);
  tone(BUZZER, 1080);
  delay(30);
  tone(BUZZER, 1085);
  delay(30);
  tone(BUZZER, 1090);
  delay(30);
  tone(BUZZER, 1095);
  delay(30);
  tone(BUZZER, 1100);
  delay(30);
  tone(BUZZER, 1105);
  delay(30);
  tone(BUZZER, 1110);
  delay(30);
  tone(BUZZER, 1115);
  delay(30);
  tone(BUZZER, 1120);
  delay(30);
  tone(BUZZER, 1125);
  delay(30);
  tone(BUZZER, 1130);
  delay(30);
  tone(BUZZER, 1135);
  delay(30);
  tone(BUZZER, 1140);
  delay(30);
  tone(BUZZER, 1145);
  delay(30);
  tone(BUZZER, 1150);
  delay(30);
  tone(BUZZER, 1155);
  delay(30);
  tone(BUZZER, 1160);
  delay(30);
  tone(BUZZER, 1165);
  delay(30);
  tone(BUZZER, 1170);
  delay(30);
  tone(BUZZER, 1175);
  delay(30);
  tone(BUZZER, 1180);
  delay(30);
  tone(BUZZER, 1185);
  delay(30);
  tone(BUZZER, 1190);
  delay(30);
  tone(BUZZER, 1195);
  delay(30);
  tone(BUZZER, 1200);
  delay(30);
  tone(BUZZER, 1205);
  delay(30);
  tone(BUZZER, 1210);
  delay(30);
  tone(BUZZER, 1215);
  delay(30);
  tone(BUZZER, 1220);
  delay(30);
  tone(BUZZER, 1225);
  delay(30);
  tone(BUZZER, 1230);
  delay(30);
  tone(BUZZER, 1235);
  delay(30);
  tone(BUZZER, 1240);
  delay(30);
  tone(BUZZER, 1245);
  delay(30);
  tone(BUZZER, 1250);
  delay(30);
  tone(BUZZER, 1255);
  delay(30);
  tone(BUZZER, 1260);
  delay(30);
  tone(BUZZER, 1265);
  delay(30);
  tone(BUZZER, 1270);
  delay(30);
  tone(BUZZER, 1275);
  delay(30);
  tone(BUZZER, 1280);
  delay(30);
  tone(BUZZER, 1285);
  delay(30);
  tone(BUZZER, 1290);
  delay(30);
  tone(BUZZER, 1295);
  delay(30);
  tone(BUZZER, 1300);
  delay(30);
  tone(BUZZER, 1305);
  delay(30);
  tone(BUZZER, 1315);
  delay(30);
  tone(BUZZER, 1320);
  delay(30);
  tone(BUZZER, 1325);
  delay(30);
  tone(BUZZER, 1330);
  delay(30);
  tone(BUZZER, 1335);
  delay(30);
  tone(BUZZER, 1340);
  delay(30);
  tone(BUZZER, 1345);
  delay(30);
  tone(BUZZER, 1350);
  delay(30);
  tone(BUZZER, 1355);
  delay(30);
  tone(BUZZER, 1360);
  delay(30);
  tone(BUZZER, 1365);
  delay(30);
  tone(BUZZER, 1370);
  delay(30);
  tone(BUZZER, 1375);
  delay(30);
  tone(BUZZER, 1380);
  delay(30);
  tone(BUZZER, 1385);
  delay(30);
  tone(BUZZER, 1390);
  delay(30);
  tone(BUZZER, 1395);
  delay(30);
  tone(BUZZER, 1400);
  delay(4000);
  tone(BUZZER, 1395);
  delay(30);
  tone(BUZZER, 1390);
  delay(30);
  tone(BUZZER, 1385);
  delay(30);
  tone(BUZZER, 1380);
  delay(33);
  tone(BUZZER, 1375);
  delay(30);
  tone(BUZZER, 1370);
  delay(30);
  tone(BUZZER, 1365);
  delay(30);
  tone(BUZZER, 1350);
  delay(30);
  tone(BUZZER, 1345);
  delay(30);
  tone(BUZZER, 1340);
  delay(30);
  tone(BUZZER, 1335);
  delay(30);
  tone(BUZZER, 1330);
  delay(30);
  tone(BUZZER, 1325);
  delay(30);
  tone(BUZZER, 1320);
  delay(30);
  tone(BUZZER, 1315);
  delay(30);
  tone(BUZZER, 1310);
  delay(30);
  tone(BUZZER, 1305);
  delay(30);
  tone(BUZZER, 1300);
  delay(30);
  tone(BUZZER, 1295);
  delay(30);
  tone(BUZZER, 1290);
  delay(30);
  tone(BUZZER, 1285);
  delay(30);
  tone(BUZZER, 1280);
  delay(30);
  tone(BUZZER, 1275);
  delay(30);
  tone(BUZZER, 1270);
  delay(30);
  tone(BUZZER, 1265);
  delay(30);
  tone(BUZZER, 1260);
  delay(30);
  tone(BUZZER, 1255);
  delay(30);
  tone(BUZZER, 1250);
  delay(30);
  tone(BUZZER, 1245);
  delay(30);
  tone(BUZZER, 1240);
  delay(30);
  tone(BUZZER, 1235);
  delay(30);
  tone(BUZZER, 1230);
  delay(30);
  tone(BUZZER, 1255);
  delay(30);
  tone(BUZZER, 1250);
  delay(30);
  tone(BUZZER, 1245);
  delay(30);
  tone(BUZZER, 1240);
  delay(30);
  tone(BUZZER, 1235);
  delay(30);
  tone(BUZZER, 1230);
  delay(30);
  tone(BUZZER, 1225);
  delay(30);
  tone(BUZZER, 1220);
  delay(30);
  tone(BUZZER, 1215);
  delay(30);
  tone(BUZZER, 1210);
  delay(30);
  tone(BUZZER, 1205);
  delay(30);
  tone(BUZZER, 1200);
  delay(30);
  tone(BUZZER, 1195);
  delay(30);
  tone(BUZZER, 1190);
  delay(30);
  tone(BUZZER, 1185);
  delay(30);
  tone(BUZZER, 1180);
  delay(30);
  tone(BUZZER, 1175);
  delay(30);
  tone(BUZZER, 1170);
  delay(30);
  tone(BUZZER, 1165);
  delay(30);
  tone(BUZZER, 1160);
  delay(30);
  tone(BUZZER, 1155);
  delay(30);
  tone(BUZZER, 1150);
  delay(30);
  tone(BUZZER, 1145);
  delay(30);
  tone(BUZZER, 1140);
  delay(30);
  tone(BUZZER, 1135);
  delay(30);
  tone(BUZZER, 1130);
  delay(30);
  tone(BUZZER, 1125);
  delay(30);
  tone(BUZZER, 1120);
  delay(30);
  tone(BUZZER, 1115);
  delay(30);
  tone(BUZZER, 1110);
  delay(30);
  tone(BUZZER, 1105);
  delay(30);
  tone(BUZZER, 1100);
  delay(30);
  tone(BUZZER, 1095);
  delay(30);
  tone(BUZZER, 1090);
  delay(30);
  tone(BUZZER, 1085);
  delay(30);
  tone(BUZZER, 1080);
  delay(30);
  tone(BUZZER, 1075);
  delay(30);
  tone(BUZZER, 1070);
  delay(30);
  tone(BUZZER, 1065);
  delay(30);
  tone(BUZZER, 1060);
  delay(30);
  tone(BUZZER, 1055);
  delay(30);
  tone(BUZZER, 1050);
  delay(30);
  tone(BUZZER, 1045);
  delay(30);
  tone(BUZZER, 1040);
  delay(30);
  tone(BUZZER, 1035);
  delay(30);
  tone(BUZZER, 1030);
  delay(30);
  tone(BUZZER, 1025);
  delay(30);
  tone(BUZZER, 1020);
  delay(30);
  tone(BUZZER, 1015);
  delay(30);
  tone(BUZZER, 1010);
  delay(30);
  tone(BUZZER, 1005);
  delay(30);
  tone(BUZZER,-10000);
  delay(0);
  //digitalWrite(BUZZER, HIGH);
}
