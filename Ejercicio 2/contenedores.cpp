#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main(){
    list<double> numeros;
    numeros.push_back(1.7);
    numeros.push_back(2.5);
    numeros.push_back(3.1);
    numeros.push_back(4.9);

    stack<double, list<double> > pila(numeros);

    cout << "Elemento en la cima: " << pila.top() << endl;

    pila.push(5.3);
    pila.push(6.7);

    cout << "Elemento en la cima después de push: " << pila.top() << endl;

    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();

    cout << (pila.empty() ? "Pila vacía después de pop" : "Pila no vacía después de pop") << endl;
}


