// use of all type of constructors and object passing into a functions
// program to calculate the distance between two points (x1,y1,z1)&(x2,y2,z2)
#include<bits/stdc++.h>
using namespace std;
class distance1
{
		public:
	int x,y,z;
	distance1()
	{
		x=0,y=0,z=0;
	}
	distance1(int x1,int y1,int z1)
	{
		x=x1;
		y=y1;
		z=z1;
	}
	distance1(distance1 & a)
	{
		x=a.x;
		y=a.y;
		z=a.z;
	}
	void cal_distance1(distance1 p,distance1 q);
};
void distance1::cal_distance1(distance1 p,distance1 q)// object passing as a function arguement
{
	double x;
	x=sqrt(((p.x-q.x)^2)+((p.y-q.y)^2)+((p.z-q.z)^2));
	cout<<" distance between the two points is\n";
	cout<<x<<endl;
}
int main()
{
	distance1 d;
	distance1 a(10,20,30);
	distance1 b(a);//copy constructor
	b.x=30;
	b.y=40;
	b.z=50;
	
	a.cal_distance1(b,a);
}
