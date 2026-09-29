#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define RST_PIN 9
#define SS_PIN 10

MFRC522 rfid(SS_PIN, RST_PIN);
Servo servoMotor;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  servoMotor.attach(6);
  servoMotor.write(0);
  Serial.println("Sistema listo - acerca tarjeta");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    delay(100);
    return;
  }
  
  Serial.print("UID: ");
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }
  Serial.println();
  
servoMotor.write(10);   // Abre (era cierre)
delay(3000);
servoMotor.write(180);  // Cierra (era apertura)
  
  rfid.PICC_HaltA();
  delay(1000);
}