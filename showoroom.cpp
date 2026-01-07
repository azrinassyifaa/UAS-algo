#include <iostream>
using namespace std;

int main() {
    string nama[10], hrg;
    long long harga[10];
    int jml = 0, p;

    do {
        cout << "\n1.Input 2.Tampil 3.Beli 4.Keluar\nPilih: ";
        cin >> p;

        if (p == 1) {
            cout << "Jumlah mobil: ";
            cin >> jml;
            for (int i = 0; i < jml; i++) {
                cout << "Nama: "; cin >> nama[i];
                cout << "Harga: "; cin >> hrg;
                harga[i] = 0;
                for (char c : hrg) if (c != '.') harga[i] = harga[i] * 10 + (c - '0');
            }
        }
        else if (p == 2)
            for (int i = 0; i < jml; i++)
                cout << i+1 << ". " << nama[i] << " Rp" << harga[i] << endl;

        else if (p == 3) {
            int k, q;
            cout << "No & qty: ";
            cin >> k >> q;
            cout << "Total: Rp" << harga[k-1] * q << endl;
        }
    } while (p != 4);

    cout << "Terima kasih telah berkunjung\n";
    return 0;
}