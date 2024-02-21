#include <iostream>
#include <vector>
using namespace std;

int calcularPosicion(const vector<int>& indices, const vector<int>& dimensiones) {
    int desplazamiento = 0;
    int multiplicador = 1;
    for (int i = indices.size() - 1; i >= 0; --i) {
        if (indices[i] >= dimensiones[i] || indices[i] < 0) {
            cout << "No es posible por que sobrepasa limites";
            return -1;
        }
        desplazamiento += indices[i] * multiplicador;
        multiplicador *= dimensiones[i];
    }
    return desplazamiento;
}

int main() {
    vector<int> dimensiones = {3, 6, 6, 5};
    vector<int> indices = {2, 5, 3, 3};
    int posicion = calcularPosicion(indices, dimensiones);
    if (posicion != -1) {
        cout << "La posicion es: " << posicion << endl;
    }
    return 0;
}