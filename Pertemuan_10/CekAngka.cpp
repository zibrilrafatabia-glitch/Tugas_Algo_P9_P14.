#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "--- P10: Percabangan ---\nMasukkan Angka: ";
    cin >> angka;
    if (angka % 2 == 0) cout << "Bilangan Genap";
    else cout << "Bilangan Ganjil";
    return 0;
}