#include <iostream>

int main(void)
{
    int one,two,three,four,five;
    
    std::cout << "1번쨰 정수 입력: ";
    std::cin >> one;
    
    std::cout << "2번쨰 정수 입력: ";
    std::cin >> two;
        
 	std::cout << "3번쨰 정수 입력: ";
    std::cin >> three;
    
    std::cout << "4번쨰 정수 입력: ";
    std::cin >> four;
    
    std::cout << "5번쨰 정수 입력: ";
    std::cin >> five;
    
    int sum = one + two + three + four + five;
    
    std::cout << "합계: " << sum << std::endl;
    return 0;
}
 