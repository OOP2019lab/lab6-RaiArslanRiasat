#include"L181182.h"
void printarr(student arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i].print();
		cout << endl;
	}

}
void printdynarr(student *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i].print();
		cout << endl;
	}
}
void main()
{
	student s1[3] = { student(3,2.0),student(3,3.0),student(4,2.33) };//Parameterized constructer is called for three time here because here capacity and gpa is set which is set in parameterized constructer 
	s1[0].addquizscore(1); s1[0].addquizscore(4); s1[0].addquizscore(10);
	s1[1].addquizscore(10); s1[1].addquizscore(4); s1[1].addquizscore(9);
	s1[2].addquizscore(9); s1[2].addquizscore(8); s1[2].addquizscore(7);
	printarr(s1, 3);
	student *s2 = new student[0];//Destructer is invokeh here for id 4,5,6,7 because they are goig to out of scope so it is called
	s2[0] = student(3, 2.0); // Parameterized constructer is called here because here capacity and gpa is set which is set in parameterized constructer
	s2[0].addquizscore(1); s2[0].addquizscore(4); s2[0].addquizscore(10);
	s2[1] = student(3, 3.0); //Parameterized constructer is called here because here capacity and gpa is set which is set in parameterized constructer
	s2[1].addquizscore(10); s2[1].addquizscore(4); s2[1].addquizscore(9);
	s2[2] = student(4, 2.33); // Parameterized constructer is called  here because here capacity and gpa is set which is set in parameterized constructer
	s2[2].addquizscore(9); s2[2].addquizscore(8); s2[2].addquizscore(7);
	s2[3] = student(4, 1.00); // Parameterized constructer is called  here because here capacity and gpa is set which is set in parameterized constructer
	s2[3].addquizscore(2); s2[3].addquizscore(3);
	printdynarr(s2, 4);
	system("Pause");
}