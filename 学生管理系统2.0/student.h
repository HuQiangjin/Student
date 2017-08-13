#ifndef _student_h_
#define _student_h_
#include <string>
using namespace std;
class Cstudent
{
private:
	string strname ;
	double chinese ;
	double math ;
	double english ;
public:
	Cstudent();
	Cstudent(string name,double c,double m,double e);
	Cstudent operator+(Cstudent  S);
	friend ostream& operator<<(ostream& out ,Cstudent S);
	void Setchinese(double a);
	void SETmath(double a);
	void setenglish(double a);
	string returnname();
	double returnchinese();
	double returnmath();
	double returnenglish();
	double returntotalperformance();
	double returnaverage();
	~Cstudent(){}
};
#endif