#include <stdio.h>

int main() {
    int score[4] = {80,65,90,70};
    int best[3];
    int i, j, max, maxIndex;

    for(i=0;i<3;i++) {

        max = score[0];
        maxIndex = 0;

        for(j=1;j<4;j++){
            if(score[j] > max){
                max = score[j];
                maxIndex = j;
            }
        }
        best[i] = max;
        score[maxIndex] = -1;
    }

    printf("Best 3 scores:\n");
    for(i=0;i<3;i++)
        printf("%d ", best[i]);

    return 0;
}
