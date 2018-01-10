#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

/**

*Class C++ pada Struk
*/

class{
public:
char kd[8],*merk;
int hrg,jml,total;
}motor[20];

main()
{
char sales[20],nm[20],lagi;
float tb=0;
int i,j;
clrscr();
awal:
cout<<"        HONDA MOTOR"<<endl;
cout<<"        SATU HATI  "<<endl;
cout<<"        Dealer TANGERANG SELATAN"<<endl;
cout<<"================================"<<endl;
cout<<" Sales 			: ";cin.getline(sales,sizeof(sales));
cout<<" Pembeli 		: ";cin.getline(nm,sizeof(nm));
cout<<" Jumlah data		: ";cin>>j;
for(i=1;i<=j;i++)
{
cout<<" \n Data ke- "<<i<<endl;
cout<<" Kode [BEAT/SCPY/VARIO] : ";cin>>motor[i].kd;
if(strcmp(motor[i].kd,"BEAT")==0|| strcmp(motor[i].kd,"beat")==0)
{
motor[i].merk="Beat";
motor[i].hrg=15400000;
}
else if(strcmp(motor[i].kd,"SCPY")==0|| strcmp(motor[i].kd,"scpy")==0)
{
motor[i].merk="Scoopy";
motor[i].hrg=16500000;
}
else if(strcmp(motor[i].kd,"VARIO")==0|| strcmp(motor[i].kd,"vario")==0)
{
motor[i].merk="Vario 125";
motor[i].hrg=20400000;
}
else
{
cout<<" Anda Salah Memasukkan Kode . . !!!, input Kode [BEAT/SCOOPY/VARIO] . ."<<endl;
cout<<" Ingin Input Lagi : ";cin>>lagi;
if(lagi=='Y'||lagi=='y')
goto awal;
else
goto akhir;
}
cout<<" Masukan Jumlah Beli : ";cin>>motor[i].jml;
motor[i].total=motor[i].hrg*motor[i].jml;
tb=motor[i].total+tb;
}
clrscr();

cout<<"HONDA MOTOR"<<endl;


cout<<"layanan konsumen telp: 9877"<<endl;

cout<<"======================================================"<<endl;
cout<<"Nama Sales :"<<sales<<endl;
cout<<"Nama Pembeli :"<<nm<<endl;
cout<<"======================================================"<<endl;
cout<<"No. Kode      Motor    Harga         Jumlah     Total "<<endl;
cout<<"                                                      "<<endl;
cout<<"======================================================"<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(10)<<motor[i].kd;
cout<<setiosflags(ios::left)<<setw(9)<<motor[i].merk;
cout<<setiosflags(ios::left)<<setw(15)<<motor[i].hrg;
cout<<setiosflags(ios::left)<<setw(7)<<motor[i].jml;
cout<<setiosflags(ios::left)<<setw(24)<<motor[i].total<<endl;
}
cout<<"======================================================="<<endl;
printf(" Total bayar Rp. %4.0f",tb);
cout<<endl;

cout<<" Input Lagi : ";cin>>lagi;
if(lagi=='Y'||lagi=='y')
goto awal;
else
goto akhir;
akhir:
getch();
}
