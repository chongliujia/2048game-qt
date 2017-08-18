#ifndef QGAMEBOARD_H
#define QGAMEBOARD_H

#include "core/observer.h"
#include "qgameoverwindow.h"

#include <QVector>
#include <QWidget>


class QResetButton;
class Game;
class QKeyEvent;
class QTile;
class QGridLayout;
class QVBoxLayout;
class QLabel;


class QGameBoard : public QWidget, public Observer{
    Q_OBJECT
public:
    explicit QGameBoard(Qwidget *parent = 0);
    ~QGameBoard();

    void notify();


private:
    Game* game;
    QVector<QVector<QTile*> > gui_board;
    QVBoxLayout *mainLayout;
    QGridLayout *boardLayout;
    QLabel *score;
    QGameOverWindow gameOverWindow;
    QLabel *youwin;


    void drawBoard();

protected:
    void keyPressEvent(QKeyEvent *event);

signals:
public slots:
    void resetGame();

};


#endif // QGAMEBOARD_H
