// HOTEL PAKUAN PROJECT
// BY:  AGIEL AL MALIK      (065119071)
//      ADAM NAJMI ZIDAN    (065119079)
//      FADRIAN RISDIANTO   (065119088)
// ILMU KOMPUTER C

// MEMASANG HEADER
// iostream untuk penggunaan input output pada program
// stdlib untuk penggunaan system("cls")
// conio untuk penggunaan karakter
#include <iostream>
#include <stdlib.h>
#include <conio.h>

// PENDEKLARASIAN VARIABEL GLOBAL
using namespace std;
int tanggal, bulan, tahun, hargakamar, hargaextra, lama, hargaakhir, kamarreg, kamarvip, kamarfix;
string nama, bulanstr;


// PENDEKLARASIAN FUNGSI AWAL
// TUJUANNYA DIBAGI BAGI FUNGSINYA AGAR TIDAK BINGUNG SAAT MENULIS PROGRAM INT MAIN
void batas();
void head();
void login();
void hbt();
void kamar();
void nomorreg();
void nomorvip();
void extra();
void skip1();
void checkin();
void total();

// PROGRAM UTAMA
int main()
{
    // KITA HANYA MEMANGGIL LOGIN AJA DISINI
    login();
    return 0;
}

// FUNSGI UNTUK MENGHEMAT PENGGUNAAN BATAS
void batas()
{
    cout << "***************************************" << endl;
}

// INI FUNGSI UNTUK MENAMPILKAN BANNER DI SETIAP FUNGSI
void head()
{
    batas();
    cout << "        H O T E L  P A K U A N         " << endl;
    batas();
}

// INI FUNGSI PERTAMA, UNTUK MENYIMPAN NAMA DAN MENGECEK UMUR SI PENGGUNA
// BATAS MINIMALNYA ADALAH 18 TAHUN, DAN BATAS MAKSIMALNYA 80 TAHUN
// JIKA TIDAK MEMENUHI SYARAT MAKA PROGRAM AKAN LANGSUNG TERCLOSE
// JIKA PROGRAM MEMENUHI SYARAT, MAKA AKAN LANGSUNG MASUK KE FUNGSI HARI-BULAN-TANGGAL ATAU HBT
void login()
{
    head();
    int umur;
    cout << "Nama Anda: ";
    cin >> nama;
    cout << "Umur Anda: ";
    cin >> umur;
    batas();
    if(umur < 18) {
        cout << "Maaf umur anda belum memenuhi syarat" << endl;
        exit(-1);
    } else if(umur > 80) {
        cout << "Maaf umur Anda tidak memenuhi syarat" << endl;
        exit(-2);
    } else {
        cout << "Berhasil membuat ID" << endl;
        cout << "Tekan enter untuk melanjutkan..." << endl;
        getch();
        system("CLS");
        hbt();
    }
}

// FUNSGI HARI BULAN TAHUN / HBT
// FUNGSI YANG BERGUNA UNTUK MEMASUKAN TANGGAL CHECKIN USER
// BATAS TANGGALNYA ADALAH 1-31, JIKA KURANG ATAU LEBIH MAKA FUNGSI AKAN MELOOPING KEMBALI HINGGA BENAR
// BATAS BULANNYA ADALAH 1-12, JIKA KURANG ATAU LEBIH MAKA FUNGSI AKAN MELOOPING KEMBALI HINGGA BENAR
// DENGAN MENGGUNAKAN SWITCH CASE, KAMI MENGKONVERSI ANGKA BULAN MENJADI NAMA BULAN
void hbt(){
    head();
    cout << "Tanggal menginap [Ex: 1-31]: ";
    cin >> tanggal;
    if(tanggal > 31){
        cout << "Tanggal salah!" << endl;
        system("CLS");
        hbt();
    }
    cout << "Bulan menginap   [Ex: 1-12]: ";
    cin >> bulan;
    if(bulan > 12){
        cout << "Bulan salah!" << endl;
        system("CLS");
        hbt();
    }
    switch(bulan){
        case 1:
            bulanstr = "Januari";
        case 2:
            bulanstr = "Februari";
        case 3:
            bulanstr = "Maret";
        case 4:
            bulanstr = "April";
        case 5:
            bulanstr = "Mei";
        case 6:
            bulanstr = "Juni";
        case 7:
            bulanstr = "Juli";
        case 8:
            bulanstr = "Agustus";
        case 9:
            bulanstr = "September";
        case 10:
            bulanstr = "Oktober";
        case 11:
            bulanstr = "November";
        case 12:
            bulanstr = "Desember";
    }
    cout << "Tahun menginap   [Ex: 2020]: ";
    cin >> tahun;
    system("CLS");
    kamar();
}

// INI ADALAH FUNGSI MEMILIH KAMAR
// JIKA MEMILIH KAMAR 1, MAKA KONSTANTA HARGA KAMAR AKAN OTOMATIS TERDEKLARASI
// JIKA SUDAH TERPENUHI, MAKA AKAN LANJUT KE FUNGSI BERIKUTNYA YAITU PEMILIHAN NOMOR KAMAR REGULAR
// JIKA MEMILIH KAMAR 2, MAKA KONSTANTA HARGA KAMAR AKAN OTOMATIS TERDEKLARASI
// JIKA SUDAH TERPENUHI, MAKA AKAN LANJUT KE FUNGSI BERIKUTNYA YAITU PEMILIHAN NOMOR KAMAR VIP
// JIKA KONDISI TIDAK TERPENUHI ATAU SALAH INPUT, PROGRAM AKAN MELOOPING KEMBALI KE FUNGSI INI
void kamar()
{
    int pilihkamar;
    head();
    cout << "1. Kamar Reguler ( Single Bed )   Rp. 250.000/day" << endl;
    cout << "2. Kamar VIP ( Double Bed )       Rp. 350.000/day" << endl;
    batas();
    cout << "Pilihan Anda: ";
    cin >> pilihkamar;
    if(pilihkamar == 1) {
        hargakamar = 250000;
        system("CLS");
        nomorreg();
    }
    else if(pilihkamar == 2) {
        hargakamar = 350000;
        system("CLS");
        nomorvip();
    }
    else {
        cout << "Pilihan salah" << endl;
        system("CLS");
        kamar();
    }
}

// FUNSGI UNTUK PEMILIHAN NOMOR KAMAR REGULER
// FUNGSI INI TERDIRI DARI ANGKA GANJIL YANG DISUSUN OLEH LOOPING FOR
// SETELAH NOMOR KAMAR DIPILIH, MAKA AKAN LANGSUNG LANJUT KE FUNGSI BERIKUTNYA
void nomorreg()
{
    head();
    cout << "Kamar reguler yang tersedia:" << endl;
    for(int z = 1; z <= 20; z++)
    {
        if(z % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << z;
            }
    }
    cout << endl;
    batas();
    cout << "Pilih nomor kamar: ";
    cin >> kamarfix;
    system("CLS");
    skip1();
}

// FUNSGI UNTUK PEMILIHAN NOMOR KAMAR VIP
// FUNGSI INI TERDIRI DARI ANGKA GENAP YANG DISUSUN OLEH LOOPING FOR
// SETELAH NOMOR KAMAR DIPILIH, MAKA AKAN LANGSUNG LANJUT KE FUNGSI BERIKUTNYA
void nomorvip()
{
    head();
    cout << "Kamar vip yang tersedia:" << endl;
    for(int z = 1; z <= 20; z++)
    {
        if(z % 2 == 1)
            {
                cout << " ";
            }
            else
            {
                cout << z;
            }
    }
    cout << endl;
    batas();
    cout << "Pilih nomor kamar: ";
    cin >> kamarfix;
    system("CLS");
    skip1();
}

// INI ADALAH FUNGSI PILIHAN UNTUK MENENTUKAN KEINGINAN USER
// APAKAH DIA PENGEN MENAMBAH FASILITAS ATAU TIDAK
// JIKA KONDISI SALAH, MAKA PROGRAM AKAN MELOOPING KEMBALI DI FUNGSI INI
void skip1()
{
    char pilihextra;
    head();
    cout << "Apakah mau menambah fasilitas? [y/n]: ";
    cin >> pilihextra;
    cout << endl;
    if(pilihextra == 'y') {
        system("CLS");
        extra();
    } else if(pilihextra == 'n') {
        system("CLS");
        checkin();
    } else {
        cout << "Input salah...";
        system("CLS");
        skip1();
    }
}

// INI MERUPAKAN FUNGSI UNTUK MEMILIH TAMBAHAN FASILITAS YANG AKAN DIBERIKAN
// JIKA MEMILIH ANGKA SESUAI DENGAN PILIHAN 1-4, MAKA KONSTANTA HARGA FASILITAS AKAN TERUPDATE
// JIKA KONDISI TIDAK TERPENUHI, MAKA PROGRAM AKAN MELOOPING KEMBALI PADA FUNGSI INI
// JIKA SUDAH TERPENUHI, MAKA AKAN MELANJUTKAN KE FUNGSI BERIKUTNYA
void extra()
{
    int pilihextra;
    head();
    cout << "Paket 1: Include Makan, Pemandian Air Panas, Spa, Karaoke  Rp. 200.000" << endl;
    cout << "Paket 2: Include Makan, Pemandian Air Panas, Spa           Rp. 150.000" << endl;
    cout << "Paket 3: Include Makan, Pemandian Air Panas                Rp. 100.000" << endl;
    cout << "Paket 4: Include Makan.                                    Rp. 50.000" << endl;
    batas();
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihextra;
    cout << endl;
    if(pilihextra == 1){
        hargaextra = 200000;
    } else if(pilihextra == 2){
        hargaextra = 150000;
    } else if(pilihextra == 3){
        hargaextra = 100000;
    } else if(pilihextra == 4){
        hargaextra = 50000;
    } else{
        cout << "Input salah" << endl;
        system("CLS");
        extra();
    }
    system("CLS");
    checkin();
}

// PADA FUNGSI INI, USER DIMINTA UNTUK MEMASUKAN BERAPA LAMA
// MEREKA AKAN MENGINAP PADA HOTEL
// JIKA KONDISI TERPENUHI, MAKA AKAN LANJUT KE FUNGSI BERIKUTNYA
void checkin()
{
    int hari();
    head();
    cout << "Berapa lama Anda akan booking? (Day)(Ex: 1): ";
    cin >> lama;
    cout << endl;
    system("CLS");
    total();
}

// INI ADALAH FUNGSI TERAKHIR PROJECT KAMI, SAMA SEPERTI NOTA
// PADA FUNGSI INI DITAMPILKAN NAMA YANG TELAH USER MASUKAN
// KEMUDIAN MENAMPILKAN NOMOR KAMAR
// MENAMPILKAN BERAPA LAMA USER AKAN MENGINAP (DALAM HARI)
// MENAMPILKAN OUTPUT HARI-BULAN-TAHUN YANG BULANNYA TELAH DIKONVERSI MENJADI NAMA
// MENAMPILKAN VIRTUAL ACCOUNT UNTUK PEMBAYARAN BANK DENGAN FORMAT TAHUN-BULAN-TANGGAL-NOMORKAMAR-LAMANYA USER TINGGAL
// INI AKAN MENGHASILKAN NOMOR UNIK YANG BERBEDA
// DAN TERAKHIR, AKAN MENAMPILKAN JUMLAH BIAYA YANG HARUS DIBAYARKAN USER
void total()
{
    head();
    cout << "Pemesanan kamar atas nama: " << nama << endl;
    cout << "Nomor Kamar              : " << kamarfix << endl;
    cout << "Selama                   : " << lama << " hari." << endl;
    cout << "Checkin Tanggal          : " << tanggal << "-" << bulanstr << "-" << tahun << endl;
    hargaakhir = ( hargakamar + hargaextra ) * lama;
    cout << "Virtual Account          : " << tahun << bulan << tanggal << kamarfix << lama << endl;
    cout << "Total tagihan Anda adalah: Rp." << hargaakhir << endl;
    batas();
    cout << "Terima kasih telah memesan :)" << endl;
    getch();
}
