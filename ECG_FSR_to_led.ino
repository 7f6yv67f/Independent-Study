int val;
void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{ 
  int val = analogRead(A1);
  
      Serial.println(analogRead(A1));  
      
  if(val>600){
    digitalWrite(LED_BUILTIN, HIGH);
             }
  else{
    digitalWrite(LED_BUILTIN, LOW);
      } 
    //Wait for a bit to keep serial data from saturating
      delay(10);       
}    
                                                    
  
