//�i��Ǵ� 
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
	cout<<"=====�Фp�߷���=====\n\n";
	cout<<"�A�Q�ഫ���Ʀr:";cin>>num;
	cout<<"�ӼƦr�O�X�i��:";cin>>x;
	cout<<"�Q�ন�X�i��" ;cin>>y;
	cout<< dec2n(n2dec(num,x),y);
}


