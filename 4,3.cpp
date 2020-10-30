#include <stdio.h>
int main ()
{

int sayi;
int sayac=0;

printf("Bir sayi giriniz\n");
scanf("%d",&sayi);

for(int i=2;i<sayi;i++)    
{
	if(sayi%i==0)
	{
		sayac++;
	}
	
}

if(sayac==0)
{
	printf("sayi asal");
}
else
{
	printf("Asal degildir.");
}
	
}
