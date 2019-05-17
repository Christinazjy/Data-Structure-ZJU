#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
int main(void)
{
	int M, N, K;
	scanf("%d %d %d", &M, &N, &K);
	int stack[M+1];
    int result[MaxSize][MaxSize];
	int temp;
	int i, j;
	for(i = 0; i < K; i++)//对每个序列
    {
        for(j = 0; j < N; j++)
            scanf("%d", &result[i][j]);
    }
    for(i = 0; i < K; i++)
	{
		int sum = 0;
        int n = 0;
        int index = 0;
        int rear = 0;
		temp = result[i][index];//读入需要输出的第一个数 
		while(sum < N) 
		{
			while(temp == stack[rear-1])
			{
				stack[--rear] = 0;//输出
				temp = result[i][++index];
				sum++;
			}
            if(rear <= M && n <= N)
            {
			    stack[rear++] = n;
			    n++; 	                
            }
            else
                break;
		}
        if(sum < N)
            printf("NO\n");
        else
            printf("YES\n");
    }
	
	return 0;
}



