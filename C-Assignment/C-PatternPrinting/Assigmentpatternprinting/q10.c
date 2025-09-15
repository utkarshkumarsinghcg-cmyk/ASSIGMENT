#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int r=1; r<=n-i; r++) {
			printf(" ");
		}


		for(int j=1; j<=i; j++) {
			printf("%c",'*');
		}
		printf("\n");
	}
	return 0;
}



