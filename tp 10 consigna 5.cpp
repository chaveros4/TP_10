#include <iostream>
using namespace std;
float convertirMoneda(float cantidad, float tasaCompra, float tasaVenta, bool esCompra) {
    if (esCompra) {
        // ARS a USD, dividimos por la tasa de compra
        return cantidad / tasaCompra;
    } else {
        // USD a ARS, multiplicamos por la tasa de venta
        return cantidad * tasaVenta;
    }
}
int main() {
    float cantidad, tasaCompra, tasaVenta;
    int opcion;
    cout << "Ingresa la cantidad a convertir: ";
    cin >> cantidad;
    cout << "Ingresa la tasa de compra (ARS a USD): ";
    cin >> tasaCompra;
    cout << "Ingresa la tasa de venta (USD a ARS): ";
    cin >> tasaVenta;
    cout << "Que deseas hacer?\n";
    cout << "1. Convertir ARS a USD\n";
    cout << "2. Convertir USD a ARS\n";
    cout << "Elige una opcion: ";
    cin >> opcion;
    if (opcion == 1) {
        // Convertir de ARS a USD
        cout << "La cantidad convertida es: " << convertirMoneda(cantidad, tasaCompra, tasaVenta, true) << " USD" << endl;
    } else if (opcion == 2) {
        // Convertir de USD a ARS
        cout << "La cantidad convertida es: " << convertirMoneda(cantidad, tasaCompra, tasaVenta, false) << " ARS" << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }
    return 0;
}

