#include <iostream>
using namespace std;

int main() {
    char array[10] = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c', 'd'};
    int n = 10;
    int count = 1; //untuk menghitung jumlah kemunculan karakter yang sama atau berturut turut
    int compressedLength = 0; //untuk menyimpan panjang array setellah di kompresi


    for (int i = 1; i < n; i++) {
        if (array[i] == array[i - 1]) {
            count++;
        } else {
            compressedLength++;
            if (count > 1) compressedLength++;
            count = 1;
        }
    }
    compressedLength++;
    if (count > 1) compressedLength++;


    cout << compressedLength << " ";

    count = 1;
    cout << "[";
    for (int i = 1; i < n; i++) {
        if (array[i] == array[i - 1]) {
            count++;
        } else {
            cout << "\"" << array[i - 1] << "\"";
            if (count > 1) cout << ", \"" << count << "\"";
            cout << ", ";
            count = 1;
        }
    }
    cout << "\"" << array[n - 1] << "\"";
    if (count > 1) cout << ", \"" << count << "\"";
    cout << "]" << endl;

    cout << "Panjang array setelah dikompresi: " << compressedLength << endl;
    return 0;
}
