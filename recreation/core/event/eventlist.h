#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CEventList {
public:
    CEventList();

    void reset();
    void process();
    int executeCommands(char *commands);
    int evaluateCondition(char *condition_expression);
    char *validateCondition(char *expression);
    char *validateCommands(char *commands);
    void render();
    void addOrRemovePersistentEvent(char *name, int add_flag);
    void resetGameFlags();
    void setCounter(char *name, int value);
    int getCounterValue(char *str);
    void setActorVariable(char *var_name, CDemonActor *actor);
    CDemonActor *getActorByVarName(char *name);
    void restartSfxEntries();
    int loadState(std::FILE *file_handle);
    int saveState(std::FILE *file_handle);
};

} // namespace nocturne::core
