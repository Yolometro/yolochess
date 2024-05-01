#include<stdio.h>
#include<stdlib.h>

void print_board(char *board);

int main()
{
    char board[64];
    //black pieces
    board[0] = 'r';
    board[1] = 'n';
    board[2] = 'b';
    board[3] = 'q';
    board[4] = 'k';
    board[5] = 'b';
    board[6] = 'n';
    board[7] = 'r';
    for (int i = 8; i < 16; i++)
        board[i] = 'p';
    //white pieces
    for (int i = 48; i < 56; i++)
        board[i] = 'P';
    board[56] = 'R';
    board[57] = 'N';
    board[58] = 'B';
    board[59] = 'Q';
    board[60] = 'K';
    board[61] = 'B';
    board[62] = 'N';
    board[63] = 'R';

    //print_board(board);
    int rank = 8;
    for (int i = 0; i < 64; i++)
    {
        if ((i != 0) && ((8 % i) == 0))
        {
            printf("%i|", rank);
            rank--;
        }
        printf("%c", board[i]);
        if ((8 % (i + 1)) == 0)
            printf("|\n");
    }
    printf(" |abcdefgh\n");
    return 0;
}


/*void print_board(char *board)
{
    int rank = 8;
    for (int i = 0; i < 64; i++)
    {
        if ((8 % i) == 0)
        {
            printf("%i|", rank);
            rank--;
        }
        printf("%c", board[i]);
        if ((8 % (i + 1)) == 0)
            printf("|\n");
    }
    printf(" |abcdefgh\n");
}*/
