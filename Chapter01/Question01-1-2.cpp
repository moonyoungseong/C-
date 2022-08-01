#include <iostream>

int main(void)
{
    char name[100];
    char number[100];
    
    std::cout << "이름이 무엇이니? ";
    std::cin >> name;
    
    std::cout << "전화번호가 무엇이니? ";
    std::cin >> number;
    
    std::cout << "이름: " << name << " 전화번호: " << number << std::endl;
}