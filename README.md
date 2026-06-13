# number_guessing_game# Number Guessing Game

This is a simple number guessing game I built in C++ while practicing programming fundamentals.

The program generates a random number between 1 and 100, and the player has to guess it. After each guess, the program gives a hint by telling the player whether the correct number is higher or lower. It also keeps track of how many valid guesses the player takes.

## Features

* Random number generation
* Higher/Lower hints
* Guess counter
* Input validation for numbers outside the range 1–100
* Simple menu to play again or exit

## Concepts Used

* Variables and data types
* Conditional statements (`if-else`, `switch`)
* Loops (`while`, `do-while`)
* Random number generation using `rand()`, `srand()`, and `time()`
* User input and output

## How to Run

Compile the program:

g++ number_guessing_game.cpp -o game

Run the executable:

./game

## Why I Built This

I created this project to practice C++ fundamentals and get more comfortable working with loops, conditionals, user input, and random number generation.
