#include <iostream>
using namespace std;

// Fungsi Rekursif
long long faktorialRekursif(int n) {

    // 1. Base Case
    if (n <= 1) {
        return 1;
    }
    // 2. Langkah Rekursif
    else {
        return n * faktorialRekursif(n - 1);
    }
}

int main() {
    int angka = 0;

    cout << "Masukkan angka yang ingin di faktorialkan: ";
    cin >> angka;
    cout << "Hasil Rekursif: " << faktorialRekursif(angka) << endl;
    return 0;
}