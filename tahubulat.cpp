#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "masukkan aja kak:"; 
	cin >> n;  

	for (int i = 0; i < n; i++) {

		//spasi agar bentuknya segitiga
		for (int s = 0; s < n - i; s++) {
			cout << " "; 
		}


		int val = 1; //nilai pertama setiap baris selalu 1
		for (int j = 0; j <= i; j++) {
			cout << val << " "; 

			//rumus untuk nilai berikutnya di baris pascal
			val = val * (i - j) / (j + 1);
		}
		cout << endl;
	}

	cout << "\n=================================================\n"; 
	cout << "Nama : Gladis Ayu Diapitaloka\n";
	cout << "NIM : 25104410073\n"; 
	cout << "Prodi : Teknik Informatika\n"; 
	cout << "\n=================================================\n";


	return 0; 
}