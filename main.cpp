#include "mainwindow.h"
#include "bookinfo.h"
#include "readerinfo.h"
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Date s ;
    BookInfo f("123","12","haha","dule","imu",s, "fdsa",  "01",999.98);


    ReaderInfo l("111","dule",ReaderInfo::Departments::计算机学院,ReaderInfo::ReaderType::Undergraduate);
    return a.exec();
}
