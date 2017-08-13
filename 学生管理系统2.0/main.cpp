#include "stdafx.h"
#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	Cstudent student1("xiaoming",50,80,98);
	Cstudent student2("xiaohua",70,78,68);
	Cstudent student3("ningjian",86,78,83);
	cout<<student1<<endl;
	cout<<student2<<endl;
	cout<<student3<<endl;
	student1.Setchinese(56);
	student2.setenglish(87);
	student3.SETmath(87);
	Cstudent general;
	general=student1+student2+student3;
	cout<<general;
	cout<<"average of chinese:"<<general.returnchinese()/3
    <<"\naverage of math:"<<general.returnmath()/3
	<<"\naverage of english:"<<general.returnenglish()/3<<endl;
	cout<<"average of student:\n";
	cout<<student1.returnname()<<":"<<student1.returnaverage()<<endl;
	cout<<student2.returnname()<<":"<<student2.returnaverage()<<endl;
	cout<<student3.returnname()<<":"<<student3.returnaverage()<<endl;
	cin.get();
	return 0;
}