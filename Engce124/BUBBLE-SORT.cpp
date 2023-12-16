/* Program ASCENDING BUBBLE SORT can.. 
1. Random raw data into 1 dimension Array 
2. Sorting and display detail of each step result
3. Display final result
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define MaxData 100

int Data[MaxData] ;
int N;

void PrepareRawData(int N){
	int i;
	srand(time(NULL));
	for(i=1 ; i<=N ; i++)
		Data[i]=1+rand()%99;				
}

void DispData(int N){
	int i;
	for(i=1 ; i<=N ; i++)
		printf("%2d    ",Data[i]);		
}
	
void BubbleSort(int N){
	int i,j,temp;
	printf("--------------------------------------------------------------------------------\n");
	printf("i  ");
	for(i=1;i<=N;i++)
		printf("(%2d)  ",i);
	printf("\n");
	printf("--------------------------------------------------------------------------------\n");
	for(i=1;i<=N-1;i++){
			if(Data[i]<Data[i+1]){
					printf("%2d. ",i+1);
					DispData(N);
					j=i+1;
					while(Data[j]>Data[j-1]&&j-1!=0){
							temp=Data[j-1];
							Data[j-1]=Data[j];
							Data[j]=temp;
							j--;
							printf("\n");
							printf("%2d. ",i+1);
							DispData(N);
					}
					printf("\n");
			}
	}
}
int main(){
	printf("DECENDING BUBBLE SORT\n");
	printf("================================================================================\n");
	N=12;
	PrepareRawData(N);
	printf("Raw Data:");
	DispData(N);
	printf("\n--------------------------------------------------------------------------------\n");
	printf("Processing Data...\n");
	BubbleSort(N);
	printf("--------------------------------------------------------------------------------\n");
	printf("Sorted Data : ");
	DispData(N);
	getch();
	return(0);
}


 
