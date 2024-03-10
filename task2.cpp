#include <iostream>

#define SEASON 3 // 1 - SPRING, 2 - SUMMER, 3 - AUTUMN, 4 - WINTER

void task2()
{
    #if SEASON == 1
        std::cout << "Весна" << std::endl;
    #elif SEASON == 3
        std::cout << "Осень" << std::endl;
    #elif SEASON == 2
        std::cout << "Лето" << std::endl;
    #elif SEASON == 4
        std::cout << "Зима" << std::endl;
    #endif  
}
