int val;
void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(10, INPUT); // Setup for leads off detection LO +
  pinMode(11, INPUT); // Setup for leads off detection LO -
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{ 
  int val = analogRead(A0);
  
  if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    Serial.println('!');
                                                    }
  else{
    // send the value of analog input 0:
      Serial.println(analogRead(A0));  
      }
  if(val>600){
    digitalWrite(LED_BUILTIN, HIGH);
             }
  else{
    digitalWrite(LED_BUILTIN, LOW);
      } 
    //Wait for a bit to keep serial data from saturating
      delay(10);       
}    
                                                    
  
