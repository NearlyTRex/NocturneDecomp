#pragma once

#include "engine/fwd.h"
#include "engine/keys/inputcodetype.h"

#include <array>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// A code with the modifiers that must be held with it. It is held while its code and each of its
// modifiers are; other keys held as well don't matter, as the original's Ctrl hotkeys had it.
struct SKeyChord {
    engine::EInputCodeType code = engine::EInputCodeType::INPUT_NONE;
    bool control = false;
    bool alt = false;
    bool shift = false;

    friend bool operator==(const SKeyChord &, const SKeyChord &) = default;
};

// A modifier, its left and right keys, and the code its INI form names it by.
struct SChordModifier {
    bool SKeyChord::*flag;
    engine::EInputCodeType left;
    engine::EInputCodeType right;
    std::string_view label;
};

// Ctrl, Alt and Shift, in the order a chord names them.
inline constexpr std::array<SChordModifier, 3> kChordModifiers{{
    {.flag = &SKeyChord::control,
     .left = engine::EInputCodeType::DIK_LCONTROL,
     .right = engine::EInputCodeType::DIK_RCONTROL,
     .label = "Ctrl"},
    {.flag = &SKeyChord::alt,
     .left = engine::EInputCodeType::DIK_LMENU,
     .right = engine::EInputCodeType::DIK_RMENU,
     .label = "Alt"},
    {.flag = &SKeyChord::shift,
     .left = engine::EInputCodeType::DIK_LSHIFT,
     .right = engine::EInputCodeType::DIK_RSHIFT,
     .label = "Shift"},
}};

// Either key of the modifier.
[[nodiscard]] const SChordModifier *findChordModifier(engine::EInputCodeType code);
[[nodiscard]] bool isChordHeld(const SKeyChord &chord, engine::CKeys &keys);
// Whether wide is narrow's key with every modifier narrow has and more, as Ctrl+Shift+C is to
// Shift+C.
[[nodiscard]] bool outranks(const SKeyChord &wide, const SKeyChord &narrow);
// The INI form: each modifier's left key, then the code, in decimal and joined by '+', so a
// chord of no modifiers is its code alone, as the original wrote it.
[[nodiscard]] std::string formatChord(const SKeyChord &chord);
// Nothing for an entry that isn't a code inside the code space, or whose leading parts aren't
// modifiers.
[[nodiscard]] std::optional<SKeyChord> parseChord(std::string_view text);

} // namespace nocturne::core
