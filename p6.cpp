//use of friend function
//this is a program for comparing the speed of two car.
#include<bits/stdc++.h>
using namespace std;
class carB;
class carA
{
	int distance;
	int time;
	public:
		void get(int i,int j)
		{
			distance=i;
			time=j;
		}
		friend void faster(carA,carB);
};
class carB
{
	int distance;
	int time;
	public:
		void get(int i,int j)
		{
			distance=i;
			time=j;
		}
		friend void faster(carA,carB);
};
void faster(carA a,carB b)
{
	int speed1,speed2;
	speed1=a.distance/a.time;
	speed2=b.distance/b.time;
	if(speed1>speed2)
	cout<<"car A is faster\n";
	else
	cout<<"car B is faster\n";
}
int main()
{
	carA a;
	a.get(100,2);//100 km is the distance and 2 hour is time for first car
	carB b;
	b.get(200,3);//200 km is the distance and 3 hour is time for second car
	faster(a,b);
	return 0;
}

