#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	static int counter;
	int id;
	float *quizscore;
	int quizcapacity;
	int quiztaken;
	float  gpa;
public:
	student();//default constructor
	student(int, int);//parameterized constructot
	student(const student&);//copy constructor
	~student();//destructor
	void addquizscore(int);//add to quiz score 
	void setgpa(float);// set gpa 
	float getgpa()const;//get gpa 
	void print()const;// print record
	bool compare(student);// compare gpa of two students
	void updatescore(int, int);// updatae the score on that index
	void printarr(student *, int);
};