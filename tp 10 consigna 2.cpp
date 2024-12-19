#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int numeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int main() {
    int minimo, maximo;
    cout << "Ingresa el valor minimo: ";
    cin >> minimo;
    cout << "Ingresa el valor maximo: ";
    cin >> maximo;
    srand(time(0));
    cout << "Numero aleatorio dentro del rango: " << numeroAleatorio(minimo, maximo) << endl;
    return 0;
}
