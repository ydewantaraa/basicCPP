#include <iostream>
#include <string>
using namespace std;

int main()
{
    int umur = 25;
    float tinggi = 170.5;
    char inisial = 'A';
    string nama = "Ali";
    bool lulus = true;

    cout << "Nama: " << nama << endl;
    cout << "Inisial: " << inisial << endl;
    cout << "Umur: " << umur << endl;
    cout << "Tinggi: " << tinggi << " cm" << endl;
    cout << "Lulus: " << (lulus ? "Ya" : "Tidak") << endl;

    return 0;
}
