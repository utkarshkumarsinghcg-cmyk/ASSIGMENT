#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int r=n-1; r>=i; r--) {
			printf(" ");
		}


		for(int j=1; j<=i; j++) {
			printf("%C",'@'+j);
		}
		printf("\n");
	}



	return 0;
}
