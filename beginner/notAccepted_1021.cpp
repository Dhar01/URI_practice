#include <iostream>
#include <iomanip>

int main()
{
    double array[] { 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01 };
    double price{ +1e-9 };
    std::cin >> price;

    int money{ 0 };

    std::setprecision(2);

    std::cout << "NOTAS:\n";
    while (array[money] >= 0.01)
    {
        int c { 0 };
        while ( price >= array[money] )
        {
            price -= array[money];
            c++;
        }

        if ( array[money] == 1.0 )
            std::cout << "MOEDAS:\n";
        
        if ( array[money] >= 2.0 )
            std::cout << "" << c << " nota(s) de R$ " << array[money] << '\n';
        else
            std::cout << "" << c << " moeda(s) de R$ " << array[money] << '\n';

        money++;
    }

    return 0;
}
