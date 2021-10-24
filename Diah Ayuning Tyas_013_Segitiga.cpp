#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float alas,tinggi,sisi_miring,keliling;
	cout<<"Menghitung Sisi Miring Segitiga"<<endl;
	cout<<"Masukkan nilai alas = ";
	cin>>alas;
	cout<<"Masukkan nilai tinggi = ";
	cin>>tinggi;
	sisi_miring = sqrt(alas*alas+tinggi*tinggi);
	cout<<"Hasil sisi miring = "
	<<sisi_miring;
	cout<<endl;
	cout<<endl;
	cout<<"Menghitung Keliling Segitiga"<<endl;
	cout<<"Masukkan nilai alas = "<<alas<<endl;
	cout<<"Masukkan nilai tinggi = "
	<<tinggi<<endl;
	keliling = alas*tinggi*sisi_miring;
	cout<<"Hasil Keliling = "
	<<keliling;
}
