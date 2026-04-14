#include <iostream>

extern "C"
{


#include "stdlib.h"
#include "string.h"

}
using namespace std;
namespace xk1{
  int a=0;
  int b;
  int c;
}
 namespace xk2{
   int a;
   int b;
   int c;
 }

 using namespace xk1;



void change(int &param)
{

param=param+1;

}


int prf(int a=100)
{

cout << a <<endl;
return 0;
}


class lei{
 public:

 int a1;
 int b2;
 int c3;
 lei()
{

cout << "调用构造函数" <<endl;

}

lei(int xkk)
{


cout << xkk <<endl;

}

void test (int a,int b,int c)
{
  this->a1=a;
  this->b2=b;
  this->c3=c;

    cout << a1 <<endl;
    cout << b2 <<endl;
    cout << c3 <<endl;
}


~lei()
{

cout << "调用析构函数" <<endl;

}   

protected:


private:

};

void lgg()
{

// lei lg;
// lg.test(1,2,3);
lei *p=(lei *)malloc(sizeof(lei));
p->test(1,2,3);

delete p;

lei *p1=(lei *)new(lei);
p1->test(4,5,6);

delete p1;
}


class canshu{

public:

void leiwaihanshu();

  canshu(int a,float b,const char name1[100]):a(a),b(b)
  {
   strcpy(name,name1);  
  }

  void print()
  {

  std::cout << a <<std::endl;
  std::cout << b <<std::endl;
  cout << name << endl;
  }

private:

  char name[100];
  int a;
  float b;
 
};

void canshu::leiwaihanshu()
{
cout << "11111"<< endl;


}


  int main()
{

    // a=10;
    // xk1::b=11;
    // xk1::c=12;

    // xk2::a=20;
    // xk2::b=21;
    // xk2::c=22;

    // std::cout << xk1::a+xk1::b <<std::endl;
    // std::cout <<xk1::b <<std::endl;
    // std::cout <<xk1::c <<std::endl;
    // std::cout <<xk2::a <<std::endl;
    // std::cout <<xk2::b <<std::endl;
    // std::cout <<xk2::c <<std::endl;
    // std ::cout <<"hello world"<< std::endl;
    // int a,b;
    // std::cin >>a; 
    // std:: cin >>b;
    // std:: cout <<a+b << std::endl;



    // int *p=new int(30);
    // int *p1=new int[10]{1,2,3,4,5,6,7,8,9,10};
    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout <<p1[i] <<std::endl;
    // }
    // std::cout <<p[0] <<std::endl;
    // delete p;
    // delete p1;


// change(a);



// cout << a <<endl;

// prf(1);


// lei test(100);

// lgg();

// while(1);
canshu test(1,2.0,"xk");

test.print();
test.leiwaihanshu();

}