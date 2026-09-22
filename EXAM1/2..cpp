#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int id;
    float score;
};

void input(Student* s) {
    cout << "请输入姓名：";
    cin >> s->name;      // <iostream> 就够
    cout << "请输入学号：";
    cin >> s->id;
    cout << "请输入成绩：";
    cin >> s->score;
}

void display(Student* s) {
    cout << "姓名：" << s->name << endl;
    cout << "学号：" << s->id << endl;
    cout << "成绩：" << s->score << endl;
}

int main() {
    Student* stu = new Student;
    input(stu);
    display(stu);
    return 0;
}