#pragma once

#include "platform/environment.h"

namespace nocturne::platform::sdl {

class CSdlEnvironment final : public IEnvironment {
public:
    [[nodiscard]] std::optional<std::string> getVariable(std::string_view name) override;
};

} // namespace nocturne::platform::sdl
