#include <iostream>
#include <string> 
// here this is returning a value to its caller
// so it is value returning function
int addTwoInteger(int a,int b)
{
    return a+b;
}
// non value returning function does not return any value to its caller
void printName(std::string name)
{
    std::cout << name;
}

int main()
{
    // call to value returning function
    std::cout << addTwoInteger(69,4) << '\n';
    // call to non-value returning function
    printName("efthakhar bin alam") ;
    std::cout << '\n';
    std::cout << '\n';

    // taking name input from user
    std::string userProvidedName;
    std::cout << "insert a new name" << std::endl;
    std::cin >> userProvidedName ;
    printName(userProvidedName);
    
    return 0;

}