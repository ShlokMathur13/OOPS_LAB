#include <iostream>
using namespace std ;
class Rectangle{
    private:
    int length;
    int width;
    int area;
    public:
    Rectangle(int l){
        length = 1;
        width = 0;
        // area = 0;
    }
    Rectangle(int length, int width){
        length = length;
        width = width;
        //area = 0;
    }
    void sqArea(){
        area = length * length;
    }
    void rectArea(){
        area = length * width;
    }
    int getSqArea(){
        return area;
    }
    int getRectArea(){
        return area;
    }
};
int main(){
    Rectangle obj1(40);
    Rectangle obj2(40,50);
    obj1.sqArea();
    cout<<obj1.getSqArea()<<endl;
    obj2.rectArea();
    cout<<obj2.getRectArea()<<endl;
    return 0;
}