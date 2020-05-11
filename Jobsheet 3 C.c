#include<stdio.h>
#include<conio.h>
int main(){
int matriks1[2][2],matriks2[2][2],i,j;
printf("Nama     : Andika Rizaldy\nNim      : F1B019024\nKelompok : 6\n");
printf ("PENJUMLAHAN MATRIKS \n");
printf("MATRIKS 1\n");
for (i=0; i<=1; i++){
for (j=0; j<=1; j++){
printf("Elemen[%d][%d] : ",i,j);
scanf("%d",&matriks1[i][j]);
}
}
printf("\nMATRIKS 2\n");
for (i=0; i<=1; i++){
for (j=0; j<=1; j++){
printf("Elemen[%d][%d] : ",i,j);
scanf("%d",&matriks2[i][j]);
}
}
printf("\n Hasil Penjumlahan\n\n");
printf("Matriks1 + Matriks2 : \n");
for (i=0; i<=1; i++){
for (j=0; j<=1; j++)
printf("%d\t", matriks1[i][j]+matriks2[i][j]);
printf("\n");}getch();
}
