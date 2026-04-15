#include <iostream>
#include <vector>
using namespace std;




class person {
public:
    string name;
    int age;

    person(string name, int age) {
        this->name = name;
        this->age = age;
    }

   void print() {
       cout << "Name: " << name << " Age: " << age << endl;
   }
};


int main()
{
    vector<person *> v;
    v.push_back(new person{"Alice", 30});
    v.push_back(new person{"Bob", 25});
    v.push_back(new person{"Charlie", 35});
    for (int i = 0; i < v.size(); i++) {
        v[i]->print();
    }
    return 0;
}