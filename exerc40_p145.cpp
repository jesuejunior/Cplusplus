#include <iostream>
#include <assert.h>
 using namespace std;

 int primo(int num);
 int divisivel(int num, int i);
 int primos(int n1, int n2);
 int prox_primo(int n);
 void goldbach(int n);

 int main(){

    int valor;
    assert (1 == primo(2));
    assert (1 == primos(2,2));
    assert (3 == prox_primo(2));
    assert (17 == prox_primo(13));
    assert (23 == prox_primo(17));
    assert (467 == prox_primo(463));
    assert (1 == divisivel(4,4));
    assert (1 == primo(5));
    assert (1 == primo(683));
    assert (1 == primo(9));
    assert (1 == divisivel(8,4));
    assert (0 == primo(1));
    assert (0 == primo(9));
   

    cin >> valor;
    cout << valor << ": ";
    goldbach(valor);
    cout << endl;

    }

int primo(int num){
    
    if (num < 2){
        return 0;
     }

    for(int i=2;i < num;i++){
        if(divisivel(num, i)){
          return 0;
        }
    }

    return 1;
}

int divisivel(int num, int i){
  return num%i == 0;
}

int primos(int n1, int n2){
  return primo(n1) && primo(n2);
}

int prox_primo(int n){
  while(!primo(n+2));
  return n;
}

void goldbach(int n){
    int p1 = 2, p2 = 0;
    do {
        p1 = prox_primo(p1);
        p2 = n - p2;
    }
    while(!primos(p1,p2));

    cout << p1 << " + " << p2 << " = " << n << "(" << p1 + p2 <<  ")" << endl; 
}
