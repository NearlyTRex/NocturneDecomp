#pragma once

#include "core/game/keychord.h"
#include "engine/fwd.h"
#include "support/fwd.h"

#include <span>
#include <string>

namespace nocturne::core {

// What keys are named by: the pad plugged in, for its own buttons, and the message file, for the
// mouse's and the joystick's.
struct SKeyNameOwners {
    const engine::CGamepadInput &gamepad;
    const support::CNewMsg &messages;
};

[[nodiscard]] std::string getKeyDisplayName(const SKeyNameOwners &owners,
                                            engine::EInputCodeType key_code);
// Its modifiers, then its key: "Ctrl+Alt+K".
[[nodiscard]] std::string getChordDisplayName(const SKeyNameOwners &owners, const SKeyChord &chord);
// Each chord's name, primary first; none bound is named as INPUT_NONE is.
[[nodiscard]] std::string getBindingNames(const SKeyNameOwners &owners,
                                          std::span<const SKeyChord> chords);

} // namespace nocturne::core
