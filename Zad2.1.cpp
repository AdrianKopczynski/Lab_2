#include <iostream>
using namespace std;


int main() {
	int n = 0;
	int wynik = 0;
	cout << "Podaj ilosc powtorzen: ";
	cin >> n;
	while (n > 0) {
		int o = 0;
		for (int i = 0; i < n; i++) {
			o += 1;
			wynik += o ;
		}
		n--;
	}
	cout << "wynik wynosi : " << wynik << endl;
	return 0;
}