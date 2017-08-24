#include <iostream>

using namespace std;


int main(){
    int n, i, maior = 0;


    cout << "quantos numeros serao analisados?\n";
    cin >> n;

    int nmrs[n];

    cout << "digite os numeros\n";

    for(i = 0; i < n; i++){

         cin >> nmrs[i];

        if(nmrs[i] > maior){

            maior = nmrs[i] ;
        }
    }

    cout << "o maior numero digitado foi: " << maior;




}
