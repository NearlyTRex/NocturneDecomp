#pragma once

#include <cstdint>
#include <optional>

namespace nocturne::platform {

struct SJoystickCaps {
    int button_count = 0;
    bool has_pov = false;
};

struct SJoystickState {
    // Raw positions, 0..65535; the game calibrates its own centre and range.
    std::uint32_t x = 0;
    std::uint32_t y = 0;
    std::uint32_t z = 0;
    std::uint32_t r = 0;
    std::uint32_t buttons = 0;
    // Hundredths of a degree clockwise from up; empty while the hat is centred.
    std::optional<std::uint32_t> pov;
};

class IJoystick {
public:
    virtual ~IJoystick() = default;

    // Empty when no joystick is attached.
    [[nodiscard]] virtual std::optional<SJoystickCaps> getCaps() = 0;
    [[nodiscard]] virtual bool readState(SJoystickState &state) = 0;
};

} // namespace nocturne::platform
