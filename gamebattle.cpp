#ifndef GAMEBATTLE_H
#define GAMEBATTLE_H

#include "GameUnits.h"
#include <vector>

namespace GameBattle {

using namespace GameUnits;

class Team {
public:
    void addUnit(Unit* unit);
    void print() const;

private:
    std::vector<Unit*> units;
};

}

#endif // GAMEBATTLE_H
