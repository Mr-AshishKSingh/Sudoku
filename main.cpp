#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define N 9


class sudoku{
	int user_input_grid[N][N]={
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	int options;
	int rendom_number;

	public:
	void main_menu();
	void get_grid_input();
	void display_input_grid();
	void copy_inputgrid_to_solver_grid();
	void solver();
	void rendom_question();
};


int grid[N][N] = {
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0}
};

void sudoku::rendom_question(){
	srand(time(0));
	for(int i= 0 ; i < 1 ; i++){
		rendom_number = (rand()%100 ) +1;
	}
	cout << rendom_number;
	switch(rendom_number){
		
			
		case 1:
				{
	int rendom_grid[N][N] ={
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0}
	};

	cout << endl;
	cout << "THE QUESTION IS : " << endl;

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
	 //start from here ;;;;;;

				
				}
	 break;

		case 2:
	 {
	 cout << "case 2" << endl;
	 }
	 break;


	   case 3:{

			  }


	cout << "case 3" << endl;
	break;
	}

	
}

bool isPresentInCol(int col, int num){ //check whether num is present in col or not
   for (int row = 0; row < N; row++)
      if (grid[row][col] == num)
         return true;
   return false;
}
bool isPresentInRow(int row, int num){ //check whether num is present in row or not
   for (int col = 0; col < N; col++)
      if (grid[row][col] == num)
         return true;
   return false;
}
bool isPresentInBox(int boxStartRow, int boxStartCol, int num){
//check whether num is present in 3x3 box or not
   for (int row = 0; row < 3; row++)
      for (int col = 0; col < 3; col++)
         if (grid[row+boxStartRow][col+boxStartCol] == num)
            return true;
   return false;
}
void sudokuGrid(){ //print the sudoku grid after solve
	for(int i= 0 ; i < 46 ; i++){
	cout << "-";
	}
	cout << endl;
	cout << " THE SOLUTION IS " << endl;
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
bool findEmptyPlace(int &row, int &col){ //get empty location and update row and column
   for (row = 0; row < N; row++)
      for (col = 0; col < N; col++)
         if (grid[row][col] == 0) //marked with 0 is empty
            return true;
   return false;
}
bool isValidPlace(int row, int col, int num){
   //when item not found in col, row and current 3x3 box
   return !isPresentInRow(row, num) && !isPresentInCol(col, num) && !isPresentInBox(row - row%3 ,
col - col%3, num);
}
bool solveSudoku(){
   int row, col;
   if (!findEmptyPlace(row, col))
      return true; //when all places are filled
   for (int num = 1; num <= 9; num++){ //valid numbers are 1 - 9
      if (isValidPlace(row, col, num)){ //check validation, if yes, put the number in the grid
         grid[row][col] = num;
         if (solveSudoku()) //recursively go for other rooms in the grid
            return true;
         grid[row][col] = 0; //turn to unassigned space when conditions are not satisfied
      }
   }
   return false;
}

void sudoku::main_menu(){
	for(int i = 0 ; i < 46 ; i++){
		cout << "-" ;
	}
	cout << endl;
	cout << "\tWELCOME TO SUDOKU GAME " << endl;
	for(int i = 0 ; i < 46 ; i++){
		cout << "-" ;
	}
	cout << endl;
	cout << "\t SELECT GAME MODE" << endl;
	cout << "[1] - Get a rendom qustion to solve " << endl << "[2] - Input a question to get the solution " << endl;
	cin >> options;
	if(options == 1){
		rendom_question();
	}
	else if(options == 2){
	get_grid_input();
	}


}

void sudoku::get_grid_input(){
	for(int i = 0 ; i < N ; i++){
	for (int j = 0 ; j < N ; j++){
	user_input_grid[i][j] = 1;
	system("clear");
	display_input_grid();
	cout << "Enter a number to relace a number in the place of 1 in the above grid " << endl;
	
	cin >> user_input_grid[i][j];
			

	}}

	copy_inputgrid_to_solver_grid();
	solver();

}


void sudoku::display_input_grid(){
	
	 for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
         if(col == 3 || col == 6)
            cout << " | ";
         cout << user_input_grid[row][col] <<" ";
      }
      if(row == 2 || row == 5){
         cout << endl;
         for(int i = 0; i<N; i++)
            cout << "---";
      }
      cout << endl;
   }
}


void sudoku::copy_inputgrid_to_solver_grid(){
	for(int i  = 0 ; i < N ; i++){
		for(int j = 0  ; j < N ; j++){
			grid[i][j] = user_input_grid[i][j];
		}}}

void sudoku::solver(){
	 if (solveSudoku() == true)
      sudokuGrid();
   else
      cout << "No solution exists";
}
int main(){
	sudoku a;
	a.main_menu();
	return 0;
}
