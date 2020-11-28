#include <stdio.h>
#define N 9
int results[N] = {0}; //保存已经找到的结果前缀数组
int results_end = 0; //结果前缀数组有效数据下标
int is_used[N] = {0}; //是否已经排列过了的标志
int array[N] = {1, 2, 3, 4, 5, 6, 7,8,9};
int cnt = 0;
int k;
/**
 *  * 排列
 *   * @param deep 递归深度
 *    * @param n 数组最大长度
 *     */
void perm(int deep, int n)
{
	int i;
	if (deep > n) // 越界递归结束
	{
		return;
	}

	if (deep == n) // 找到结果，打印，递归结束
	{
		/*
		   for (i = 0; i < n; i++)
		   {
		   printf("%d", results[i]);
		 	  }
		   printf("\t");
		   */
		++cnt;
		if(k == cnt)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", results[i]);
			}
			printf("\t");
		}
		return ;
	}

	for (i = 0; i < n; i++)
	{
		if (is_used[i] == 0)
		{
			is_used[i] = 1;
			results[deep] = array[i];
			perm(deep+1, n);
			is_used[i] = 0;
		}
	}
}

int main()
{
	int n;

	scanf("%d%d", &n, &k);

	perm(0, n);
	
	return 0;
}
