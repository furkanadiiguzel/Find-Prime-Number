# Prime Number Finder

This repository contains a C program that reads a list of numbers from the "numbers.txt" file and identifies the prime numbers within the list. The program also determines the maximum prime number along with its subscript.

## Code Overview

The C program uses the `isPrime` function to check whether a given number is prime or not. The main function reads numbers from "numbers.txt" and displays the prime numbers found.

### Code Components

1. **numbers.txt**: Input file containing a list of numbers.

2. **finding_prime_number.c**: Main C file containing the prime number identification logic.
   - The program reads numbers from "numbers.txt".
   - Prime numbers are identified and displayed.

## Code Structure

### Files
- `finding_prime_number.c`: Main program file.
- `numbers.txt`: Input file with a list of numbers.

### Constants
- `_CRT_SECURE_NO_WARNINGS`: Preprocessor directive for Visual Studio (ignores certain warnings).

### Functions
- `isPrime`: Checks whether a given number is prime or not.

## Usage
1. Ensure that "numbers.txt" contains the list of numbers you want to analyze.
2. Compile and run the program.
3. The program will display the prime numbers found in the list.

Feel free to explore and modify the code based on your requirements.

**Note:** Ensure that you have a C compiler to successfully build and run the code.

Happy coding!
