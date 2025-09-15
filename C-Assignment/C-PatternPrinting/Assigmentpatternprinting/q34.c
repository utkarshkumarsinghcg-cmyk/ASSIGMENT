#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=5; i>=1; i--) {
		for(int r=1; r<=n-i; r++) {
			printf(" ");
		}


		for(int j=5; j<=2*n-i; j++) {
			printf("%c",'*');
		}
		printf("\n");
	}



	return 0;
}
