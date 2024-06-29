#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess = 0;
    int guessAmount = 0;

    cout << "Guess a number between 1 and 100:\n ";

    while (guess!= number) {
        cin >> guess;
        guessAmount++;

        if (guess < number) {
            cout << "Too low! Try again.\n";
        } else if (guess > number) {
            cout << "Too high! Try again.\n";
        }
    }

    cout << "Congratulations! You guessed the correct number in " << guessAmount << " attempts." << endl;

    return 0;
}