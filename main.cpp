#include <iostream>
using namespace std;
#include "lib.h"

int main(){
    char a;
    cin >> a;
    if(funzione(a)==true) {
        cout << a << endl;
    } else if(funzione(a)==false) {
        cout << "errore" << endl;
    }
    
    return 0;
}
