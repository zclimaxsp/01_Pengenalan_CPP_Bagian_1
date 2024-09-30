#include <iostream>
#include <string>

using namespace std;

string angkaKeTeks(int angka) {
    switch (angka) {
        case 0: return "nol";
        case 1: return "satu";
        case 2: return "dua";
        case 3: return "tiga";
        case 4: return "empat";
        case 5: return "lima";
        case 6: return "enam";
        case 7: return "tujuh";
        case 8: return "delapan";
        case 9: return "sembilan";
        case 10: return "sepuluh";
        case 11: return "sebelas";
        case 12: return "dua belas";
        case 13: return "tiga belas";
        case 14: return "empat belas";
        case 15: return "lima belas";
        case 16: return "enam belas";
        case 17: return "tujuh belas";
        case 18: return "delapan belas";
        case 19: return "sembilan belas";
        case 20: return "dua puluh";
        case 30: return "tiga puluh";
        case 40: return "empat puluh";
        case 50: return "lima puluh";
        case 60: return "enam puluh";
        case 70: return "tujuh puluh";
        case 80: return "delapan puluh";
        case 90: return "sembilan puluh";
        case 100: return "seratus";
        default:
            if (angka < 100) {
                return angkaKeTeks(angka - (angka % 10)) + " " + angkaKeTeks(angka % 10);
            }
            return "";
    }
}

int main() {
    int angka;

    // Input angka dari pengguna
    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    // Validasi input
    if (angka < 0 || angka > 100) {
        cout << "Angka harus dalam rentang 0 hingga 100." << endl;
    } else {
        // Mengubah angka ke dalam bentuk tulisan dan menampilkannya
        cout << "Angka " << angka << " dalam bentuk tulisan adalah: " << angkaKeTeks(angka) << endl;
    }

    return 0;
}
