#include <iostream>
#include <limits>

using namespace std;

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); // get one more char from the user
    return 0;
}
