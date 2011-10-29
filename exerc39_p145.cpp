#include <iostream>
 using namespace std;

 int primo(int num);
 int divisivel(int num, int i);


 int main(){

    int valor;
    cin >> valor;
    cout << valor << ": " << primo(valor) << endl;

    }

int primo(int num){


    for(int i=2;i < num;i++){
        if(divisivel(num, i)){
          cout << num << " : " << i<< endl;
          return 0;
        }
    }

    return 1;
}

int divisivel(int num, int i){
  return num%i == 0;
}
