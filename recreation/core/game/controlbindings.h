#pragma once

#include "core/game/gameaction.h"
#include "core/game/keychord.h"

#include <array>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// Every chord bound to each action, in the order the player bound them; the first is primary.
class CControlBindings {
public:
    [[nodiscard]] std::span<const SKeyChord> getBindings(EGameAction action) const;
    // Chords of INPUT_NONE are dropped: an action with none is unbound.
    void setBindings(EGameAction action, std::vector<SKeyChord> chords);

    // The INI form: each chord's form comma-separated, primary first, so a build that reads the
    // key as one "%d" still gets a primary of no modifiers. INPUT_NONE stands for an unbound
    // action.
    [[nodiscard]] std::string formatBindings(EGameAction action) const;
    // Reads the INI form back. A list whose first entry isn't a chord leaves the bindings as they
    // were, as the original's read of a bad value did; later bad entries are skipped.
    void parseBindings(EGameAction action, std::string_view text);

private:
    std::array<std::vector<SKeyChord>, kGameActionCount> bindings_;
};

} // namespace nocturne::core
