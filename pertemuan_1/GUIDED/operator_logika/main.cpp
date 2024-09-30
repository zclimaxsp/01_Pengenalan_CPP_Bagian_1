#include <iostream>

using namespace std;

int main()
{
    bool kordinasi1 = true;
    bool kordinasi2 = true;

    bool hasil = (kordinasi1 && kordinasi2);
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;

    bool kondisi1 = false;
    bool hasil = !kondisi1;
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;

}
