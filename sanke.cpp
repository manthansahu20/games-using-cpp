#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int width = 10;
    const int height = 10;
    int x = width/2;
    int y = height/2;
    int fruitX = rand() % width;
    int fruitY = rand() % height;
    int score = 0;
    char move;

    cout << "Simple Snake Game (text-based)\n";

    while(true) {
        // Draw board
        for(int i=0; i<height; i++) {
            for(int j=0; j<width; j++) {
                if(i==y && j==x) cout << "O"; // Snake head
                else if(i==fruitY && j==fruitX) cout << "F"; // Fruit
                else cout << "-";
            }
            cout << endl;
        }

        cout << "Move (w=up, s=down, a=left, d=right, q=quit): ";
        cin >> move;
        if(move=='q') break;

        if(move=='w' && y>0) y--;
        else if(move=='s' && y<height-1) y++;
        else if(move=='a' && x>0) x--;
        else if(move=='d' && x<width-1) x++;

        if(x==fruitX && y==fruitY) {
            score += 10;
            fruitX = rand() % width;
            fruitY = rand() % height;
            cout << "Fruit eaten! Score: " << score << endl;
        }
        system("clear"); // Use "cls" for Windows
    }

    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
