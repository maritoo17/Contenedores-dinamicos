#include <iostream>
#include <valarray>
#include <algorithm>

int main() {
    std::valarray<double> numeros (4);
    numeros[0] = 1.7;
    numeros[1] = 2.5;
    numeros[2] = 3.1;
    numeros[3] = 4.9;

    std::valarray<double> suma = numeros + 2.0;
    std::valarray<double> resta = numeros - 1.0;
    std::valarray<double> multiplicacion = numeros * 3.0;
    std::valarray<double> division = numeros / 2.0;

    std::cout << "Valores originales: ";
    for (double num : numeros) {
        std::cout << num << " ";
    }

    std::cout << "\nSuma: ";
    for (double num : suma) {
        std::cout << num << " ";
    }
    std::cout << "\nResta: ";
    for (double num : resta) {
        std::cout << num << " ";
    }
    std::cout << "\nMultiplicacion: ";
    for (double num : multiplicacion) {
        std::cout << num << " ";
    }
    std::cout << "\nDivision: ";
    for (double num : division) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
