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
	bigint a, b,res;
	a.data = "110";
	b.data = "101";
	string s = "abc";
	int t = makeEqualLength(a, b);
	res = add_bin(a, b);
	out_bigint(res);
}


