#include <iostream>
extern "C"{
#include "string.h"
}


using namespace std;

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

canshu test(1,2.0,"xk");

test.print();
//test.leiwaihanshu();

}