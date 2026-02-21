# Simple Rock Paper Scissors

## Description
A modular, console-based implementation of the classic Rock, Paper, Scissors game written in C++. The user plays against a randomly generating computer opponent. This project demonstrates clean code architecture by separating the core logic into dedicated functions for input handling, randomization, and outcome determination.

## Features
* **Modular Architecture:** Utilizes function prototypes (`getUserChoice`, `getComputerChoice`, `determineWinner`) to keep the `main` execution loop clean and readable.
* **Randomized Opponent:** Uses `<cstdlib>` and `<ctime>` to seed the random number generator, ensuring unpredictable computer choices every session.
* **English Codebase:** All variables, inline documentation, and console interactions are written in professional English.

## How to Run
1.  Compile the source code using a standard C++ compiler (e.g., `g++ main.cpp -o rock_paper_scissors`).
2.  Run the executable in your terminal.
3.  Enter `1` for Rock, `2` for Paper, or `3` for Scissors when prompted by the menu.
