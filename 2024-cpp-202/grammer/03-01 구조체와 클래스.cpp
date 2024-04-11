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
        //this : �ڱ� �ڽ��� ����Ű�� ������
        //����� ��Ȯ�ϰ� ����ų �� �ִ�.
        this -> hakbun_ = 2222;
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

int main(void) {
    //�����Ҵ� : �޸𸮴� heap���� �Ҵ�. ���� �� �޸� ũ�Ⱑ ������
    Student* jisu = new Student(2202, "������");
    //�����Ҵ� : �޸𸮴� Stack���� �Ҵ�. ������ �� �޸� ũ�Ⱑ ������
    Student mirim = Student();

    jisu->show();
    mirim.show();

    //�����Ҵ� ����
    delete jisu;
    return 0;
}