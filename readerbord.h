#ifndef READERBORD_H
#define READERBORD_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QSqlRecord>
#include <QStandardItemModel>
#include "mainwindow.h"
#include "search.h"
#include "readerinfobord.h"
#include "borrowbord.h"
#include "unborrowbord.h"
#include "bookingbord.h"

namespace Ui {
class ReaderBord;
}

class ReaderBord : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReaderBord(QString id,QString name, QMainWindow* mainwindow, QWidget *parent = 0);
    ~ReaderBord();
    void init();
    void bookingInit();
private:
    Ui::ReaderBord *ui;
    Search* search;
    QString readerid;
    QString readername;
    QMainWindow* mainwindow;
    BorrowBord* bb;
    UnBorrowBord* ub;
    BookingBord* bk;
private slots:
    void searchButtonOnClicked();
    void myInfoButtonOnClicked();
    void borrowButtonOnClicked();
    void unborrowButtonOnClicked();
    void bookingButtonOnClicked();
    void logoutButtonOnClicked();
    void unbookingButtonOnClicked();
};

#endif // READERBORD_H
