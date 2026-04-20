// 2. Jika Diberikan masalah sebagai berikut:
// Cari nilai maksimum dari array:
// [10, 4, 8, 20, 3, 30, 8, 9]
// Tulis:
// 1. Algoritma O(n)
// 2. Algoritma berbasis sorting


#include <iostream>
#include <algorithm>

using namespace std;

int arr[] = {10, 4, 8, 20, 3, 30, 8, 9};

void babblesurt(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool terjadi_penukaran = false;
        
        for (int j = 0; j < n - i - 1; j++) { 
            
            if (arr[j] > arr[j + 1]) { 
                
                swap(arr[j], arr[j + 1]);
                terjadi_penukaran = true;

            }
        }

        if (terjadi_penukaran == false)
        {
            break;
        }
        
    }
}

int main()
{
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Jumlah Array: " << n << endl;

    // 1. Algoritma O(n)
    int maks = 0; 
    for (int i = 1; i < n; i++) 
    {
        if (maks < arr[i])
        {
            maks = arr[i];
        }
    }


    cout << "Nilai Maksimum (Algoritma O(n)): " << maks << endl;
    cout << endl;

    // 2. Algoritma bubblesort
    for (int i = 0; i < n; i++)
    {
        cout << "urutan Sebelum sorting: " << arr[i] << endl;
    }

    cout << endl;

    babblesurt(arr, n); 
    
    for (int i = 0; i < n; i++)
    {
        cout << "urutan sesudah sorting: " << arr[i] << endl;
    }
    
    return 0;
}
