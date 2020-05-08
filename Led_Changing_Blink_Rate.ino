/*
Copyright 2020 Harvey Xing
This is open source software.
connect Led to pin 9 for this example.
*/

const int led=9;

void setup ()
{
pinmode(led,OUTPUT);
Serial.begin(9600);
}

void loop ()
{
for (int x=100;x<=1000;x=x+1000);
  {
   digitalWrite(led,HIGH);
   delay(x);
   digitalWrite(led,LOW);
   delay(x);
  }
}
