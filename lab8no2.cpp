#include <stdio.h>
int checkscore(char std[]);
int count1(char ans[][10],int std);
int hardestQ(char ans[][10],int std,int ques);

int main(){
	int i,j;
	char ans[8][10] ={
	{'A','B','A','C','C','D','E','E','A','D'},//7
	{'D','B','A','B','C','A','E','E','A','D'},//6
	{'E','D','D','A','C','B','E','E','A','D'},//5
	{'C','B','A','E','D','C','E','E','A','D'},//4
	{'A','B','D','C','C','D','E','E','A','D'},//8
	{'B','B','E','C','C','D','E','E','A','D'},//7
	{'B','B','A','C','C','D','E','E','A','D'},//7
	{'E','B','E','C','C','D','E','E','A','D'}};//7
	printf("Hardest question = %d\n",hardestQ(ans, 8, 10) + 1);
	
	return 0;
}

int checkscore(char std[]){
	int i;
	int score = 0;
	char charkeys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	
	for (i=0;i<10;i++){
		if(std[i] == charkeys[i])
			score++;
	}
	return score;
}

int count1(char ans[][10],int std){
	int i;
	int count = 0;
	char charkeys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	
	for (i=0;i<std;i++){
		if(ans[i][0] == charkeys[0]){
			count ++;
		}
	}
	return count;
}

int hardestQ(char ans[][10],int std,int ques){
	int i,j;
	int mincrrt = std;
	int hardest = 0;
	char charkeys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	
	for (j=0;j<std;j++){
		int crrt = 0;
		for (i=0;i<std;i++){
			if(ans[i][j] == charkeys[j]){
				crrt++;
			}
		}
		if (crrt < mincrrt){
			mincrrt = crrt;
			hardest = j;
		}
	}
	return hardest;
}
