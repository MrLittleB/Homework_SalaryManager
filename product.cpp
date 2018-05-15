#include<iostream>
#include<string.h>
using namespace std;

class Date
{
	int year, month, day;
public:
	Date(int,int,int);
	int Getyear();
	int Getmonth();
	int Getday();
	void setdate(int,int,int);
 } ;
 Date::Date(int y=2000,int m=1,int d=1)
 {
 	year=y;
 	month=m;
 	day=d;
 }
 int Date::Getyear()
 {
 	return year;
 }
 int Date::Getmonth()
 {
 	return month;
 }
 int Date::Getday()
 {
 	return day;
 }
 void Date::setdate(int y,int m,int d)
 {
 	year=y;
 	month=m;
 	day=d;
 }
 
class Product
{
	char *name;
	double price;
	Date deptime;
	char *factory;
	bool easybreak;
	Date valtime;
	char *color;
	double high;
public:
	Product();
	Product(char *na);
	Product(char *na, double pr);
	Product(char *na, double pr, int x, int y, int z);
	void SetProduct(char *na, double pr, int x, int y, int z, char *fa, bool ea, int a, int b, int c, char *co, double h);
	void Output();
};
Product::Product()
{
	
}
Product::Product(char *na)
{	
	
	name=new char[strlen(na)+1];
	strcpy(name, na);
	cout<<"Constrcting One...."<<endl;
}
Product::Product(char *na, double pr)
{	
	
	name=new char[strlen(na)+1];
	strcpy(name, na);
	price=pr;
	easybreak=0;
	factory=new char[strlen("unnamed")+1];
	strcpy(factory,"unnamed");
	cout<<"Constrcting Two...."<<endl;
}
Product::Product(char *na,double pr, int x, int y, int z):deptime(x,y,z)
{
	name=new char[strlen(na)+1];
	strcpy(name, na);
	price=pr;
	factory=new char[strlen("unnamed")+1];
	strcpy(factory,"unnamed");
	easybreak=0;
	cout<<"Constrcting Three...."<<endl;
}
void Product::SetProduct(char *na,double pr,int x,int y,int z,char *fa,bool ea,int a,int b,int c,char *co,double h)
{
	name=new char[strlen(na)+1];
	strcpy(name,na);
	price=pr;
	deptime.setdate(x,y,z);
	factory=new char[strlen(fa)+1];
	strcpy(factory,fa);
	easybreak=ea;
	valtime.setdate(a,b,c);
	color=new char[strlen(co)+1];
	strcpy(color,co);
	high=h;	
}
void Product::Output()
{
	//cout<<"shuchu";
	cout<<name<<" "<<price<<endl;
	cout<<deptime.Getyear()<<"-"<<deptime.Getmonth()<<"-"<<deptime.Getday()<<endl;
	cout<<factory<<" "<<easybreak<<endl;
	cout<<valtime.Getyear()<<"-"<<valtime.Getmonth()<<"-"<<valtime.Getday()<<endl;
}
int main()
{
	char s[10];
	cin>>s;
	Product p1("car");
	Product p2("glass",3.00);
	Product p3("pen",5.00,2009,3,14);
	p1.SetProduct("car",100000.0,2009,3,14,"nanjing",0,2010,10,14,"red",1.5);
	p1.Output();
	p2.Output();
	p3.Output(); 
	return 0;
}
