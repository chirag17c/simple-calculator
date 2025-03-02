#include<iostream>

//returns sum of integers x and y
int add(int x, int y) {
    return x+y;
}

//returns difference of integers x and y, i.e., (x-y)
int diff(int x, int y) {
    return x-y;
}

int main() {

    //declaring an initialising two variables a and b with 0
    int a=0, b=0;

    //taking user input for variables a and b
    std::cout<<"\nEnter first integer: ";
    std::cin>>a;
    std::cout<<"Enter second integer: ";
    std::cin>>b;

    //calling function add() and displaying the output
    std::cout<<"\nSUM = "<<add(a,b);

    //calling the function diff() and displaying the output
    std::cout<<"\nDIFFERENCE = "<<diff(a,b);

    return 0;

}
