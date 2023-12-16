#include  <stdio.h> 
#include <conio.h> 
#include <stdlib.h>
#define l 1 
#define u 5 
#define l1 1 
#define u1 3 
#define l2 1 
#define u2 4 
#define l3 1 
#define u3 5 
int *BA1, *BA2, *BA3, *p; 
int i,j,k; 
void Create1DArray(){ 
 	int element, c, total_mem;  
 	element = (u-l+1);//=5 
 	printf("element = %d\n" , element);
 	c = sizeof(*BA1);
	 	printf("c = %d\n", c); 
 	total_mem = element * c;// 20
	 printf("totol_mem = %d\n", total_mem); 
	BA1 = (int*)malloc(total_mem);
		printf("BA1 = %d\n", BA1); 
} 
void A1(int i,int x){ 
 p=BA1+(i-l);  
 *p=x;  
} 
int ReadA1(int i) { 
 p=BA1+(i-l); 
 return(*p); 
 } 
//---------------------------------------------------------------------
void Create2DArray() { 
 int element,c,total_mem; 
 element=(u1-l1+1)*(u2-l2+1); // = 12
 c=sizeof(*BA2); 
 total_mem=element*c; //= 4*12=48byte
 BA2=(int*)malloc(total_mem); 
} 
void A2(int i,int j,int x) { 
 p=BA2+((i-l1)*(u2-l2+1)+(j-l2)); 
 *p=x; 
} 
int ReadA2(int i,int j) { 
 p=BA2+(i-l1)*(u2-l2+1)+(j-l2); 
 return(*p); 
} 
//---------------------------------------------------------------------
void Create3DArray() { 
 int element,c,total_mem; 
 element=(u1-l1+1)*(u2-l2+1)*(u3-l3+1); //=60
 c=sizeof(*BA3); 
 total_mem=element*c; //=240
 BA3=(int*)malloc(total_mem); 
} 
void A3(int i,int j,int k,int x) { 
 p=BA3+((i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3)); 
 *p=x; 
} 
int ReadA3(int i,int j,int k){ 
 p=BA3+(i-l1)*(u2-l2+1)*(u3-l3+1)+(j-l2)*(u3-l3+1)+(k-l3); ; 
 return(*p); 
} 
//---------------------------------------------------------------------
int main() { 
 printf("1-3 DIMENSION ARRAY FUNCTION...\n"); 
 printf("=================================\n"); 
// Create Array.........
 Create1DArray(); 
 Create2DArray(); 
 Create3DArray(); 
//Using 1 Dimention Array...
 i=2; 
 A1(i,9);
 printf("\nA1(%d) = %d ",i,ReadA1(i)); 
//Using 2 Dimension Array ...
i=2; j=3; 
 A2(i,j,99); 
 printf("\nA2(%d,%d) = %d ",i,j,ReadA2(i,j)); 
//Using 3 Dimension Array...
 i=3; j=4;k=5; 
 A3(i,j,k,999); 
 printf("\nA3(%d,%d,%d) = %d ",i,j,k,ReadA3(i,j,k)); 
 getch(); //Wait for KBD hit
 free(BA1); //Free memory of each array
 free(BA2); 
 free(BA3); 
 return(0); 
} //End MAIN Fn.