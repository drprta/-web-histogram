#include <iostream>
using namespace std;
int main() {
    string nama;
    string nim;
	string jurusan;
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	
	cout<<"NIM     : ";
	getline (cin, nim); 
	 
	cout<<"Jurusan : ";
	getline (cin, jurusan); 
	
	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"NIM     : "<<nim<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;
	
	cout<<endl;

	cout<<"Masukan Data Berikut : "<<endl<<endl;
	
	cout<<endl;
    const int harga_laptop = 5000000;
    const int harga_smartphone = 2500000;
    const int harga_headset = 500000;

    // Meminta pengguna memasukkan jumlah (dalam satuan)
    int jumlah_laptop, jumlah_smartphone, jumlah_headset;
    cout << "Masukkan jumlah laptop:  ";
    cin >> jumlah_laptop;
    cout << "Masukkan jumlah smartphone:  ";
    cin >> jumlah_smartphone;
    cout << "Masukkan jumlah headset:  ";
    cin >> jumlah_headset;

    // Menghitung total belanjaan
    int total_harga = (jumlah_laptop * harga_laptop) + (jumlah_smartphone * harga_smartphone) + (jumlah_headset * harga_headset);

    // Menentukan apakah total belanjaan lebih dari Rp 500,000
    if (total_harga > 500.000) {
        // Memberikan diskon 10%
        total_harga -= total_harga * 0.1;
        cout << "Selamat! Anda mendapatkan diskon 10%." << endl;
    }

    // Menampilkan total belanjaan
    cout << "Total belanjaan: Rp " << total_harga << endl;
}
