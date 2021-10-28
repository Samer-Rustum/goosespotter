#include <iostream>
#include "geesespotter_lib.h"

char *createBoard(std::size_t xdim, std::size_t ydim){
    const std::size_t array_size{xdim*ydim};
    char *board{new char[array_size]{} };
    //Creating a pointer for the array
    return board;
}
void computeNeighbors(char *board, std::size_t xdim, std::size_t ydim){

}
void hideBoard(char *board, std::size_t xdim, std::size_t ydim){
    for (int i{0}; i< xdim*ydim; ++i){
        board[i] = hiddenBit();
    }
}
void cleanBoard(char *board){
    delete board;
    board = nullptr;
}
void printBoard(char *board, std::size_t xdim, std::size_t ydim){
for (int i{0}; i<xdim*ydim;++i){
    std::cout<<board[i];
    if(i%(xdim-1)){
        std::cout<<'\n';
    }

}
}
int reveal(char *board, std::size_t xdim, std::size_t ydim, std::size_t xloc, std::size_t yloc){
    return 0;
}
int mark(char *board, std::size_t xdim, std::size_t ydim, std::size_t xloc, std::size_t yloc){
    return 0;
}
bool isGameWon(char *board, std::size_t xdim, std::size_t ydim){
    return false;
}
