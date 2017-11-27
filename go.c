#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#inlcude <ctype.h>

/*
int checkmid(int * position);
int checktop(int * position);
int checkleft(int * position);
int checklright(int * position);
int checkbottom(int * position);
*/

enum stone{clear, white, black};

void black_input(int board[9][9]);

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

	while(1){
		black_input(realboard);
	printboard(9,9,realboard);
	delay(100);
	}
    return 0;
}


void printboard(int size_x, int size_y, int board[size_y][size_x]){
    system("cls");
    int j= 0;
    int k = 0;
    for(j = 0; j<size_y; j++){
        for (k = 0; k<size_x; k++){
            if(board[j][k]==clear)printf("0 ");
            if(board[j][k]==white)printf("w ");
            if(board[j][k]==black)printf("b ");

        }

        printf("\n");
    }
}

void black_input(int board[9][9]){
	char cposx[3]={};
	int iposx;
	int posy;
	printf("Insert coordinates for the position of placing the stone\n");
	gets(cposx);
	if(cposx[0]=='A'){
		iposx=0;
	} if (cposx[0]=='B'){
		iposx=1;
	} if (cposx[0]=='C'){
		iposx=2;
	} if (cposx[0]=='D'){
		iposx=3;
	} if (cposx[0]=='E'){
		iposx=4;
	} if (cposx[0]=='F'){
		iposx=5;
	} if (cposx[0]=='G'){
		iposx=6;
	} if (cposx[0]=='F'){
		iposx=7;
	} if (cposx[0]=='H'){
		iposx=8;
	}
	posy=cposx[1];
	board[iposx][posy]=black;
}
