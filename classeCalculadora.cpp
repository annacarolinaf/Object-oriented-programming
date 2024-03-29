/*Autor: Anna Carolina Farias
Objetivo: Classe de uma calculadora apenas de números inteiros */

#include <iostream>
#include <string>
using namespace std;

class Calculator {

     public: 
         Calculator (float vvalueA = 0, float vvalueB = 0, char voperacao = '+');
         //~Calculator ();
         bool testeValue (float vvalueA, float vvalueB);
         bool testeOPeracao (char vopercao);
         float getValueA () const;
         float getValueB () const;
         double getResultado () const;
         char getOperacao () const;
         void imprime() const;
  
     private: 
         float valueA;
         float valueB;
         char operacao;
         double resultado;

};

Calculator::Calculator (float vvalueA, float vvalueB, char voperacao){

    if (testeValue(vvalueA, vvalueB)==true && (testeOPeracao(voperacao)==true)){
        valueA = vvalueA;
        valueB = vvalueB;
        operacao = voperacao;

        if (operacao=='+')
           resultado = valueA + valueB;
        else if (operacao=='-')
           resultado = valueA - valueB;
        else if (operacao=='x' || operacao=='X')
           resultado = valueA*valueB; 
        else 
           resultado = valueA/(double)valueB;
             
    }

}

//Calculator::~Calculator();

bool Calculator::testeValue (float vvalueA, float vvalueB){
    if ((vvalueA==(int)vvalueA) && (vvalueB==(int)vvalueB))
      return true;
    else 
      return false;  
}

bool Calculator::testeOPeracao(char voperacao){
    
    if (voperacao== '+'|| voperacao=='-' || voperacao=='x' || voperacao == 'X')
       return true;
    else if ((voperacao=='/') && (getValueB()!=0))
       return true;

   else
      return false;

}

float Calculator::getValueA() const{
    return valueA;
}

float Calculator::getValueB() const{
    return valueB;
}

double Calculator::getResultado() const{
    return resultado;
}

char Calculator::getOperacao() const{
    return operacao;
}

int main() {
   Calculator c1(1, 1, '/');

   if ((c1.testeOPeracao('/')==true) && (c1.testeValue(1,1)==true)){
    cout << "Operação: " << c1.getValueA() << c1.getOperacao() << c1.getValueB() << endl;
    cout << "Resultado: " << c1.getResultado() << endl;
   }

   else 
     cout << "Operação inválida" << endl;

}
