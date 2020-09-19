#include<iostream>
using namespace std;
class student;
class student2;
class student{
	private:
		int data;
	public:
		void getdata(int num){
			data=num;
		}
		void putdata(){
			cout<<data;
		}
		friend void xchg(student x1,student2 x2);
};
class student2{
	int data;
	public:
		void getdata(int num){
			data=num;
		}
			void putdata(){
			cout<<data;
		}
		friend void xchg(student x1,student2 x2);
};
void student::xchg(student x1,student2 x2){
	int temp=x1.data;
	x1.data=x2.data;
	x2.data=temp;
}


int main(){
	student x1,x3;
	student2 x2;
	x1.getdata(5);
	x2.getdata(3);
	xchg(x1,x2);
	x1.putdata();
	x2.putdata();
	return 0;
}

