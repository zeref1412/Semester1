#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int n,i,count=0;
	for(i = 0; i<100; i++)
		if(i%2==0&&i%5==0) {

			count++;
		}
	printf("%d",&count);
	return 0;
}
