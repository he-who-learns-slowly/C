#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	
	int* MyArray;
	int size = 10;
	MyArray = (int*)malloc(size*sizeof(int));
	int i;
	for (i = 0; i <10; i++){
		MyArray[i]= i;
	}
	i = 0;
	for (i = 0; i <10; i++){
		printf("%i, ", MyArray[i]);
	}
	free(MyArray);
	return 0;
}
