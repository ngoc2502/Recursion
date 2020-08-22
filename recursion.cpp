#include"recursion.h"
using namespace std;
int main()
{
	int n = 0;
	int a[10];
	cout << "n = ";
	cin >> n;
	int k1=sum_1_n(n);
	cout << k1 << "\n";
	
	float k2 = sum2(n);
	cout << k2 << "\n";

	float k3 = sum3(n);
	cout << k3<<"\n";

	int x = 0;
	cout << "x=";
	cin >> x;
	float k4 = sum4(n,x);
	cout << k4 << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "value: ";
		cin >> a[i];

	}
	int dem=demngto(a, n);
	cout << dem<<"\n";
	
	int tongc = tongchan(a, n-1);
	cout << tongc << "\n";
	return 0;
}