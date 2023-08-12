
//Define Variables
int LED=8; 
int push_button=7;  
int lastButtonState = 0; 

void setup(){
  
  //Make the LED an output
  pinMode(LED, OUTPUT);
  
  //Make the button an input
  pinMode(push_button, INPUT);
  
}

void loop(){
  
  //check condition
  if (digitalRead(push_button) == HIGH ){
    //LED on
     digitalWrite(LED, HIGH);
  }
  
  else{
    //LED off
    digitalWrite(LED, LOW);
    
  }
}
