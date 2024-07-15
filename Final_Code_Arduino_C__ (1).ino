/*
 * If you want to edit, make a copy
Oh yeah, and to save everything in the Arduino, click upload. Don't need to click verify, since upload does everything*/

#include <Servo.h>
/*Download library by going to "Tools", "Manage Libraries". Search the name and "Install".
DON'T SWITCH THE WIRES TO ANYTHING IF CONFUSED
*/
#include <NewPing.h>
/*Download library by going to "Tools", "Manage Libraries". Search the name and "Install".
*/


NewPing mySensor(7,8,400); /*Proximity Sensor*/
Servo myservo10; /*Wheel. DO NOT SWITCH THE WIRES.*/
Servo myservo9; /*Wheel. DO NOT SWITCH THE WIRES.*/


void setup() { /*DON'T CHANGE*/

  Serial.begin(9600); /*Proximity Sensor. DON'T CHANGE*/
  myservo10.attach(10); /*Wheel. DON'T CHANGE*/
  myservo9.attach(9); /*Wheel. DON'T CHANGE*/
}

void loop() { /*DON'T CHANGE*/

    
  int distance = mySensor.ping_cm(); /*Prox sensor. DON'T CHANGE*/
  Serial.println(distance); /*Prox sensor. DON'T CHANGE*/

  if /*If-Statement - DON'T CHANGE*/(distance < 15/*Prox Sensor. You can make it smaller if you want*/) {
    myservo10.write(90); /*Wheel. DON'T CHANGE*/
    myservo9.write(90);   /*Wheel. DON'T CHANGE*/
    delay(2000 /*Wheel. If you want to make it 1 sec, then make it 1000 instead of 2000*/);
    myservo10.write(70); /*Wheel. DON'T CHANGE*/
    myservo9.write(110); /*Wheel. DON'T CHANGE*/
    delay(500); /*Wheel. DON'T CHANGE*/
    
    myservo10.write(120); /*Wheel. DON'T CHANGE*/
    myservo9.write(120); /*Wheel. DON'T CHANGE*/
    delay(1000); /*Wheel. DON'T CHANGE*/
    }
  else {/*If-Statement - DON'T CHANGE*/
    myservo10.write(110);/*Wheel. DON'T CHANGE*/
    myservo9.write(70); /*Wheel. DON'T CHANGE*/
    }
      
 /*Thank
 *You
 *Very
 *MUCH
 */
}
