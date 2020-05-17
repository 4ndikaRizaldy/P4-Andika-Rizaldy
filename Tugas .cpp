#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
void login(){
string user, nim;
char pilih, reapeat;
ulang :
cout<<"\n";
cout<<"\t\t\t\tSelamat Datang Di Halaman Login Kuis"<<endl;
cout<<setw(31);
for(int b=0;b<=42;b++)
{cout<<(char)196;}
cout<<"\n\t\t\t     =============================================";
cout<<"\n\t\t\t     ||       Kuis COVID-19 With Array          ||";
cout<<"\n\t\t\t     =============================================";
cout<<setw(77);
for(int b=0;b<=42;b++)
{cout<<(char)196;}
cout<<"\n\t\t\t Masukkan Nama Anda : ";cin>>user;
cout<<"\t\t\t Masukkan Nim  Anda : ";cin>>nim;
system("cls");
}

void rule(){
string atur[10]={"Jujur", "Tidak curang", "Adil", "Menjawab Sendiri", "Jika Benar +10 dan Jika Salah -5"};
cout<<setw(26);
for (int i=0; i<20;i++){
cout<<(char)196;}
cout<<"\n\t\t\t Aturan Kuis COVID-19 \n";
cout<<setw(26);
for (int i=0; i<20;i++){
cout<<(char)196;}
cout<<"\n";
for (int i=0;i<=4;i++)
cout<<setw(26)<<i+1<<". "<<atur[i]<<"\n";
cout<<"\t\t\t";
system("pause");
}

void soal(){
system("cls");
float nilai,pnilai;
char jawab, choose,choosed,input;
int pilih;
char isi;
int benar = 0;
int salah = 0;
cout<<"=========\n";
cout<<"| NO. 1 |\n";
cout<<"=========\n";
cout<<"\t\t Apa Kepanjangan COVID-19 ? \n";
string no1[10]={"A. Corona Virus Disease  2019", "B. Corona Virus Disaster 2019", "C. Corna  Virus Disease  2019", "D. Corona Virus Disea    2019"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no1[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='A'||jawab=='a')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 2 |\n";
cout<<"=========\n";
cout<<"\t\t Di Bawah Ini Manakah Yang Termasuk Cara Pencegahan Virus Corona ? \n";
string no2[10]={"A. Social Run", "B. Social Disaster", "C. Social Distancing", "D. Sosial Media"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no2[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='C'||jawab=='c')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 3 |\n";
cout<<"=========\n";
cout<<"\t\t Penyebaran virus corona pertama kali terjadi di negara ? \n";
string no3[10]={"A. Korea", "B. Indonesia", "C. Italia", "D. China"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no3[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='D'||jawab=='d')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 4 |\n";
cout<<"=========\n";
cout<<"\t\t Berapa lama masa inkubasi dari virus corona ? \n";
string no4[10]={"A. 12 Hari", "B. 2 Minggu ", "C. 30 Hari", "D. 7 Hari "};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no4[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='B'||jawab=='b')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 5 |\n";
cout<<"=========\n";
cout<<"\t\t Berdasarkan hasil penelitian dari National Institute of Allergy and Infectious \n";
cout<<"\t\t Diseases, ukuran COVID-19 adalah ? \n";
string no5[10]={"A. 120-160 nanometer", "B. 120-160 mikrometer ", "C. 160-200 nanometer", "D. 160-200 mikrometer"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no5[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='A'||jawab=='a')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 6 |\n";
cout<<"=========\n";
cout<<"\t\t Apa Yang Selalu digunakan masyarakat untuk menghindari COVID-19 adalah ? \n";
string no6[10]={"A. Topi", "B. Masker Wajah ", "C. Sabun Batang", "D. Masker Mulut dan Hand Sanitizer"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no6[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='D'||jawab=='d')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 7 |\n";
cout<<"=========\n";
cout<<"\t\t Apa nama pakaian yang digunakan perawat untuk menangani pasien yang terjangkit virus corona ? \n";
string no7[10]={"A. Pakaian Adat", "B. APD", "C. Kimono ", "D. Jirah Besi"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no7[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='B'||jawab=='b')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 8 |\n";
cout<<"=========\n";
cout<<"\t\t Apa Kepanjangan PDP Virus Corona? \n";
string no8[10]={"A. Pasien  Dalam Pelarian", "B. Perawat Dalam Pelatihan", "C. Pasien  Dalam Pengawasan", "D. Perawat Dalam Pemulihan"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no8[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='C'||jawab=='c')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"=========\n";
cout<<"| NO. 9 |\n";
cout<<"=========\n";
cout<<"\t\t Kota Pusat Penyebaran Virus Corona Pertama Kali? \n";
string no9[10]={"A. Madrid", "B. Roma", "C. Bali", "D. Wuhan"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no9[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='D'||jawab=='d')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");

cout<<"==========\n";
cout<<"| NO. 10 |\n";
cout<<"==========\n";
cout<<"\t\t Apa Saja Gejala COVID-19 ? \n";
string no10[10]={"A. Demam >=38C, Batuk Kering, dan Sesak Napas.", "B. Pusing, Batuk Berdahak dan Mual", "C. Mules, Flu, dan Nyeri Sendi ", "D. Batuk Berdahak, Flu, dan Pusing"};
for(int i=0;i<=3;i++){cout<<"\t\t "<<no10[i]<<"\n";}
cout<<"\t\t Jawab : ";cin>>jawab;
if(jawab=='A'||jawab=='a')
{cout<<"\t\tJawaban Anda Benar\n";benar+=10;}
else {cout<<"\t\tJawaban Anda Masih Salah\n";benar-=5;}
cout<<"\t\t";
system("pause");
system("cls");
goto pnilai;

pnilai:
nilai = benar *1;
cout<<"\t\t\t Hasil Kuis \n\n";
if (nilai>=80)
{
cout<<"\n\t\t\t Perfect ";
}
else if (nilai<80&&nilai>=75)
{
cout<<"\n\t\t\t Very Good ";
}else if (nilai<75&&nilai>=65)
{
cout<<"\n\t\t\t Good ";
}else if (nilai<65&&nilai>=50)
{
cout<<"\n\t\t\t your results are not too bad ";
}
else
{
cout<<"\n\t\t\t Try Again ";
}
cout<<"\n\t\t\t Nilai anda adalah : "<<nilai;
cout<<"\n\n\t\t\t Main Lagi ?  [y/t] :  ";cin>>choosed;
if(choosed=='Y'||choosed=='y')
{
soal();
}
else
{
cout<<"\n\t\t\tTerima Kasi Telah Mencoba";
exit;
}
}

int main (){
login();
rule ();
soal ();

}
