#include <stdio.h>
#define SIZE 7

void quick (int data[], int left, int right);
void change(int data[], int i, int j);
void show(int data[],int size);

int main(void){
	int data[7]={4,2,5,6,1,9,3};

	quick(data,0,SIZE-1);

	printf("ソート後の配列は\n");
	show(data,SIZE);
	printf("です。\n");

	return 0;
}

void quick(int data[],int left, int right){

	int i=left;
	int j=right;
	int piv = data[left];


	if(left < right){


	while(i<=j){
		while(data[i]<piv){
			i++;}
		while(data[j]>piv){
			j--;}
	
		if(i<=j){
			change(data,i,j);

			show(data,SIZE);
		i++;
		j--;}
	}
	
	if(left<j){
		quick(data,left,j);}

	if(i<right){
		quick(data,i,right);
	}
}
}

void change(int data[],int i,int j){
	int t;
	t = data[i];
  data[i] = data[j];
  data[j] = t;
}


void show(int data[],int size){
	int i;
	for(i=0;i<size;i++){
	printf("%2d",data[i]);}

	printf("\n");
}



