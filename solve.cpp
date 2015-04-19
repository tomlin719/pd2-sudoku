#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
using namespace std;
bool row[9][10], col[9][10], box[9][10];
int input[9][9];
void solve(int);

int main(){
        ifstream inFile("question.txt");
        for(int i=0,t=0;i<9;++i)
                for(int j=0;j<9;++j){
                        inFile >> t;
                        if(input[i][j]=t)
                                row[i][t] = col[j][t] = box[(i/3)*3+(j/3)][t] = 1;
                }
        solve(0);
        return 0;
}void solve(int start){        int R=start/9, C=start%9, B=(R/3)*3+(C/3);
        if(start==81){
                ofstream outFile("answer.txt");
                for(int i=0;i<9;++i){
                        for(int j=0;j<9;++j){
                                if(j)
                                        outFile << ' ';
                                outFile << input[i][j];
                        }
                        outFile << endl;
                }
        }
        else if(input[R][C])
                solve(start+1);
        else
                for(int i=1;i<=9;++i)
                        if(!row[R][i] && !col[C][i] && !box[B][i]){
                                input[R][C] = i;
                                row[R][i] = col[C][i] = box[B][i] = 1;
                                solve(start+1);
                                row[R][i] = col[C][i] = box[B][i] = 0;
                                input[R][C] = 0;
                        }
}
