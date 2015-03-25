#include<iostream>

using namespace std;

class point{
	public:
		double x,y;	
		point(double u=0, double v=0):x(u),y(v){};
		point(const point &a):x(a.x),y(a.y){};
		
		point operator+(point b){
			return point (x+b.x, y+b.y);
		}

};




int main(){
	point a = point(1, 4);
	point b = point(2, 1);
//	point c ;
point	c = a+b;
	cout<<c.x<<","<<c.y;
	return 0;
}
