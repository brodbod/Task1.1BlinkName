const int Button_Light = 15;
const int Button_Input = 12;

int buttonState = 0;  
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(Button_Light, OUTPUT); 
  pinMode(Button_Input, INPUT_PULLUP);

}
void loop() {
  buttonState = digitalRead(Button_Input);

  if(buttonState == LOW) {
    digitalWrite(Button_Light, LOW);  

  // B //
    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);                      

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);                       

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);                       

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);                       

  // SPACE //

    delay(2000);

  // R //

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);                       

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);                      

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);  

  // SPACE //

    delay(2000);

  // O //

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);   

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);   

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);   

  // SPACE //

    delay(2000);
    
  // D //

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);                      

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);  

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);  

  // SPACE //

    delay(2000);
    
  // Y //

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);                      

    // Dot
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(400);                       
    digitalWrite(LED_BUILTIN, LOW);   
    delay(400);  

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                    
    digitalWrite(LED_BUILTIN, LOW);  
    delay(1000);  

    // Dash 
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(1000);                     
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);  
  }
  else {
    digitalWrite(Button_Light, HIGH);  
  }
}

