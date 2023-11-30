#include <iostream>
#include <valarray>
using namespace std;
int main() {
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout << "Valores originales: ";
    for (double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Suma: " << (valores.sum()) << endl;
    valores -= 2.0;
    cout << "Valores - 2.0: ";
    for (double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

}