/*
Nama		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Membuat Struct Theater dengan menampilkan room,seat dan movie tittle
Tahun		: 2019
*/
//exercise-02

#include<iostream>
#include<string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle [30];
};

int main(){
	Theater theater;
	theater.room= 7;
	
	strcpy(theater.seat, "J9");
	strcpy(theater.movieTitle, "Adit & Jarwo");
	
	
	cout<< theater.room <<endl;			//mengoutputkan room theater
	cout<< theater.seat <<endl;			//mengoutputkan seat
	cout<< theater.movieTitle <<endl;	//mengoutputkan Movie Tittle
}
