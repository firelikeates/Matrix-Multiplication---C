#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Turkish");


int a,b,c,d,e,f,g,h,m,n,l,i,j,k,o,p;


printf(	"**********MATRÝS çARPIM********** ");
printf("\n");
printf("PS: Eðer çarpma iþlemi yapýcaksanýz birinci matrisin sütün sayýsý ile ikinci matrisin satýr sayýsý ayný olmalý!!\n");
printf("PS: Eger toplama veya çýkarma iþlemi yapýcaksanýz matrislerin satýr ve sütün saýlarý ayný olmalý!!");
printf("\n");

printf("Yapmak istediðiniz iþlemi seçin:(1:Toplama , 2:Çýkarma , 3: Çarpma) ");
scanf("%d",&e);
printf("\n");


printf("Birinci matrisin satýr sayýsýný girin: ");
scanf("%d",&a);
printf ("\n");

printf("Birinci matrisin sütun sayýsýný girin: ");
scanf("%d",&b);
printf("\n");


printf("Ýkinci matrisin satur sayýsýný giriniz: ");
scanf("%d",&g);
printf("\n");

printf("Ýkinci matrisin sütun sayýosýný giriniz: ");
scanf("%d",&h);
printf("\n");

int matris1[a][b];

for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		printf("1. Matrisin %d-%d elemanýný girin: ",i,j);
		scanf("%d",&f);
		printf(" \n");
		matris1[i][j]=f;
	}
}


int matris2[g][h];


for(i=0;i<g;i++){
	for(j=0;j<h;j++){
		printf("2. Matrisin %d-%d elamýný girin: ",i,j);
		scanf("%d",&f);
		printf("\n");
		matris2[i][j]=f;
	}
}

int result[m][n];
int toplam;
switch(e){
	case 3:
		for(i=0;i<a;i++){
			for(j=0;j<h;j++){
				result[i][j]=0;
			}
		}
		for(i=0;i<a;i++){
			for(j=0;j<h;j++){
				toplam=0;
				for(k=0;k<b;k++){
					toplam = toplam + (matris1[i][k] * matris2[k][j]);
				}
				
				printf("%d ",toplam);
			}
			printf("\n");
		}
}


/*
switch(a){
	case 1:
		for(i=0;i<4;i++){
	    	for(j=0;j<4;j++){
				printf("%d ",cevap[i][j]=matris2[i][j] + matris[i][j]);
			}
			printf("\n");
		}
		break;
	case 2:
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				printf("%d ",cevap[i][j]=matris[i][j]-matris2[i][j]);
			}
			printf("\n");
		}
		break;
	case 3:
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				result[i][j]=0;
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				for(k=0;k<4;k++){
					result[i][j]=matris[i][k]*matris2[k][j] + result[i][j];
				}
			printf("%d ",result[i][j]);	
			}
			printf("\n");	
		}
		break;

		
		
	
}*/



	return 0;
}
