#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Random number between 1 and 100
    int target = rand() % 100 + 1;
    int attempt = 0;
    int input;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Try to guess it. Let's see how many attempts you need!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> input;
        attempt++;

        if (input < target) {
            cout << "Too low. Try again." << endl;
        } else if (input > target) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Correct! You guessed the number in " << attempt << " attempt";
            if (attempt > 1) cout << "s";
            cout << "." << endl;
            break;
        }
    }

    cout << "Game over. Thanks for playing!" << endl;

    return 0;
}
