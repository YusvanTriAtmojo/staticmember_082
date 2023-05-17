#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Conctructor
	~angka(); //Destructor
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) { //Constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka(){ //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
	}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "=" << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "="; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //Construktor dipanggil
	angka *ptrBelajarcpp = new angka(5); //Counstruktor dipanggil
	delete ptrBelajarcpp; //Destruktor dipanggil

	return 0;
} //Destruktor dipanggil
