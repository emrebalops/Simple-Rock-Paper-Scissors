#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// --- FUNCTION PROTOTYPES ---
// These tell the compiler that these functions exist and will be defined later.
int getUserChoice();
int getComputerChoice();
void determineWinner(int playerChoice, int computerChoice);
void showChoice(int choice); 

int main() { 
    // Variables to store choices
    int choice1; // Player's choice
    int choice2; // Computer's choice
    
    // Initialize random seed based on current time
    // This ensures we get different random numbers each time we run the program.
    srand(time(0));
    
    cout << "WELCOME TO THE ROCK PAPER SCISSORS GAME!" << endl;
    cout << "----------------------------------------" << endl;
    
    // 1. GET USER INPUT
    choice1 = getUserChoice();
    cout << "Your Choice: ";
    showChoice(choice1); // Display the choice as text (Rock/Paper/Scissors)
    
    // 2. GENERATE COMPUTER CHOICE
    choice2 = getComputerChoice();
    cout << "Computer Choice: ";
    showChoice(choice2); // Display the computer's choice as text

    cout << "----------------------------------------" << endl;
    
    // 3. DETERMINE THE WINNER
    determineWinner(choice1, choice2);

    return 0; // End of the program
}

// --- FUNCTION DEFINITIONS ---

// Function to get input from the user
int getUserChoice() {
    cout << "1. Rock , 2. Paper , 3. Scissors" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}

// Function to generate a random choice for the computer
int getComputerChoice() {
    // Generates a random number between 1 and 3
    int num = rand() % 3 + 1;
    return num;
}

// Function to compare choices and decide the winner
void determineWinner(int player, int computer) {
    // Check for draw
    if (player == computer) {
        cout << "Result: It's a Draw!" << endl;
    }
    // Winning conditions for the player
    else if (player == 1 && computer == 3) {
        cout << "Result: You Win! Rock smashes Scissors." << endl;
    }
    else if (player == 2 && computer == 1) {
        cout << "Result: You Win! Paper wraps Rock." << endl;
    }
    else if (player == 3 && computer == 2) {
        cout << "Result: You Win! Scissors cuts Paper." << endl;
    }
    // Losing condition (Computer wins)
    else {
        cout << "Result: Computer Wins! You Lose." << endl;
    }
}

// Helper function to convert the integer choice to a string and print it
void showChoice(int choice) {
    if (choice == 1) cout << "Rock" << endl;
    else if (choice == 2) cout << "Paper" << endl;
    else if (choice == 3) cout << "Scissors" << endl;
    else cout << "Unknown Selection!" << endl;
}