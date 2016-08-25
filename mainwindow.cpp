#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn_login,SIGNAL(clicked(bool)),this,SLOT(loginButtonOnClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::loginButtonOnClicked(){
    QString tf_id = ui->tf_id->text();
    QString tf_ps = ui->tf_password->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("LMS");
    db.setUserName("root");
    db.setPassword("Tami16.");
    if (!db.open()) {qDebug() << "Failed to connect to root mysql admin";return;}
    else{
        QSqlQuery query;
        query.exec("SELECT * FROM readers");
        while(query.next())
        {
            int idPos = query.record().indexOf("id");
            int namePos = query.record().indexOf("name");
            int passPos = query.record().indexOf("password");
            QString id = query.value(idPos).toString();
            QString name = query.value(namePos).toString();
            QString pass = query.value(passPos).toString();
            if(tf_id == id && tf_ps == pass){
                Search* s = new Search();
                s->show();
                this->hide();
                return;
            }
        }
        qDebug()<<"error!!!";
    }
    db.close();
}
