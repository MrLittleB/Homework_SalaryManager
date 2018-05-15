#include<iostream>
using namespace std;
class rectangle
{
	protected:
		float length;
		float width;
	public:
		rectangle(float l,float w)
		{
			length=l;
			width=w;
		}
		float area()
		{
			float a;
			a=length*width;
			return a;
		}
		void disp()
		{
			cout<<area()<<" ";
		}
};
class cuboid:public rectangle{
	private:
		float height;
	public:
		cuboid(float l,float w,float h):rectangle(l,w)
		{
			length=l;
			width=w;
			height=h;
		}
		float calv()
		{
			float a;
			a=length*width*height;
			return a;
		}
		void disp()
		{
			rectangle::disp();
			cout<<calv();
		}
};
int main()
{
	float a,b,h;
	cin>>a>>b>>h;
	cuboid c(a,b,h);
	c.cuboid::disp();
	return 0;
}
