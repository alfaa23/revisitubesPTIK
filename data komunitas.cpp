#include <iostream>

using namespace std;

struct Data {
    char no[20];
    char nama_provinsi[20];
    char jumlah_komunitas[20];
    char kepala_keluarga[20];
    char laki_laki[20];
    char perempuan[20];
    char SD[20];
    char SMP[20];
    char SMA[20];
    char perguruan_tinggi[20];
};

Data provinsi[100];
int jumlahData = 0;

void inputData() {
    cout << "Jumlah Data Provinsi yang Akan Diinput: ";
    int tambahanData;
    cin >> tambahanData;

    for (int i = 0; i < tambahanData; ++i) {
        system("cls");
        cout << "Data Ke-" << jumlahData + 1 << endl;
        cout << "No   : ";
        cin >> provinsi[jumlahData].no;
        cout << "Nama provinsi      : ";
        cin >> provinsi[jumlahData].nama_provinsi;
        cout << "jumlah komunitas    : ";
        cin >> provinsi[jumlahData].jumlah_komunitas;
        cout << "kepala keluarga             : ";
        cin >> provinsi[jumlahData].kepala_keluarga;
        cout << "laki - laki    : ";
        cin >> provinsi[jumlahData].laki_laki ;
        cout << "perempuan       : ";
        cin >> provinsi[jumlahData].perempuan ;
        cout << "SD      : ";
        cin >> provinsi[jumlahData].SD;
        cout << "SMP     : ";
        cin >> provinsi[jumlahData].SMP;
        cout << "SMA    : ";
        cin >> provinsi[jumlahData].SMA;
        cout << "perguruan tinggi    : ";
        cin >> provinsi[jumlahData].perguruan_tinggi;

        ++jumlahData;
    }
}

int main() {
    inputData();

    // Add additional code or functions here as needed

    return 0;
}

