#include <iostream>
#include<string.h>
#include "Header.h"
using namespace std;
void out_bigint(bigint a) {
	for (int i = 0; i < getLength(a); i++) {
		cout << a.data[i];
	}
}
int main()
{
	bigint a, b,res,x;
	unsigned long long n = 8793278316383117319;
	a.data = "01101010111110111111";
	b.data = "01101110110111";
	string s = "abc";
	x.data = " 00010110 ";
	int t = makeEqualLength(a, b);
	res = add_bin(a, b);
	int resu = bin2dec(x);
	//cout << resu<<"\n";
	//res = bin2dec(x);
	//out_bigint(res);
	//out_bigint(bitshift_right(x, 2));
	cout << bitshift_left(x, 2);
}


