#include <stdio.h>
#include <stdlib.h>



void f1(char *a[]){
	printf("%s\n",a[0]);
	printf("please igonre");
}

void f2(int *a){
	int *b=malloc(sizeof(int));
	*b=2;
	a=b;
	printf("in f2, a=%d\n",*a);
}

void main(int argc, char *argv[]){
	//char *greetings[4]={"hi","yo","hello","bonjour"};
	//f1(greetings);
	int a = 3;
	f2(&a);
	printf("after f2, a=%d\n",a);
}
