// make Arduino blink like a traffic light

#define GREEN 13                // GREEN is pin 13
#define YELLOW 12
#define RED 11


void setup () 
{
  pinMode (GREEN, OUTPUT);      // pin 13 is output
  digitalWrite  (GREEN,LOW);    // turn the LEDs off
  pinMode (YELLOW, OUTPUT);
  digitalWrite (YELLOW,LOW);
  pinMode (RED,OUTPUT);
  digitalWrite (RED,LOW);
}


void loop ()
{
      digitalWrite (GREEN,HIGH); //light is green
      delay (15000);
      digitalWrite (GREEN,LOW);
      digitalWrite (YELLOW,HIGH);//light is yellow
      delay (5000);
      digitalWrite (YELLOW,LOW);
      digitalWrite (RED,HIGH);   //light is red
      delay (15000);
      digitalWrite (RED,LOW);
}
      
