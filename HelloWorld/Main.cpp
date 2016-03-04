#include "iostream"
#include "BefehlChecker.h"
#include "conio.h"
#include "stdlib.h"

char befehl;
float first;
float second;

void befehlInput() {
	befehl = _getch();
	system("cls");
	checkBefehl(befehl, first, second);
	if (befehl == 'e')
		return;
	befehlInput();
	}


int main() {
	std::cout << "Hello, that's your new calculator!" << std::endl;
	std::cout << "It might not look very great, but there are a lot of features!" << std::endl;
	std::cout << "First type in, what calculation you want to do! All possible calculation methods can be seen with the command c" << std::endl;
	befehlInput();

	return 0;
}

