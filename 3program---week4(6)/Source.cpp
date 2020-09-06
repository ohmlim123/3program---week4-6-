#include<stdio.h>
int main()
{

	int N, M;
	scanf_s("%d%d", &N, &M);
	int A[100][100];
	int B[100][100];
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	for (int k = 0;k < N;k++)
	{
		for (int b = 0;b < M;b++)
		{
			scanf_s("%d", &B[k][b]);
		}
	}
	for (int x = 0;x < N;x++)
	{
		for (int z = 0;z < M;z++)
		{
			int sum = 0;
			sum = sum + (A[x][z] + B[x][z]);
			printf("%d ", sum);
			sum = 0;
		}
		printf("\n");
	}
	return 0;
}