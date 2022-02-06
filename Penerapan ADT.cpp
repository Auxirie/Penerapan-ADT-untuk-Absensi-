#include <stdio.h>
#include <string.h>
using namespace std;

    /* Membuat Array bernama Absensi 
    menggunakan syntax struct untuk 
    menyimpan data pada memori lokal dengan menamai objek Data1*/
	struct Absensi {
	  char nama[90];
	  char NPM[90];
	} Data1;
	 
	 
	// Kode utama 
	int main() {
	    char x,y;
	  printf("Silahkan mengisi Absensi\n");
	  printf("Nama = ");
	  scanf("%s",&x);
	  printf("NPM = ");
	  scanf("%s",&y);
	  
	  // Mengisi data pada variabel array
	  strcpy(Data1.nama, &x);
	  strcpy(Data1.NPM, &y);
	  // print isi variabel struct 
	  printf("Absensi anda\n");
	  printf("=======================\n");
	  printf("Nama: %s\n", Data1.nama);
	  printf("NPM: %s\n", Data1.NPM);
	 
	  return 0;
	}
