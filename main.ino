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

    String getIsPressText() {
      if (getIsPress()) return "PRESS";
      else return "IS NOT PRESS";
    }

};

#define BUTTON 4  //te ponen 

Button *strategy = new buttonPin(BUTTON);

//holis pepito
void setup(){

}
void loop(){
    
}


