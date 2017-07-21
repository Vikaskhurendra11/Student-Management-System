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
	
	int insert_student_record_marks()
	{
		cout<<"Enter Your Marks:- \n\n";
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
};

int main()
{
	int student_count=0;
	
	student s[10];
	
	
	do
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
			if(student_count<2)
			{
				s[student_count].insert_student_record();
				student_count++;
			}
			else
			{	
				cout<<"You can not insert more student record";
				cout<<"\n\n";
			}
			break;

			case 2:
				int input_rollnumber;
				cout<<"\nEnter Student Roll Number to Edit:-\n\n";
				cin>>input_rollnumber;
				int i;
				
				for(i=0;i<student_count;i++)
				{
					if(input_rollnumber==s[i].rollNum)
					{
						
						cout<<"\nPress the option you want to change:-\n\n";

						cout<<"(1).Edit Student Name\n\n";
						cout<<"(2).Edit Student Marks\n\n";
						int choice;
						cout<<"Enter your choice: ";
						cin>>choice;
						system("cls");

						switch(choice)
						{
							case 1:
							cout<<"Enter New Student Name:-";
							cin>>s[i].name;
					
							break;

						case 2:
							cout<<"Enter New Student Marks:-\n\n";
							cout<<"\nEnter Marks in Maths: ";
							cin>>s[i].maths;
							cout<<"\nEnter Marks in Physics: ";
							cin>>s[i].physics;
							cout<<"\nEnter Marks in Chemistry: ";
							cin>>s[i].chemistry;
							cout<<"\nEnter Marks in English: ";
							cin>>s[i].english;
							cout<<"\nEnter Marks in Hindi: ";
							cin>>s[i].hindi;
							break;

						default:
							cout<<"Enter correct choice";
							break;
						}
					}
					
		   		}
				
			break;

			case 3:
			cout<<"\nDisplay Student Record:-"<<"\n\n\n";
			
			
			int each_count;
			for(each_count=0;each_count<student_count;each_count++)
			{
				s[each_count].display_student_record();
			}
			break;

			case 4:
			cout<<"\nSearch Student Record:-\n\n";
			int rollNumber_id,object_search;
			cout<<"Enter Student Roll Number: ";
			cin>>rollNumber_id;
			for(object_search=0;object_search<student_count;object_search++)
			{
				if(rollNumber_id==s[object_search].rollNum)
				{
					s[object_search].display_student_record();
					break;
				}
				
			}	
			break;

			case 5:
			cout<<"\nYou are exit from the program!!!";
			exit(0);
			break;

			default:
			cout<<"\nPlease enter correct choice!!!";
			break;
		}
		cout<<"\n\n";
		
	}while(1);
	return 0;
}
