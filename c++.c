#include <iostream>
using namespace std;
class vehicle
{
    public:vehicle()
    {
        cout<<"this is a vehicle"<<endl;
    }
    };
    class fourwheeler:public vehicle
    {
        public:
        fourwheeler()
        {cout<<"this is a fourwheeler vehicle"<<endl;}
    };
    class car:public fourwheeler
    { public:
       car()
      {
          cout<<"the car has four wheels"<<endl;}
    };
int main()
{
    car obj;return 0;
}
