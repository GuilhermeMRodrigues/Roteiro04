#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main (){
    int x, i;
    int tentativa;
    srand(time(0));

    x = rand()%100;
    x = (rand()%100) + 1;

    cout << "Adivinhe o numero entre 1 e 100" << endl;

    for(i=0; i < 100; i++){
        cin >> tentativa;
        if(tentativa == x){
            cout << "Parabens. Voce adivinhou o numero" << endl ;
            break;
        }
        if(tentativa < x){
            cout << "Muito baixo. Tente novamente" << endl;
        }
        if(tentativa > x){
            cout << "Muito alto. Tente novamente" << endl;
        }
        if(tentativa < 0){
            break;
        }
    }

}
