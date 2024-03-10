#include "iostream"

/*callingMacros()*/
#define TITLE "geek brains"

/*constMacros()
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4*/

/*bitwiseShift()*/
#define UP (1 << 0)
#define DOWN (1 << 1)
#define LEFT (1 << 2)
#define RIGHT (1 << 3)
#define UP_LEFT (UP | LEFT)
#define UP_RIGHT (UP | RIGHT)
#define DOWN_RIGHT (DOWN | RIGHT)

/*Макрос поиска минимального значения. Определяем две переменные (без типа) 
и через тернарный оператор ищем минимальное значение*/
#define MIN(a, b) ((a < (b)) ? (a) : (b))

void callingMacros()
{
	const char* complex_title = "The " TITLE " online courses";
	std::cout << TITLE << std::endl;
	std::cout << complex_title << std::endl;
}

void constMacros()
{
	int command;
	std::cin >> command;
	if (command == UP) std::cout << "UP!" << std::endl;
	else if (command == DOWN) std::cout << "DOWN!" << std::endl;
	else if (command == LEFT) std::cout << "LEFT!" << std::endl;
	else if (command == RIGHT) std::cout << "RIGHT!" << std::endl;
	else std::cout << "error" << std::endl;
}

/*побитовый сдвиг*/
void bitwiseShift()
{
	int command;
	std::cin >> command;
	if (command == UP_RIGHT) std::cout << "UP-RIGHT" << std::endl;
	else if (command == UP) std::cout << "UP!" << std::endl;
	else if (command == DOWN) std::cout << "DOWN!" << std::endl;
	else if (command == LEFT) std::cout << "LEFT!" << std::endl;
	else if (command == RIGHT) std::cout << "RIGHT!" << std::endl;
	else std::cerr << "error" << std::endl;
}

/*ищем минимальное значение из двух значений.
т.к. макрос не имеет тип, вызвать его можно любым типом*/
void min()
{
	std::cout << MIN(20, 10) << std::endl;
	std::cout << MIN("a", "b")<< std::endl;
	std::cout << MIN(5.1, 6) << std::endl;
	std::cout << MIN("a", "5"); //только одинаковые
}

void lesson()
{
	min();
}