#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"board.h"

int main()
{
    //char board[64];
    //initBoard(board);
    //printBoard(board);
    //queen_move(63);
    
    //king_move(48);
    //printf("%s\n", get_coordinates(1));
    /*for (int i = 0; i < 64; i++)
    {
        //printf("%s ", get_coordinates(i));
        if ((i + 1) % 8 == 0)
            printf("\n");
    }*/

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

void emptyBoard(char *board)
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

void printBoard(char *board)
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
    printf("a\n");
    char file[1] = "";
    char rank[1] = "";
    char *coordinates;
    strcpy(file, char_to_string(get_file(a)));
    printf("file : %s\n", file);
    strcpy(rank, char_to_string(get_rank(a)));
    printf("rank : %s\n", rank);
    //char *coordinates = strcat(file, rank);
    coordinates = strcat(file, rank);
    printf("coor : %s\n", coordinates);
    return coordinates;
}

char* char_to_string(char a)
{
    switch (a)
    {
        case '1':
            return "1\0";
        case '2':
            return "2\0";
        case '3':
            return "3\0";
        case '4':
            return "4\0";
        case '5':
            return "5\0";
        case '6':
            return "6\0";
        case '7':
            return "7\0";
        case '8':
            return "8\0";
        case 'a':
            return "a\0";
        case 'b':
            return "b\0";
        case 'c':
            return "c\0";
        case 'd':
            return "d\0";
        case 'e':
            return "e\0";
        case 'f':
            return "f\0";
        case 'g':
            return "g\0";
        case 'h':
            return "h\0";
        case 'k':
            return "k\0";
        case 'n':
            return "n\0";
        case 'p':
            return "p\0";
        case 'q':
            return "q\0";
        case 'r':
            return "r\0";
        case 'A':
            return "A\0";
        case 'B':
            return "B\0";
        case 'C':
            return "C\0";
        case 'D':
            return "D\0";
        case 'E':
            return "E\0";
        case 'F':
            return "F\0";
        case 'G':
            return "G\0";
        case 'H':
            return "H\0";
        case 'K':
            return "K\0";
        case 'N':
            return "N\0";
        case 'P':
            return "P\0";
        case 'Q':
            return "Q\0";
        case 'R':
            return "R\0";
        case '.':
            return ".\0";
    }
    return "X\0";
}

int get_color(char piece)
{
    switch(piece) // white pieces
    {
        case 'P':
        case 'R':
        case 'N':
        case 'B':
        case 'Q':
        case 'K':
            return 1;
    }
    switch(piece) // black pieces
    {
        case 'p':
        case 'r':
        case 'n':
        case 'b':
        case 'q':
        case 'k':
            return 2;
    }
    return 0; // empty square
}

void bishop_move(int pos)
{
    char board[64];
    emptyBoard(board);
    for (int i = pos; i < 64; i = i + 9)
    {
        board[i] = 'x';
        if ((get_file(i) == 'h') || (get_rank(i) == '1'))
            break;
    }
    for (int i = pos; i < 64; i = i + 7)
    { 
        board[i] = 'x';
        if ((get_file(i) == 'a') || (get_rank(i) == '1'))
            break;
    }
    for (int i = pos; i > -1; i = i - 7)
    {
        board[i] = 'x';
        if ((get_rank(i) == '8') || (get_file(i) == 'h'))
            break;
    }
    for (int i = pos; i > -1; i = i - 9)
    {
        board[i] = 'x';
        if ((get_rank(i) == '8') || (get_file(i) == 'a'))
            break;
    }
    board[pos] = 'b';
    printBoard(board);
}

void queen_move(int pos)
{
    char board[64];
    int cur;
    emptyBoard(board);
    board[pos] = 'q';
    // bishop moves
    // up left
    for (int i = 1; i < 8; i++)
    {
        cur = pos - i - (i * 8);
        if (cur < 0)
            break;
        if (get_file(cur) != get_file(pos) - i)
            break;
        //if ((get_file(pos - i - (i * 8)))
        board[cur] = 'x';
    }
    //up right
    for (int i = 1; i < 8; i++)
    {
        cur = pos + i - (i * 8);
        if (cur < 0)
            break;
        if (get_file(cur) != get_file(pos) + i)
            break;
        board[cur] = 'x';
    }
    // down left
    for (int i = 1; i < 8; i++)
    {
        cur = pos - i + (i * 8);
        if (cur > 63)
            break;
        if (get_file(cur) != get_file(pos) - i)
            break;
        board[cur] = 'x';
    }
    // down right
    for (int i = 1; i < 8; i++)
    {
        cur = pos + i + (i * 8);
        if (cur > 63)
            break;
        if (get_file(cur) != get_file(pos) + i)
            break;
        board[cur] = 'x';
    }
    // rook moves
    // left move
    for (int i = pos - 1; i > -1; i--)
    {
        if (get_rank(i) != get_rank(pos))
            break;
        board[i] = 'x';
    }
    // right move
    for (int i = pos + 1; i < 64; i++)
    {
        if (get_rank(i) != get_rank(pos))
            break;
        board[i] = 'x';
    }
    // up move
    for (int i = pos - 8; i > -1; i = i - 8)
        board[i] = 'x';
    // down move
    for (int i = pos + 8; i < 64; i = i + 8)
        board[i] = 'x';
    printBoard(board);
}

void pawn_move(int pos)
{
    char board[64];
    emptyBoard(board);
    board[pos] = 'p';
    printf("rank : %c\n", get_rank(pos));

    if (get_rank(pos) == '2')
    {
        if (board[pos - 8] == '.')
        {
            board[pos - 8] = ':';
            if (board[pos - 16] == '.')
            {
                board[pos - 16] = ':';
                // en passant
            }
        }
    }
    else if (get_rank(pos) == '7')
    {
        if (board[pos - 8] == '.')
        {
            board[pos - 8] = 'q';
            //promotion
        }
    }
    else if ((get_rank(pos) > '2') && (get_rank(pos) < '7'))
    {
        printf("a\n");
        if (board[pos - 8] == '.')
        {
            printf("b\n");
            board[pos - 8] = ':';
        }
    }
    // capture
    //if (board[pos - 9] != '.')
    if (get_file(pos) != 'a')
        board[pos - 9] = 'x';
    //if (board[pos - 7] != '.')
    if (get_file(pos) != 'h')
        board[pos - 7] = 'x';
    printBoard(board);
}

void rook_move(int pos)
{
    char board[64];
    emptyBoard(board);
    board[pos] = 'r';
    // left move
    for (int i = pos - 1; i > -1; i--)
    {
        if (get_rank(i) != get_rank(pos))
            break;
        board[i] = 'x';
    }
    // right move
    for (int i = pos + 1; i < 64; i++)
    {
        if (get_rank(i) != get_rank(pos))
            break;
        board[i] = 'x';
    }
    // up move
    for (int i = pos - 8; i > -1; i = i - 8)
    {
        board[i] = 'x';
    }
    // down move
    for (int i = pos + 8; i < 64; i = i + 8)
        board[i] = 'x';
    printBoard(board);
}

void knight_move(int pos)
{
    char board[64];
    emptyBoard(board);
    board[pos] = 'n';
    if ((pos - 17 > -1) && (get_file(pos - 17) == get_file(pos) - 1))
        board[pos - 17] = 'x';
    if ((pos - 15 > -1) && (get_file(pos - 15) == get_file(pos) + 1))
        board[pos - 15] = 'x';
    if ((pos - 10 > -1) && (get_file(pos - 10) == get_file(pos) - 2))
        board[pos - 10] = 'x';
    if ((pos - 6 > -1) && (get_file(pos - 6) == get_file(pos) + 2))
        board[pos - 6] = 'x';
    if ((pos + 6 < 64) && (get_file(pos + 6) == get_file(pos) - 2))
        board[pos + 6] = 'x';
    if ((pos + 10 < 64) && (get_file(pos + 10) == get_file(pos) + 2))
        board[pos + 10] = 'x';
    if ((pos + 15 < 64) && (get_file(pos + 15) == get_file(pos) - 1))
        board[pos + 15] = 'x';
    if ((pos + 17 < 64) && (get_file(pos + 17) == get_file(pos) + 1))
        board[pos + 17] = 'x';
    printBoard(board);
}

void king_move(int pos)
{
    char board[64];
    emptyBoard(board);
    board[pos] = 'k';
    if ((pos - 9 > -1) && (get_file(pos - 9) == get_file(pos) - 1))
        board[pos - 9] = 'x';
    if ((pos - 8 > -1) && (get_file(pos - 8) == get_file(pos)))
        board[pos - 8] = 'x';
    if ((pos - 7 > -1) && (get_file(pos - 7) == get_file(pos) + 1))
        board[pos - 7] = 'x';
    if ((pos - 1 > -1) && (get_file(pos - 1) == get_file(pos) - 1))
        board[pos - 1] = 'x';
    if ((pos + 1 < 64) && (get_file(pos + 1) == get_file(pos) + 1))
        board[pos + 1] = 'x';
    if ((pos + 7 < 64) && (get_file(pos + 7) == get_file(pos) - 1))
        board[pos + 7] = 'x';
    if ((pos + 8 < 64) && (get_file(pos + 8) == get_file(pos)))
        board[pos + 8] = 'x';
    if ((pos + 9 < 64) && (get_file(pos + 9) == get_file(pos) + 1))
        board[pos + 9] = 'x';
    // long castle
    // short castle
    printBoard(board);
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
