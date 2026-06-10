#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Guess the number between 1 and 100\n";

    while (guess != number) {
        cout << "Enter guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high\n";
        } else if (guess < number) {
            cout << "Too low\n";
        } else {
            cout << "You won in " << attempts << " attempts!\n";
        }
    }
    return 0;
}
