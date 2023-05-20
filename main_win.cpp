#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Sudoku{
    public:
    int rendom_number; // random number for module 2
    int choice; // VARIABLE TO STORE THE USER'S CHOICE


    vector<vector<int>> inputboardformodule2{
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

    vector<vector<int>> inputboard{
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
    
    vector<vector<int>> board{
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    }; 

     vector<vector<int>> board1{
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };  

    
        vector<vector<int>> board2{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        {0, 0, 0, 0, 7, 3, 0, 0, 9},
        {3, 0, 9, 0, 0, 0, 0, 4, 5},
        {4, 9, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 3, 0, 5, 0, 9, 0, 2},
        {0, 0, 0, 0, 0, 0, 0, 3, 6},
        {9, 6, 0, 0, 0, 0, 3, 0, 8},
        {7, 0, 0, 6, 8, 0, 0, 0, 0},
        {0, 2, 8, 0, 0, 0, 0, 0, 0}
    };


        
        vector<vector<int>> board3{
        {2, 0, 0, 3, 0, 0, 0, 0, 0},
        {8, 0, 4, 0, 6, 2, 0, 0, 3},
        {0, 1, 3, 8, 0, 0, 2, 0, 0},
        {0, 0, 0, 0, 2, 0, 3, 9, 0},
        {5, 0, 7, 0, 0, 0, 6, 2, 1},
        {0, 3, 2, 0, 0, 6, 0, 0, 0},
        {0, 2, 0, 0, 0, 9, 1, 4, 0},
        {6, 0, 1, 2, 5, 0, 8, 0, 9},
        {0, 0, 0, 0, 0, 1, 0, 0, 2}
    };



    
        vector<vector<int>> board4{
        {0, 2, 0, 6, 0, 8, 0, 0, 0},
        {5, 8, 0, 0, 0, 9, 7, 0, 0},
        {0, 0, 0, 0, 4, 0, 0, 0, 0},
        {3, 7, 0, 0, 0, 0, 5, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 4},
        {0, 0, 8, 0, 0, 0, 0, 1, 3},
        {0, 0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 9, 8, 0, 0, 0, 3, 6},
        {0, 0, 0, 3, 0, 6, 0, 9, 0}
    };

        
        vector<vector<int>> board5{
        {0, 0, 0, 6, 0, 0, 4, 0, 0},
        {7, 0, 0, 0, 0, 3, 6, 0, 0},
        {0, 0, 0, 0, 9, 1, 0, 8, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 5, 0, 1, 8, 0, 0, 0, 3},
        {0, 0, 0, 3, 0, 6, 0, 4, 5},
        {0, 4, 0, 2, 0, 0, 0, 6, 0},
        {9, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 1, 0, 0}

        };



        
        vector<vector<int>> board6{
        {0, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 6, 0, 0, 0, 0, 3},
        {0, 7, 4, 0, 8, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 2},
        {0, 8, 0, 0, 4, 0, 0, 1, 0},
        {6, 0, 0, 5, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 7, 8, 0},
        {5, 0, 0, 0, 0, 9, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 4, 0}
        };

       
        vector<vector<int>> board7{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        {0, 0, 0, 0, 7, 3, 0, 0, 9},
        {3, 0, 9, 0, 0, 0, 0, 4, 5},
        {4, 9, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 3, 0, 5, 0, 9, 0, 2},
        {0, 0, 0, 0, 0, 0, 0, 3, 6},
        {9, 6, 0, 0, 0, 0, 3, 0, 8},
        {7, 0, 0, 6, 8, 0, 0, 0, 0},
        {0, 2, 8, 0, 0, 0, 0, 0, 0}
        };

        
        vector<vector<int>> board8{
        {0, 2, 0, 6, 0, 8, 0, 0, 0},
        {5, 8, 0, 0, 0, 9, 7, 0, 0},
        {0, 0, 0, 0, 4, 0, 0, 0, 0},
        {3, 7, 0, 0, 0, 0, 5, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 4},
        {0, 0, 8, 0, 0, 0, 0, 1, 3},
        {0, 0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 9, 8, 0, 0, 0, 3, 6},
        {0, 0, 0, 3, 0, 6, 0, 9, 0}
        };

        
        vector<vector<int>> board9{
        {1, 0, 0, 4, 8, 9, 0, 0, 6},
        {7, 3, 0, 0, 0, 0, 0, 4, 0},
        {0, 0, 0, 0, 0, 1, 2, 9, 5},
        {0, 0, 7, 1, 2, 0, 6, 0, 0},
        {5, 0, 0, 7, 0, 3, 0, 0, 8},
        {0, 0, 6, 0, 9, 5, 7, 0, 0},
        {9, 1, 4, 6, 0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0, 0, 0, 3, 7},
        {8, 0, 0, 5, 1, 2, 0, 0, 4}
        };

        
        vector<vector<int>> board10{
        {0, 0, 0, 0, 0, 0, 6, 8, 0},
        {0, 0, 0, 0, 7, 3, 0, 0, 9},
        {3, 0, 9, 0, 0, 0, 0, 4, 5},
        {4, 9, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 3, 0, 5, 0, 9, 0, 2},
        {0, 0, 0, 0, 0, 0, 0, 3, 6},
        {9, 6, 0, 0, 0, 0, 3, 0, 8},
        {7, 0, 0, 6, 8, 0, 0, 0, 0},
        {0, 2, 8, 0, 0, 0, 0, 0, 0}
        };
    
    void solveSudoku(vector<vector<int>>& sudoku); //FUNCTION WHICH CALLS THE SOLVE FUNCTION
    bool solve(vector<vector<int>>& board); //FUNCTION TO SOLVE THE SUDOKU 
    bool isSafe(int row , int col , vector<vector<int>>& board , int val); //FUNCTION TO CHECK IF THE VALUE IS SAFE TO INSERT IN THE BOARD
    void printBoard(vector<vector<int>>& board); //FUNCTION TO PRINT THE BOARD
    void rendomBoard(vector<vector<int>>& board); // FUNCTION TO GENERATE A RANDOM BOARD
    void getBoard(vector<vector<int>>& board); //FUNCTION TO GET THE BOARD FROM THE USER
    void getBoardformodule2(vector<vector<int>>& board); //FUNCTION TO GET THE BOARD FROM THE USER FOR MODULE 2
    void mainmenu(); //FUNCTION TO PRINT THE MAIN MENU
    void module1();//FUNCTION TO PRINT THE MODULE 1
    void module2();//FUNCTION TO PRINT THE MODULE 2
    void module3();//FUNCTION TO PRINT THE MODULE 3
};


void Sudoku::module3(){
    getBoard(inputboard); //GETTING INPUT FROM THE USER FOR THE BOARD
    solveSudoku(inputboard); //SOLVING THE BOARD
    getBoardformodule2(inputboardformodule2); //GETTING THE SOLUTION  FROM THE USER OF THE INPUT BOARD

    if(inputboardformodule2 == inputboard){ //COMPARING THE SOLUTION WITH THE INPUT BOARD
        cout << "Correct Solution" << endl;
    }
    else{
        cout << "Wrong Solution as per the generated solution in our system " << endl;
    }

}

void Sudoku::module2(){
    rendomBoard(board); //generating a random board
    cout << "Question : " << endl;
    printBoard(board); // PRINTING THE RENDOM BOARD
    inputboardformodule2 = board;    //storing the rendom board in a variable
    inputboard = board; //storing the rendom board in a variable SO THAT WE CAN COMPARE THE SOLUTION WITH THE RENDOM BOARD
    solveSudoku(board); //SOLVING THE RENDOM BOARD
    getBoardformodule2(inputboardformodule2); //GETTING THE SOLUTION  FROM THE USER OF THE RENDOM BOARD

    if(inputboardformodule2 == board){ //COMPARING THE SOLUTION WITH THE RENDOM BOARD
        cout << "Correct Solution" << endl;
    }
    else{
        cout << "Wrong Solution" << endl;
    }
}

void Sudoku::module1(){
    cout << "Enter the question : " << endl;
    getBoard(inputboard); // GETTING THE QUESTION FROM THE USER
    cout << "Question : " << endl;
    printBoard(board); // PRINTING THE QUESTION
    solveSudoku(board); // SOLVING THE QUESTION
    cout << "Solution : " << endl;
    printBoard(board); // PRINTING THE SOLVED SOLUTION
}


void Sudoku::mainmenu(){
    cout << "Welcome to Sudoku Game" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice; // TAKING THE CHOICE FROM THE USER

    if(choice == 1){
        cout << " 1 . Enter a question and get the solution" << endl; // FOR MODULE 1
        cout << " 2 . Get a random question and solve it" << endl; // FOR MODULE 2
        cout << " 3 . Enter a question and check solution validity" << endl; // FOR MODULE 3

        cout << "Enter your choice : " << endl;
        cin >> choice; //TAKING CHOICE FOR MODULE 1 , 2 , 3

        switch(choice){
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
    else{ //IF CHOICE IS NOT 1 THEN EXIT THE PROGRAM
        exit(0);
    }

}

void Sudoku::getBoardformodule2(vector<vector<int>>& inputboardformodule2){

    for (int i = 0 ; i < inputboardformodule2.size() ; i++){
        for (int j = 0 ; j < inputboardformodule2[0].size() ; j++){
            inputboardformodule2[i][j] = 1; //INITIALISING A ELEMENT TO 1 IN BOARD WHERE USER HAS TO ENTER THE SOLUTION
            system("cls");
            printBoard(inputboard); //PRINTING THE QUESTION BOARD SO THAT USER CAN TAKE THE REFERENCE
            cout << "=======================" <<endl;
            printBoard(inputboardformodule2);  //PRINTING THE BOARD WHERE USER HAS TO ENTER THE SOLUTION
            cout << "Enter the number in place of 1 displayed in above grid " << endl;
            cin >> inputboardformodule2[i][j]; //TAKING INPUT FROM THE USER IN PLACE OF 1 DISPLAYED IN THE BOARD

        }
        cout << endl;
    }
    
}
void Sudoku::getBoard(vector<vector<int>>& inputboard){ //FUNCTION TO GET THE BOARD FROM THE USER
    for (int i = 0 ; i < inputboard.size() ; i++){
        for (int j = 0 ; j < inputboard[0].size() ; j++){
            inputboard[i][j] = 1;
            system("cls");
            printBoard(inputboard);  
            cout << "Enter the number in place of 1 displayed in above grid " << endl;
            cin >> inputboard[i][j];

        }
        cout << endl;

        board = inputboard;

    
    }
    
}

void Sudoku::rendomBoard(vector<vector<int>>& board){ //FUNCTION TO GENERATE A RENDOM BOARD
    // generate random numbsrand(time(0));
    srand(time(0)); //SEEDING THE RANDOM FUNCTION
	for(int i= 0 ; i < 1 ; i++){
		rendom_number = (rand()%10 ) +1; //GENERATING A RANDOM NUMBER BETWEEN 1 TO 10
	}

    switch(rendom_number){ //SWITCH CASE TO SELECT A BOARD FROM 10 BOARDS
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

void Sudoku::printBoard(vector<vector<int>>& board){ //FUNCTION TO PRINT THE BOARD
    for (int i = 0 ; i < board.size() ; i++){ //LOOP TO PRINT THE BOARD
        for (int j = 0 ; j < board[0].size() ; j++){
            cout << board[i][j] << " "; //PRINTING THE ELEMENTS OF THE BOARD
        }
        cout << endl; //PRINTING A NEW LINE AFTER EACH ROW
    }
}

void Sudoku::solveSudoku(vector<vector<int>>& sudoku){
    solve(sudoku);
};

bool Sudoku::solve(vector<vector<int>>& board){
    int n = board[0].size(); //GETTING THE SIZE OF THE BOARD
    for (int row = 0 ; row < n ; row++){
        for(int col = 0 ; col< n ; col++){
            if(board[row][col] == 0){ //CHECKING IF THE ELEMENT IS 0
                for(int val = 1 ; val <= 9 ; val++){ //CHECKING FOR ALL THE VALUES FROM 1 TO 9
                    if(isSafe(row , col , board , val)){//CHECKING IF THE VALUE IS SAFE TO INSERT IN THE BOARD by calling is safe function
                        board[row][col] = val; //IF VALUE SAFE THEN INSERT THE VALUE IN THE BOARD

                        bool solved = solve(board); //CALLING THE SOLVE FUNCTION RECURSIVELY
                        if(solved){
                            return true;
                        }
                        else{
                            board[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
}


bool Sudoku::isSafe(int row , int col , vector<vector<int>>& board , int val){
    for (int i = 0 ; i < board.size()  ; i++){
        // check for row
        if(board[row][i] == val){
            return false;
        }
        // check for col
        if(board[i][col] == val){
            return false;
        }
        // check for subgrid
        if(board[(row/3)*3 + i/3][(col/3)*3 + i%3] == val){
            return false;
        }


    }

    return true;
}

int main(){
    Sudoku a;
    a.mainmenu();
    return 0;
}