#pragma once

#include <string_view>

namespace nocturne::core {

// Where an actor asks whether a condition on the events holds.
class IEventConditions {
public:
    virtual ~IEventConditions() = default;

    // False for no condition, for "none", and for one that can't be evaluated.
    [[nodiscard]] virtual bool evaluateCondition(std::string_view condition_expression) = 0;
};

} // namespace nocturne::core
