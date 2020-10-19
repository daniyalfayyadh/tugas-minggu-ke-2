/* Program Delapan */ 
/* Program pemilihan kode jurusan */ 

#include<conio.h> 
#include<iostream>
 
using namespace std;
int main()
{ 
char nama[30],golongan_; 
int jjam,jlembur,glembur;
cout<<"\npengumuman gaji karyawan dalam satu minggu\n\n";
cout <<"Masukkan nama karyawan: ";
cin >>nama; 
cout <<"Pilih golongan [A/B/C/D] : "; 
cin>>golongan_;
switch (golongan_) 
{ 
case 'A' : 
            cout<<"jumlah jam kerja dalam seminggu =";
			cin>>jjam;
			if (jjam<48){
				cout<<"\n\nmaaf jumlah jam anda kurang dari satu minggu";
			}
			
			jlembur=jjam-48;
			glembur=jlembur*4000;
			if (jjam>=48){
			
			cout<<"\nnama karyawan :"<<nama;
			cout <<"\njumlah jam lembur anda ="<<jlembur;
			cout <<"\nupah lembur anda ="<<glembur;
			cout<<"\ngaji total anda adalah :"<<240000+glembur;
        }

break; 
 
case 'B' : 
             cout<<"jumlah jam kerja dalam seminggu =";
			cin>>jjam;
			if(jjam<48){
				cout<<"\n\nmaaf jumlah jam anda kurang dari satu minggu";
			}
			jlembur=jjam-48;
			glembur=jlembur*4000;
			if(jjam>=48){
				
			
			cout<<"\nnama karyawan :"<<nama;
			cout <<"\njumlah jam lembur anda ="<<jlembur;
			cout <<"\nupah lembur anda ="<<glembur;
			cout<<"\ngaji total anda adalah :"<<336000+glembur;
        }
break;
 
case 'C' : 
             cout<<"jumlah jam kerja dalam seminggu =";
			cin>>jjam;
			if(jjam<48){
				cout<<"\n\nmaaf jumlah jam anda kurang dari satu minggu";
			}
			jlembur=jjam-48;
			glembur=jlembur*4000;
			if(jjam>=48){
			cout<<"\nnama karyawan :"<<nama;
			cout <<"\njumlah jam lembur anda ="<<jlembur;
			cout <<"\nupah lembur anda ="<<glembur;
			cout<<"\ngaji total anda adalah :"<<384000+glembur; 
        }
break; 
 
case 'D' : 
             cout<<"jumlah jam kerja dalam semingu =";
			cin>>jjam;
			if(jjam<48){
			cout<<"\n\nmaaf jumlah jam anda kurang dari satu minggu";
			}
			jlembur=jjam-48;
			glembur=jlembur*4000;
			if(jjam>=48){
			
			cout<<"\nnama karyawan :"<<nama;
			cout <<"\njumlah jam lembur anda ="<<jlembur;
			cout <<"\nupah lembur anda ="<<glembur;
			cout<<"\ngaji total anda adalah :"<<480000+glembur; 
        }
break;

}


getch();

}
