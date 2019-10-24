#include <iostream>

using namespace std;

class shape
{
public:
     vrtual void enter_data()
    {
        cout<<"\n entetr_data() of shape class is invoked";
    }
     virtual void display_area()
    {
        cout<<"\n display_area()of shape class is invoked";
    }
};

class circle:public shape
{
private:
    float radius;
public:
    void enter_data()
    {
        cout<<"\n enter radius: ";
        cin>>radius;
    }
    void display_area()
    {
        cout<<"\n area of circle= "<<(3.14*radius*radius);
    }
};

class rectangle:public shape
{
private:
    int length,breadth;
public:
    void enter_data()
    {
        cout<<"\n enter length of rectangle: ";
        cin>>length;
        cout<<"\n enter breadth of rectangle: ";
        cin>>breadth;
    }
    void display_area()
    {
        cout<<"\n area of rectangle= "<<length*breadth;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    shape * sh_ptr;
    circle crl;
    rectangle rect;
    sh_ptr=&crl;
    sh_ptr->enter_data();
    sh_ptr->display_area();
    sh_ptr=&rect;
    sh_ptr->enter_data();
    sh_ptr->display_area();
    return 0;
}
