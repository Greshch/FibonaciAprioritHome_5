// FibonaciAprioritHome_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Input num of fibonaci : ";
    int num = 0;
    std::cin >> num;
    int a = 0;
    int b = 1;
    for (int i = 0; i < num; ++i)
    {
        int sum = a + b;
        std::cout << i + 1 << ".\t" << a << "\n";
        a = b;
        b = sum;
        
    }
}

