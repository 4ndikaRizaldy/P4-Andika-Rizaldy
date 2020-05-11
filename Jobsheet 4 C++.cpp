#include <iostream>
#include<conio.h>
using namespace std;
int main() {
int matriks1[2][2],matriks2[2][2],hasil[2][2],i,j;
char ulang;
cout<<"Nama     : Andika Rizaldy\nNim      : F1B019024\nKelompok : 6\n"<<endl;
cout<<"MATRIKS 1\n";
for (i=0; i<2; i++){
for (j=0; j<2; j++){
cout<<"["<<i<<"]["<<j<<"]: ";
cin>>matriks1[i][j];
}
}
cout<<"\nMATRIKS 2\n";
for (i=0; i<2; i++){
for (j=0; j<2; j++){
cout<<"["<<i<<"]["<<j<<"]: ";
cin>>matriks2[i][j];
}
}
cout<<"\n Hasil Penjumlahan\n\n";
cout<<"Matriks1 - Matriks2 : "<<endl;
for (i=0; i<2; i++){
for (j=0; j<2; j++){
hasil[i][j] = matriks1[i][j] - matriks2[i][j];
cout << hasil[i][j]<<" ";
}
cout << endl;
}
}
