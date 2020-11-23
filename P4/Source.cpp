#include <iostream>
#include <time.h>

using namespace std;

void show(int a[6][7]) {
	for (int i = 0; i < 6; i++)
	{
		cout << "| ";
		for (int j = 0; j < 7; j++)
		{
			switch (a[i][j]) {
			case 0:
				cout << " ";
				break;
			case 1:
				cout << "X";
				break;
			case 2:
				cout << "O";
				break;
			default:
				break;
			}
			cout << " ";
		}
		cout << "|" << endl << "|---------------|" << endl;
	}
	cout << "  1 2 3 4 5 6 7  " << endl << endl;
}

int main() {
	srand(time(NULL));
	int tab[6][7] = { 0 };
	show(tab);

	//Test random
	/*for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			tab[i][j] = (rand() % 2) + 1;
		}
	}*/
	int colonne;
	while (1) {
		cin >> colonne;
		colonne--;
		for (int i = 5; i >= 0; i--) {
			if (tab[i][colonne] == 0) {
				tab[i][colonne] = 1;
				break;
			}
		}
		show(tab);
	}
	return 0;
}