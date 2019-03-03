
#include <iostream>

int factorial(const int &n){
    if(n){
    	return n * factorial(n-1); 
    } else {
    	return 1;
    }
}

int main(){
    std::cout << "Enter a number:";
    int n;
    std::cin >> n;
    std::cout << "Factorial n=" << factorial(n) << std::endl;
}
