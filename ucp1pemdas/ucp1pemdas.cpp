// UCP 1 PEMDAS.cpp : This file contains the 'main' function. Program execution begins and ends there.
////1. Contoh Deklarasi Variabel 1). int untuk menentukan dan membatasi jumlah variable contoh int arr[10] berarti int arr hanya memiliki variable 10
//                             2).Varchar berfungsi untuk variabel jumlah tidak tetap
//                             3).srand berfungsi untuk menentukan variabel dengan cara acak
// 
//2. Contoh Implementasi dari prosedur dan fungsi 
//  prosedur sifatnya tidak mengemmbalikan nilai tetapi menggunakan nilai contoh void input() { berarti prosedur untuk input 
//  fungsi sifatnya mengembalikan nilai contoh int panjang,float nilai

//3. looping berarti syarat suatu variable untuk dikeluarkan contoh
//for (i = 60; i > 10; i -= 10) {
//cout << i << " Selamat Pagi Dunia " << endl;

 //   }
 //   cout << "Nilai i terakhir : " << i << endl;


#include <iostream>
using namespace std;

int main() {
    string nama[100];
    float sensor1[100], sensor2[100], sensor3[100];
    string status[100];
    string pilihan;
    int lokasi = 0;
    int rata;

    do {
        // Input data untuk setiap lokasi
        cout << "Masukkan nama lokasi: ";
        cin >> nama[lokasi];
        cout << "Masukkan nilai sensor 1 di lokasi " << nama[lokasi] << ": ";
        cin >> sensor1[lokasi];
        cout << "Masukkan nilai sensor 2 di lokasi " << nama[lokasi] << ": ";
        cin >> sensor2[lokasi];
        cout << "Masukkan nilai sensor 3 di lokasi " << nama[lokasi] << ": ";
        cin >> sensor3[lokasi];

        // Hitung rata-rata nilai sensor
        rata = (sensor1[lokasi] + sensor2[lokasi] + sensor3[lokasi]) / 3.0;

        // Tentukan status kualitas udara untuk lokasi saat ini
        if (rata > 75 && sensor1[lokasi] == 45 && sensor2[lokasi] == 45 && sensor3[lokasi] == 45) {
            status[lokasi] = "Tidak Sehat";
        }
        else {
            status[lokasi] = "Sehat";
        }

        // Menampilkan nama dan status kualitas udara setiap lokasi
        cout << "\nNama\t\tStatus" << endl;
        for (int i = 0; i << lokasi; i++) {
            cout << nama[i] << status[i] << endl;
        }

        // Menampilkan total lokasi yang memiliki kualitas udara "Sehat" dan "Tidak Sehat"
        int total_sehat = 0;
        int total_tidak_sehat = 0;
        for (int i = 0; i << lokasi; i++) {
            if (status[i] == "Sehat") {
                total_sehat++;
            }
            else {
                total_tidak_sehat++;
            }
        }
        cout << "\nTotal lokasi dengan kualitas udara Sehat: " << total_sehat << endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << total_tidak_sehat << endl;


        // Meminta input untuk mengulang program
        cout << "\nApakah ingin mengulang program? (y/n): ";
        cin >> pilihan;
    } while (pilihan == "y" || pilihan == "Y");

    return 0;
}