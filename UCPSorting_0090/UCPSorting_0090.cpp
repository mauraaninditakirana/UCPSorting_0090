// 1. mencari elemen terkecil untuk diletakkan di awal array
//  dengan membagi menjadi dua bagian, array yang terurut dan belum 
//  anggap yang pertama sudah urut, sehingga menjadi bagian dari array yang terurut
//	kemudian, telusuri elemen, bandingkan dengan array yang sudah terurut, tentukan posisi yang tepat baginnya
//	kalau lebih kecil, maka di sisi kirinya, kalau lebih besar, di sisi kanannya.
// 2. dengan membandingkan elemen dari yang terkecil dengan yang terbesar, pertama menentukan index awalnya dengan menandari array yang paling besar,
//	mencari elemen yang lebih besar dari elemen array di perulangan pertama, dilakukan pengecekan elemen secara berulang, kemudian semisal, jika elemen ke 3 lebih kecil daripada elemen 0 maka 
// conditional statement(tidak dilakukan pengulangan) karena sudah selesai J<n.
// 3. dengan menggunakan rumus, rumusnya = jumlah data -1  atau n-1.
// 4. 

#include <iostream>
#include <string>
using namespace std;
int main() {
	int nickname[10];
	int n;
}
void input(){
		while(true){
			cout << "Masukkan berapa banyak elemen pada array";
			cin >> n;
			if (n <= 2) {
				break;
			}
			else {
				cout << "Jumlah maksimal elemen pada array adalah 2" << endl;
				cout << "Silahkan coba lagi" << endl;
				cout << "===================" << endl;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << "Masukkan data ke - " << i + 1 << "=";
			cin >> nickname[i];
		}
}
	void SelectionSort() {
		for (int j = 0; j < n; j++) {
			int min_index = j
				for (int i = j + 1; i < n; i++) {
					if (nickname[i] < arr[min_index]) {
						min_index = i;
					}
				}
		}
		int temp = nickname[j];
		nickname[j] = nickname[min_index];
		nickname[min_index] = temp;
		cout << "\nPass" << j + 1 << "=";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;

	}
	void display() {
		cout << "=================" << endl;
		cout << "nilai yang sudah terurut" << endl;
		cout << "==================" << endl;
		for (int i = 0; i < n; i++) {
			cout << arr[i];
			if (i < n - 1) {
				cout << "-->";
			}
		}
		int main(){
			input();
			SelectionSort();
			display();
			return 0;
	


