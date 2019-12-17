#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

struct pelabuhan{
	int no_tiket;
	int tujuan;
	int d;
	int m;
	int y;
	char nopol[60];
	int jenis_kendaraan;
	int bobot;
	char kjenis_kendaraan[60];
	char ktujuan[60];
	char kbulan[60];
}data[60];

int i=0;

int main() {
	int menu;
	system("color f0");
	
	utama :
		printf("+===========================================================+\n");
		printf("|             FINAL PROJECT PEMROGRAMAN LANJUT              |\n");
		printf("|___________________________________________________________|\n");
		printf("|                   APLIKASI PELABUHAN                      |\n");
		printf("|               180181010002 & 1534010107                   |\n");
		printf("+===========================================================+\n\n");
		printf("PILIHAN MENU : \n");
		printf("1. Tambah Data\n");
		printf("2. Tampilkan Data\n");
		printf("3. Ubah Data\n");
		printf("4. Pencarian Data\n");
		printf("5. Pengurutan Data\n\n");
		printf("Masukkan Pilihan Menu : ");
		scanf("%d", &menu);
		
		switch (menu){
			case 1 : 
				system("cls");
				goto utama;
				break;
			case 2 :
				system("cls");
				getch();
				system("cls");
				goto utama;
				break;
			case 3 :
				system("cls");
				goto utama;
				break;
			case 4 :
				system("cls");
				goto utama;
				break;
			case 5 :
				system("cls");
				goto utama;
				break;
			default :
				system("cls");
				printf("\n\t\tPilihan menu tidak tersedia !!\n");
				getch();
				system("cls");
				goto utama;
				break;
	}	
	return 0;
}
