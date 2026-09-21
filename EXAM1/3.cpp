#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string color;
    int number; 

public:
    Car(string c, int n) : color(c), number(n) {
        cout << "构造函数被调用：创建车辆 " << number << endl;
    }
    
    ~Car() {
        cout << "析构函数被调用：销毁车辆 " << number << endl;
    }
    
    void display() {
        cout << "车辆颜色：" << color << "，车牌号：" << number << endl;
    }
};

int main() {
    Car car1("红色", 1001);
    Car car2("黑色", 1002);
    
    cout << "----- 车辆信息 -----" << endl;
    car1.display();
    car2.display();
    
    return 0;
}