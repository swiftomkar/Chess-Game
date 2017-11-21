#include <iostream>

using namespace std;

class piece {
private:
    int pos;
    int alive; //1=alive, 0=dead
public:
    piece(int piece, int pos, int alive): pos(pos),piece(piece),alive(alive) {
        // this is the constructor for the piece.


    }
    int movement(int x, int y){
        int temp=piece;
        piece=0;
        p[x][y]=piece; // P is the main 8*8 chess matrix
        /* 1.this function takes the new location of the piece from the main
         * 2.it updates the main matrix of chess according to the movement
         */
        return p;

    }
};

class pawn:public piece{
    /*after learning about polymorphism I came up with this method to ensure that code is minimal and abstraction is max
     * requirement 1: reuse code -> done.
     * requirement 2: max abstraction -> done.
     */
public:
    movement(x,y){
        //moves the pawn to the new position on the matrix using x and y
        cout<< "you may only move forward by one step";
    }
};

class king: public piece{
public:
    movement(x,y){
        //moves the pawn to the new position on the matrix using x and y
        cout<<"you may move one step in any direction";
    }
};

/* 1. similarly all of the types of pieces can be set up to use the code for movement
 * 2. all of the pieces use features defind in our class piece
 * 3. We use only one class, ie: pawn to handle movements of all 8 pawns
 */

int main(){
    int x,y;
    pawn pb_1; //1st black pawn
    king kb; //black king
    piece *blackPawn=&pb_1;
    piece *blackKing=&kb;
    blackPawn->movement(x,y);
    blackPawn->movement(x,y);
}
/* ->I tried to call movement in class piece from the main passing the location paameters x and y
    * ->This approach is using polymorphism in c++
    * ->This pseudocode may not be perfect as I have learnt the concept of polymorphism today after the interview itself
    * ->Please let me know if there are more improvements I can make to this code in order to make it even more efficient.
    *   I really like to learn new concepts and apply them in the code.
    *   The chess board game question really interested me and I would like to solve it to an extent that i can make it work.
    *   ->Also, I would like to solve more of such challenging questions.
    */