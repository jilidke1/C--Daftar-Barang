#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string kode;
    string nama;
    double harga;
    int stok;
};

int main() {
    Barang daftar_barang[20]; 
    int jumlah_barang = 0;     

    while (true) {
        cout << "\nPilih Operasi:" << endl;
        cout << "1. Tambah Barang" << endl;
        cout << "2. Tampilkan Semua Barang" << endl;
        cout << "3. Cari Barang berdasarkan Kode" << endl;
        cout << "4. Hitung Total Stok Barang" << endl;
        cout << "5. Keluar" << endl;

        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                if (jumlah_barang < 20) {
                    string kode, nama;
                    double harga;
                    int stok;
                    
                    cout << "Masukkan kode barang: ";
                    cin >> kode;
                    cout << "Masukkan nama barang: ";
                    cin >> nama;
                    cout << "Masukkan harga barang: ";
                    cin >> harga;
                    cout << "Masukkan jumlah stok barang: ";
                    cin >> stok;

                    daftar_barang[jumlah_barang].kode = kode;
                    daftar_barang[jumlah_barang].nama = nama;
                    daftar_barang[jumlah_barang].harga = harga;
                    daftar_barang[jumlah_barang].stok = stok;
                    jumlah_barang++;

                    cout << "Barang berhasil ditambahkan." << endl;
                } else {
                    cout << "Maaf, tidak dapat menambahkan barang baru. Batas maksimum sudah tercapai." << endl;
                }
                break;
            }
            case 2: {
                if (jumlah_barang == 0) {
                    cout << "Tidak ada barang dalam daftar." << endl;
                } else {
                    cout << "Daftar Barang:" << endl;
                    for (int i = 0; i < jumlah_barang; ++i) {
                        cout << "Kode Barang: " << daftar_barang[i].kode << endl;
                        cout << "Nama Barang: " << daftar_barang[i].nama << endl;
                        cout << "Harga Barang: " << daftar_barang[i].harga << endl;
                        cout << "Stok Barang: " << daftar_barang[i].stok << endl << endl;
                    }
                }
                break;
            }
            case 3: {
                string kode;
                cout << "Masukkan kode barang yang ingin dicari: ";
                cin >> kode;
                bool ditemukan = false;
                for (int i = 0; i < jumlah_barang; ++i) {
                    if (daftar_barang[i].kode == kode) {
                        cout << "Kode Barang: " << daftar_barang[i].kode << endl;
                        cout << "Nama Barang: " << daftar_barang[i].nama << endl;
                        cout << "Harga Barang: " << daftar_barang[i].harga << endl;
                        cout << "Stok Barang: " << daftar_barang[i].stok << endl;
                        ditemukan = true;
                        break;
                    } 
					}
                if (!ditemukan) {
                    cout << "Barang dengan kode " << kode << " tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
                int total_stok = 0;
                for (int i = 0; i < jumlah_barang; ++i) {
                    total_stok += daftar_barang[i].stok;
                }
                cout << "Total Stok Barang: " << total_stok << endl;
                break;
            }
            case 5: {
                cout << "Terima kasih! Program selesai." << endl;
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
                break;
            }
        }
    }

    return 0;
}

