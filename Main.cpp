#include"recursion.h"
int sum_1_n(int n)
{
	if (n == 0) return 0;
	return n + sum_1_n(n - 1);
}
float sum2(float n)
{
	if (n == 0) return float(1);
	return sum2(n-1)+1/(2*n+1);
}
float sum3(float n)
{
	if (n == 0) return 0.5;
	return sum3(n - 1) + ((2 * n + 1) / (2 * n + 2));
}
float sum4(int n,float x)
{
	if (n == 1) return x;
	return sum4(n - 1, x) + pow(x,n);
}

int demngto(int a[], int n)
{ 
	if (n<0) return 0;
	if (ktnguyento(a[n]))
	   return demngto(a, n-1)+1;
	return demngto(a, n-1);
}
bool ktnguyento(int &x)
{
	if (x < 2) return false;
	for (int i = 2; i <= x / 2; i++)
	{
		if ((x % i) == 0) return false;
	}
	return true;
}
int tongchan(int a[], int n)
{
	if (n < 0) return 0;
	if((a[n] % 2 )== 0 ) return tongchan(a, n - 1) +a[n];
	return tongchan(a, n - 1);
}
long gt(int n, int g)
{
	if (n == 1) return g;
	return gt(n - 1, n * g);
}
int dem(int a[], int n)
{
	if (n < 0) return 0;
	if (a[n] < 0) return (a, n - 1) + 1;
	return (a, n - 1);
}

