#include<iostream>
using namespace std;
main() {
	cout <<"Enter a 4-digit number: ";
	int num;
	cin>> num;
	int total;
	total = num % 10;
	int var;
	var = num/10;
	int the;
	the = var % 10;
	int se;
	se = var/10;
	int all;
	all = se % 10;
	int ser;
	ser = se/10;
	int tot;
	tot = total+the+all+ser;
	cout <<"Sum of the individual digits: "<<tot;
	}