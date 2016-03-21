#include<iostream>
#include<cstdio>
using namespace std;
int bmi(float height,float weight) {
	float q;
	q=weight/((height/100)*(height/100));
	return q;
}

