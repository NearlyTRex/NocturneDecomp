#pragma once

#include <optional>
#include <string>
#include <string_view>

namespace nocturne::platform {

// The process environment, as getenv reads it.
class IEnvironment {
public:
    virtual ~IEnvironment() = default;

    // Empty when the variable isn't set.
    [[nodiscard]] virtual std::optional<std::string> getVariable(std::string_view name) = 0;
};

} // namespace nocturne::platform
