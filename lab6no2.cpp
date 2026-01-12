#include <stdio.h>
int main()
{ 
	int i, j, t[3][4], min = 99999;
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			scanf("%d", &t[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			if(t[i][j] < min){
				min = t[i][j];
			}
		}
	}
	printf("%d", min);
}
