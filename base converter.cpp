//進位傳換 
#include<iostream>
#include<cmath> 
using namespace std;

int n2dec(int num, int x){
	int dec=0;int power=0;
	while(num>0){
		dec+=(num%10)*pow(x,power);
		num/=10;
		power++;
	}
	return dec;
}

int dec2n(int num,int y){
	int answer=0;
	int a=1;
	while(num>0){
		answer += num%y*a;
		a*=10;
		num/=y;
	}	
	return answer;
}

int main(){
	int num,x,y;
	cout<<"=====請小心溢位=====\n\n";
	cout<<"你想轉換的數字:";cin>>num;
	cout<<"該數字是幾進位:";cin>>x;
	cout<<"想轉成幾進位" ;cin>>y;
	cout<< dec2n(n2dec(num,x),y);
}


