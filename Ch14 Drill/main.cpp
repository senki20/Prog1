#include "std_lib_facilities.h"

struct B1
{
    
    virtual void vf()
    {
        cout << "B1 vf()"<<"\n";
    };

    void f()
    {
        cout << "B1 f()"<<"\n";
    }

    virtual void pvf() = 0;


};


struct D1 : B1
{
    void vf() override
    {
        cout << "D1 vf()"<<"\n";
    };
    void f()
    {
        cout << "D1 f()"<<"\n";
    }
};

struct D2 : D1
{  
    void pvf() override
    {
        cout << "D2 pvf()"<<"\n";
    }
};

struct B2
{   
    virtual void pvf()=0;
};

struct D21 : B2
{
    string s= "Szöveg";
    void pvf()
    {
        cout << s<<"\n";
    };
};

struct D22 : B2
{
    int szam = 20;
    void pvf() override
    {
        cout << szam <<"\n";
    }
};

void f(B2& ref)
{
    ref.pvf();
}

int main()
{
  /*  
    B1 obj1;
    obj1.f();
    obj1.vf();

    D1 obj2;
    obj2.f();
    obj2.vf();

    B1& obj3=obj2;
    obj3.f();
    obj3.vf();
    
*/
    //nem fut le a pure virtual function miatt
    D2 obj4;
    obj4.f();
    obj4.vf();
    obj4.pvf();


    D21 obj5;
    obj5.pvf();

    D22 obj6;
    obj6.pvf();

    f(obj5);
    f(obj6);

}