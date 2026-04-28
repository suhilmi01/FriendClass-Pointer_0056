#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, sisiA, sisiB;

public:
    void inputData() {
        cout << "[ Input Layang-Layang ]" << endl;
        cout << "Masukkan Diagonal 1 : "; cin >> d1;
        cout << "Masukkan Diagonal 2 : "; cin >> d2;
        cout << "Masukkan Sisi Miring Atas : "; cin >> sisiA;
        cout << "Masukkan Sisi Miring Bawah: "; cin >> sisiB;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (sisiA + sisiB);
    }

    void tampilkanHasil() {
        cout << "Luas Layang-Layang     : " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang : " << hitungKeliling() << endl;
    }

    friend class BelahKetupat;
};

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void inputData() {
        cout << "\n[ Input Belah Ketupat ]" << endl;
        cout << "Masukkan Diagonal 1 : "; cin >> d1;
        cout << "Masukkan Diagonal 2 : "; cin >> d2;
        cout << "Masukkan Panjang Sisi: "; cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }

    void infoSpesial(LayangLayang &l) {
        cout << "(Info Friend: Belah Ketupat tahu sisi atas Layang-Layang adalah " << l.sisiA << ")" << endl;
    }

    void tampilkanHasil() {
        cout << "Luas Belah Ketupat     : " << hitungLuas() << endl;
        cout << "Keliling Belah Ketupat : " << hitungKeliling() << endl;
    }
};

int main() {

    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;

    ObjectLayang.inputData();
    ObjectBelah.inputData();

    cout << "\n========== HASIL ==========" << endl;
    ObjectLayang.tampilkanHasil();
    ObjectBelah.tampilkanHasil();
    
    ObjectBelah.infoSpesial(ObjectLayang);

    return 0;
}
