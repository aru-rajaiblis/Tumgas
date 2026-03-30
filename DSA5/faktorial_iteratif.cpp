#include <iostream>
using namespace std;

int main() {
    int angka = 0;
    cout << "Masukkan angka yang ingin difaktorialkan: ";
    cin >> angka;


    long long hasil = 1; 

    for (int i = 1; i <= angka; i++) {
        hasil = hasil * i;

        cout << "Hasil Iteratif sementara: " << hasil << endl;
    }


    cout << "Hasil Iteratif akhir: " << hasil << endl;
    return 0;
}