#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstddef>
#include <cstdio>
#include <expected>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What the events find the actors they name in, draw their chances from, find the set's lights
// and cameras in, find bitmaps with, and report a condition that can't be evaluated on.
struct SEventListOwners {
    const CDemonMission &mission;
    CActor &actor;
    const CDemonSet &set;
    const engine::CDosIo &dosio;
    engine::CConsole &console;
};

class CEventList {
public:
    // A check of a condition or of commands: nothing, or why they are wrong.
    using CheckResult = std::expected<void, std::string>;
    // A condition's value, or why it can't be evaluated.
    using ValueResult = std::expected<bool, std::string>;

    // nocedit 0x004aa260
    explicit CEventList(const SEventListOwners &owners);

    // Forgets the events' state for a new mission.
    void reset();
    void process();
    int executeCommands(char *commands);
    // False for no condition, for "none", and for one that can't be evaluated, which the console
    // says why.
    [[nodiscard]] bool evaluateCondition(std::string_view condition_expression);
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
    // Points the variable, ignoring case, at the actor by its name; a null actor clears it. An
    // actor without a name, or a 26th variable, is fatal.
    void setActorVariable(std::string_view var_name, const CDemonActor *actor);
    // The actor the variable names, or null when it names none.
    [[nodiscard]] CDemonActor *getActorByVarName(std::string_view name) const;
    void restartSfxEntries();
    int loadState(std::FILE *file_handle);
    int saveState(std::FILE *file_handle);

private:
    // An actor variable and the name of the actor it names.
    struct SActorVariable {
        std::string var_name;
        std::string actor_name;
    };

    [[nodiscard]] std::optional<std::size_t> findActorVariable(std::string_view name) const;
    [[nodiscard]] ValueResult evaluateExpression(std::string_view expression);
    [[nodiscard]] ValueResult evaluateLogicalExpr(std::string_view expression,
                                                  std::size_t &position);
    [[nodiscard]] ValueResult evaluateAtom(std::string_view expression, std::size_t &position);
    // A name standing alone in a condition.
    [[nodiscard]] static bool resolveVariable(std::string_view identifier);
    [[nodiscard]] CheckResult executeCommandString(std::string_view commands);
    [[nodiscard]] CheckResult executeCommand(std::string_view command);

    SEventListOwners owners_;
    std::vector<SActorVariable> actor_vars_;
    // Set while a condition is only checked, when the functions in it give no value.
    bool dry_run_ = false;
};

} // namespace nocturne::core
