/*Write a program create employee class with members variable as EmpId,Name of Employee and
Salary. For 10 Employees
Print list of all employees.
Print list of employee who got heights salary*/
#include<iostream>
using namespace std;
class employee
{
	private:
		  string name;
		  int salary;
		  
	public:
		   void getdata()
		   {
		   	cout<<"enter the data name,salary";
		   	cin>>name>>salary;
		   }
		   void setdata()
		   {
		   	cout<<"\nemployee list is as follows:-"<<name;
		   }
	};
int main()
{  
	employee e1[10];
	for(int i=0;i<10;i++)
	{
		e1[i].getdata();
	}
	 
	for(int i=0;i<10;i++)
	{
		e1[i].setdata();
	
    }
    cout<<"\n";
	
}
 


