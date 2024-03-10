#include "iostream"

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

void task1()
{
	int n;
	std::cin >> n;
	if (n == MONDAY) std::cout << "Понедельник" << std::endl;
	else if (n == TUESDAY) std::cout << "Вторник" << std::endl;
	else if (n == WEDNESDAY) std::cout << "Среда" << std::endl;
	else if (n == THURSDAY) std::cout << "Четверг" << std::endl;
	else if (n = FRIDAY) std::cout << "Пятница" << std::endl;
	else if (n = SATURDAY) std::cout << "Суббота" << std::endl;
	else if (n = SUNDAY) std::cout << "Воскресенье" << std::endl;
	else std::cerr << "error" << std::endl;
}