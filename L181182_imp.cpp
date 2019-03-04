#include"L181182.h"
int student::counter = 0;
student::student()
{
	counter++;
	id = counter;
	quizcapacity = 3;
	quiztaken = 0;
	quizscore = new float[quizcapacity];
	quizscore = nullptr;
	gpa = -1;
}
student::student(int cap, int Gpa)
{
	counter++;
	id = counter;
	quizcapacity = cap;
	gpa = Gpa;
	quiztaken = 0;
	quizscore = new float[quizcapacity];
	quizscore = nullptr;
}
student::student(const student &st)
{
	id = st.id;
	quiztaken = st.quiztaken;
	quizcapacity = st.quizcapacity;
	quizscore = new float[st.quizcapacity];
	for (int i = 0; i < quizcapacity; i++)
	{
		quizscore[i] = st.quizscore[i];
	}
	gpa = st.gpa;
	
}
void student::addquizscore(int score)
{

	if (quiztaken >= quizcapacity)
	{
		cout << "No space to add new quiz" << endl;
	}
	else
	{
		if (quizscore == nullptr)
			quizscore = new float[quizcapacity];
		quizscore[quiztaken] = score;
		quiztaken++;
	}
}
float student::getgpa()const
{
	return gpa;
}
void student::setgpa(float Gpa)
{
	gpa = Gpa;
}
void student::print()const
{
	cout << "Student Id:" << id << endl;
	cout << "Student Gpa : " << gpa << endl;
	cout << "Quiz Capacity : " << quizcapacity << endl;
	cout << "Quiz Taken : " << quiztaken << endl;
	for (int i = 0; i < quiztaken; i++)
	{
		cout << "Quiz Score : " << quizscore[i] << endl;
	}
	cout << endl;
}
void student::updatescore(int quiznmb, int score)
{
	if (quiznmb < quizcapacity)
	{
		quizscore[quiznmb] = score;
	}
	else
		cout << "Quiz" << quiznmb << "Does not exist :" << endl;
}
bool student::compare(student  st)
{
	if (st.gpa > gpa)
		return true;
	return false;
}
student returnarr(student *arr,int size)
{
	student *newarray=new student[size];
	for(int i=0,j=0;i<size;i++)
	{
		if (arr[i].getgpa > 2)
		{
			newarray[j].gpa = arr[i].gpa;
			newarray[j].id = arr[i].id;
			newarray[j].quiztaken = arr[i].quiztaken;
			newarray[j].quizcapacity = arr[i].quizcapacity;
			newarray[j].addquizscore = new float[quizcapacity];
			for (int k = 0; k < newarray[j].quiztaken; k++)
			{
				newarray[j].addquizscore[k] = arr[i].addquizscore[k];
			}
			j++;
		}
	}
	return *newarray;
}
student sortarr(student *arr,int size)
{
	for (int i=0;i<size;i++)
	{
		float x = arr[i].gpa;
		student arr1 = arr[i];
		for (int j = i - 1; j >= 0 && arr[j].gpa > x; j--)
		{
			arr[j+ 1] = arr[j];
		}
		arr[i + 1] = arr1;
	}
}
student::~student()
{
	delete[]quizscore;
}
