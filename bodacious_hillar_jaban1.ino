#define rgbR 11
#define rgbA 12
#define rgbV 13
#define pulsador A0

#define rgbR2 6
#define rgbA2 5
#define rgbV2 3
 
void setup()
{
  pinMode(pulsador , INPUT);
  pinMode(rgbR , OUTPUT);
  pinMode(rgbA , OUTPUT);
  pinMode(rgbV , OUTPUT);
  
}

void loop()
{
  if(digitalRead(pulsador)==LOW){
    
  digitalWrite(rgbA , LOW);
  digitalWrite(rgbR , LOW);
  digitalWrite(rgbV , LOW);
  
  analogWrite(rgbR2 , 0);
  analogWrite(rgbV2 , 0);
  analogWrite(rgbA2 , 0);
  }
 
  
  else(digitalRead(pulsador)==HIGH) {
    digitalWrite(rgbR , HIGH);
    digitalWrite(rgbV , HIGH);
    digitalWrite(rgbA , LOW);
    delay(600);
    analogWrite(rgbR2 , 200);
    analogWrite(rgbV2 , 100);
    analogWrite(rgbA2 , 0);
    delay(600);
    digitalWrite(rgbR , HIGH);
    digitalWrite(rgbV , HIGH);
    digitalWrite(rgbA , HIGH);
    delay(600);
    analogWrite(rgbR2 , HIGH);
    analogWrite(rgbV2 , HIGH);
    analogWrite(rgbA2 , HIGH);
    delay(600);
    digitalWrite(rgbR , HIGH);
    digitalWrite(rgbA , LOW);
    digitalWrite(rgbV , LOW);
    delay(600);
  }
}