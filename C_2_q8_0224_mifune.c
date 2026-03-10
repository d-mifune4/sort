#include <stdio.h>
#define SIZE 8

void show(int data[], int size);

int main(void){
	int i,j,t;
	int l=0;
	int r=SIZE/2;
	int data[SIZE]={8,1,7,2,6,3,5,4};
	int Mar[SIZE]={0};

	for(i=0;i<SIZE-1;i+=2){
		if(data[i]<data[i+1]){
			t=data[i];
		  data[i]=data[i+1];
	        data[i+1]=t;}
	}

	show(data,SIZE);

	t=0;

	for(i=0;i<SIZE;i+=4){
		for(j=i;j<i+2;j++){
			if(data[j]<data[j+2]){
				
				Mar[t]=data[j+2];
			      Mar[t+1]=data[j];
			      t+=2;
			 }
			
			else{Mar[t]=data[j];
			    Mar[t+1]=data[j+2];
			    t+=2;
			}
		}
	}

        for(i=0;i<SIZE;i++){
		data[i]=Mar[i];
	}

	show(data,SIZE);

	t=0;

	while(l<SIZE/2 && r<SIZE){
		if(data[l]>data[r]){

			Mar[t]=data[l];
			t++;
			l++;}
		else{
			Mar[t]=data[r];
			t++;
			r++;
		}
	}
	while(l<SIZE/2){
		Mar[t]=data[l];
		t++;
		l++;
	}
	while(r<SIZE){
		Mar[t]=data[r];
		t++;
		r++;
	}

	for(i=0;i<SIZE;i++){
		data[i]=Mar[i];
	}

	printf("ソート後の配列は");
		show(data,SIZE);
	printf("です。\n");
	return 0;
}

 void show(int data[],int size){
	 int i;
	 for(i=0;i<size;i++){
		 printf("%2d",data[i]);}
	 printf("\n");
 }

