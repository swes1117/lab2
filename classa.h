#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

class Bmi{
	private:
		float height[10];
		float weight[10];
	public:
		void set_height(float h,int j){
		height[j]=h;
		}
		float get_height(int i){
		return height[i];
		}
		void set_weight(float w,int j){
		weight[j]=w;
		}
		float get_weight(int i){
		return weight[i];
		}
		float bmi(float h,float w){
		float q;
		q=w/((h/100)*(h/100));
		return q;
		}
		
};
