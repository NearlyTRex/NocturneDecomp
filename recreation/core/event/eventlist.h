#pragma once

#include "core/fwd.h"

#include <cstddef>
#include <cstdio>
#include <expected>
#include <string>
#include <string_view>

namespace nocturne::core {

// What the events find the actors they name in, draw their chances from, and find the set's
// lights in.
struct SEventListOwners {
    const CDemonMission &mission;
    CActor &actor;
    const CDemonSet &set;
};

class CEventList {
public:
    // A condition's check: nothing, or why it is wrong.
    using ConditionResult = std::expected<void, std::string>;

    // deferred: the game's event list, with CDemonMission::loadScript
    // nocedit 0x004aa260
    explicit CEventList(const SEventListOwners &owners);

    void reset();
    void process();
    int executeCommands(char *commands);
    int evaluateCondition(char *condition_expression);
    // A condition's syntax, the actors it names and the spotlights it asks about. It is evaluated
    // as it is checked, so a randBool draws its chance.
    [[nodiscard]] ConditionResult validateCondition(std::string_view expression);
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

private:
    [[nodiscard]] ConditionResult evaluateExpression(std::string_view expression);
    [[nodiscard]] ConditionResult evaluateLogicalExpr(std::string_view expression,
                                                      std::size_t &position);
    [[nodiscard]] ConditionResult evaluateAtom(std::string_view expression, std::size_t &position);

    SEventListOwners owners_;
};

} // namespace nocturne::core
