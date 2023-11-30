#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    numeros.push_back(60);
    numeros.push_back(70);
    numeros.push_back(80);
    cout << "Elementos del vector:" << endl;
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}