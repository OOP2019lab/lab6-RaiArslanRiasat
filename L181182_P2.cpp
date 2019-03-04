#include"L181182.h"
void main()
{
	student s1;
	s1.addquizscore(10);
	s1.addquizscore(3);
	s1.addquizscore(7);
	s1.addquizscore(4);
	s1.print();
	student s2(4,2.0); // Parameterized constructer is called here because here capacity and gpa is set which is set in parameterized constructer
	s2.addquizscore(9);
	s2.addquizscore(4);
	s2.addquizscore(6);
	s2.print();
	//Destructor is invoked here for id 1 as student of  id 1 is going to out of scope after here so desutructer is invoked here 
	student s3(s1);//copy constructer is invoked here because s1 is object of class which is already defind above we make new object s3 of same class and copy s1 to s3.
	s3.updatescore(10,3);
	cout<<endl<<s2.compare(s1)<<endl;
	s3.setgpa(3.0);
	s3.print();
	s1.print();
	system("Pause");
}