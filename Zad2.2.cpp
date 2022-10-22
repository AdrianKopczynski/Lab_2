#include "pch.h"
#include <iostream>
using namespace std;


int main() {
	int a, b;
	cout << "Podaj liczbe a: " <<endl;
	cin >> a;
	cout << "Podaj liczbe b: " <<endl;
	cin >> b;
	cout << "Wiersz o dlugosci a: " << endl;
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl << "Kolumna dlugosci b: "<<endl;
	for (int i = 0; i < b; i++) {
		cout << "*" << endl;
	}
	cout << endl << "Prostokat o wymiarach 'a' na 'b': " << endl;
	for (int i = 0; i < b; i++) {
		for (int n = 0; n < a; n++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl << "Obwod protokatu o wymiarach 'a' na 'b': " << endl;
	for (int i = 0; i < b; i++) {
		for (int n = 0; n < a; n++) {
			if (i <b-1 &&i>0) {
				if (n < a - 1 && n>0) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	cout << endl << "Trojkat prostokatny rownoramienny z katem prosty w lewym dolnym rogu: " << endl;
	int r = 1;
	for (int i = 0; i < a; i++) {
		for (int n = 0; n < r; n++) {
			cout << "*";
		}
		cout << endl;
		r += 1;
	}
	cout << endl << "Trojkat prostokatny rownoramienny z katem prosty w lewym dolnym rogu: " << endl;
	int p = a;
	int y = 0;
	for (int i = 0; i < a; i++) {
		for (int n = 0; n < p; n++) {
			if(y>0){
				for (int e = 0; e < y; e++) {
					cout << " ";
				}
			}
			cout << "*";
		}
		cout << endl;
		p -= 1;
		y += 1;
	}
	return 0;
}