#include <iostream>
#include <string>

using namespace std;

//struct Student {
//    int hakbun_;
//    string name_;
//};
//
//int main(void) {
//    struct Student jisu;
//    // ����ü�� defualt�� public�̴�.
//    jisu.hakbun_ = 2202;
//    jisu.name_ = "������";
//    return 0;
//}

class Student {
public:
    // ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
    // �����ڴ� ��ȯ���� ����
    Student() {
        hakbun_ = 2222;
        name_ = "mirim";
    }

    Student(int hakbun, string name) {
        hakbun_ = hakbun;
        name_ = name;
    }

    //Ŭ������ ����� ���
    void show(){
        cout << hakbun_ << endl;
        cout << name_ << endl;
    }

private:
    int hakbun_;
    string name_;
};
s
int main(void) {
    Student jisu = Student(2202, "������");
    Student mirim = Student();
    jisu.show();
    mirim.show();
    return 0;
}