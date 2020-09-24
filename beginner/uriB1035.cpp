#include <iostream>

int main()
{
    int A{}, B{}, C{}, D{};
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    if ( (A%2 == 0) && C > 0 && D > 0 )
    {
	if ( B > C && D > A )
	{
	    if ( (C+D) > (A+B) )
	    {
		std::cout << "Valores aceitos\n";
	    }
	    else
		std::cout << "Valores nao aceitos\n";
	}
	else
	    std::cout << "Valores nao aceitos\n";
    }
    else
	std::cout << "Valores nao aceitos\n";

    return 0;
}
