#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int answer, score = 0;
    
    // Welcome:
    cout << "Welcome to the Math Quiz!" << endl;

    // Question:
    cout << "Question 1: What is 2 * 3?" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    // Answer:
    if (answer == 6) {
        cout << "Correct!" << endl;
        score++;
    }
    else {
        cout << "Wrong. The correct answer is 6." << endl;
    }

    // Question:
    cout << "Question 2: What is 10 / 5?" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    // Answer:
    if (answer == 2) {
        cout << "Correct!" << endl;
        score++;
    }
    else {
        cout << "Wrong. The correct answer is 2." << endl;
    }

    // Question:
    cout << "Question 3: What is 8 * 2?" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    // Anwer:
    if (answer == 16) {
        cout << "Correct!" << endl;
        score++;
    }
    else {
        cout << "Wrong. The correct answer is 16." << endl;
    }

    // Final Score.
    cout << "\nYour final score is: " << score << "/3" << endl;

    // Allow the user to exit the program by pressing any key.
    cout << "Press any key to exit...";
    _getch();

    return 0;
}