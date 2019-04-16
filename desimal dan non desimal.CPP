// penggunaan desimal dan non desimal
#include <iostream.h>
#include <conio.h>

main() {
	int a,b,mod;
   float hasil;
   cout<<"\n\tContoh penggunaan / dan %n\n";
   cout<<"\tMasukkan angka pertama (a) = ";cin>>a;
   cout<<"\tMasukkan angka kedua 	(b) = ";cin>>b;
   hasil=float(a)/b;
   mod=a%b;
   cout<<"\n\Hasil pembagian			= "<<hasil;
   cout<<"\n\Sisa hasil bagi			= "<<mod;
   getch();
   }