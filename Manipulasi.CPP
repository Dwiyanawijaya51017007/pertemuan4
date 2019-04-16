#include <iostream.h>
#include <iomanip.h>
#include <conio.h>

int nilai;
float nilai2;
char nama[20];
double gaji;

void main()
{
	cout<<"Masukkan nilai bulat : "; cin>>nilai;
   cout<<"Tampilkan nilai yang anda masukkan "<<endl;
   cout<<"Menggunakan setw(8) : "<<setw(8)<<nilai<<endl;
   cout<<"Menggunakan setw(-8): "<<setw(-8)<<nilai<<endl;
   cout<<"Menggunakan setw(8) dan setfill ('*') : ";
   cout<<setfill ('*')<<setw(8)<<nilai<<endl;
   cout<<setfill (' ') ; //menormalkan penggunaan setfill ('*')
   getch();
   clrscr();
   cout<<"Masukkan nilai pecahan : ";
   cin>>nilai2;
   cout<<"Tampilkan nilai yang anda masukkan "<<endl;
   cout<<"Menggunakan setiosflags(ios::fixed) : "
   	<<setiosflags(ios::fixed)<<nilai2<<endl;
   cout<<"Menggunakan setiosflags(ios::scientific) : "
   	<<setiosflags(ios::scientific);
   cout<<"Menggunakan setprecision(4) : ";
   cout<<setprecision(4)<<nilai2<<endl;
   getch();

   clrscr;
   cout<<"Masukkan nama anda : ";
   cin>>nama;
   cout<<"Masukkan uang saku anda perbulan : ";
   cin>>gaji;
   cout<<"Tampilkan data yang anda masukkan : "<<endl;
   cout<<"Menggunakan setiosflags (ios::left) dan setiosflags(ios::right):" ;
   cout<<endl;
   cout<<setiosflags(ios::left)<<setw(25)<<"N A M A";
   cout<<setiosflags(ios::right)<<setw(10)<<"UANG SAKU"<<endl;
   cout<<setiosflags(ios::left)<<setw(25)<<"nama";
   cout<<setiosflags(ios::left)<<setw(10)<<"gaji";
   }


