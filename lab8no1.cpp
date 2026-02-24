#include <stdio.h>
int findMax(int num[]);
void printAr(int myAr[]);
void addthree(int number[],int pos[][2],int sizenum, int sizepos);
int main(){
	int max ; 
	int number[5] = {20,50,100,199,9};
	int pos[3][2] = {
		{1, 5},
		{3,10},
		{4,2}
	};
	addthree(number,pos,5,3);
	printAr(number);
}
void printAr(int myAr[]){
	int i;
	for (i=0;i<5;i++)
		printf("number[%d] : %d\n",i,myAr[i]);
	

}
int findMax(int num[]){
	int maximum,i=0;
	maximum = num[i];
	float max = num[0];
	for (i=0;i<5;i++){
		if (num[i] > maximum) 
			maximum = num[i];
	}
	num[0]=555;
	return maximum;
}

void addthree(int number[],int pos[][2],int sizenum,int sizepos){
	int i;
	for (i=0;i<sizepos;i++){
		int index = pos[i][0];
		int value = pos[i][1];
		
		if(index < sizenum){
			number[index] += value;
		}
	}
}
