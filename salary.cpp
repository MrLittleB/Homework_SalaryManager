#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
class Employee
{
	protected:
		char name[30];
		int working_years;
	public:
		Employee(const char nm[30]="unnamed",int wy=0)
		{
			working_years=wy;
			strcpy(name,nm);
		}
		char *Getname()
		{
			return name;
		}
		double ComputePay()
		{
			return 35*working_years;
		}
		void SetWorkyears(int wy)
		{
		working_years=wy;
		}
			
};

class Worker:public Employee
{
	protected:
		double pay_per_hour;
		int work_time;
	public:
		Worker(char *nm,int wy,int wt)
		{
			pay_per_hour=50;
			strcpy(name,nm);
			working_years=wy;
			work_time=wt;
		}
		double count_pay()
		{
			
			return pay_per_hour*work_time+ComputePay();
		} 
		void SetWorktime(int wt)
		{
			
			work_time=wt;
		} 
		void Setpay_per_hour(int x)
		{
			
			pay_per_hour=x;	
		}
};

class SalesPerson:public Employee
{
	protected:
		double pay_per_hour;
		double saleroom;
		int work_time;
	public:
		SalesPerson(char *nm,int wy,double sr,int wt)
		{
			strcpy(name,nm);
			working_years=wy;
			work_time=wt;
			saleroom=sr;
		}	
		double count_pay()
		{
			return pay_per_hour*work_time+saleroom*0.01+ComputePay();
		}
		void SetWorktime(int wt)
		{
			work_time=wt;
		}
		void Setpay_per_hour(int x)
		{
			pay_per_hour=x;
		}
		void Setsalesroom(double sr)
		{
			saleroom=sr;
		}		
};

class Manager:public Employee
{
	public:
		Manager(char *nm,int wy)
		{
			strcpy(name,nm);
			working_years=wy;
		}
		double count_pay()
		{
			return 1000+ComputePay();
		}
 } ;
 
 int main()
{
	Worker work("zhangqiang",3,200);
	cout<<"工资="<<work.count_pay()<<endl;
	work.SetWorktime(180);
	work.SetWorkyears(10);
	work.Setpay_per_hour(30);
	cout<<work.Getname()<<"  "<<work.count_pay()<<endl;
	
	SalesPerson sales("wangjun",5,300000,25);
	
	sales.SetWorktime(40);
	sales.Setpay_per_hour(80);
	sales.Setsalesroom(450000);
	cout<<sales.Getname()<<"  "<<sales.count_pay()<<endl; 
	
	Manager mana("sunchao",20);
	cout<<mana.Getname()<<"  "<<mana.count_pay()<<endl;
	return 0;
}
