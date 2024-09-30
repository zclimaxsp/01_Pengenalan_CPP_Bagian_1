#include <iostream>
using namespace std;

int main() {
    float bilangan1, bilangan2;

    // Input dua bilangan float
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Menghitung hasil operasi
    float penjumlahan = bilangan1 + bilangan2;
    float pengurangan = bilangan1 - bilangan2;
    float perkalian = bilangan1 * bilangan2;
    float pembagian;

    // Memastikan pembagian tidak oleh nol
    if (bilangan2 != 0) {
        pembagian = bilangan1 / bilangan2;
        cout << "Hasil Pembagian: " << pembagian << endl;
    } else {
        cout << "Pembagian tidak dapat dilakukan (pembagi nol)." << endl;
    }

    // Output hasil operasi
    cout << "Hasil Penjumlahan: " << penjumlahan << endl;
    cout << "Hasil Pengurangan: " << pengurangan << endl;
    cout << "Hasil Perkalian: " << perkalian << endl;

    return 0;
}
