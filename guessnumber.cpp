#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the Number (1-100):\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > number) cout << "Too high! Try again.\n";
        else if (guess < number) cout << "Too low! Try again.\n";
        else cout << "Congrats! You guessed in " << attempts << " attempts.\n";
    } while (guess != number);
    return 0;
}
