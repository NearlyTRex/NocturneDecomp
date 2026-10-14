#pragma once

#include <cstdint>

namespace nocturne::core {

// The INI's gameControl; the values are frozen.
enum class EControlMode : std::uint8_t {
    CONTROL_MODE_KEYBOARD = 0,
    CONTROL_MODE_MOUSE = 1,
    CONTROL_MODE_GAMEPAD = 2,
};

} // namespace nocturne::core
