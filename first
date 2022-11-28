/* Autor: Anna Carolina Farias
   Data: 28/11/2022
   Tema: Primeiro programa em C++ */


#include <iostream> // usar cin e cout

using namespace std;

class AC {
    
  public:
  
    AC(int ns = 123){
      nserie = ns;
      temp = 16;
      vel = 1;
      ligado = false;
    };
    
   void aum_temp(){
        
        if (ligado)
          if (temp<30)
            temp++;
    }
    
    void dim_temp(){
        
        if (ligado)
          if (temp>15)
            temp--;
    }    
    
    
    void aum_vel(){
        
        if (ligado)
          if (vel<3)
            vel++;
    }
    
     void dim_vel(){
        
        if (ligado)
          if (vel>1)
            vel--;
    }    
    
    void ligaDesliga(){
        
        ligado = !ligado;
        
    }
    
    int getNS (){
        return nserie;
    }
    
    void print(){
        if (!ligado)
          cout << "AC " << getNS() << " desligado" << endl;
        else{
          cout << "AC " << getNS() << " ligado" << endl;
          cout << "TEMPERATURA:" << temp << endl;
          cout << "VELOCIDADE:" << vel << endl;
          
        }  
    }
    
    
  private:
    int nserie;
    int temp;
    int vel;
    bool ligado;
   
};

int main (){
    
    AC MeuAr;
    MeuAr.ligaDesliga();
    MeuAr.print();
    
}

