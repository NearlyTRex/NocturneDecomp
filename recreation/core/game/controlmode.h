#pragma once

#include <array>
#include <cstdint>
#include <string_view>

namespace nocturne::core {

// The INI's gameControl; the values are frozen.
enum class EControlMode : std::uint8_t {
    CONTROL_MODE_KEYBOARD = 0,
    CONTROL_MODE_MOUSE = 1,
    CONTROL_MODE_GAMEPAD = 2,
};

// Each mode's id in a package, by EControlMode.
inline constexpr std::array<std::string_view, 3> kControlModeIds{"keyboard", "keyboard_mouse",
                                                                 "gamepad"};

} // namespace nocturne::core
