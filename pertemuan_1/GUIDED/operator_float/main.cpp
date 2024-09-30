#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int angka = 10;
    float desimal = 10.5;
    string kalimat ="Naura";
    double tinggi = 10.4;
    char jenis_kelamin = 'P';
    bool isSunny = true;

    cout << "Angka: " << angka << endl;
    cout << fixed << setprecison(1);
    cout << "Tinggi: " << tinggi << endl;

    return 0;
}
