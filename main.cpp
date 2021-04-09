#include <iostream>
#include <string>

using namespace std;

class Ikts92 {
private:

    int id_;
    string sur_;
    int dolg_;
    int age_;
public:
    Ikts92()
        {
            id_ = 1;
            sur_ = "Revnivctev";
            dolg_ = 34;
            age_ = 27;
        }
    Ikts92(int id, string sur, int dolg, int age)
        {
            id_ = id;
            sur_ = sur;
            dolg_ = dolg;
            age_ = age;
        };
    ~Ikts92() {};

                //методы
    void setid (int id) {id_ = id;};
    int getid () {return id_;};

    void setsur (string sur) {sur_ = sur;};
    string getsur () {return sur_;};

    void setdolg (int dolg) {dolg_ = dolg;};
    int getdolg () {return dolg_;};

    void setage (int age) {age_ = age;};
    int getage () {return age_;};
};


int main()
{
    Ikts92 revnivtsev;
    Ikts92 narkhov(2, "Narkhov", 4, 23);
    Ikts92 st[2];

    cout << revnivtsev.getid() << "\t" <<
            revnivtsev.getsur() << "\t" <<
            revnivtsev.getdolg() << "\t" <<
            revnivtsev.getage() << endl;


    cout << narkhov.getid() << "\t" <<
            narkhov.getsur() << "\t" <<
            narkhov.getdolg() << "\t" <<
            narkhov.getage() << endl;

    for (int i = 0; i < 2; i++) {
        int id; string sur; int dolg; int age;
        cin >> id >> sur >> dolg >> age;
        st[i].setid(id);
        st[i].setsur(sur);
        st[i].setdolg(dolg);
        st[i].setage(age);
    }

    revnivtsev.setdolg(5);
    narkhov.setage(25);

    cout << revnivtsev.getid() << "\t" <<
            revnivtsev.getsur() << "\t" <<
            revnivtsev.getdolg() << "\t" <<
            revnivtsev.getage() << endl;

    cout << narkhov.getid() << "\t" <<
            narkhov.getsur() << "\t" <<
            narkhov.getdolg() << "\t" <<
            narkhov.getage() << endl;

    for (int i = 0; i < 2; i++) {
    cout << st[i].getid() << "\t" <<
            st[i].getsur() << "\t" <<
            st[i].getdolg() << "\t" <<
            st[i].getage() << endl;
    }


    return 0;
}
