#include <iostream>

int main(){
    int curVal = 0, val = 0;
    int count;
    if(std::cin >> curVal){
        count = 1;
        while(std::cin >> val){
            if(val == curVal)
                count ++;
            else{
                std::cout << curVal << " ocuurs "<< count <<" times"<< std::endl;
                curVal = val;
                count = 1;
            }
        }
        std::cout << curVal << " ocuurs "<< count <<" times"<< std::endl;
    }

    return 0;
}
