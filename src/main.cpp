#include <Arduino.h>
#include <Functions.h>

void nomeDoPrograma();
void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando");
  Serial.print("["); Serial.print("="); delay(10); Serial.print("="); delay(10);
   Serial.print("="); delay(10); Serial.print("="); delay(10); Serial.print("="); delay(10);
    Serial.print("="); delay(10); Serial.print("="); delay(10); Serial.print("="); delay(10);
     Serial.print("="); delay(10); Serial.print("="); delay(10); Serial.print("="); delay(10);
      Serial.print("="); delay(10); Serial.print("="); delay(10); Serial.print("="); delay(10);
  Serial.println("]");
}

void loop() {
  Serial.print("Oi");
  nomeDoPrograma();
  delay(2000);
}
