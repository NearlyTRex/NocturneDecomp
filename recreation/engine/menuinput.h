#pragma once

#include "engine/fwd.h"

#include <cstdint>

namespace nocturne::engine {

// What the menus and pick lists answer to. Each is bound to the keyboard and, where the pad has
// a button for it, the pad at once, whatever the control mode the player picked for the game.
enum class EMenuAction : std::uint8_t {
    Up,
    Down,
    Left,
    Right,
    Confirm,
    Cancel,
    Home,
    End,
    PageUp,
    PageDown,
    // Removes what is selected, where a list can.
    Delete,
    // These only while a control key is held.
    Copy,
    ToggleMute,
};

// The keys held with a menu choice to pick its developers' variant.
enum class EMenuModifier : std::uint8_t {
    Control,
    Shift,
};

// The menu actions, read off the keys.
class CMenuInput {
public:
    explicit CMenuInput(CKeys &keys);

    // Whether an input bound to the action was pressed since it was last taken; takes every one,
    // so a press on two of them at once counts once.
    [[nodiscard]] bool takeMenuAction(EMenuAction action);
    [[nodiscard]] bool isModifierHeld(EMenuModifier modifier) const;

private:
    CKeys &keys_;
};

} // namespace nocturne::engine
