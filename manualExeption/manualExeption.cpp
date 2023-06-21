#include <iostream>
using namespace std;

int main() 
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5;	//melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch(int a) {
		// blok ini akan di eksekusi
		cout << "Pengecualian akan di ekesekusi" << endl;
	}
	catch (...) {
		/*Jika selain integer maka block ini akan dieksekusi*/
		cout << "default Pengecualian dieksekusi" << endl;
	}

	return 0;
}