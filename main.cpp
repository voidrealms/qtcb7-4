#include <QCoreApplication>
#include <QDebug>

void test(int age = 0) { //testAge
    qInfo() << "You are " << age << " years old.";
}

void test(bool isActive) { // testBool
    qInfo() << "testing";

    if(isActive)
    {
        qInfo() << "It is active";
    } else {
        qInfo() << "NOT ACTIVE";
    }
}

void convert(int value) {
    qInfo() << "Do something with an int";

}

void convert(double value) {
    qInfo() << "Do something with an double";

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(false);
    test(44);
    convert(10);
    convert(14.007);

    return a.exec();
}
