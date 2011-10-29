
#include <iostream>
using namespace std;
class Data  // Definição da classe
{
      private:
              int dia, mes , ano; // atributos
      public:
             int Bissexto() //funcao inline
			{
                 return (ano%4==0 && ano%100 || ano%400==0);
             }
void InitData(int d, int m, int a); // inicializa dados
void PrintData();
void PrintSigno();
void PrintBissexto();
};

void Data::InitData(int d, int m, int a)
{ 
  int dmes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
ano = a > 0 ? a : 1; //valida ano, se ano errado, ano =1
dmes[2] = dmes[2] + Bissexto();
mes = m >= 1 && m <= 12 ? m : 1; // valida mes
dia = d >= 1 && d <= dmes[mes] ? d : 1; // valida dia
}
void Data::PrintData()
{
     char nome[13][10] =
          {"zero", "Janeiro", "Fevereiro", "Marco","Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro","Novembro", "Dezembro"};
     cout << dia <<" de  " << nome[mes] << " de " << ano << endl;
}
void Data::PrintSigno()
{
     char nsigno[14][12] =
          {"zero", "Capricornio", "Aquario","Peixes", "Aries",  "Touro", "Gêmeos", "Câncer", "Leão", "Virgem", "Libra", "Escorpião", "Sagitário", "Capricórnio"};
int sig[] = {0,20,19,20,20,20,20,21,22,22,22,21,21};
if (dia < sig[mes])
        cout << "Signo: " << nsigno[mes] << endl;
     else
         cout << "Signo: " << nsigno[mes + 1] << endl;
}
void Data::PrintBissexto()
{
     if (Bissexto())
        cout << "Ano eh Bissexto.\n" << endl;
     else 
          cout << "Ano nao eh Bissexto.\n" << endl;
}

int main()
{
    Data x,y,z;
x.InitData(14,9,0);
y.InitData(12,1,1976);
x.PrintData();
x.PrintSigno();
x.PrintBissexto();
y.PrintData();
y.PrintSigno();
y.PrintBissexto();
getche();
return 0;
}

