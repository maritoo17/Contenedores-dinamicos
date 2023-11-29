#include <iostream>
#include <valarray>

using namespace std;

int main (){
    valarray<double> numeros;
    numeros[0]= 1.7;
    numeros[1]= 2.5;
    numeros[2]= 3.1;
    numeros[3]= 4.9;

    valarray<double> suma = numeros + valarray<double>(2.0);
    valarray<double> resta = numeros - valarray<double>(1.0);
    valarray<double> multiplicacion = numeros * valarray<double>(3.0);
    valarray<double> division = numeros / valarray<double>(2.0);

}