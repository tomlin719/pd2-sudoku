#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
        int map[9][9]={8, 1, 2, 7, 5, 3, 6, 4, 9, 9, 4, 3, 6, 8, 2, 1, 7, 5, 6, 7, 5, 4, 9, 1, 2, 8, 3, 1, 5, 4, 2, 3, 7, 8, 9, 6, 3, 6, 9, 8, 4, 5, 7, 2, 1, 2, 8, 7, 1, 6, 9, 5, 3, 4, 5, 2, 1, 9, 7, 4, 3, 6, 8, 4, 3, 8, 5, 2, 6, 9, 1, 7, 7, 9, 6, 3, 1, 8, 4, 5, 2};
        int i, j, k;
        ofstream outFile("question.txt");
        for(k=0; k<65; k++){
                        i=rand()%9;
                        j=rand()%9;
                        map[i][j]=0;
        }
        for(i=0; i<9; i++){
                for(j=0; j<9; j++){
                        outFile << map[i][j] << ' ';
                }
                outFile << endl;
        }
        return 0;
}

