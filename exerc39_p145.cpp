#include <iostream>
 using namespace std;

 int primo(int num);


 int main(){

    int valor;
    cout << "Digite o numero desejado: ";
    cin >> valor;
    cout << "Valor lido:" << valor << endl;
    cout << "O numero: " << primo(primo(valor)) << endl;

    }

int primo(int num){


    for(int i=1;i < num;i++){
        if(num%i != 0){
        return 0;
        }
    }

    return 1;
}
