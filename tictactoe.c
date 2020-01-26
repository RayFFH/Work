#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Enum{NOUGHTS,CROSSES, BORDER, EMPTY};


const int ConvertTo9 = {
	6,7,9
	11,12,13
	16,17,18
};

void startBoard(int *board){
	int index =0;
	for(index=0; index <25; ++index){
		board[index]=BORDER
	}
	for(index =0; index<9; ++ index){
		board[ConvertTo9[index]] = EMPTY;
	}
}
void PrintBoard(const int *board_ {
	int index=0;
	printf("\n\n\n");
	for(index=0; index<25' ++ index){
		if(index!=0 && index%5==0){
			printf("\n");
		}
	printf("%d",board[index]);
	}

int main(){

int board[25];
InitialiseBoard[&board[0]_;
board[ConvertTo25[0]] = CROSSES;

}
