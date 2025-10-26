#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string words[] = {
        "programming", "computer", "keyboard", "algorithm", "software",
        "hardware", "function", "variable", "condition", "loop",
        "array", "pointer", "stack", "queue", "compile",
        "debug", "syntax", "operator", "integer", "float",
        "boolean", "string", "char", "class", "object",
        "inheritance", "polymorphism", "encapsulation", "abstraction", "constructor",
        "destructor", "template", "namespace", "virtual", "override",
        "exception", "thread", "process", "binary", "hexadecimal",
        "network", "protocol", "database", "query", "index",
        "search", "sort", "recursion", "dynamic", "memory"
    };

    int n = sizeof(words)/sizeof(words[0]);
    string word = words[rand() % n]; // Random word
    string guessed(word.length(), '_');
    int attempts = 6;
    char guess;

    cout << "Welcome to Hangman!\n";

    while (attempts > 0 && guessed != word) {
        cout << "Word: " << guessed << "\nAttempts left: " << attempts << "\nGuess a letter: ";
        cin >> guess;
        bool correct = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                correct = true;
            }
        }
        if (!correct) attempts--;
    }

    if (guessed == word) cout << "You won! The word was: " << word << endl;
    else cout << "You lost! The word was: " << word << endl;

    return 0;
}
