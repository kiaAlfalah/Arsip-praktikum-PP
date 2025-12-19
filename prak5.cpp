#include <iostream>
using namespace std;

int main(){
  int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
  cout << "Tanggal " << tanggal[9];
  
  string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
  cout << " hari " << hari[4] << endl;
  
  char namaP[] = {'K', 'a', 'i'};
  cout << "Nama panggilan (char) : " << namaP << endl;
  
  string namaL = "Kai Penakluk Dunia";
  cout << "Nama lengkap (string) : " << namaL << endl;
  
  int i = 0;
  while ( i < 7) {
    cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
    i++;
  }
  cout << endl;
  
  int panjang = sizeof(hari) / sizeof(hari[0]);
  cout << "Panjang array hari adalah : " << panjang << endl;
  cout << "Kai Menaklukan Dunia dalam " << panjang << " hari. " << endl << endl;
  
  int jumlahHari = 7;
  int penjualan [jumlahHari];
  int totalPejualan = 0;
  float ratarata;
  
  cout << "Masukkan penjualan berapa porsi Chicken Katsu selama " << jumlahHari << " hari:" << endl;
  for (int j = 0; j < jumlahHari; j++){
    cout << "Penjualan hari " << hari[j] << " : ";
    cin >> penjualan[j];
    totalPenjualan += penjualan[j];
  }
  
  ratarata = (float)totalPenjualan / jumlahHari;
  cout << "Total porsi Chicken Katsu yang telah terjual : " << totalPenjualan << "porsi." << endl;
  cout << "Rata-rata penjualan Chicken Katsu selama " << jumlahHari << " hari adalah: " << ratarata << " porsi. " << endl; endl;
  
  int matriks[100][100];
  int jumlahBaris, jumlahkolom;
  
  cout << "Masukkan jumlah bulan dan tanggal buka kedai Chicken Katsu : " << endl;
  cout << "input jumlah bulan (baris matriks) : ";
  cout << jumlahBaris;
  cout << "Input jumlah tanggal (kolom matriks): ";
  cin >> jumlahkolom;
  
  for (int x = 0; x < jumlahBaris; x++){
    for (int y = 0; y < jumlahkolom; y++){
      cout << "Baris " << i + 1 << ", Kolom " << y + 1 << " = ";
      cin >> matriks[x][y];
    }
  }
  cout << "Kedai Chicken Katsu buka selama : " << jumlahBaris << " bulan di tanggal tertentu." << endl;

  for (int x = 0; x < jumlahBaris; x++){
    for (int y = 0; y < jumlahKolom; y++){
      cout << matriks[x][y] << " ";
    }
    cout << endl;
  }
  return 0;
}
