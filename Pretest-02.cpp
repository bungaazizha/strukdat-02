/*
Author		: Bunga Azizha N
NPM			: 140810180016
Tanggal		: Rabu, 6 Maret 2019
Deskripsi	: 
*/
//nama file: exercise-02
#include <iostream>
using namespace std;

void moveZeroToFront(int arr[], int n){
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(arr[count++] = arr[i]);
	}
	while(count<n){
		arr[count++]=0;
	}
	}

void input(int(&arr)[100], int& n){
	cout<<"Masukkan panjang data : "; cin>>n;
	cout<<"Masukkan data : "; cin>>arr;
	}
	
void output(int arr[], int n){
	cout<<"Hasil : ";}

int main(){
	int arr[100];
	int n;
	input(arr,n);
	moveZeroToFront(arr,n);
	output(arr, n);
}

