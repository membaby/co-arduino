int led = 2 ; //the pin number for our led
//commands to execute only once 
void setup() {
  pinMode(led, OUTPUT); //configure pin number
}
void SOS(int delayTime){
    for(int i=1 ; i <= 3 ; i ++){ // S . . . / O - - - 
        digitalWrite(led, HIGH);delay(delayTime); //this variable depends on whether the char is S or O                      
        if(i == 3){ //for the last round to seperate each char from the other
            digitalWrite(led, LOW);delay(3000); 
        }else{
            digitalWrite(led, LOW);delay(1000);
        }
    }  
}

//the main loop of action
void loop() {
    SOS(1000); //S
    SOS(3000); //O
    SOS(1000); //S
    exit(0);  //exit the program to repeat just one time        
}
