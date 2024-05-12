void emptyBoard(char *board);
void printBoard(char *board);
void initBoard(char *board);
char get_file(int a);
char get_rank(int a);
char* get_coordinates(int a);
int get_color(char piece);
char* char_to_string(char a);
void bishop_move(int pos);
void pawn_move(int pos);
void rook_move(int pos);
void knight_move(int pos);