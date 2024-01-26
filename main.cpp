#include <iostream>

using namespace std;
class school{
    public:
    string name;

    string address;
    string category ;
    int student_num ;
    int class_num;
    void register_student()
    {
        cout<<"register"<<endl;

    }
    void pay_fees(){cout<<"pay fees"<<endl;
    }


void print( ){
cout<<name<<endl<<address<<endl<<category<<endl<<class_num<<endl<<student_num<<endl;}

void max_student(int sd_num){
    if (student_num>sd_num)
        cout<<"object is greater_than sd_num"<<endl;
    else{
        cout<<"sd_num is greater_than object"<<endl;
    }
}
};
int main()
{
    school school_1;
    school_1.name ="orman";
    school_1.category ="high school";
    school_1.address ="Giza";
    school_1.class_num=50;
     school_1.student_num=100;
    school_1.pay_fees();
    school_1.print();
     school school_2;
     school_2.name ="tawf2ya";
    school_2.address ="Giza";
    school_2.class_num=20;
     school_2.student_num=90;
    school_2.print();
    school_2.max_student(school_1.student_num);












    return 0;
}
