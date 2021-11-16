#include <iostream>
#include <cmath>

using namespace std;
class Car_coord{

      private: float x, y;
      public: Car_coord(x = 0.0, y = 0.0)

      void display(){
            cout << 'The value of x : ' << x << '\nThe value of y : ' << y<<endl;
      }

      void convTocoord(float r , float t){
            x = r*cos(t);
            y = r*sin(t);
      }

};

int main()
{
      float r, t;
      Car_coord P;
      cout<<"Enter the value of r and theta : "<<endl;
      cout<<'r : ';
      cin>>r;
      cout<<'t : ';
      cin>>t;
      P.convTocoord(r,t);
      cout<<"Conversion to x and y coordinates is as follows : "<<endl;
      P.display();
      return 0;

}
