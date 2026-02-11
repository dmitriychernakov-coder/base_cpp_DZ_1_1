// Name        : base_cpp_dz_1_3.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Enter structure address in C++, Ansi-style
//============================================================================


// Город: Москва
// Улица: Арбат
// Номер дома: 12
// Номер квартиры: 8
// Индекс: 123456
#include <iostream>
struct Address{
    std::string town;
    std::string street;
    int bild;
    int room;
    int index;
};

void outputAddress(Address& data){
    std::cout << "Город: " << data.town << std::endl;
    std::cout << "Улица: " << data.street << std::endl;
    std::cout << "Номер дома: " << data.bild << std::endl;
    std::cout << "Номер квартиры: " << data.room << std::endl;
    std::cout << "Индекс: " << data.index << std::endl;
}

int main(int argc, char** argv){
    int count = 2;
    Address* addr = new Address[count];
    for (int i = 0; i < count; i++)
    {
        std::cout << "\n";
        std::cout << "Введите город: ";
        std::cin >> addr[i].town;
        std::cout << "Введите улицу: ";
        std::cin >> addr[i].street;
        std::cout << "Введите дом: ";
        std::cin >> addr[i].bild;
        std::cout << "Введите квартиру: ";
        std::cin >> addr[i].room;
        std::cout << "Введите индекс: ";
        std::cin >> addr[i].index;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "\n";
        outputAddress(addr[i]);
    }
    delete[] addr;
    
    std::cout << "\n";
    
    return 0;
}
