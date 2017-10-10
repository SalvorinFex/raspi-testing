/*
Lesson Two: Place the green LED into
digital pin 12 and the red on digital pin 11
and the tilt switch to the D8 socket.
*/
void setup()
{
pinMode (12, OUTPUT); // set the socket D12 as an output
pinMode (11, OUTPUT); // set the socket D12 as an output
pinMode (8, INPUT); // set the socket D8 as an input
}
void loop()
{
if (digitalRead(8) == HIGH) // if the tilt switch
// activated
{
digitalWrite(12, LOW); // turn off the green LED
digitalWrite(11, HIGH); // turn on the red LED
delay(200); // give 200 milliseconds delay for LEDs to
//activate properly
}
digitalWrite(12,HIGH); // turn on the green LED
digitalWrite(11,LOW); // turn off the red LED
}