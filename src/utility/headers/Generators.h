/**
 * Generators.h: Declares the classes and methods used by the .cpp.
 *
 * @author Dustin Saunders
 */

#include "Stats.h"

class DiceRoller {
  private:
    int sides;

  public:
    DiceRoller(int);
    int roll();
};


Abilities rollAbilities(int(*)(DiceRoller));

int rollLoadedDie(DiceRoller);

int rollNormal(DiceRoller);
int rollTylerStyle(DiceRoller);


