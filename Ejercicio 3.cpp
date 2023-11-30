#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector<int> numeros = {50, 20, 60, 10, 30, 40};
    sort(numeros.begin(), numeros.end());

    cout << "Elementos ordenados:" << endl;
    for(int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    auto maxElement = max_element(numeros.begin(), numeros.end());
    if (maxElement != numeros.end()) {
        int maxNum = *maxElement;
        cout << "Numero maximo: " << maxNum << endl;
    } else {
        cout << "El vector esta vacio." << endl;
    }

    return 0;
}