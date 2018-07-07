#include<stdio.h>

main(){
	/*DEKLARASI*/
	int in;												//input
	int k;												//k merupakan variabel bantuan dalam looping proses
	int penyebut;										//penyebut diawal dengan nilai 1
	float awal;											//variabel awal merupakan variabel untuk memulai proses perhitungan dan sekaligus sebagai variabel penyimpan nilai akhir
	char J;												//opsi untuk memulai kembali program atau tidak
	
	/*DESKRIPSI*/
	do
	{
		awal=1;
		penyebut=1;
		system("cls");
		printf("\n\n\t\tPROGRAM DERET ARITMATIKA");		//Judul Program
		printf("\n\nMasukkan Jumlah Deret : ");			//Kolom untuk inputan jumlah deret
		scanf("%d",&in);								//Membaca nilai inputan jumlah deret
		if (in>0)										//Persyaratan untuk inputan in harus bilangan bulat positif
		{
			for(k=1;k<in;k++)							//perulangan untuk jumlah baris deret
			{
				if(k==1){								//baris pertama maka akan bernilai 1
					printf("1 ");
				}
				penyebut = penyebut + 2 ;				//proses untuk penyebut bahwa akan ditambahkan 2
				
				if(k%2==0){								//jika baris mod 2 bernilai 0 maka operasinya adalah pertambahan 
					printf("+ ");
					awal = awal + (1.0/(penyebut));
				}
				else{									//lainnya jika baris mod 2 tidak bernilai 0 maka operasinya adalah pengurangan
					printf("- ");
					awal = awal - (1.0/(penyebut));
				}
				printf("1/%d ",penyebut);				//output untuk penulisan nilai baris setelah baris pertama
			}	
			printf("hasilnya adalah : %.2f",awal);		//merupakan nilai hasil akhir dari program 
			printf("\nUlangi [Y/T] = "); scanf("%s",&J);//opsi perulangan
		}
		else 											//jika k bukan merupakan bilangan bulat positif
		{
			printf("\n\nError");						//akan menampilkan error
			printf("\nUlangi [Y/T] = "); scanf("%s",&J);//opsi perulangan
		}
	}
	while(J=='Y' || J=='y');
}
