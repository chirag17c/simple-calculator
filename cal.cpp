#include<iostream>

int add(int x, int y) {

    return x+y;

}

int main() {

    //declaring an initialising two variables a and b with 0
    int a=0, b=0;

    //taking user input for variables a and b
    std::cout<<"Enter first integer: ";
    std::cin>>a;
    std::cout<<"Enter second integer: ";
    std::cin>>b;

    //calling function add for adding variables a and b and displaying the output
    std::cout<<"SUM = "<<add(a,b);

    return 0;

}
