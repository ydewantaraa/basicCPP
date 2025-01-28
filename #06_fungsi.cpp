#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    int hasil = tambah(3, 5);
    cout << "Hasil penjumlahan: " << hasil << endl;
    return 0;
}

// parameter dan argumen
// void cetakPesan(string nama) {
//     cout << "Halo, " << nama << "!" << endl;
// }

// int main() {
//     cetakPesan("Andi");
//     return 0;
// }

// void fungsi tanpa nilai balik
// void sapa() {
//     cout << "Selamat datang di C++!" << endl;
// }

// int main() {
//     sapa();
//     return 0;
// }

// fungsi dengan nilai balik
// int kuadrat(int x)
// {
//     return x * x;
// }

// int main()
// {
//     int hasil = kuadrat(4);
//     cout << "Kuadrat dari 4 adalah: " << hasil << endl;
//     return 0;
// }
