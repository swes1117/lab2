#include<iostream>
#include<cstdio>
#include<fstream>
#include<stdlib.h>
#include"bmi.cpp"
#include"classa.h"
using namespace std;

int main(){
	Bmi rt; 
	ifstream fptr;
	ofstream fptr2;
	float h,w;//h represent height w represent weight
	int i;
	int j=0;
	int temp;
	fptr.open("file.in.txt",ios::in);
	fptr2.open("file.out.txt",ios::out);
	if(!fptr){
		cout<<"Failure opening"<<endl;
		exit(1);
	}else{
	for( i=0;h!=0;i++){
	fptr>>h>>w;
	rt.set_height(h,j);
	rt.set_weight(w,j);
	j++;}
	}
	temp=i;
	for(i=0;i<=temp;i++){
		if(bmi(rt.get_height(i),rt.get_weight(i))<15)
		fptr2<<"Very severely underweight"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=15&&bmi(rt.get_height(i),rt.get_weight(i))<16)
		fptr2<<"Severely underweight"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=16&&bmi(rt.get_height(i),rt.get_weight(i))<18.5)
		fptr2<<"Underweight"<<endl; 
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=18.5&&bmi(rt.get_height(i),rt.get_weight(i))<25)
		fptr2<<"Normal"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=25&&bmi(rt.get_height(i),rt.get_weight(i))<30)
		fptr2<<"Overweight"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=30&&bmi(rt.get_height(i),rt.get_weight(i))<35)
		fptr2<<"Obese Class I (Moderately obese)"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=35&&bmi(rt.get_height(i),rt.get_weight(i))<40)
		fptr2<<"Obese Class II (Severely obese)"<<endl;
		else if(bmi(rt.get_height(i),rt.get_weight(i))>=40)
		fptr2<<"Obese Class III (Very severely obese)"<<endl;
}

}








