#include <iostream>
using namespace std;


int main() {
	int month;
	cout << "Podaj nr miesiaca: " << endl;
	cin >> month;
	switch(month){
		case 1:
			cout << "Styczen." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		case 2:
			cout << "Luty." << endl;
			cout << "W roku nieprzestepnym ma 28 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		case 3:
			cout << "Marzec." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		case 4:
			cout << "Kwiecien." << endl;
			cout << "W roku nieprzestepnym ma 30 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;
		case 5:
			cout << "Maj." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;
		case 6:
			cout << "Czerwiec." << endl;
			cout << "W roku nieprzestepnym ma 30 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;
		case 7:
			cout << "Lipiec." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;
		case 8:
			cout << "Sierpien." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;		
		case 9:
			cout << "Wrzesien." << endl;
			cout << "W roku nieprzestepnym ma 30 dni." << endl;
			cout << "W tym miesiacu jest slonecznie." << endl;
			break;
		case 10:
			cout << "Pazdziernik." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		case 11:
			cout << "Listopad." << endl;
			cout << "W roku nieprzestepnym ma 30 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		case 12:
			cout << "Grudzien." << endl;
			cout << "W roku nieprzestepnym ma 31 dni." << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
		default:
			cout << "Wprowadzono nierawidlowe dane !!!" << endl;
			cout << "W tym miesiacu jest pochmurnie." << endl;
			break;
	}
	return 0;
}
