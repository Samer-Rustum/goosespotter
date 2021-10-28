#include <iostream>
#include "geesespotter_lib.h"
//TODO:
//printBoard();
//mark();
char *createBoard(std::size_t xdim, std::size_t ydim)
{
    const std::size_t array_size{xdim * ydim};
    char *board{new char[array_size]{}};
    //Creating a pointer for the array
    return board;
}
void computeNeighbors(char *board, std::size_t xdim, std::size_t ydim)
{
}
void hideBoard(char *board, std::size_t xdim, std::size_t ydim)
{
    for (int i{0}; i < xdim * ydim; ++i)
    {
        board[i] |= hiddenBit();
    }

    // std::cout<<"HEE";
}
void cleanBoard(char *board)
{
    delete[] board;
    board = nullptr;
}
void printBoard(char *board, std::size_t xdim, std::size_t ydim)
{
    std::size_t index{0};
    char second;
    char num_geese;
    for (int i{0}; i < ydim; ++i)
    {
        for (int j{0}; j < xdim; ++j)
        {
            //converts a 2D index into a 1D index.
            index = (xdim * j) + i;
            // second=((board[index]>>4)<<4);
            // num_geese=(board[index]<<4);
            // std::cout<<(board[index]>>4)<< std::endl;
            if ((board[index] & hiddenBit()) == hiddenBit())
            {
                if ((board[index] & markedBit()) == markedBit())
                {
                    std::cout << 'M';
                }else{
                    std::cout << '*';
                }
            }
            else
            {
                std::cout << (board[index] & valueMask());
            }
        }
        std::cout << std::endl;
    }
}
int reveal(char *board, std::size_t xdim, std::size_t ydim, std::size_t xloc, std::size_t yloc)
{
    return 0;
}
int mark(char *board, std::size_t xdim, std::size_t ydim, std::size_t xloc, std::size_t yloc)
{
    std::size_t index{((xdim * xloc) + yloc)};
    board[index] |= markedBit();
    if ((board[index]&markedBit())==markedBit())
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
bool isGameWon(char *board, std::size_t xdim, std::size_t ydim)
{
    return false;
}
