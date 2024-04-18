#include <iostream>
#include <string>

using namespace std;

class Student {
public:

    //TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����
    Student(int hakbun, const char* name) : hakbun_(hakbun)
    {
        int length = strlen(name);
        // '/0'�� ���� ���� 1byte ���� �ϳ� �� �߰�
        name_ = new char[length+1];

        strcpy(name_, name);

    }

    //�Ҹ��� : ��ü�� �Ҹ�� ��(�޸𸮿��� ������ ��) ȣ��Ǵ� �Լ�
    ~Student(void) {
        delete []name_;
    }

    void show(void){
        cout << hakbun_ << " ";
        cout << name_ << endl;
    }

private:
    int hakbun_;
    char* name_;
};

int main(void) {

    Student* stu = new Student(2213, "������");
    stu->show();
    delete stu;

    return 0;
}