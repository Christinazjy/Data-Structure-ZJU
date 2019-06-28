#include <stdio.h>
#define MAXSIZE 100000

int main(void)
{
	int List[MAXSIZE];
	int K, i=0;
	int thissum, maxsum;
	thissum = maxsum = 0;
	scanf("%d", &K);
	while(i < K)
		scanf("%d", List[i++]);
	
	i = 0;
	while(i < K)
	{
		thissum+=List[i++];
		if(thissum>maxsum)
			maxsum = thissum;
		if(thissum < 0)
			thissum = 0;
	}
	printf("%d", maxsum);
	return 0;
}
