#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int checkmid(int * position);
int checktop(int * position);
int checkleft(int * position);
int checklright(int * position);
int checkbottom(int * position);
*/
void delay(int milli_seconds)
{
        // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}
void printboard(int size_x, int size_y, int board[size_y][size_x]);

int main()
{
    int loop = 0;
    int realboard[9][9] = {0};
    int a = 0;
    int b = 0;


    while(loop <10){
        for(a = 0; a<9;a++){
            for(b = 0; b<9; b++){
                if (a==0 && b == 0){
                    realboard[a][b] = 1;
                    realboard[8][8] = 0;

                }else if(a!=0 && b==0){
                    realboard[a][b] = 1;
                    realboard[a-1][8] = 0;
                }
                else{
                    realboard[a][b] = 1;
                    realboard[a][b-1] = 0;

                }
                delay(250);

                printboard(9,9,realboard);

                //delay(1000);
            }
        }
        loop++;
    }
    return 0;
}


void printboard(int size_x, int size_y, int board[size_y][size_x]){
    system("cls");
    int j= 0;
    int k = 0;
    for(j = 0; j<size_y; j++){
        for (k = 0; k<size_x; k++){
            if(board[j][k]==0)printf("0 ");
            if(board[j][k]==1)printf("w ");
            if(board[j][k]==2)printf("b ");

        }

        printf("\n");
    }
    return 0;
}
