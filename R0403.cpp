#include <iostream>
#include <cstdlib>
using namespace std;


int main(){


    int n, i;


    cout << "Quantas vezes o dado sera lancado?\n";

    cin >> n;

    int dado[n];



        for(i = 1; i <= n; i++){

        dado[i] = (rand()% 6) + 1;

        cout << "Lancamento["<< i <<"]" << dado[i] << "\n";

        }

return 0;
}
