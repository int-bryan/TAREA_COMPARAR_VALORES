#include <iostream>
using namespace std;

int main() {
    int valor1, valor2, valor3;

    cout << "Ingresa el primer valor: ";
    cin >> valor1;
    cout << "Ingresa el segundo valor: ";
    cin >> valor2;
    cout << "Ingresa el tercer valor: ";
    cin >> valor3;

    if (valor1 > valor2 && valor1 > valor3) {
        cout << "El valor mayor es: " << valor1 << endl;
    } 
    else if (valor2 > valor1 && valor2 > valor3) {
        cout << "El valor mayor es: " << valor2 << endl;
    } 
    else if (valor3 > valor1 && valor3 > valor2) {
        cout << "El valor mayor es: " << valor3 << endl;
    } 
    else {
        cout << "Los tres valores son iguales." << endl;
    }

    return 0;
}

