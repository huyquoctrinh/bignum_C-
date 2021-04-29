#include<iostream>
#include<string>
#include "Header.h"
#include<sstream>
#define MAX 1024
using namespace std;

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
	if (pos < n) {
		return a.data[pos] - 48;
	}
	return 0;
}
int string2num(string a) {
	stringstream geek(a);
	int x = 0;
	geek >> x;
	return x;
}
int get_bin(bigint a,int pos) {
	int n = getLength(a);
	if (pos < n) {
			if (a.data[pos] == 1) {
				return 1;
			}
			else if (a.data[pos] == 0) {
				return 0;
			}
	}
}
void make_equal(bigint& a, bigint& b) {
	int n = getLength(b);
	int na = getLength(a);
	while ( na< n) {
		a.data = "0" + a.data;
		na++;
	}
}
int makeEqualLength(bigint &a, bigint &b) {
	int n1 = getLength(a);
	int n2 = getLength(b);
	if (n1 < n2) {
		make_equal(a, b);
		return n2;
	}
	else if (n1 > n2) {
		make_equal(b, a);
		return n1;
	}
	else if (n1 == n2) {
		return n1;
	}
}
/*
int get_digit_bin(bigint a,int pos) {
	int n = getLength(a);
	for (int i = 0; i < getLength(a); i++) {
		
	}
}*/

bigint add_bin(bigint a, bigint b) {
	bigint res;
	res.data = ' ';
	int la = getLength(a);
	int lb = getLength(b);
	int l = makeEqualLength(a, b);
	int buffer = 0;
	for (int i = l-1; i >= 0; i--) {
		int fbit = getDigit(a, i);
		int sbit = getDigit(b, i);
		int sum = (fbit ^ sbit^buffer);
		res.data = to_string(sum) + res.data;
		if ((fbit == 1) && (sbit == 1)) {
			buffer = 1;
		}
		else {
			buffer = 0;
		}
	}
	int x = 1;
	if (buffer == 1) {
		res.data = to_string(x) + res.data;
	}
	return res;
}
bigint add_dec(bigint a, bigint b) {
	bigint res;
	int la = getLength(a);
	int lb = getLength(b);
	int l = makeEqualLength(a, b);
	int buffer = 0;
	for (int i = l - 1; i >= 0; i--) {
		int fnum = getDigit(a, i);
		int snum = getDigit(b, i);
		int sum = fnum + snum + buffer;
		res.data = to_string(sum % 10) + res.data;
		if (sum > 10) {
			buffer = 1;
		}
		else {
			buffer = 0;
		}
	}
	return res;
}
int bin2dec(bigint n){
	//string num = n.data;
	int dec_value = 0;
	int base = 1;

	int len = getLength(n);
	for (int i = len - 1; i >= 0; i--) {
		if (n.data[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}
