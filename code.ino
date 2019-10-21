  
void setup()
{
pinMode(13,OUTPUT);
Serial.begin(9600);


}
void loop()
{
int d=analogRead(A0);
Serial.println(d);
delay(2);
if(d>1000)
{
digitalWrite(13,HIGH);
}
else
{
digitalWrite(13,LOW);
}



}