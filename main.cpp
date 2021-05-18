#include <iostream>

using namespace std;

int main()
{
    int cont = 0, cont2 = 0, cont3 = 0;
    while (cont < 39){
        cout << "-";
        cont++;
    }
    while (cont2 < 5){
        cout <<endl<< "|                                     |";
        cont2++;
    }
    cout <<endl;
    while (cont3 < 39){
        cout << "-";
        cont3++;
    }
    cout <<endl;
    return 0;
}
