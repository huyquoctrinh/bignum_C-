#include<iostream>
#include<string>
#define MAX 1024
using namespace std;
struct bigint {
	string data;
};
string bigint2string(bigint a) {
	char* x = new char[MAX];
	return x;
}
bigint string2bigint(string a) {
	bigint res;
	res.data = a;
	return res;
}
string value2string(int a) {
	string p = to_string(a);
	return p;
}
int getLength(bigint a) {
	return a.data.length();
}
int getDigit(bigint a,int pos) {
	int n = getLength(a);
	for (int i = 0; i < n; i++) {
		if (pos < n) {
			return a.data[pos] - 48;
		}
	}
	return 0;
}
