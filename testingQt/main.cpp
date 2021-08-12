#include <QCoreApplication>
#include<iostream>
#include<QDebug>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*
    //C++ standar out#include<iostream>
    cout<< "Standar out"<<endl;

    //C++ standar err
    cerr<< "Standar error"<<endl;

    //Standar input
    int age;
    cin>> age;

    //Qdebug standar out
    qInfo() << "Example qinfo";

    qDebug() << "Debug";
    qCritical()<<"Critical";
    qWarning() << "Warning";
    //qFatal("Test Crash!!!");

    //Ternary
    //age > 0 && age <= 100 ? qInfo("You entered a valid age"): qFatal("You entered an invalid age");

    //Switch
    switch (age) {
    case 0:
        qFatal("You entered an invalid age");
    case 16:
        qInfo("You ccan drive");
    default:
        qInfo()<<"default here";
        break;
    }
    */

    qInfo() << "Enter your age:";
    int age = 0;
    cin >> age;

    if(age >=1 && age <=120) {
        //True
        int dog_years = age * 7;
        qInfo() << "You age in dog years:" << dog_years;
    } else {
        //False
        qWarning() << "Warning: Not a valid age!";
    }

    return a.exec();
}
