#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 main (){
	
	int a,t,nomor,c;
	cout <<"menghitung segitiga siku siku\n\n";

	cout <<"daftar menu segitiga siku siku\n";
	cout <<"1. menghitung panjang sisi miring\n";
	cout <<"2. menghitung luas\n";
	cout <<"3. menghitung keliling\n";
	cout <<"4. keluar program\n\n";

	
	cout <<"\n masukkan nomor menu :";
	cin >>nomor;
	
	switch(nomor){
		case 1 :
			cout <<"\nmasukkan data alas dalam satuan cm =";
			cin>>a;
			cout <<"masukkan data tinggi dalam satuan cm =";
			cin>>t;
			c=sqrt((a*a)+(t*t));
			cout <<"\npanjang sisi miring pada segitiga adalah ="<<c; cout<<" cm";
		break;	
		case 2 :
			cout <<"\nmasukkan data alas dalam satuan cm =";
			cin >>a;
			cout <<"masukkan data tinggi dalam satuan cm =";
			cin >>t;
			cout <<"\nluas segitiga adalah ="<<0.5*a*t; cout<<" cm";
		break;	
		case 3 :
			cout <<"\nmasukkan data alas dalam satuan cm =";
			cin >>a;
			cout <<"masukkan data tinggi dalam satuan cm =";
			cin >>t;
			c=sqrt((a*a)+(t*t));
			cout <<"\nkeliling  segitiga adalah ="<<a+t+c; cout <<" cm";
		break;	
		case 4 :
		 cout<<"\n\ntekan ENTER untuk keluar";
			exit(0);
			
	}
	getch();
}
