#define led_pin 11
#define fsr_pin A0

void setup()
{
  Serial.begin(115200);
  pinMode(led_pin, OUTPUT);
  pinMode( 6 , OUTPUT);  // Must be a PWM pin
}

void loop()
{
  int fsr_value = analogRead(fsr_pin); // 讀取FSR
  int led_value = map(fsr_value, 0, 1023, 0, 255); // 從0~1023映射到0~255
  analogWrite(led_pin, led_value); // 改變LED亮度
if(fsr_value>50){
  Serial.println(fsr_value);
  Serial.println(led_value);
  Serial.println("-------------");
  delay(100);   
  analogWrite( 6 ,100  );  // 60% duty cycle
  delay(1000);              // play for 0.5s
               }
else{
  analogWrite( 6 , 0 );    // 0% duty cycle (off)
  delay(1);    

    }
}
