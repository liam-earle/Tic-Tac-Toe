#include <iostream>

int winCheck();

char gameBoard[10] = {'N','1','2','3','4','5','6','7','8','9'};

//int selectedgameBoard; sf

char player;

int loop = 3;

bool selectionProcess;

int main() {
    do {
        selectionProcess = true;
        while(selectionProcess == true) {
            std::cout << "Player X: which square number (1-9)? \n";
            std::cin >> selectedgameBoard;
            
            if(selectedgameBoard < 1) {
                std::cout << "GAME ENDED BY USER!\n";
                return 0;
            }
            
            if(gameBoard[selectedgameBoard] == ('0'+selectedgameBoard)) {
                gameBoard[selectedgameBoard] = *"X";
                selectionProcess = false;
            } else {
                std::cout << "Square already chosen, please try again.\n";
            }
        }
        
        loop = winCheck();
        
        selectionProcess = true;
        while(selectionProcess == true) {
            std::cout << "Player O: which square number (1-9)?\n";
            std::cin >> selectedgameBoard;
            
            if(selectedgameBoard < 1) {
                std::cout << "GAME ENDED BY USER!\n";
                return 0;
            }
            
            if(gameBoard[selectedgameBoard] == ('0'+selectedgameBoard)) {
                gameBoard[selectedgameBoard] = *"O";
                selectionProcess = false;
            } else {
                std::cout << "Square already chosen, please try again.\n";
            }
        }
        
        loop = winCheck();
        
    } while (loop == 3);
    if(loop == 1) {
        std::cout << "PLAYER "<<player<<" WINS!\n";
    } else {
        std::cout << "DRAW";
    }
}

int winCheck() {
    if (gameBoard[1] == gameBoard[2] && gameBoard[2] == gameBoard[3]){
    
        player = gameBoard[1];
        return 1;
    }

    else if (gameBoard[4] == gameBoard[5] && gameBoard[5] == gameBoard[6]){
        
        player = gameBoard[4];
        return 1;
    }

    else if (gameBoard[7] == gameBoard[8] && gameBoard[8] == gameBoard[9]){
        
        player = gameBoard[7];
        return 1;
    }

    else if (gameBoard[1] == gameBoard[4] && gameBoard[4] == gameBoard[7]){
        
        player = gameBoard[1];
        return 1;
    }

    else if (gameBoard[2] == gameBoard[5] && gameBoard[5] == gameBoard[8]){
        
        player = gameBoard[2];
        return 1;
    }

    else if (gameBoard[3] == gameBoard[6] && gameBoard[6] == gameBoard[9]){
        
        player = gameBoard[3];
        return 1;
    }

    else if (gameBoard[1] == gameBoard[5] && gameBoard[5] == gameBoard[9]){
        
        player = gameBoard[1];
        return 1;
    }

    else if (gameBoard[3] == gameBoard[5] && gameBoard[5] == gameBoard[7]){
        
        player = gameBoard[3];
        return 1;
    }
    
    else if (gameBoard[1] != '1' && gameBoard[2] != '2' && gameBoard[3] != '3' && gameBoard[4] != '4' && gameBoard[5] != '5' && gameBoard[6] != '6' && gameBoard[7] != '7' && gameBoard[8] != '8' && gameBoard[9] != '9') {
        
        return 2;
    }
    else
        return 3;
}
