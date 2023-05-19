#include <iostream>
#include <vector>

using namespace std;

class Sudoku{
    public:
    int rendom_number;
    int choice;


    vector<vector<int>> inputboardformodule2{
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    vector<vector<int>> inputboard{
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 0, 0},
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
    
    void solveSudoku(vector<vector<int>>& sudoku);
    bool solve(vector<vector<int>>& board);
    bool isSafe(int row , int col , vector<vector<int>>& board , int val);
    void printBoard(vector<vector<int>>& board);
    void rendomBoard(vector<vector<int>>& board);
    void getBoard(vector<vector<int>>& board);
    void getBoardformodule2(vector<vector<int>>& board);
    void mainmenu();
    void module1();
    void module2();
    void module3();
};


void Sudoku::module3(){
    getBoard(inputboard);
    solveSudoku(inputboard);
    getBoardformodule2(inputboardformodule2);

    if(inputboardformodule2 == inputboard){
        cout << "Correct Solution" << endl;
    }
    else{
        cout << "Wrong Solution as per the generated solution in our system " << endl;
    }

}

void Sudoku::module2(){
    rendomBoard(board);
    cout << "Question : " << endl;
    printBoard(board);
    inputboardformodule2 = board;
    inputboard = board;
    solveSudoku(board);
    getBoardformodule2(inputboardformodule2);

    if(inputboardformodule2 == board){
        cout << "Correct Solution" << endl;
    }
    else{
        cout << "Wrong Solution" << endl;
    }
}

void Sudoku::module1(){
    cout << "Enter the question : " << endl;
    getBoard(inputboard);
    cout << "Question : " << endl;
    printBoard(board);
    solveSudoku(board);
    cout << "Solution : " << endl;
    printBoard(board);
}


void Sudoku::mainmenu(){
    cout << "Welcome to Sudoku Game" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice;

    if(choice == 1){
        cout << " 1 . Enter a question and get the solution" << endl;
        cout << " 2 . Get a random question and solve it" << endl;
        cout << " 3 . Enter a question and check solution validity" << endl;

        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch(choice){
            case 1:
                module1();
                break;
            case 2:
                module2();
                break;
            case 3:
                module3();
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    else{
        exit(0);
    }

}

void Sudoku::getBoardformodule2(vector<vector<int>>& inputboardformodule2){

    for (int i = 0 ; i < inputboardformodule2.size() ; i++){
        for (int j = 0 ; j < inputboardformodule2[0].size() ; j++){
            inputboardformodule2[i][j] = 1;
            system("clear");
            printBoard(inputboard);
            cout << "=======================" <<endl;
            printBoard(inputboardformodule2);  
            cout << "Enter the number in place of 1 displayed in above grid " << endl;
            cin >> inputboardformodule2[i][j];

        }
        cout << endl;
    }
    
}
void Sudoku::getBoard(vector<vector<int>>& inputboard){
    for (int i = 0 ; i < inputboard.size() ; i++){
        for (int j = 0 ; j < inputboard[0].size() ; j++){
            inputboard[i][j] = 1;
            system("clear");
            printBoard(inputboard);  
            cout << "Enter the number in place of 1 displayed in above grid " << endl;
            cin >> inputboard[i][j];

        }
        cout << endl;

        board = inputboard;

    
    }
    
}

void Sudoku::rendomBoard(vector<vector<int>>& board){
    // generate random numbsrand(time(0));
    srand(time(0));
	for(int i= 0 ; i < 1 ; i++){
		rendom_number = (rand()%10 ) +1;
	}

    switch(rendom_number){
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

void Sudoku::printBoard(vector<vector<int>>& board){
    for (int i = 0 ; i < board.size() ; i++){
        for (int j = 0 ; j < board[0].size() ; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void Sudoku::solveSudoku(vector<vector<int>>& sudoku){
    solve(sudoku);
};

bool Sudoku::solve(vector<vector<int>>& board){
    int n = board[0].size(); 
    for (int row = 0 ; row < n ; row++){
        for(int col = 0 ; col< n ; col++){
            if(board[row][col] == 0){
                for(int val = 1 ; val <= 9 ; val++){
                    if(isSafe(row , col , board , val)){
                        board[row][col] = val;

                        bool solved = solve(board);
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