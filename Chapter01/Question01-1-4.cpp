#include <iostream>

int main(void)
{
    int money; // 판매 금액
    int base = 50;
    
    while(1)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end) ";
        std::cin >> money;
        
        if(money<0)
            break;
        
        std::cout << "이번 달 급여: " << base + money * 0.12 <<"만원"<< std::endl;
    }
    std::cout << "프로그램을 종료합니다. " << std::endl;
}