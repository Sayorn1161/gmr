#ifndef GAMEUNITS_H
#define GAMEUNITS_H

namespace GameUnits {

class Position {
public:
    Position(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

private:
    int x, y;
};

class Unit {
public:
    virtual void print() const = 0;
    virtual ~Unit() = default;

    Position getPosition() const;
    void setPosition(const Position& pos);

private:
    Position position;
};

class Weapon {
public:
    void use() const;
};

}

#endif // GAMEUNITS_H
