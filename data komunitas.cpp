#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <conio.h>

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
void tampilkanData() {
    system("cls");
    cout << "\n========================================================================= Menampilkan Data Provinsi ============================================================================\n\n";
    cout << left << setw(5) << "No" << setw(18) << "nama provinsi" << setw(20) << "jumlah komunitas" << setw(20) << "kepala keluarga"
         << setw(8) << "laki - laki" << setw(15) << "perempuan" << setw(15) << "SD" << setw(15) << "SMP"
         << setw(15) << "SMA" << setw(20) << "perguruan tinggi " << setw(15) << endl;

    for (int i = 0; i < jumlahData; ++i) {
        cout << left << setw(5) << i + 1 << setw(18) << provinsi[i].nama_provinsi << setw(20) << provinsi[i].jumlah_komunitas
             << setw(20) << provinsi[i].kepala_keluarga << setw(8) << provinsi[i].laki_laki << setw(15) << provinsi[i].perempuan
             << setw(15) << provinsi[i].SD << setw(15) << provinsi[i].SMP << setw(15) << provinsi[i].SMA
             << setw(20) << provinsi[i].perguruan_tinggi << setw(15) << endl;
    }

    cout << "\n===================================================================================================================================================================================\n";
    getch(); // Menunggu sampai tombol ditekan
    system("cls");
}
  return 0;
}


