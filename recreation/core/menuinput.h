#pragma once

#include "engine/fwd.h"

#include <cstdint>

namespace nocturne::core {

// What the menus answer to. Each is bound to the keyboard and the pad at once, whatever the
// control mode the player picked for the game.
enum class EMenuAction : std::uint8_t {
    Up,
    Down,
    Left,
    Right,
    Confirm,
};

// The menu actions, read off the keys.
class CMenuInput {
public:
    explicit CMenuInput(engine::CKeys &keys);

    // Whether an input bound to the action was pressed since it was last taken; takes every one,
    // so a press on two of them at once counts once.
    [[nodiscard]] bool takeMenuAction(EMenuAction action);

private:
    engine::CKeys &keys_;
};

} // namespace nocturne::core
