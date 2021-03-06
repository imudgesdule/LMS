#-------------------------------------------------
#
# Project created by QtCreator 2016-08-24T18:01:22
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LMS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    date.cpp \
    bookinfo.cpp \
    readerinfo.cpp \
    list.cpp \
    search.cpp \
    readerbord.cpp \
    readerinfobord.cpp \
    changepasswordbord.cpp \
    borrowbord.cpp \
    unborrowbord.cpp \
    managerbord.cpp \
    addbookbord.cpp \
    addreaderbord.cpp \
    readerregister.cpp \
    tools.cpp \
    bookingbord.cpp

HEADERS  += mainwindow.h \
    date.h \
    bookinfo.h \
    readerinfo.h \
    list.h \
    search.h \
    readerbord.h \
    readerinfobord.h \
    changepasswordbord.h \
    borrowbord.h \
    unborrowbord.h \
    managerbord.h \
    addbookbord.h \
    addreaderbord.h \
    readerregister.h \
    tools.h \
    bookingbord.h

FORMS    += mainwindow.ui \
    search.ui \
    readerbord.ui \
    readerinfobord.ui \
    changepasswordbord.ui \
    borrowbord.ui \
    unborrowbord.ui \
    managerbord.ui \
    addbookbord.ui \
    addreaderbord.ui \
    readerregister.ui \
    bookingbord.ui

DISTFILES += \
    style.qss
