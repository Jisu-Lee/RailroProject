#-------------------------------------------------
#
# Project created by QtCreator 2015-11-26T23:00:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RailroProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graphview.cpp \
    stationnode.cpp

HEADERS  += mainwindow.h \
    graphview.h \
    stationnode.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
