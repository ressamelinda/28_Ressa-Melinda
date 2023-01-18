/*
  Pembuat    : Ressa Melinda
  Nis	       : 222310568
  Email      : ressamelinda02@gmail.com
  Kontak     : 087166278821
  Pembimbing : Devi Rodiana
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (ressa,melinda)
*/
#include <conio.h>
#include <iostream.h>

head(char jud[50]=""){
	cout<<"***************************************************************"<<endl;
   cout<<".....................::PEGADAIAN SYARIAH::....................."<<endl;
	cout<<"                       "<<jud<<endl;
  	cout<<"***************************************************************"<<endl;
   if(strcmp(jud,"LOGIN APLIKASI")==0){
    	cout<<"JUDUL     : APP PEGADAIAN SYARIAH"<<endl;
   	cout<<"PEMBUAT   : Ressa Melinda"<<endl;
   	cout<<"NIs       : 222310568"<<endl;
   	cout<<"KELAS     : X PPLG"<<endl;
   	cout<<"VERSI APP : 1.1 (BUILD FULL WITH BORLAND C++)"<<endl;
      cout<<"NOTE      : Gunakan (Username:ressa) dan (Password:melinda)"<<endl;
   	cout<<"***************************************************************"<<endl;
   }
}