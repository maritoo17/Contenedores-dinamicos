#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> numeros;
    numeros.push_back(7);
    numeros.push_back(3);
    numeros.push_back(5);
    numeros.push_back(1);
    numeros.push_back(9);

    sort(numeros.begin(), numeros.end());

}