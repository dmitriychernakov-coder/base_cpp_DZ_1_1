// Name        : base_cpp_dz_1_2.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Enter structure data in C++, Ansi-style
//============================================================================

#include <iostream>
struct Person{
    std::string firstName;
    //std::string last_name;
    int countNumber;
    float balance;
};

void changeBalance(Person* b, float newBalance){ // указатель
    b -> balance = newBalance; }

int main(int argc, char** argv){
    Person pers;
    
    std::cout << "Введите номер счета: ";
    std::cin >> pers.countNumber;
  
    std::cout << "Введите имя владельца счета: ";
    std::cin >> pers.firstName;
        
    std::cout << "Введите баланс: ";
    std::cin >> pers.balance;
        
    std::cout << "Введите новый баланс: ";
    float newBalance;
    std::cin >> newBalance;

    //pers.balance = 20;
    changeBalance(&pers,newBalance);
    std::cout << "Ваш счет: " << pers.firstName << ", "
    << pers.countNumber << ", " << pers.balance << std::endl; // 21
}