/*
Nama		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Membuat Struct data diri dengan mengoutputkan umur,nama,goldar dan jk
Tahun		: 2019
*/
//exercise-01

#include<iostream>
using namespace std;

struct Orang{		//struct orang
	int umur;
	char nama[30];
	char goldar[2];
	char jk[1];
};

int main(){
	Orang orang;
	
	cout<<"Umur: "; cin>>orang.umur;
	cout<<"Nama: "; cin>>orang.nama;
	cout<<"Goldar: "; cin>>orang.goldar;
	cout<<"Jenis Kelamin: "; cin>>orang.jk;
	cout<<endl;
	
	cout<< orang.umur <<endl;
	cout<< orang.nama <<endl;
	cout<< orang.goldar <<endl;
	cout<< orang.jk <<endl;
}

