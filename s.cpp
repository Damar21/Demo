#include <iostream>
#include <conio.h>
using namespace std;

struct NIM
{
	int Tahun_Masuk;
	string Prodi;
	int nomor;
}nim;

struct Mahasiswa
{
	struct NIM
	{
	int Tahun_Masuk;
	string Prodi;
	int nomor;
	}nim;
	char nama[30];
	char alamat[50];
	float ipk;
};

int main()
{
	int jml;
	cout <<"banyaknya array : ";cin>>jml;
	Mahasiswa mhs[jml];
	for (int i=0 ; i<jml; i++){
		cout<<"data ke-"<<i<<endl;
		cout<<"nim	: ";cin>>mhs[i].nim.nomor;
		cout<<"Prodi	: ";cin>>mhs[i].nim.Prodi;
		cout<<"Tahun	: ";cin>>mhs[i].nim.Tahun_Masuk;
		cout<<"nama	: ";cin>>mhs[i].nama;
		cout<<"Alamat	: ";cin>>mhs[i].alamat;
		cout<<"IPK	: ";cin>>mhs[i].ipk;
		cout<<endl;
	}
	cout<<"\n\ndata yang dimasukan \n";
	for (int i=0 ; i<jml; i++){
		
		cout<<"\n**************";
		cout<<"\nnim	: "<<mhs[i].nim.nomor;
		cout<<"\nProdi	: "<<mhs[i].nim.Prodi;
		cout<<"\nTahun	: "<<mhs[i].nim.Tahun_Masuk;
		cout<<"\nnama	: "<<mhs[i].nama;
		cout<<"\nAlamat	: "<<mhs[i].alamat;
		cout<<"\nIPK	: "<<mhs[i].ipk;
	}
	
		getch();
}
