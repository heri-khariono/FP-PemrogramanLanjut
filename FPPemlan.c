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
void tampil_data();
void ubah_data();
void cari_data();
void urut_data();

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
				tampil_data();
				getch();
				goto utama;
				break;
			case 3 :
				system("cls");
				ubah_data();
				goto utama;
				break;
			case 4 :
				system("cls");
				cari_data();
				goto utama;
				break;
			case 5 :
				system("cls");
				urut_data();
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

void view(int j){
	printf(" TAMPILAN DATA KE - %d    \n", j+1);
	printf("+======================================================+\n");	
	printf(" No. Tiket               : %d\n", data[j].no_tiket);	
	printf(" No. Kendaraan           : %s\n", data[j].nopol);
	printf(" Jenis Kendaraan         : %s\n", data[j].kjenis_kendaraan);
	printf(" Bobot Kendaraan         : %d Ton\n", data[j].bobot);
	printf(" Tujuan Pelabuhan        : %s\n", data[j].ktujuan);
	printf(" Tanggal Pembelian Tiket : %d  %s %d\n",data[j].d, data[j].kbulan, data[j].y);	
	printf("+======================================================+\n\n");	
}

void tampil_data(){
	system("cls");
	int j=0;
	if (i==0){
		printf ("\n\n\t\tData Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
		for(j=0;j<i;j++){
			view(j);	
		}
	}
}

void ubah_data(){
	int ubah, j=0;
	if (i==0){
		printf ("\n\n\t\tData Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
		printf("\t\tTAMPILAN DATA SEBELUM DIUBAH\n\n");
		tampil_data();
		printf("\t\tUBAH DATA\n\n");
		while(j<i){
			printf("+========================+\n");
			printf("|    Input data ke-%d     |\n", j+1);
			printf("+========================+\n");
			printf("Masukkan Nomor Tiket                  : "); fflush (stdin); scanf("%d", &data[j].no_tiket);
			printf("Masukkan Nomor Kendaraan anda         : "); fflush (stdin); scanf("%s", &data[j].nopol);
			printf("1. Mobil \n2. Motor \n3. Bus \n4. Truk \n5. Minibus \n6. Lainnya \n\n");
			printf("Pilih jenis kendaraan anda            : "); fflush (stdin); scanf("%d", &data[j].jenis_kendaraan);	
			
			if(data[j].jenis_kendaraan==1){
				strcpy(data[j].kjenis_kendaraan,"Mobil");
			}
			else if(data[j].jenis_kendaraan==2){
				strcpy(data[j].kjenis_kendaraan,"Motor");
			}
			else if(data[j].jenis_kendaraan==3){
				strcpy(data[j].kjenis_kendaraan,"Bus");
			}
			else if(data[j].jenis_kendaraan==4){
				strcpy(data[j].kjenis_kendaraan,"Truk");
			}
			else if(data[j].jenis_kendaraan==5){
				strcpy(data[j].kjenis_kendaraan,"Minibus");
			}
			else if(data[j].jenis_kendaraan==6){
				printf("Kendaraan Lainnya : \n"); 
				scanf("%s, &ket[i].kjenis_kendaraan");
			}
			else{
				printf("\n\n\t\tJenis Kendaraan yang anda inputkan tidak tersedia !!");
				getch();
				system("cls");
				input();
			}
			printf("Masukkan Bobot Kendaraan anda [Ton]   : "); fflush (stdin); scanf("%d", &data[j].bobot);
			printf("1. Pelabuhan Ketapang \n2. Pelabuhan Padang Bai \n3. Pelabuhan Lembar \n4. Tanjung Perak \n5. Tanjung Priok \n6. Lainnya ");
			printf("\n\nPilih Tujuan Anda                     : "); fflush (stdin); scanf("%d", &data[j].tujuan);
			if(data[j].tujuan==1){
				strcpy(data[j].ktujuan,"Pelabuhan Ketapang");
			}
			else if(data[j].tujuan==2){
				strcpy(data[j].ktujuan,"Pelabuhan Padang Bai");
			}
			else if(data[j].tujuan==3){
				strcpy(data[j].ktujuan,"Pelabuhan Lembar");
			}
			else if(data[j].tujuan==4){
				strcpy(data[j].ktujuan,"Tanjung Perak");
			}
			else if(data[j].tujuan==5){
				strcpy(data[j].ktujuan,"Tanjung Priok");
			}
			else if(data[j].tujuan==6){
				printf("Tujuan Lainnya : ");
				scanf("%s", &data[j].ktujuan);
			}
			else{
				printf("\n\tTujuan yang anda inputkan tidak tersedia !!\n");
				getch();
				system("cls");
				input();
			}
			printf("Masukkan Tanggal pembelian tiket      : "); fflush (stdin); scanf("%d", &data[j].d);
			printf("Masukkan Bulan pembelian tiket [1-12] : "); fflush (stdin); scanf("%d", &data[j].m);
			if(data[j].m==1){
				strcpy(data[j].kbulan,"Januari");
			}	
			else if(data[j].m==2){
				strcpy(data[j].kbulan,"Februari");
			}
			else if(data[j].m==3){
				strcpy(data[j].kbulan,"Maret");
			}
			else if(data[j].m==4){
				strcpy(data[j].kbulan,"April");
			}
			else if(data[j].m==5){
				strcpy(data[j].kbulan,"Mei");
			}
			else if(data[j].m==6){
				strcpy(data[j].kbulan,"Juni");
			}
			else if(data[j].m==7){
				strcpy(data[j].kbulan,"Juli");
			}
			else if(data[j].m==8){
				strcpy(data[j].kbulan,"Agustus");
			}
			else if(data[j].m==9){
				strcpy(data[j].kbulan,"September");
			}
			else if(data[j].m==10){
				strcpy(data[j].kbulan,"Oktober");
			}
			else if(data[j].m==11){
				strcpy(data[j].kbulan,"November");
			}
			else if(data[j].m==12){
				strcpy(data[j].kbulan,"Desember");
			}
			else{
				printf("\n\tPilihan tidak tersedia !!\n");
				system("cls");
				input();
			}
			printf("Masukkan Tahun pembelian tiket        : "); fflush (stdin); scanf("%d", &data[j].y);
			j++;
			getch();
			system("cls");
		}
		printf("\n\n\tData anda berhasil di ubah...\n");
		getch();
		system("cls");
		printf("\t\tTAMPILAN DATA SETELAH DIUBAH\n");
		tampil_data(j);
		getch();
		system("cls");
	}
}

//Pencarian Data
int jump_search1(struct pelabuhan dt[],int size, char cari_nopol[]){ 
	int i;
	int target =0;
	int mulai = 0;
	int selesai = sqrt(size);
	
	while (strcmp(dt[target].nopol,cari_nopol)!=0 && target <= size)
	{
		target++;
	}
	while (strcmp(dt[mulai].nopol,cari_nopol) != 0 && target>mulai)
	{
		mulai += selesai;
	}
	
	mulai = mulai - selesai; // mundur 
	
	for(i=mulai; i<=target; i++){
		
		if (strcmp(cari_nopol,dt[i].nopol)==0)
		{
			return i;
		}
	}
	return -1;
}


int jump_search2(struct pelabuhan dt[], int size, int cari){//nomor tiket
	int i;
	int mulai = 0;
	int selesai = sqrt (size);
	
	while (dt[selesai].no_tiket <= cari && selesai < size){
		mulai = selesai;
		selesai +=sqrt (size);
		if(selesai > size-1){
		selesai = size;
		}
	}
	for (i=mulai;i<selesai; i++){
		if(dt[i].no_tiket==cari){
			return i;
		}
		else
			return -1;
	}
}

int jump_search3(struct pelabuhan dt[], int size, int cari){//bobot kendaraan
	int i;
	int mulai = 0;
	int selesai = sqrt(size);
	
	while (dt[selesai].bobot <= cari && selesai < size){
		mulai = selesai;
		selesai +=sqrt (size);
		if(selesai > size-1){
			selesai = size;
		}
	}
	for (i=mulai;i<selesai; i++){
		if(dt[i].bobot==cari){
			return i;
		}
		else
			return -1;
	}
}

void cari_data(){
	int pil, cari;
	char cari_nopol[60];
	
	if (i==0){
		printf ("\n\n\t\tData Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
		printf("Search data berdasarkan : \n");
		printf("1. Nomor Kendaraan\n");
		printf("2. Nomor Tiket\n");
		printf("3. Bobot Kendaraan\n\n");
		printf("Masukkan pilihan menu : ");
		scanf("%d", &pil);
		
		if( pil == 1 ){
			printf("Masukkan Nomor Kendaraan : "); 
			fflush(stdin); scanf("%s", &cari_nopol);
		
		int y;
		y=jump_search1(data, i, cari_nopol);
		if(y == -1){
			printf("\n\t\tNomor Kendaraan Tidak Ditemukan !!");
		}
		else{
			view(y);
		}
		getch();
		system("cls");
	}
	else if( pil == 2 ){
		printf("Masukkan Nomor Tiket : ");
		fflush(stdin);scanf("%s", &cari);
		
		int y;
		y=jump_search2(data, 0, cari);
		if(y == -1){
			printf("\n\t\tNomor Kendaraan Tidak Ditemukan !!");
		}
		else{
			view(y);
		}
		getch();
		system("cls");
	}
	else if( pil == 3 ){
		printf("Masukkan Nomor Kendaraan : ");
		fflush(stdin); scanf("%s", &cari);
		
		int y;
		y=jump_search3(data, 0, cari);
		if(y == -1){
			printf("\n\t\tNomor Kendaraan Tidak Ditemukan !!");
		}
		else{
			view(y);
		}
		getch();
		system("cls");
	}
	else{
		printf("Pilihan yang anda masukkan tidak tersedia !!\n");
	}
	getch();
	system("cls");
	main();
	}
}

//sorting berdasarkan nomor tiket
int quick_sort1(struct pelabuhan arr[], int left, int right)
{
      int i = left, j = right;
	  struct pelabuhan tmp[right];
      int pivot = arr[(left+right)/2].no_tiket;
                        while (i<j){
                                    while (arr[i].no_tiket < pivot)
                                    i++;
                                    while (arr[j].no_tiket > pivot)
                                    j--;
                                    
                                    if (i<=j){
                                                tmp[i] = arr[i]; 
                                                arr[i] = arr[j];
                                                arr[j] = tmp[i];
                                                i++;j--;
                                                    };
                                          }; //rekursif
      if (left < j)
            quick_sort1(arr, left, j);
      if (i < right)
            quick_sort1(arr, i, right);
}

//sorting berdasarkan nomor kendaraan
int swap1(struct pelabuhan dt[60],int low,int high){
	struct pelabuhan pivot;
	char p[20];
	strcpy(p,data[high].nopol);
	int i =(low-1), j;
	struct pelabuhan temp;
	for(j=low;j<=high-1;j++){
		if(strcmp(data[j].nopol,p)<0){
			i++;
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;	
			
		}
	}
			i++;
			temp=data[i];
			data[i]=data[high];
			data[high]=temp;
			return i;
}

void quick_sort2(struct pelabuhan dt[60], int hi, int lo){
	int pi;
	if(lo<hi){
		pi = swap1(data,lo,hi);
		quick_sort2(data,pi-1,lo);
		quick_sort2(data,hi,pi+1);
	}
}

//sorting berdasarkan jenis kendaraan 
int quick_sort3(struct pelabuhan arr[], int left, int right)
{
      int i = left, j = right;
	  struct pelabuhan tmp[right];
      int pivot = arr[(left+right)/2].jenis_kendaraan;
                        while (i<j){
                                    while (arr[i].jenis_kendaraan < pivot)
                                    i++;
                                    while (arr[j].jenis_kendaraan > pivot)
                                    j--;
                                    
                                    if (i<=j){
                                                tmp[i] = arr[i]; 
                                                arr[i] = arr[j];
                                                arr[j] = tmp[i];
                                                i++;j--;
                                                    };
                                          }; //rekursif
      if (left < j)
            quick_sort3(arr, left, j);
      if (i < right)
            quick_sort3(arr, i, right);
}

//sorting berdasarkan bobot kendaraan
int quick_sort4(struct pelabuhan arr[], int left, int right)
{
      int i = left, j = right;
	  struct pelabuhan tmp[right];
      int pivot = arr[(left+right)/2].bobot;
                        while (i<j){
                                    while (arr[i].bobot < pivot)
                                    i++;
                                    while (arr[j].bobot > pivot)
                                    j--;
                                    
                                    if (i<=j){
                                                tmp[i] = arr[i]; 
                                                arr[i] = arr[j];
                                                arr[j] = tmp[i];
                                                i++;j--;
                                                    };
                                          }; //rekursif
      if (left < j)
            quick_sort4(arr, left, j);
      if (i < right)
            quick_sort4(arr, i, right);
}

void urut_data(){
	int j=0, pil;
	if (i==0){
		printf ("\n\n\t\tData Kosong, harap mengisi data terlebih dahulu...\n\n");
		getch();
		system("cls");
	}
	else{
	printf("Sort data berdasarkan : \n");
	printf("1. Nomor Tiket\n");
	printf("2. Nomor Kendaraan\n");
	printf("3. Jenis Kendaraan\n");
	printf("4. Bobot Kendaraan\n\n");
	printf("Masukkan pilihan menu : ");
	scanf("%d", &pil);
	printf("\n\n\t\tHASIL PENGURUTAN DATA\n");
	switch(pil){
		case 1 :
			quick_sort1(data , 0, i-1);
			tampil_data();
			getch();
			system("cls");		
			break;
		case 2 :
			quick_sort2(data , i-1, 0);
			tampil_data();
			getch();
			system("cls");
			break;
		case 3 :
			quick_sort3(data , 0, i-1);
			tampil_data();
			getch();
			system("cls");
			break;
		 case 4 :
			quick_sort4(data , 0, i-1);
			tampil_data();
			getch();
			system("cls");
			break;
		default :
			printf("Pilihan yang anda masukkan tidak tersedia !!\n");
			getch();
			break;
		}
	}
}
