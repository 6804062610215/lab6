#include <stdio.h>
int main()
{ 
	int i, j, t[5][6];
	for(i = 0;i < 5;i++){
		for(j = 0;j < 6;j++){
			if(i % 2 == 0){
				t[i][j] = 5;
			}else{
				t[i][j] = 0;
			}
		}
	}
	
	for(i = 0;i < 5;i++){
		for(j = 0;j < 6;j++){
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}
