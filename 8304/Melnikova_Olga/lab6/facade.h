#pragma once


#include "Mediator/concretemediator.h"


class Facade
{
public:
    ConcreteMediator* c;
    Facade(Game<Rules>* game, int h, int w, bool* isUnitSelected, Object** selectedUnit, int* currNumBase){
        c = new ConcreteMediator(game, h, w, isUnitSelected, selectedUnit, currNumBase);
    }
    void func(bool logToFile, bool logToTerminal, bool withoutLog){
        c->Notify(logToFile, logToTerminal, withoutLog);
    }
};
