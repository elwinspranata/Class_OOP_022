#include <iostream> 
using namespace std;

class mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "masukkan NIM : ";
		cin >> nim;
		cout << "masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;
public:
	void InputMK();
	void TampilanMK();

};

void Matakuliah::InputMK() {
	cout << "\nMasukkan kode Mata kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukkan sks Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::TampilanMK() {
	cout << "\nKode : " << kode << endl;
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "Jumlah SKS : " << sks << endl;
}

int main()
{
	mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.InputMK();
	mk.TampilanMK();

}






