#include<iostream>
using namespace std;

class student
{
	public:
	int rollNum;
	char name[24];
	int maths,physics,chemistry,english,hindi;
	float totalMarks;
	float percentage;

	void insert_student_record()
	{
		cout<<"Enter Roll Number of Student: ";
		cin>>rollNum;
		cout<<"\nEnter Name of Student: ";
		cin>>name;
		cout<<"\nEnter Marks in Maths: ";
		cin>>maths;
		cout<<"\nEnter Marks in Physics: ";
		cin>>physics;
		cout<<"\nEnter Marks in Chemistry: ";
		cin>>chemistry;
		cout<<"\nEnter Marks in English: ";
		cin>>english;
		cout<<"\nEnter Marks in Hindi: ";
		cin>>hindi;
	}

	void result_calculation()
	{
		totalMarks=maths+physics+chemistry+english+hindi;
		cout<<"Total Marks is: "<<totalMarks<<"\n\n";
		percentage=((totalMarks/500)*100);
		cout<<"Percentage is: "<<percentage<<" %"<<"\n\n";
	}

	void display_student_record()
	{
		cout<<"Student Roll Number is: "<<rollNum<<"\n\n";
		cout<<"Student Name is: "<<name<<"\n\n";
		cout<<"Marks in Maths is: "<<maths<<"\n\n";
		cout<<"Marks in Physics is: "<<physics<<"\n\n";
		cout<<"Marks in Chemistry is: "<<chemistry<<"\n\n";
		cout<<"Marks in English is: "<<english<<"\n\n";
		cout<<"Marks in Hindi is: "<<hindi<<"\n\n";
		result_calculation();
	}

	void home()
	{
		int choice;
		cout<<"\nPress the number for following options :-\n\n";

		cout<<"(1).Insert Student Record\n\n";
		cout<<"(2).Edit Student Record\n\n";
		cout<<"(3).Display Student Record\n\n";
		cout<<"(4).Search Student Record\n\n";
		cout<<"(5).Exit\n\n";


		cout<<"Enter your choice: ";
		cin>>choice;
		system("cls");

		switch(choice)
		{
			case 1:
			cout<<"\nInsert Student Record:-\n\n";
			insert_student_record();
			break;

			case 2:
			cout<<"\nEdit Student Record:-\n\n";
			break;

			case 3:
			cout<<"\nDisplay Student Record:-"<<"\n\n\n";
			display_student_record();
			break;

			case 4:
			cout<<"\nSearch Student Record:-\n\n";
			break;

			case 5:
			cout<<"\nYou are exit from the program!!!";
			exit(0);
			break;

			default:
			cout<<"\nPlease enter correct choice!!!";
			break;
		}
	}

};

int main()
{
	student s1;
	do
	{
		s1.home();
		cout<<"\n\n";
	}while(1);

	s1.insert_student_record();
	cout<<"\n\n";
	s1.display_student_record();

	return 0;
}
