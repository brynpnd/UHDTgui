#-------------------------------------------------
#
# Project created by QtCreator 2014-02-20T13:57:47
#
#-------------------------------------------------

QT       += core gui serialport network \
        webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UHDTgui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    uhdt.cpp \
    console.cpp \
    terminal.cpp \
    settingsdialog.cpp \
    javascriptobject.cpp \
    container.cpp \
    map.cpp

HEADERS  += mainwindow.h \
    uhdt.h \
    terminal.h \
    console.h \
    settingsdialog.h \
    javascriptobject.h \
    container.h \
    map.h

FORMS    += \
    mainwindow.ui \
    terminal.ui \
    settingsdialog.ui \
    map.ui

RESOURCES += Resources.qrc
