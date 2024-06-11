#include <iostream>

int main()
{

    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int guess;
    int tries = 0;
    std::cout << "******** GUESSING GAME *********\n";
    do
    {
        std::cout << "Please enter your guess between 1-100 : ";
        std::cin >> guess;
        tries++;

        if (guess > 100)
        {
            std::cout << "Number is not between 1-100, please try again";
            continue;
        }
        else
        {
            if (guess > num)
            {
                std::cout << "To large \n You've guessed " << tries << "times";
            }
            else if (guess < num)
            {
                std::cout << "To low \n You've guessed " << tries << "times";
            }
            else
            {
                std::cout << "CORRECT, Number of guesses: " << tries << '\n';
            }
        }
    } while (guess != num);

    std::cout << "*****************";
    return 0;
}