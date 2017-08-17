TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    core/subject.cpp \
    core/observer.cpp \
    core/board.cpp

HEADERS += \
    core/board.h \
    core/subject.h \
    core/observer.h
