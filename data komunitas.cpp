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
void hapusData() {
    int nomorHapus;
    cout << "Hapus data ke-";
    cin >> nomorHapus;

    if (nomorHapus >= 1 && nomorHapus <= jumlahData) {
        --nomorHapus;

        for (int i = nomorHapus; i < jumlahData - 1; ++i) {
            provinsi[i] = provinsi[i + 1];
        }

        --jumlahData;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-" << nomorHapus + 1 << " Terhapus ++++++++++++++++++++++++++++++";
        getch();
        system("cls");
    } else {
        system("cls");
        cout << "Nomor data tidak valid.";
        getch();
        system("cls");
    }
}
void editData() {
    int nomorEdit;
    cout << "Masukkan Nomor Data yang Akan Diedit : ";
    cin >> nomorEdit;

    if (nomorEdit >= 1 && nomorEdit <= jumlahData) {
        --nomorEdit;
        cout << "nama provisi   : ";
        cin >> provinsi[nomorEdit].nama_provinsi;
        cout << "jumlah komunitas      : ";
        cin >> provinsi[nomorEdit].jumlah_komunitas;
        cout << "kepala keluarga    : ";
        cin >> provinsi[nomorEdit].kepala_keluarga;
        cout << "laki-laki            : ";
        cin >> provinsi[nomorEdit].laki_laki;
        cout << "perempuan    : ";
        cin >> provinsi[nomorEdit].perempuan;
        cout << "SD       : ";
        cin >> provinsi[nomorEdit].SD;
        cout << "SMP     : ";
        cin >> provinsi[nomorEdit].SMP;
        cout << "SMA     : ";
        cin >> provinsi[nomorEdit].SMA;
        cout << "perguruan tinggi    : ";
        cin >> provinsi[nomorEdit].perguruan_tinggi;
        

        tampilkanData();
    } else {
        system("cls");
        cout << "Nomor data tidak valid.";
        getch();
        system("cls");
    }
}
int main() {
    int pilihan;
    char keluar;
    cout << "\n============================= PROGRAM  DATA KOMUNITAS BERDASARKAN REGIONAL ========================================\n";
    cout << "\n\t\t\t                    PROGRAM BY KELOMPOK 1\n\n";
    cout << "\t\t\t                      ASSALAMU'ALAIKUM";
    getch();
    system("cls");

    do {
        cout << "\n======================================== PILIHAN MENU =====================================\n";
        cout << "1. Masukkan data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Lihat Data\n";
        cout << "4. Edit Data\n";
        cout << "5. Keluar\n\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                system("cls");
                inputData();
                break;
            case 2:
                system("cls");
                hapusData();
                break;
            case 3:
                tampilkanData();
                break;
            case 4:
                editData();
                break;
            case 5:
                system("cls");
                cout << "\n\n\n\n\n\n\n\n";
                cout << "   APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
                cout << "   [Y]                     [N]                  \n";
                cout << "\n   ";
                cin >> keluar;

                if (keluar == 'y' || keluar == 'Y') {
                    system("cls");
                    cout << "\n\n\n\n\n*********** PROGRAM SELESAI ***********";
                } else if (keluar == 'n' || keluar == 'N') {
                    system("cls");
                }
                break;
            default:
                system("cls");
                cout << "Pilihan 1-5";
                getch();
                system("cls");
                break;
        }
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\t\t\t   PROGRAM BY KELOMPOK 1\n\n";
        cout << "\t\t\t      WASSALAMU'ALAIKUM";
    } while (pilihan != 5);

  return 0;
}



