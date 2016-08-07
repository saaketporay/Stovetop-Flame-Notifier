
int flamePin = A0;    // flame sensor sensor input
int ledPin = 13;      // select the pin for the LED
int flameValue = 0;  // variable to store the value coming from the photocell val

//unsigned long interval=1000;  // the time we need to wait
//unsigned long previousMillis=0; // millis() returns an unsigned long.

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);


digitalWrite(ledPin, LOW);


}

void loop() {
  // read the value from the flame sensor:
  flameValue = analogRead(flamePin);  
flameValue = constrain(flameValue, 0, 1023); //adjust depending on environment.   
 

  
  
  Serial.println(flameValue); //print our value
  
  //prevents entire program from slowing down /w a  ' delay() ' 
  //allows continous readings consistent speed even with conditions
  //if ((unsigned long)(millis() - previousMillis) >= interval) {
  //previousMillis = millis();
  
 if(flameValue > 700){ // if the flame reading is greater than 300,alert with buzzer and LED
digitalWrite(ledPin, !digitalRead(ledPin)); //turn led on

 }
 
 else if (flameValue < 700){
   
   digitalWrite(ledPin, LOW);//turn led off


  
    
  
   
 }
// }     
}
