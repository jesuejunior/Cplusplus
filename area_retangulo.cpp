#include <iostream>
 using namespace std;

 class Retangulo  // Definição da classe
 {
      private:
              int base, altura; // membros
      public:
             void init(int b, int h) // funcao membro para inicializar
 {
                  base=b;          altura=h;
   }

             void printdata() // imprime dados
 {
               cout << "Base = " << base << "\tAltura = " << altura;
               cout << "\tArea = " << (base * altura) << endl;
             }
 };
 int main (){

    Retangulo x,y; // declara dois objetos da classe Retangulo
    x.init(5,3);   // chama funcao membro para inicializar
    y.init(10,6);

    x.printdata();
    y.printdata();

 return 0;
 }
