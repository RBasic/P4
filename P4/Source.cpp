#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int tab[6][7] = { 0 };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			tab[i][j] = (rand() % 2) + 1;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << "| ";
		for (int j = 0; j < 7; j++)
		{
			if (tab[i][j] == 0)
				cout << " ";
			if (tab[i][j] == 1)
				cout << "X";
			if (tab[i][j] == 2)
				cout << "O";
			cout << " ";
		}
		cout << "|" << endl << "|---------------|" << endl;
	}
	cout << "  0 1 2 3 4 5 6  " << endl << endl;
	return 0;
}