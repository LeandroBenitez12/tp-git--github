class Motor
{
    //atributos
private:
    int velocidad = 200;
    
    int pin_direccion;
    int pin_pwm;
    const int freq = 5000;
    const int channel = 1;
    const int bits = 8;
    bool invert;
public:

    Motor(int dir, int pwm){
        pin_direccion = dir;
        pin_pwm = pwm;

        pinMode(pin_direccion, OUTPUT);

    	ledcSetup(channel, freq, bits);
	    ledcAttachPin(pin_pwm, channel);
    }
//metodos
    void Forward (){
        digitalWrite(pin_direccion, invert);
        ledcWrite(pin_pwm, velocidad);
    }
    void Backward (){
        digitalWrite(pin_direccion, !invert);
        ledcWrite(pin_pwm, velocidad);
    }
    void invertDirection()
    {
        //cambio el valor del flag invertir.
        invert = !invert;
    }
    void Stop (){
        digitalWrite(pin_direccion, LOW );
        ledcWrite(pin_pwm, 0);
    }        
};

// motores
#define MR1 18
#define MR2 5
#define ML1 4
#define ML2 2

//Instancio los motores
Motor m1 = Motor(MR1, MR2);
Motor m2 = Motor(ML1, ML2);



class Button {
  private:
    int pin = 9
    bool state = HIGH;

    //metodo
  public:
    buttonPin(int p) {
      pin = p;

      pinMode(pin, INPUT);
    }

    //metodos o acciones
    bool getIsPress() {
      bool estado = digitalRead(pin);
      return estado;
    }

};

#define BUTTON 4  //te ponen 

Button *strategy = new buttonPin(BUTTON);

//holis pepito
void setup(){

}
void loop(){
    
}


