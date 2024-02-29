#include <iostream>
#include <cstdlib>
#include <ctime>

class GuessTheNumber {
private:
    int a;

public:
    GuessTheNumber() {
        
        srand(time(0));
        a = rand() % 100 + 1;
    }

    void e() {
        int b, c = 0;
        std::cout << "Guess the number: ";
        do {
            std::cin >> b;
            c++;
            if (b < a) {
                std::cout << "Attempt: " << c << "\n";
                std::cout << "Message: Guessed number is smaller than computer generated number\n";
            } else if (b > a) {
                std::cout << "Attempt: " << c << "\n";
                std::cout << "Message: Guessed number is greater than computer generated number\n";
            } else {
                std::cout << "Attempt: " << c << "\n";
                std::cout << "Congratulation you won the game in " << c << " attempts\n";
                break;
            }
            if (c == 2) {
                std::cout << "Hint to win the game: Now player can guess that after two attempts it is sure that computer generated number is between " << b - 1 << " and " << b + 1 << ".\n";
            }
        } while (b != a);
    }
};

int main() {
    GuessTheNumber f;
    f.e();
    return 0;
}
