#include <iostream>
using namespace std;

int main() {
    int array[5];
    int *alamat = array;

    cout << "=========================================" << endl;
    cout << "|| Program Kompresi Array ||" << endl;
    cout << "=========================================" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << " : ";
        cin >> array[i];
    }

    cout << "\nHasil Output:\n" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai pada array ke-" << i << " : " << array[i] << endl;
        cout << "Alamat pada array ke-" << i << " : " << (alamat + i) << endl;
    }
    return 0;
}
