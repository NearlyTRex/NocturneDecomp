#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstddef>
#include <cstdio>
#include <expected>
#include <string>
#include <string_view>

namespace nocturne::core {

// What the events find the actors they name in, draw their chances from, find the set's lights
// and cameras in, and find bitmaps with.
struct SEventListOwners {
    const CDemonMission &mission;
    CActor &actor;
    const CDemonSet &set;
    const engine::CDosIo &dosio;
};

class CEventList {
public:
    // A check of a condition or of commands: nothing, or why they are wrong.
    using CheckResult = std::expected<void, std::string>;

    // deferred: the game's event list, with CDemonMission::loadScript
    // nocedit 0x004aa260
    explicit CEventList(const SEventListOwners &owners);

    void reset();
    void process();
    int executeCommands(char *commands);
    int evaluateCondition(char *condition_expression);
    // A condition's syntax, the actors it names and the spotlights it asks about. It is evaluated
    // as it is checked, so a randBool draws its chance.
    [[nodiscard]] CheckResult validateCondition(std::string_view expression);
    // Commands separated by ';', each an event to raise or a function of the events': their
    // syntax and what they name.
    [[nodiscard]] CheckResult validateCommands(std::string_view commands);
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
    [[nodiscard]] CheckResult evaluateExpression(std::string_view expression);
    [[nodiscard]] CheckResult evaluateLogicalExpr(std::string_view expression,
                                                  std::size_t &position);
    [[nodiscard]] CheckResult evaluateAtom(std::string_view expression, std::size_t &position);
    [[nodiscard]] CheckResult executeCommandString(std::string_view commands);
    [[nodiscard]] CheckResult executeCommand(std::string_view command);

    SEventListOwners owners_;
};

} // namespace nocturne::core
