#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int r=1; r<=i; r++) {
			printf(" ");
		}


		for(int j=1; j<=n-i+1; j++) {
			printf("%c",'@'+j);
		}
		printf("\n");
	}
	return 0;
}

