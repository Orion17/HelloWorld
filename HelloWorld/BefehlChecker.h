#include "iostream"
#include "stdlib.h"

void checkBefehl(char befehl, float first, float second) {
	switch (befehl) {
	case 'c':
		system("cls");
		std::cout << "Divide d, Add a, Multipliying m, Subtraction s" << std::endl;
		break;
	case 'd':
		system("cls");
		std::cout << "First type in the number, you want to devide. Then hit Enter. Now type the number, you want to devide it through. Enter." << std::endl;
		std::cin >> first;
		std::cout << "ö"<< std::endl;
		std::cin >> second;
		std::cout << "=" << std::endl;
		std::cout << first / second << std::endl;
		std::cout << "You can now type in a command again. For exit e. For calculation methods c." << std::endl;
		break;
	case 'a':
		system("cls");
		std::cout << "First type in the number, you want to add to. Then hit Enter. Now type the number, you want to add. Enter." << std::endl;
		std::cin >> first;
		std::cout << "+" << std::endl;
		std::cin >> second;
		std::cout << "=" << std::endl;
		std::cout << first + second << std::endl;
		std::cout << "You can now type in a command again. For exit e. For calculation methods c." << std::endl;
		break;
	case 'm':
		system("cls");
		std::cout << "First type in the number, you want to multiply with. Then hit Enter. Now type the number, you want to multiply. Enter." << std::endl;
		std::cin >> first;
		std::cout << "*" << std::endl;
		std::cin >> second;
		std::cout << "=" << std::endl;
		std::cout << first * second << std::endl;
		std::cout << "You can now type in a command again. For exit e. For calculation methods c." << std::endl;
		break;
	case 's':
		system("cls");
		std::cout << "First type in the number, you want to subtract from. Then hit Enter. Now type the number, you want to subract. Enter." << std::endl;
		std::cin >> first;
		std::cout << "-" << std::endl;
		std::cin >> second;
		std::cout << "=" << std::endl;
		std::cout << first - second << std::endl;
		std::cout << "You can now type in a command again. For exit e. For calculation methods c." << std::endl;
		break;
	}
}
