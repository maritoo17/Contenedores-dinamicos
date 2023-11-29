#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;

    numeros.push_back(21);
    numeros.push_back(34);
    numeros.push_back(73);
    numeros.push_back(12);

    cout << "Elementos del vector: ";
    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
