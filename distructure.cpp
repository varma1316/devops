#include<iostream>
using namespace std;
class student{
	public:
		int data;
		student *n;
		student(int x){
			data=x;
			n=NULL;
		}
};
main(){
	student s1(10);
	student s2(20);
	student s6(7);
	student s3(12);
	student s4(34);
	student s5(56);
	s1.n=&s2;
	s2.n=&s3;
	s3.n=&s4;
	s4.n=&s5;
	s5.n=&s6;
	student *temp=&s1;

while(temp!=NULL){
	if(temp->data==7) temp=temp->n->n;
	temp=temp->n;
}	
while(temp!=NULL){
//	if(temp->data==7) temp=temp->n->n;
cout<<temp->data<<endl;
	temp=temp->n;
}

//	cout<<"ok, its ok: "<<endl;
}
