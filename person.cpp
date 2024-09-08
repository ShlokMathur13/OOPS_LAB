#include <iostream>
using namespace std;
class person{
    char name [10];
    int age;
    public :
    void getdata(){
        cin >> name;
        cin >> age;
    }
    void display(){
        cout << name << "" << age << endl;
    }
};
int main(){
    person obj1, obj2;
    obj1.getdata();
    obj1.display();
    return 0;
}
