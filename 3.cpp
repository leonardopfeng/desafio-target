#include <iostream>

using namespace std;

int main(){
    int indice = 12, soma = 0, k  = 1;
    
    while(k < indice){
        k += 1;
        soma += k;
    }
    
    cout << soma;
    
    return 0;
}

// soma = 77