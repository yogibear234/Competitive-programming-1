#include<stdio.h>

int vol( int x , int y , int z){
	return x*y*z;
}

int main(){

	int n;
	int l,w,h;
	scanf("%d" , &n);
	while(n>0 && n<=100){
		
		scanf("%d%d%d" , &l,&w,&h);
		if(h<41){
			printf("%d" , vol(l,w,h));
		}
		n--;
	}

	return 0;
}