#include <stdio.h>

int main() {

    int score[4] = {80,65,90,70};
    int i, j, temp;

    for(i = 0; i < 4-1; i++) {
        for(j = 0; j < 4-i-1; j++) {
            if(score[j] < score[j+1]) {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }

    printf("Best 3 scores (Method 2):\n");
    for(i = 0; i < 3; i++)
        printf("%d ", score[i]);

    return 0;
}
