#ifndef BOARD_H
#define BOARD_H

#include "core/subject.h"

#include <QVector>
#include <QString>

class Tile;

enum Direction{ UP, DOWN, LEFT, RIGHT};

class Board : public Subject{
public:
    Board(int dimension);
    Board(const Board& other);

    ~Board();

    void reset();
    Tile* getTile(int i, int j);
    int getDimension() const{
        return dimension;
    }
    void move(Direction direction);
    bool full() const;
    int getPointsScoredLastRound() const{
        return pointScoredLastRound;
    }
    bool isTileCollisionLastRound() const{
        return tileCollisionLastRound;
    }

    bool movePossible() const;


private:
    QVector<QVector<Tile*> > board;
    int dimension;

    void init();

    QVector<int> freePosition();
    bool changed(Board& other) const;

    bool inbounds(int i, int j);

    void moveHorizontally(int i, int j, Direction dir);
    void moveVertically(int i, int j, Direction dir);
    void handleCollision(int i, int j);

    void prepareForNextMove();

    int pointScoredLastRound;
    bool tileCollisionLastRound;
};

#endif // BOARD_H
