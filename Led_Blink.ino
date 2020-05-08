/*
Copyright 2020 Harvey Xing
This is open source software.
Led blink sketch for Arduino Uno
connect it to pin 13 for this example,
but you can use any other pin by editing the 
code below
*/

const int Led= 13 //Led is connected to pin 13
void setup ()
{
pinmode(Led,OUTPUT);
}
void loop ()
{
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
}
