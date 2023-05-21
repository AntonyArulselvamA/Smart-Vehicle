#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

const int HELMET  =A0;
const int TILT    =A1;
const int ALCOHOL =A3;
const int BUZZER  =13;
const int ENGINE  =10;
 
void setup()
{
  Serial.begin(9600);                 // the GPRS baud rate 

  pinMode(HELMET, INPUT); 
  pinMode(TILT, INPUT);
  pinMode(ALCOHOL, INPUT);
  
  pinMode(BUZZER, OUTPUT);
  pinMode(ENGINE, OUTPUT);
       digitalWrite(BUZZER,LOW);
       digitalWrite(ENGINE,LOW);
      lcd.begin(16, 2);
      lcd.setCursor(0, 0);
      lcd.print(" AI BASED SMART ");
      lcd.setCursor(0, 1);
      lcd.print("HELMET FOR ROAD "); 
      delay(5000);
      lcd.setCursor(0, 0);
      lcd.print(" BOOTING MODEM  ");
      lcd.setCursor(0, 1);
      lcd.print(" PLEASE WAIT . ."); 
      delay(5000); 
      lcd.setCursor(0, 0);
      lcd.print(" ENGINE RUNNING "); 
      lcd.setCursor(0, 1);
      lcd.print("                "); 
       digitalWrite(ENGINE,HIGH);
      delay(2000);
      
         
      
} 
void loop()
{       
 
   if(digitalRead(HELMET)==LOW)
   {
      digitalWrite(BUZZER,HIGH);
      lcd.setCursor(0, 0);
      lcd.print("AI DECISINMAKING");
      lcd.setCursor(0, 1);
      lcd.print(" ANALYZING . .  ");
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print("ALERT HELMET NOT");
      lcd.setCursor(0, 1);
      lcd.print("WEARED ENGINEOFF");
      digitalWrite(ENGINE,LOW);
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print("AI SMS SENDINGTO");
      lcd.setCursor(0, 1);
      lcd.print(" POLICE STATION ");
      delay(500);
      Serial.println("ALERT SOMEONE IS NOT WEARED HELMET AND DRIVING VEHICLE");
      delay(500);
      digitalWrite(BUZZER,LOW);
      lcd.setCursor(0, 0);
      lcd.print("SMS SENTO POLICE");
      lcd.setCursor(0, 1);
      lcd.print("STATION SUCCESS ");
   }
    if(digitalRead(ALCOHOL)==HIGH)
    {
      digitalWrite(BUZZER,HIGH);
      lcd.setCursor(0, 0);
      lcd.print("AI DECISINMAKING");
      lcd.setCursor(0, 1);
      lcd.print(" ANALYZING . .  ");
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print(" ALERT! ALCOHOL ");
      lcd.setCursor(0, 1);
      lcd.print("CONSUMED ENGNEOF");
      digitalWrite(ENGINE,LOW);
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print("AI SMS SENDINGTO");
      lcd.setCursor(0, 1);
      lcd.print(" POLICE STATION ");
      delay(500);
      Serial.println("ALERT SOMEONE IS CONSUMED ALCOHOL AND DRIVING VEHICLE");
      delay(500);
      digitalWrite(BUZZER,LOW);
      lcd.setCursor(0, 0);
      lcd.print("SMS SENTO POLICE");
      lcd.setCursor(0, 1);
      lcd.print("STATION SUCCESS ");
    }
  if(digitalRead(TILT)==HIGH)
    {
      digitalWrite(BUZZER,HIGH);
      lcd.setCursor(0, 0);
      lcd.print("AI DECISINMAKING");
      lcd.setCursor(0, 1);
      lcd.print(" ANALYZING . .  ");
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print(" ALERT! VEHICLE ");
      lcd.setCursor(0, 1);
      lcd.print("ACCIDENT ENGNEOF");
      digitalWrite(ENGINE,LOW);
      delay(2000);
      lcd.setCursor(0, 0);
      lcd.print("AI SMS SENDINGTO");
      lcd.setCursor(0, 1);
      lcd.print("    AMBULANCE   ");
      delay(500);
      Serial.println("ALERT VEHICLE ACCIDENT DETECTED");
      delay(500);
      digitalWrite(BUZZER,LOW);
      lcd.setCursor(0, 0);
      lcd.print("   SMS SENT TO  ");
      lcd.setCursor(0, 1);
      lcd.print("AMBULANCE SUCCES");
    }
  
}
 
