#include <stdio.h>
#include <math.h>
//gyuguy

int isPrime(int x)
{
	if(x < 1)
		return -1;
	int i, ans = 0;
	for(i = 1; i <= (int)sqrt(x); ++i)
	{
		if(0 == x % i)
			++ans;
	}

	return (ans == 1); 

}

int main()
{
	int N;
	scanf("%d", &N);
	int i, j;
	int prev = 2, next, res = 0;

	for(i = 3; i < N; ++i)
	{

		if(isPrime(i))
		{
			next = prev;
			prev = i;
			if(2 == (prev - next))
				++res;
		}	
	}

	printf("%d\n", res);
	return 0;
}
