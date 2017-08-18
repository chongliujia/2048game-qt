QT     += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExpGame
TEMPLATE = app
QMAKE_CXXFLAGS += -std = c++11

SOURCES += main.cpp \
    core/subject.cpp \
    core/observer.cpp \
    core/board.cpp \
    core/tile.cpp \
    core/game.cpp \
    gui/qgameboard.cpp \
    gui/qgameoverwindow.cpp \
    gui/qresetbutton.cpp

HEADERS += \
    core/board.h \
    core/subject.h \
    core/observer.h \
    core/tile.h \
    core/game.h \
    gui/qgameboard.h \
    gui/qgameoverwindow.h \
    gui/qresetbutton.h
