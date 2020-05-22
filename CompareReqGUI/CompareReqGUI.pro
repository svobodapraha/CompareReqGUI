#-------------------------------------------------
#
# Project created by QtCreator 2020-05-08T21:20:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CompareReqGUI
TEMPLATE = app



# QXlsx code for Application Qt project
QXLSX_PARENTPATH=../QXlsx/         # current QXlsx path is . (. means curret directory)
QXLSX_HEADERPATH=../QXlsx/header/  # current QXlsx header path is ./header/
QXLSX_SOURCEPATH=../QXlsx/source/  # current QXlsx source path is ./source/
include(../QXlsx/QXlsx.pri)

SOURCES += main.cpp\
        mainwindow.cpp \
    detailview.cpp

HEADERS  += mainwindow.h \
    detailview.h

FORMS    += mainwindow.ui \
    detailview.ui

# The application version
VERSION = 1.2.0.0

# Define the preprocessor macro to get the application version in our application.
DEFINES += APP_VERSION=\\\"$$VERSION\\\"


