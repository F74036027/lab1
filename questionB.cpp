#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	lab:
	cout << n << " " << endl;
	if (n==1)
		return 0;
	if (n%2==1)
		n = 3*n +1;
	else
		n = n/2;
	goto lab;
	return 0;   
}
