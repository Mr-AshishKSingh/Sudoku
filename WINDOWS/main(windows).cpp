#include <iostream>
#include <vector> //for vector functions
#include <ctime> // for time() function
#include <cstdlib> // for rand() function
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>


using namespace std;

class Sudoku {
public:
    int rendom_number; // random number for module 2
    int choice; // VARIABLE TO STORE THE USER'S CHOICE


    vector<vector<int>> inputboardformodule2{
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };

    vector<vector<int>> inputboard{
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };

    vector<vector<int>> board{
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
        { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
        { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
        { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
        { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
        { 0, 0, 5, 2, 0, 6, 3, 0, 0 }
    };

    vector<vector<int>> board1{
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
        { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
        { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
        { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
        { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
        { 0, 0, 5, 2, 0, 6, 3, 0, 0 }
    };


    vector<vector<int>> board2{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        { 0, 0, 0, 0, 7, 3, 0, 0, 9 },
        { 3, 0, 9, 0, 0, 0, 0, 4, 5 },
        { 4, 9, 0, 0, 0, 0, 0, 0, 0 },
        { 8, 0, 3, 0, 5, 0, 9, 0, 2 },
        { 0, 0, 0, 0, 0, 0, 0, 3, 6 },
        { 9, 6, 0, 0, 0, 0, 3, 0, 8 },
        { 7, 0, 0, 6, 8, 0, 0, 0, 0 },
        { 0, 2, 8, 0, 0, 0, 0, 0, 0 }
    };



    vector<vector<int>> board3{
        {2, 0, 0, 3, 0, 0, 0, 0, 0},
        { 8, 0, 4, 0, 6, 2, 0, 0, 3 },
        { 0, 1, 3, 8, 0, 0, 2, 0, 0 },
        { 0, 0, 0, 0, 2, 0, 3, 9, 0 },
        { 5, 0, 7, 0, 0, 0, 6, 2, 1 },
        { 0, 3, 2, 0, 0, 6, 0, 0, 0 },
        { 0, 2, 0, 0, 0, 9, 1, 4, 0 },
        { 6, 0, 1, 2, 5, 0, 8, 0, 9 },
        { 0, 0, 0, 0, 0, 1, 0, 0, 2 }
    };




    vector<vector<int>> board4{
        {0, 2, 0, 6, 0, 8, 0, 0, 0},
        { 5, 8, 0, 0, 0, 9, 7, 0, 0 },
        { 0, 0, 0, 0, 4, 0, 0, 0, 0 },
        { 3, 7, 0, 0, 0, 0, 5, 0, 0 },
        { 6, 0, 0, 0, 0, 0, 0, 0, 4 },
        { 0, 0, 8, 0, 0, 0, 0, 1, 3 },
        { 0, 0, 0, 0, 2, 0, 0, 0, 0 },
        { 0, 0, 9, 8, 0, 0, 0, 3, 6 },
        { 0, 0, 0, 3, 0, 6, 0, 9, 0 }
    };


    vector<vector<int>> board5{
        {0, 0, 0, 6, 0, 0, 4, 0, 0},
        { 7, 0, 0, 0, 0, 3, 6, 0, 0 },
        { 0, 0, 0, 0, 9, 1, 0, 8, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 5, 0, 1, 8, 0, 0, 0, 3 },
        { 0, 0, 0, 3, 0, 6, 0, 4, 5 },
        { 0, 4, 0, 2, 0, 0, 0, 6, 0 },
        { 9, 0, 3, 0, 0, 0, 0, 0, 0 },
        { 0, 2, 0, 0, 0, 0, 1, 0, 0 }

    };




    vector<vector<int>> board6{
        {0, 2, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 6, 0, 0, 0, 0, 3 },
        { 0, 7, 4, 0, 8, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 3, 0, 0, 2 },
        { 0, 8, 0, 0, 4, 0, 0, 1, 0 },
        { 6, 0, 0, 5, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 1, 0, 7, 8, 0 },
        { 5, 0, 0, 0, 0, 9, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 4, 0 }
    };


    vector<vector<int>> board7{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        { 0, 0, 0, 0, 7, 3, 0, 0, 9 },
        { 3, 0, 9, 0, 0, 0, 0, 4, 5 },
        { 4, 9, 0, 0, 0, 0, 0, 0, 0 },
        { 8, 0, 3, 0, 5, 0, 9, 0, 2 },
        { 0, 0, 0, 0, 0, 0, 0, 3, 6 },
        { 9, 6, 0, 0, 0, 0, 3, 0, 8 },
        { 7, 0, 0, 6, 8, 0, 0, 0, 0 },
        { 0, 2, 8, 0, 0, 0, 0, 0, 0 }
    };


    vector<vector<int>> board8{
        {0, 2, 0, 6, 0, 8, 0, 0, 0},
        { 5, 8, 0, 0, 0, 9, 7, 0, 0 },
        { 0, 0, 0, 0, 4, 0, 0, 0, 0 },
        { 3, 7, 0, 0, 0, 0, 5, 0, 0 },
        { 6, 0, 0, 0, 0, 0, 0, 0, 4 },
        { 0, 0, 8, 0, 0, 0, 0, 1, 3 },
        { 0, 0, 0, 0, 2, 0, 0, 0, 0 },
        { 0, 0, 9, 8, 0, 0, 0, 3, 6 },
        { 0, 0, 0, 3, 0, 6, 0, 9, 0 }
    };


    vector<vector<int>> board9{
        {1, 0, 0, 4, 8, 9, 0, 0, 6},
        { 7, 3, 0, 0, 0, 0, 0, 4, 0 },
        { 0, 0, 0, 0, 0, 1, 2, 9, 5 },
        { 0, 0, 7, 1, 2, 0, 6, 0, 0 },
        { 5, 0, 0, 7, 0, 3, 0, 0, 8 },
        { 0, 0, 6, 0, 9, 5, 7, 0, 0 },
        { 9, 1, 4, 6, 0, 0, 0, 0, 0 },
        { 0, 2, 0, 0, 0, 0, 0, 3, 7 },
        { 8, 0, 0, 5, 1, 2, 0, 0, 4 }
    };


    vector<vector<int>> board10{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        { 0, 0, 0, 0, 7, 3, 0, 0, 9 },
        { 3, 0, 9, 0, 0, 0, 0, 4, 5 },
        { 4, 9, 0, 0, 0, 0, 0, 0, 0 },
        { 8, 0, 3, 0, 5, 0, 9, 0, 2 },
        { 0, 0, 0, 0, 0, 0, 0, 3, 6 },
        { 9, 6, 0, 0, 0, 0, 3, 0, 8 },
        { 7, 0, 0, 6, 8, 0, 0, 0, 0 },
        { 0, 2, 8, 0, 0, 0, 0, 0, 0 }
    };

    void solveSudoku(vector<vector<int>>& sudoku); //FUNCTION WHICH CALLS THE SOLVE FUNCTION
    bool solve(vector<vector<int>>& board); //FUNCTION TO SOLVE THE SUDOKU 
    bool isSafe(int row, int col, vector<vector<int>>& board, int val); //FUNCTION TO CHECK IF THE VALUE IS SAFE TO INSERT IN THE BOARD
    void printBoard(vector<vector<int>>& board); //FUNCTION TO PRINT THE BOARD
    void rendomBoard(vector<vector<int>>& board); // FUNCTION TO GENERATE A RANDOM BOARD
    void getBoard(vector<vector<int>>& board); //FUNCTION TO GET THE BOARD FROM THE USER
    void getBoardformodule2(vector<vector<int>>& board); //FUNCTION TO GET THE BOARD FROM THE USER FOR MODULE 2
    void mainmenu(); //FUNCTION TO PRINT THE MAIN MENU
    void module1();//FUNCTION TO PRINT THE MODULE 1
    void module2();//FUNCTION TO PRINT THE MODULE 2
    void module3();//FUNCTION TO PRINT THE MODULE 3
    void play_again(); //FUNCTION TO ASK THE USER IF THEY WANT TO PLAY AGAIN
};

void Sudoku::play_again() {
    cout << endl;
    cout << "Would you like to play again ? (Y/N)" << endl;
    char playagain;
    cin >> playagain;
    if (playagain == 'Y' || playagain == 'y') {
		mainmenu();
	}
    else {
        //sleep(0);
		cout << "Thank you for playing" << endl;
        exit(0);
	}
}
void Sudoku::module3() {
    getBoard(inputboard); //GETTING INPUT FROM THE USER FOR THE BOARD
    
    getBoardformodule2(inputboardformodule2); //GETTING THE SOLUTION  FROM THE USER OF THE INPUT BOARD
    solveSudoku(inputboard); //SOLVING THE BOARD

    if (inputboardformodule2 == inputboard) { //COMPARING THE SOLUTION WITH THE INPUT BOARD
        cout << "Correct Solution" << endl;
    }
    else {
        cout << "Wrong Solution as per the generated solution in our system " << endl;
    }

}

void Sudoku::module2() {
    rendomBoard(board); //generating a random board
    
    printBoard(board); // PRINTING THE RENDOM BOARD
    inputboardformodule2 = board;    //storing the rendom board in a variable
    inputboard = board; //storing the rendom board in a variable SO THAT WE CAN COMPARE THE SOLUTION WITH THE RENDOM BOARD
    solveSudoku(board); //SOLVING THE RENDOM BOARD
    getBoardformodule2(inputboardformodule2); //GETTING THE SOLUTION  FROM THE USER OF THE RENDOM BOARD

    if (inputboardformodule2 == board) { //COMPARING THE SOLUTION WITH THE RENDOM BOARD
        Sleep(500);
        cout << "     ==============================" << endl;
        cout << "         Checking the solution ...";
        for (int i = 5; i > 0; i--) {
			Sleep(500);
			cout << i;
		}
        cout << endl;
        cout << "     ==============================" << endl;
        cout << "           Correct Solution" << endl;
    }
    else {
        Sleep(500);
        cout << "     ==============================" << endl;
        cout << "      Checking the solution ...";
        for (int i = 5; i > 0; i--) {
            Sleep(500);
            cout << i;
        }
        cout << endl;
        cout << "     ==============================" << endl;
        cout << "           Wrong  Solution" << endl;
    }
}

void Sudoku::module1() {
    cout << "Enter the question : " << endl;
    getBoard(inputboard); // GETTING THE QUESTION FROM THE USER
    system("cls");
    cout << "     ==============================" << endl;
    cout << "           Question You Enterd   " << endl;
    cout << "     ==============================" << endl;
    Sleep(500);
    printBoard(board); // PRINTING THE QUESTION
    solveSudoku(board); // SOLVING THE QUESTION
    Sleep(500);
    cout << "     ==============================" << endl;
    cout << "               Solution   " << endl;
    cout << "     ==============================" << endl;
    cout << "       Generating Solution ...";
    for (int i = 5; i > 0; i--) {
        Sleep(500);
        cout << i;
    }
    cout << endl;
    Sleep(500);
    printBoard(board); // PRINTING THE SOLVED SOLUTION
}


void Sudoku::mainmenu() {
    system("cls");
    cout << "\t------------------------------------" << endl;
    cout << "\t||\tWelcome to Sudoku Game    ||" << endl;
    cout << "\t------------------------------------" << endl;
    cout << "\t       ||   1. Play Game  ||" << endl;

    cout << "\t       ||   2. Exit       ||" << endl;
    cout << "\t       ---------------------" << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice; // TAKING THE CHOICE FROM THE USER

    if (choice == 1) {
        system("cls");
        cout << "\t----------------------------------------------------" << endl;
        cout << "\t| 1 . Enter a question and get the solution        |" << endl; // FOR MODULE 1
        cout << "\t| 2 . Get a random question and solve it           |" << endl; // FOR MODULE 2
        cout << "\t| 3 . Enter a question and check solution validity |" << endl; // FOR MODULE 3
        cout << "\t----------------------------------------------------" << endl;

        cout << "Enter your choice : " << endl;
        cin >> choice; //TAKING CHOICE FOR MODULE 1 , 2 , 3

        switch (choice) {
        case 1: //IF CHOICE == 1 THEN CALL MODULE 1
            module1();
            break;
        case 2: //IF CHOICE == 2 THEN CALL MODULE 2
            module2();
            break;
        case 3: //IF CHOICE == 3 THEN CALL MODULE 3
            module3();
            break;
        default: //IF CHOICE IS NOT 1 , 2 , 3 THEN PRINT INVALID CHOICE
            cout << "Invalid choice" << endl;
            break;
        }
    }
    else { //IF CHOICE IS NOT 1 THEN EXIT THE PROGRAM
        exit(0);
    }

}

void Sudoku::getBoardformodule2(vector<vector<int>>& inputboardformodule2) {

    for (int i = 0; i < inputboardformodule2.size(); i++) {
        for (int j = 0; j < inputboardformodule2[0].size(); j++) {
            if (inputboardformodule2[i][j] == 0) {
                inputboardformodule2[i][j] = -1; //INITIALISING A ELEMENT TO 1 IN BOARD WHERE USER HAS TO ENTER THE SOLUTION
                system("cls");
                cout << "     ==============================" << endl;
                cout << "               Question    " << endl;
                cout << "     ==============================" << endl;
                printBoard(inputboard); //PRINTING THE QUESTION BOARD SO THAT USER CAN TAKE THE REFERENCE
                cout << endl;
                cout << "       =======================" << endl;
                cout << "       ||   Enter Solution  ||" << endl;
                cout << "       =======================" << endl;
                cout << endl;
                printBoard(inputboardformodule2);  //PRINTING THE BOARD WHERE USER HAS TO ENTER THE SOLUTION
                cout << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "Enter the number in place of 1 displayed in above grid " << endl;

                cin >> inputboardformodule2[i][j]; //TAKING INPUT FROM THE USER IN PLACE OF 1 DISPLAYED IN THE BOARD

            }
            else {
				continue;
			}
        }
        cout << endl;
    }

}
void Sudoku::getBoard(vector<vector<int>>& inputboard) { //FUNCTION TO GET THE BOARD FROM THE USER
    for (int i = 0; i < inputboard.size(); i++) {
        for (int j = 0; j < inputboard[0].size(); j++) {
            inputboard[i][j] = -1;
            system("cls");
            cout << "\t=======================" << endl;
            printBoard(inputboard);

            cout << "\t=======================" << endl;
            cout << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "Enter the number in place of -1 displayed in above grid | " << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "        | Number should be between 1 to 9 |" << endl;
            cout << "        -----------------------------------" << endl;
            cout << "                     ENTER - "; 
            cin >> inputboard[i][j];
            if( inputboard[i][j] > 9){ //CHECKING IF THE NUMBER ENTERED BY THE USER IS BETWEEN 1 TO 9
                            Sleep(1);
                            system("cls");
                            Sleep(500);
                            cout << "INVALID INPUT VALUE MUST BE LESS THEN 9 " << endl;
                            Sleep(2000);
                            getBoard(inputboard);
            			}

        }
        cout << endl;
        board = inputboard;


    }

}

void Sudoku::rendomBoard(vector<vector<int>>& board) { //FUNCTION TO GENERATE A RENDOM BOARD
    // generate random numbsrand(time(0));
    srand(time(0)); //SEEDING THE RANDOM FUNCTION
    for (int i = 0; i < 1; i++) {
        rendom_number = (rand() % 10) + 1; //GENERATING A RANDOM NUMBER BETWEEN 1 TO 10
    }

    switch (rendom_number) { //SWITCH CASE TO SELECT A BOARD FROM 10 BOARDS
    case 1:
        board = board1;
        break;


    case 2:
        board = board2;
        break;


    case 3:
        board = board3;
        break;


    case 4:
        board = board4;
        break;


    case 5:
        board = board5;
        break;


    case 6:
        board = board6;
        break;


    case 7:
        board = board7;
        break;


    case 8:
        board = board8;
        break;


    case 9:
        board = board9;
        break;


    case 10:
        board = board10;
        break;

    }



}

void Sudoku::printBoard(vector<vector<int>>& board) { //FUNCTION TO PRINT THE BOARD
  



    for (int row = 0; row < 9; row++) { //LOOP TO PRINT THE BOARD
        cout << "\t";
        for (int col = 0; col < 9; col++) { //column loop
            if (col == 3 || col == 6) // for printing vertical lines after 3rd and 6th column
                cout << " | ";
            
            cout << board[row][col] << " "; //printing the elements of the board
        }
        if (row == 2 || row == 5) { // for printing horizontal lines after 3rd and 6th row
            
            cout << endl;
            for (int i = 0; i < 8; i++)
                cout << "     ";
        }
        cout << endl;
        
    }
}

void Sudoku::solveSudoku(vector<vector<int>>& sudoku) {
    if (solve(sudoku) == false) {
        cout << "CANT GENERATE SOLUTION SORRY " << endl;
    }
    //CALLING THE SOLVE FUNCTION

    
};

bool Sudoku::solve(vector<vector<int>>& board) {
    int n = board[0].size(); //GETTING THE SIZE OF THE BOARD
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (board[row][col] == 0) { //CHECKING IF THE ELEMENT IS 0
                for (int val = 1; val <= 9; val++) { //CHECKING FOR ALL THE VALUES FROM 1 TO 9
                    if (isSafe(row, col, board, val)) {//CHECKING IF THE VALUE IS SAFE TO INSERT IN THE BOARD by calling is safe function
                        board[row][col] = val; //IF VALUE SAFE THEN INSERT THE VALUE IN THE BOARD

                        bool solved = solve(board); //CALLING THE SOLVE FUNCTION RECURSIVELY
                        if (solved) {
                            return true;
                        }
                        else {
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
}


bool Sudoku::isSafe(int row, int col, vector<vector<int>>& board, int val) {
    for (int i = 0; i < board.size(); i++) {
        // check for row
        if (board[row][i] == val) {
            return false;
        }
        // check for col
        if (board[i][col] == val) {
            return false;
        }
        // check for subgrid
        if (board[(row / 3) * 3 + i / 3][(col / 3) * 3 + i % 3] == val) {
            return false;
        }


    }

    return true;
}

int main() {
    Sudoku a;
    a.mainmenu();
    for (int i = 0; i < 10000; i++) {
        a.play_again();
    }
    return 0;
}