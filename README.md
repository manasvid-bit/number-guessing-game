# Number Guessing Game (C)

This is a simple command line number guessing game written in C.

The program generates a random number between 1 and 100 and the user has to guess the number. After every guess the program tells whether the guess is too high or too low. The game continues until the correct number is guessed.

## How it works

* The computer generates a random number between 1 and 100
* The user enters guesses through the terminal
* The program gives hints ("Too high" or "Too low")
* The game ends when the correct number is guessed
* The total number of attempts is displayed

## Concepts used

* Random number generation using `rand()` and `srand()`
* Loops
* Conditional statements (`if` / `else`)
* User input using `scanf`

## How to compile and run

Compile the program:

```
gcc guess.c -o guess
```

Run the program:

```
./guess
```

On Windows:

```
.\guess.exe
```

## Files in this project

* `guess.c` – main source code
* `.gitignore` – ignores compiled files


