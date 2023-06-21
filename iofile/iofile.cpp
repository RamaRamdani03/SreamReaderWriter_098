#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file 
	outfile.open("Contohfile.txt");

	cout << ">= Menulis File , \'q\' untuk keluar" << endl;

	// unlimited loop untuk menulis 
	while (true) {
		cout << "- ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// loop akan berhenti jika anda memasukan karakter q
		if (baris == "q")break;
		// menulis dan memasukan nilai dari 'baris' kedalam file
		outfile << baris << endl;
	} 
	// selesai dalam menulis sekarang tutup filenya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;
	// menunjuk ke sebuah file
	infile.open("Contohfile.txt");

	cout << endl << ">= Membuka dan Membaca file " << endl;
	// jika file ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris