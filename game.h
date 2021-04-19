#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//需要得知四种游戏的状态
//1、玩家胜利 - '*'
//2、电脑胜利 - '#'
//3、平局 - 'Q'
//4、未出结果，继续游戏 - 'C'
char iswin(char board[ROW][COL], int row, int col);
