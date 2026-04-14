#include<iostream>
using namespace std;

extern "C"
{

#include "string.h"

}
 class dad{

    public:
    dad(int a,int b,int c):a(a),b(b),c(c)
    {
        cout << "dad" <<endl;
        cout << a << b << c <<endl;

    }

    protected:
    int xkk;

    private:
    int a;
    int b;
    int c;
 };
 

 class son: public dad
 {
public:

son(int a,int b,int c):dad(a,b,c)
{
cout <<"son"<<endl;
}

 };




 class base_a
 {
public:
char name[1024];
base_a(const char *str){

strcpy(this->name,str);

} 

 };
 class base_b
 {
public:
float b;
base_b(float b)
{

this->b=b;

}

 };
 class bass_all:public base_a,public base_b
 {

public:
bass_all(const char *t,int size ,float b):base_a(t),base_b(b),size(size)

{

str = new char[size];

strcpy(str,t);

}



void show()
{

cout << str<< endl;
cout << b <<endl;
cout <<name<<endl;


}



private:
char *str;
int size;

 };




 
class A
{
public:
	int _a;
};

// class B : public A
class B : virtual public A
{
public:
	int _b;
};

// class C : public A
class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};

class fu
{
public:
virtual void x_1()
{

cout << "基类" <<endl;


}

protected:
int xkk;
};

class zi :public fu
{
public:

 void x_1() override
 {

cout << "虚函数重写" <<endl;


 }

};
class add{
    public:
    add(int a,int b,int c):a(a),b(b),c(c)
    {

    }
    int a;
    protected:
    int b;
    private:
    int c;

    friend void jia( add &p);
};

void jia(add &p)
{
p.a=p.a+10;
p.b=p.b+10;
p.c=p.c+10;

cout<<p.a<<endl;
cout<<p.b<<endl;
cout<<p.c<<endl;
}






class youyuan1{

 public:
 int you1_1;
friend class youyuan2;
void youyuan1_1();
 


protected:
 int you1_2;
private:
 int you1_3;



};

 class youyuan2{

 public:
 int you2_1;
 friend class youyuan1;
 void youyuan2_1()
 {
  youyuan1 a;
  a.you1_1=10;
  cout << a.you1_1 <<endl;


 }

protected:
 int you2_2;
private:
 int you2_3;



};

void youyuan1::youyuan1_1()
 {
  youyuan2 a2;
  a2.you2_1=10;
  cout << a2.you2_1 <<endl;
 }



class mystring{

public:

    mystring()
    {
this->str =NULL;
this->size =0;
    }

mystring &operator=(const char *q)
{
 this->str =new char[1024];
        strcpy(this->str,q);
        this->size = strlen(q);
    return *this;
}


    mystring(const char *str)
    {
        this->str =new char[1024];
        strcpy(this->str,str);
        this->size = strlen(str);
    }
    virtual ~mystring()
    {

    delete []this->str;

    }

    void show()
    {

    cout << str << endl;
    cout << size << endl;

    }





private:
 char *str;
 int size;

friend ostream &operator<<(ostream &out,mystring &p);

};

ostream &operator<<(ostream &out,mystring &p)
{

out << p.str;

return out;

}


template <class T>

void show( T a)
{

cout << a<<endl;

}

template <class T>
class base_3
{
public:
base_3 (T a):a(a)
{


}

private:
T a;
template <class T1>
friend void show_base (base_3<T1> a);
};


template <class T>
void show_base (base_3<T> a)
{
cout<< a.a <<endl;

}
 int main()

 {
base_3 <int> a(100);
show_base(a);


 }
    

 



