#pragma once

#include "core/game/gameaction.h"

#include <array>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// Every input bound to each action, in the order the player bound them; the first is primary.
class CControlBindings {
public:
    [[nodiscard]] std::span<const engine::EInputCodeType> getBindings(EGameAction action) const;
    // INPUT_NONE entries are dropped: an action with none is unbound.
    void setBindings(EGameAction action, std::vector<engine::EInputCodeType> codes);

    // The INI form: codes in decimal, comma-separated, primary first, so a build that reads the
    // key as one "%d" still gets the primary. INPUT_NONE stands for an unbound action.
    [[nodiscard]] std::string formatBindings(EGameAction action) const;
    // Reads the INI form back. A list whose first entry isn't a code leaves the bindings as they
    // were, as the original's read of a bad value did; later bad entries are skipped.
    void parseBindings(EGameAction action, std::string_view text);

private:
    std::array<std::vector<engine::EInputCodeType>, kGameActionCount> bindings_;
};

} // namespace nocturne::core
