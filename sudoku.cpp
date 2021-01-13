#include <iostream>
#define N 9
using namespace std;
int grid[N][N] = {
   {0, 5, 0, 3, 1, 4, 0, 6, 0},
   {8, 7, 0, 0, 0, 9, 4, 0, 3},
   {6, 4, 3, 5, 0, 7, 1, 9, 2},
   {0, 0, 7, 8, 0, 5, 2, 1, 0},
   {4, 1, 0, 9, 0, 0, 0, 0, 0},
   {0, 2, 5, 0, 6, 1, 9, 0, 7},
   {7, 9, 0, 2, 5, 0, 8, 4, 0},
   {0, 0, 4, 0, 9, 6, 0, 0, 5},
   {0, 3, 0, 1, 0, 8, 6, 7, 0}
};

bool possible(int row, int col, int num)
{
    int i,j;
    for(i = 0; i < 9 ; i++)
    { 
         if (grid[i][col] == num)
         return false;
    }
    for(j = 0; j < 9; j++)
    {
        if(grid[row][j] == num)
        return false;
    }
    int k = row - row%3;
    int l = col - col%3;
    for (int row = 0; row < 3; row++)
    {
      for (int col = 0; col < 3; col++)
        {   
         if (grid[row+k][col+l] == num)
            return false;
        }
    }
   return true;

}


void sudokuGrid(){ 
   for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
         if(col == 3 || col == 6)
            cout << " | ";
         cout << grid[row][col] <<" ";
      }
      if(row == 2 || row == 5){
         cout << endl;
         for(int i = 0; i<N; i++)
            cout << "---";
      }
      cout << endl;
   }
}
bool findEmptyPlace(int &row, int &col){ 
   for (row = 0; row < N; row++)
      for (col = 0; col < N; col++)
         if (grid[row][col] == 0) 
            return true;
   return false;
}

bool solveSudoku(){
   int row, col;
   if (!findEmptyPlace(row, col))
      return true; 
   for (int num = 1; num <= 9; num++){ 
      if (possible(row, col, num)){ 
         grid[row][col] = num;
         if (solveSudoku()) 
            return true;
         grid[row][col] = 0; 
      }
   }
   return false;
}
int main(){


   if (solveSudoku() == true)
      sudokuGrid();
   else
      cout << "No solution exists";
}