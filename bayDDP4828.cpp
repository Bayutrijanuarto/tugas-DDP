#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout<< "Masukkan jumlah baris: ";
    cin>> baris;
    cout<< "Masukkan jumlah kolom: ";
    cin>> kolom;

    for(int b = 1; b <= kolom; b++) {
        cout<< " _ ";
    }
    cout<< endl;

    for(int a = 1; a <= baris; a++) {
        for (int b = 1; b <= kolom; b++) {
            cout<< "|_|";
        }
        cout<< endl;
    }

    return 0;
}
