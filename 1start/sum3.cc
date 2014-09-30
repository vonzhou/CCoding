#include <iostream>

int main(){
    int sum = 0;
    int value;
    while(std::cin >> value)
        sum += value;

    std::cout << "The sum is " <<sum << std::endl;
    return 0;
}




