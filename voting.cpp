#include <iostream>
#include <string>
using namespace std;

int main() {
    string merek[50], input;
    int suara[50] = {0}, totalPemilih, totalMerek = 0;

    cout << "Jumlah pemilih: ";
    cin >> totalPemilih;
    cin.ignore();

    for (int i = 0; i < totalPemilih; i++) {
        cout << "Pemilih ke-" << i + 1 << ": ";
        getline(cin, input);

        int j;
        for (j = 0; j < totalMerek; j++)
            if (merek[j] == input) { suara[j]++; break; }

        if (j == totalMerek) {
            merek[totalMerek] = input;
            suara[totalMerek++] = 1;
        }
    }

    cout << "\nHasil Voting:\n";
    for (int i = 0; i < totalMerek; i++)
        cout << merek[i] << " : " << suara[i] << " suara\n";

    return 0;
}