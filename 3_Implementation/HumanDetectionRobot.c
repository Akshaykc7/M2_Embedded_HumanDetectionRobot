include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to const int rs = PB11, en = PB10,
d4 = PB0, d5 = PB1, d6 = PC13, d7 = PC14;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int ir=PA11;
const int re=PA12;
const int gas=PA15;
const int in 1 = PA0;
const int in 2 = PA1;
const int in 3 = PA4;
const int in 4 = PA5;
void setup()
f
Serial.begin(115200);
lcd.begin(16, 2);
pinMode(in 1,OUTPUT) ;
pinMode(in 2,OUTPUT) ;
pinMode(in 3,OUTPUT) ;
pinMode(in 4,OUTPUT) ;
pinMode(ir,INPUT);
lcd.print("RESCUE ROBOT");
delay(2000);
lcd.clear();
g
void loop()
f
FORWARD();
IR();
//BACKWARD();
//STOP();
//RIGHT();
//LEFT();
g
void FORWARD()
f
digitalWrite(in 1,LOW) ;
digitalWrite(in 2,HIGH) ;
digitalWrite(in 3,LOW) ;
digitalWrite(in 4,HIGH) ;
Serial.println("FORWARD");
lcd.print("FORWARD");
delay(2000);
lcd.clear();
//delay(6000);
g
void BACKWARD()
f
Serial.println("back");
digitalWrite(in 1,HIGH) ;
digitalWrite(in 2,LOW) ;
digitalWrite(in 3,HIGH) ;
digitalWrite(in 4,LOW) ;
delay(6000);
g
void STOP()
f
digitalWrite(in 1,LOW) ;
digitalWrite(in 2,LOW) ;
digitalWrite(in 3,LOW) ;
digitalWrite(in 4,LOW) ;
Serial.println("stop");
Serial.println("STOP");
lcd.print("STOP");
delay(2000);
lcd.clear();
g
void LEFT1()
f
Serial.println("left");
digitalWrite(in 1,HIGH) ;
digitalWrite(in 2,LOW) ;
digitalWrite(in 3,LOW) ;
digitalWrite(in 4,HIGH) ;
delay(6000);
g
void RIGHT1()
f
Serial.println("right");
digitalWrite(in 1,LOW) ;
digitalWrite(in 2,HIGH) ;
digitalWrite(in 3,HIGH) ;
digitalWrite(in 4,HIGH) ;
delay(6000);
g
void IR()
f
if(digitalRead(ir)==LOW)
f
STOP();
lcd.print("OBJECT DETECTED");
Serial.println("OBJECT DETECTED");
delay(1000);
lcd.clear();
FIRE();
GAS();
g
else
f
lcd.print("OBJECT");
lcd.setCursor(0, 1);
lcd.print(" NOT DETECTED");
Serial.println("OBJECT NOT DETECTED");
delay(1000);
lcd.clear();
g
g
void FIRE()
f
if(digitalRead(re)==LOW)
f
lcd.print("FIRE DETECTED");
Serial.println("FIRE DETECTED");
delay(3000);
lcd.clear();
g
else
f
lcd.print("FIRE");
lcd.setCursor(0, 1);
lcd.print(" NOT DETECTED");
Serial.println("FIRE NOT DETECTED");
delay(3000);
lcd.clear();
g
g
void GAS()
f
if(digitalRead(gas)==LOW)
f
lcd.print("GAS DETECTED");
Serial.println("GAS DETECTED");
delay(3000);
lcd.clear();
g
else
f
lcd.print("GAS");
lcd.setCursor(0, 1);
lcd.print(" NOT DETECTED");
Serial.println("GAS NOT DETECTED");
delay(3000);
lcd.clear();
}
}
