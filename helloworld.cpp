#include <iostream>

int main()
{
    double temp;
    char unit;
    // (1.8 * temp) + 32
    std::cout << "**** Temperature Conversion ****\n";
    std::cout << "Please choose a unit, C or F:  \n";
    std::cin >> unit;
    if (unit == 'f' || unit == 'F')
    {
        std::cout << "Please enter the temperature in Celcius (C) \n";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is " << temp << " degrees F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Please enter the temperature in Farenheit (F) \n";
        std::cin >> temp;

        temp = (temp / 1.8) - 32;
        std::cout << "Temperature is " << temp << " degrees (C) \n";
    }
    else
    {
        std::cout << "Please enter C or F \n";
    }

    std::cout << "************************\n";
    return 0;
}