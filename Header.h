#include<iostream>
using namespace std;
struct bigint {
	string data;
};
bigint add_bin(bigint a, bigint b);
string bigint2string(bigint a);
bigint string2bigint(string a);
string value2string(int a);
int getLength(bigint a);
int getDigit(bigint a, int pos);
void make_equal(bigint& a, bigint& b);
int makeEqualLength(bigint& a, bigint& b);
bigint add_bin(bigint a, bigint b);
bigint add_dec(bigint a, bigint b);
int bin2dec(bigint n);
#pragma once