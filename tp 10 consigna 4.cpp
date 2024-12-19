#include <iostream>
using namespace std;
bool esprimo(int numero) {
    if (numero < 2) return false;
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (esprimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }
    return 0;
}

