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
void tambah_data();

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
				tambah_data();
				goto utama;
				break;
			case 2 :
				system("cls");
				getch();
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

void input(){
	printf("+========================+\n");
	printf("|    Input data ke-%d     |\n", i+1);
	printf("+========================+\n");
	printf("Masukkan Nomor Tiket                  : "); fflush (stdin); scanf("%d", &data[i].no_tiket);
	printf("Masukkan Nomor Kendaraan anda         : "); fflush (stdin); scanf("%s", &data[i].nopol);
	printf("1. Mobil \n2. Motor \n3. Bus \n4. Truk \n5. Minibus \n6. Lainnya \n\n");
	printf("Pilih jenis kendaraan anda            : "); fflush (stdin); scanf("%d", &data[i].jenis_kendaraan);
	
	if(data[i].jenis_kendaraan==1){
		strcpy(data[i].kjenis_kendaraan,"Mobil");
	}
	else if(data[i].jenis_kendaraan==2){
		strcpy(data[i].kjenis_kendaraan,"Motor");
	}
	else if(data[i].jenis_kendaraan==3){
		strcpy(data[i].kjenis_kendaraan,"Bus");
	}
	else if(data[i].jenis_kendaraan==4){
		strcpy(data[i].kjenis_kendaraan,"Truk");
	}
	else if(data[i].jenis_kendaraan==5){
		strcpy(data[i].kjenis_kendaraan,"Minibus");
	}
	else if(data[i].jenis_kendaraan==6){
		printf("Kendaraan Lainnya : \n"); 
		scanf("%s, &data[i].kjenis_kendaraan");
	}
	else{
		printf("\n\n\t\tJenis Kendaraan yang anda inputkan tidak tersedia !!");
		getch();
		system("cls");
		input();
	}
	bobot :
	printf("Masukkan Bobot Kendaraan anda [Ton]   : "); fflush (stdin); scanf("%d", &data[i].bobot);
	printf("1. Pelabuhan Ketapang \n2. Pelabuhan Padang Bai \n3. Pelabuhan Lembar \n4. Tanjung Perak \n5. Tanjung Priok \n6. Lainnya ");
	printf("\n\nPilih Tujuan Anda                     : "); fflush (stdin); scanf("%d", &data[i].tujuan);
	if(data[i].tujuan==1){
		strcpy(data[i].ktujuan,"Pelabuhan Ketapang");
	}
	else if(data[i].tujuan==2){
		strcpy(data[i].ktujuan,"Pelabuhan Padang Bai");
	}
	else if(data[i].tujuan==3){
		strcpy(data[i].ktujuan,"Pelabuhan Lembar");
	}
	else if(data[i].tujuan==4){
		strcpy(data[i].ktujuan,"Tanjung Perak");
	}
	else if(data[i].tujuan==5){
		strcpy(data[i].ktujuan,"Tanjung Priok");
	}
	else if(data[i].tujuan==6){
		printf("Tujuan Lainnya : ");
		scanf("%s", &data[i].ktujuan);
	}
	else{
		printf("\n\tTujuan yang anda inputkan tidak tersedia !!\n");
		getch();
		system("cls");
		input();
	}
	printf("Masukkan Tanggal pembelian tiket      : "); fflush (stdin); scanf("%d", &data[i].d);
	printf("Masukkan Bulan pembelian tiket [1-12] : "); fflush (stdin); scanf("%d", &data[i].m);
	if(data[i].m==1){
		strcpy(data[i].kbulan,"Januari");
	}	
	else if(data[i].m==2){
		strcpy(data[i].kbulan,"Februari");
	}
	else if(data[i].m==3){
		strcpy(data[i].kbulan,"Maret");
	}
	else if(data[i].m==4){
		strcpy(data[i].kbulan,"April");
	}
	else if(data[i].m==5){
		strcpy(data[i].kbulan,"Mei");
	}
	else if(data[i].m==6){
		strcpy(data[i].kbulan,"Juni");
	}
	else if(data[i].m==7){
		strcpy(data[i].kbulan,"Juli");
	}
	else if(data[i].m==8){
		strcpy(data[i].kbulan,"Agustus");
	}
	else if(data[i].m==9){
		strcpy(data[i].kbulan,"September");
	}
	else if(data[i].m==10){
		strcpy(data[i].kbulan,"Oktober");
	}
	else if(data[i].m==11){
		strcpy(data[i].kbulan,"November");
	}
	else if(data[i].m==12){
		strcpy(data[i].kbulan,"Desember");
	}
	else{
		printf("\n\tPilihan tidak tersedia !!\n");
		system("cls");
		input();
	}
	printf("Masukkan Tahun pembelian tiket        : "); fflush (stdin); scanf("%d", &data[i].y);
}

void tambah_data(){
	input();
	getch();
	printf("\n\tData berhasil ditambahkan... ");	
	i++;
	getch();
	system("cls");
}
