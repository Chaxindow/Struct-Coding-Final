#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



// Urunler struct yap�s�nda 20 elemanl� urun isimli bir dizi olu�turulacakt�r. 
// �r�nler no,isim,stok ve fiyat bilgileri vard�r. Klavyeden girilip bu �r�nleri listeleyen C Programlama kodunu yaz�n�z.


struct yaz
	{
		int urun_no;
		char urun_isim [20];
		int urun_stok;
		int urun_fiyat;
	};


int main(int argc, char *argv[]) {
	
	struct yaz cod; 
	
	printf("Urun no giriniz : ");
	scanf("%d",&cod.urun_no);
	
	printf("Urun isim giriniz : ");
	scanf("%s",cod.urun_isim);

 	printf("Urun stok giriniz : ");
 	scanf("%d",&cod.urun_stok);

	printf("Urun fiyat giriniz : ");
	scanf("%d",&cod.urun_fiyat);

	
	printf(" Urun no : %d\n Urun isim : %s\n Urun stok  : %d\n Urun fiyat : %d dolar",cod.urun_no,cod.urun_isim,cod.urun_stok,cod.urun_fiyat);
	
	return 0;
}
