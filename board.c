#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void emptyBoard64();
void printBoard64(char *board);
void initBoard(char *board);
char get_file(int a);
char get_rank(int a);
char* get_coordinates(int a);

int main()
{
    char board[64];
    initBoard(board);
    printBoard64(board);
    for (int i = 0; i < 64; i++)
    {
        //printf("(%c %c) ", get_file(i), get_rank(i));
        printf("(%s) ", get_coordinates(i));
        if ((i + 1) % 8 == 0)
            printf("\n");
    }
    return 0;
}

int test_board()
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

/*char** emptyBoard()
{
    char board[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = '.';
        }
    }
    return board;
}*/

void emptyBoard64(char *board)
{
    for (int i = 0; i < 64; i++)
    {
        board[i] = '.';
    }
}

void initBoard(char *board)
{
    // black pieces
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
    // empty spaces
    for (int i = 16; i < 48; i++)
        board[i] = '.';
    // white pieces
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
}

void printBoard64(char *board)
{
    for (int i = 0; i < 64; i++)
    {
        printf("%c ", board[i]);
        if ((i + 1) % 8 == 0)
            printf("\n");
    }
}

char get_file(int a)
{
    int tmp = (a % 8) + 1;
    char file;
    switch (tmp)
    {
        case 1:
            file = 'a';
            break;
        case 2:
            file = 'b';
            break;
        case 3:
            file = 'c';
            break;
        case 4:
            file = 'd';
            break;
        case 5:
            file = 'e';
            break;
        case 6:
            file = 'f';
            break;
        case 7:
            file = 'g';
            break;
        case 8:
            file = 'h';
            break;
        default:
            file = 'z';
            break;
    }
    return file;
}

char get_rank(int a)
{
    //int tmp = 64 - a;
    int tmp = 63 - a;
    int tmp2 = (tmp / 8) + 1;
    char rank;
    switch (tmp2)
    {
        case 1:
            rank = '1';
            break;
        case 2:
            rank = '2';
            break;
        case 3:
            rank = '3';
            break;
        case 4:
            rank = '4';
            break;
        case 5:
            rank = '5';
            break;
        case 6:
            rank = '6';
            break;
        case 7:
            rank = '7';
            break;
        case 8:
            rank = '8';
            break;
        default:
            rank = 'Z';
            break;
    }
    return rank;
}

char* get_coordinates(int a)
{
    char file = get_file(a);
    char rank = get_rank(a);
    //char *coordinates = strcat(file, rank);
    char *coordinates = file + rank;
    return coordinates;
}
/*void printBoard(char board[][])
{
    printf("enter print\n");
    for (int i = 0; i < 8; i++)
    {
        printf("for i %i\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("for j = %i\n", j);
            printf("%c", board[i][j]);
            printf("exit for \n");
        }
    }
}*/

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
