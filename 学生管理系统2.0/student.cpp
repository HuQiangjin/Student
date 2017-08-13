#include "stdafx.h"
#include <iostream>
#include "student.h"
using namespace std;
Cstudent ::Cstudent()
{
	strname ="GENERAL STUDENT",
    chinese=0;
	math=0;
	english=0;

}
Cstudent::Cstudent(std::string name,double c,double m,double e)
{
	strname = name ;
	chinese = c;
	english=e;
}
Cstudent Cstudent::operator+(Cstudent S)
{
	Cstudent TEMP;
	TEMP.strname="total performance";
	TEMP.chinese=this->chinese+S.chinese;
	TEMP.math=this->math+S.math;
	TEMP.english=this->english+S.english;

	return TEMP;
}
ostream& operator<<(ostream& out,Cstudent S)
{
out<<S.strname<<"("<<S.chinese<<","<<S.math<<","<<S.english<<")"<<endl;
return out;
}
void Cstudent::Setchinese(double a)
{
	chinese=a;
}
void Cstudent::SETmath(double a)
{
	math=a;
}
void Cstudent::setenglish(double a)
{
	english=a;
}
double Cstudent::returnchinese()
{
	return chinese;
}
double Cstudent::returnmath()
{
	return math;
}
double Cstudent::returnenglish()
{
	return english;
}double Cstudent::returntotalperformance()
{
	return   chinese+english+math;
}
double Cstudent::returnaverage()
{
	return (chinese+math+english)/3;
}
string Cstudent::returnname()
{
	return strname;
}