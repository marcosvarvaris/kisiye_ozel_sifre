#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) 
{	

	setlocale(LC_ALL,"Turkish");
	system("color c1");
	
    srand(time(NULL));

    int i,j;

    char harf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char sayi[] = "0123456789";
	char pas[4];
	char pass[4];
	char adi[20],soyadi[20];
	
		FILE *dosya;
	dosya=fopen("bilgiler.txt","a");
	
//	fputs("-----------------\n",dosya);
	
		for(i=0; i<4; i++)
    {
	pas[i]=harf[rand() % (sizeof harf)];
    pass[i]=sayi[rand() % (sizeof sayi)];
    
    printf("%c%c",pas[i],pass[i]);

	fprintf(dosya,"%c%c",pas[i],pass[i]);
	
	}
	

	
	printf("\n\n\nAdýnýzý    Giriniz  : ");scanf("%s",&adi);
	printf("Soyadýnýzý Giriniz  : ");scanf("%s",&soyadi);
	
	fprintf(dosya,"\t\t%s %s\n",adi,soyadi);
	
//	fputs(adi,dosya);
//	fputs(soyadi,dosya);

	
  fclose(dosya);


	getch();
}
