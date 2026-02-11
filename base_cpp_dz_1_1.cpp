// Name        : base_cpp_dz_1_1.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Enter month number in C++, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;
// void requestMounthNumber();
// enum class MyEnum {
//     MY_CONST_1,
//     MY_CONST_2,
//     MY_CONST_3,
// };
enum class MonthNum{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

//int numberEnter();


// int main(int argc, char** argv)
// {
// MontnNum season = MontnNum::spring;
// std::cout << static_cast<int>(season) << std::endl; // 0
// numberEnter();
// return 0;
// }

// int num = 3;
// switch(num)
// {
// case 1:
// std::cout << “One” <<
// std::endl; break;
// case 2:
// std::cout << “Two” <<
// std::endl; break;
// case 3:
// std::cout << “Three” <<
// std::endl; break;
// default:
// std::cout << “Unknown” <<
// std::endl; break;


// int numberEnter() {
// 	int number{0};
    
//     do {
//         std::cout << "Введите номер месяца или '0', чтобы зввершить: ";
//         std::cin >> number;
        
//         if(number > 0 && number <= 12){
//             std::cout << "Вы ввели месяц номер: " << number << std::endl;
//         }
//     } while (number != 0);

//     std::cout << "Завершение программы." << std::endl;
//     return number;
// }



void monthName(MonthNum month) {
    switch(month) {
        case MonthNum::JANUARY: std::cout << "Январь\n"; break;
        case MonthNum::FEBRUARY: std::cout << "Февраль\n"; break;
        case MonthNum::MARCH: std::cout << "Март\n"; break;
        case MonthNum::APRIL: std::cout << "Апрель\n"; break;
        case MonthNum::MAY: std::cout << "Май\n"; break;
        case MonthNum::JUNE: std::cout << "Июнь\n"; break;
        case MonthNum::JULY: std::cout << "Июль\n"; break;
        case MonthNum::AUGUST: std::cout << "Август\n"; break;
        case MonthNum::SEPTEMBER: std::cout << "Сентябрь\n"; break;
        case MonthNum::OCTOBER: std::cout << "Октябрь\n"; break;
        case MonthNum::NOVEMBER: std::cout << "Ноябрь\n"; break;
        case MonthNum::DECEMBER: std::cout << "Декабрь\n"; break;
    }
}

void requestMounthNumber(){
    int numberEnter{0};
    
    do {
        std::cout << "Введите номер месяца или '0' для завершения: ";
        std::cin >> numberEnter;
        
        if(numberEnter >= 1 && numberEnter <= 12) {
			 MonthNum numberMonth = static_cast<MonthNum>(numberEnter);
            monthName(numberMonth);
        } else if(numberEnter != 0) {
            std::cout << "Неправильный номер!\n";
        }
    } while(numberEnter != 0);
    
    std::cout << "До свидания.\n";
    
}

int main(int argc, char** argv) {
    requestMounthNumber();
    return 0;
}

