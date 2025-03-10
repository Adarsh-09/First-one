#include<stdio.h>
#define size 3

void initializeboard(char board[size][size]);
void printboard(char board[size][size]);
int wincheck(char board[size][size]);
int fullcheck(char board[size][size]);

int main()
{
    char board[size][size];
    int row,colmn;
    char currentplayer='X';

    initializeboard(board);

    while (1)
    {
        printf("player %c , Enter your move in the format of row and column : \n",currentplayer);
        scanf("%d %d",&row,&colmn);
        
        if(row<0|| colmn<0||row>size||colmn>size||board[row][colmn]!=' '){
            printf("Invalid move , Please try again \n");
        }
        board[row][colmn]=currentplayer;
        
        if (wincheck(board)){
            printboard(board);
            printf("Player %c won <3 \n",currentplayer);
            break;
        }
        else if (fullcheck(board))
        {
            printboard(board);
            printf("It's a draw ): , Lets do a rematch \n");
            break;
        }
        currentplayer=(currentplayer=='X')?'O':'X';
    }
    return 0;
}

    void initializeboard(char board[size][size])
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                board[i][j]=' ';
            }
        }
    }

    void printboard(char board[size][size])
    {
        printf("\n");
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                printf(" %c ",board[i][j]);
                if (j<size)
                {
                    printf("|");
                }
            }
            printf("\n");
            if (i<size-1)
            {
                printf("---|---|--- \n");
            }
        }
        printf("\n");
    }

    int wincheck(char board[size][size])
    {
         for (int i = 0; i < size; i++)
         {
            if (board[i][0]==board[i][1] && board[i][1]==board[i][2]&& board[i][0]!=' ' || board[0][i]==board[1][i]&&board[1][i]==board[2][i]&& board[0][i]!=' ')
            {
                return 1;
            }
         }
         if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ' || board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
         {
            return 1;
         }
         return 0;
    }
    
    int fullcheck(char board[size][size])
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (board[i][j]==' ')
                {
                    return 0;
                }
            }
        }
        return 1;
    }
