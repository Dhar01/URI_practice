// URI 1002 

#include <iostream>
#include <iomanip>

int main()
{
    double R;
    double A;
    double n { 3.14159 };

    std::cin >> R;

    A = n * R * R;

    std::cout << std::fixed << std::setprecision(4) << "A=" << A << '\n';

    return 0;
}