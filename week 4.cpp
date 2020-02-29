#include<stdio.h>
#include<conio.h>
#include<iostream>

main ()
{
int panjang,lebar, jumlah;
printf("input nilai panjang : ");
scanf("%d",&panjang);
printf("input nilai lebar : ");
scanf("%d",&lebar);
jumlah=2*panjang+2*lebar;
printf("\nkeliling stadion = %d",jumlah);
getch();
return 0;
}
