# Sudoku
Sudoku Solver
Information
Sudoku Solver is a program to solve sudoku puzzle(9x9). These code of C++ programs which deal with Sudoku Puzzles.
Description and Usage
This program was written using visual studio code. To run the program, Simply download the sudoku.cpp, Run it using any standard C++ compiler. Once downloaded, compiled and run; the program will require the user to input the Sudoku puzzle into it. 
The user can input the values manually one-by-one when the program is running.
Function/Methods
Possible:
This function is use to check if given the sudoku is valid or not. It checks all rows, Colum and sub matrix 3by3 if there is any repeated number it returns false. else true.
Findemptyplace:
This function is use check if there is any empty space or 0 in sudoku and returns value in Boolean. 
Solvesudoku:
In this function it fills the empty space with every possible value and check the solution.
It first check if there is empty space if not than returns true. Otherwise, it fill that space and check the result.

Sudokugrid:
This function is use to display the solve sudoku.
