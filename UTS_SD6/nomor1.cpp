#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][3][4];

    int kelipatan 6 = 6;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[0][i][j] = val6;
            val6 += 6;
        }
    }

    int kelipatan 3 = 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[1][i][j] = val3;
            val3 += 3;
        }
    }

    int hasil[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            hasil[i][j] = arr[0][i][j] + arr[1][i][j];
        }
    }

    cout << "Hasil Penjumlahan Elemen Layer 1 (Kelipatan 6) dan Layer 2 (Kelipatan 3):";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(6) << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}