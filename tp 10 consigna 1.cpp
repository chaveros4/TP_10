#include <iostream>
using namespace std;
int mayordetres(int a, int b, int c) {
    int mayor;
	if (a > b) {    
	mayor = a;
    } else {
    mayor = b;
    }
    if (c > mayor) {
    mayor = c;
    }
    return mayor;
}
int main() {
    int num1, num2, num3;
    cout << "ingresa el primer numero: ";
    cin >> num1;
    cout << "ingresa el segundo numero: ";
    cin >> num2;
    cout << "ingresa el tercer numero: ";
    cin >> num3;
    cout << "El mayor de los tres numeros es: " << mayordetres(num1, num2, num3) << endl;
    return 0;
}

