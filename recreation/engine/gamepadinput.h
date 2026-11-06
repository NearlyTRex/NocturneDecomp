#pragma once

#include "engine/keys/inputcodetype.h"
#include "engine/rawinput.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {

// How the sticks feel, as nocturne.ini's [Control] holds it: the deadzone and the turn and look
// speeds at full deflection in percent, the speeds in the units of a frame's controls, where the
// keyboard's are 25.
struct SGamepadTuning {
    static constexpr int kMinDeadzone = 5;
    static constexpr int kMaxDeadzone = 40;
    static constexpr int kMinRate = 5;
    static constexpr int kMaxRate = 100;

    int deadzone = 20;
    int turn_rate = 25;
    int look_rate = 25;
    // Pushing the right stick down looks up.
    bool invert_look = false;
};

// The sticks past the deadzone, rescaled to reach 1 at full deflection and never leaving the unit
// circle, y positive downwards; the triggers' pulls from 0 to 1.
struct SGamepadAxes {
    float move_x = 0.0F;
    float move_y = 0.0F;
    float look_x = 0.0F;
    float look_y = 0.0F;
    float left_trigger = 0.0F;
    float right_trigger = 0.0F;
};

// The first pad attached, as input codes: its buttons from PAD_A, the triggers and the right
// stick as buttons, and the left stick on the original joystick's four directions, so a binding
// the shipped game saved still means what it meant. A code is cleared while its control is
// released and set on the frame it goes down, never while held, as the original's joystick poll
// had it: a menu that takes the press sees one press, and play, which only looks, sees it held.
// Mappings come from gamecontrollerdb.txt in the game's directory; the decomp also read a copy
// beside the program.
class CGamepadInput {
public:
    CGamepadInput(platform::IGamepad &gamepad, platform::IFileSystem &file_system);

    // Once a frame: drops a pad that was unplugged and opens one that was plugged in, then writes
    // its codes. Without the focus the pad reads as released, as the keyboard and mouse only reach
    // the focused window, so a second copy of the game doesn't act on its presses.
    void pump(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state, bool focused);
    // As the last pump read them; all 0 without a pad or the focus.
    [[nodiscard]] const SGamepadAxes &getAxes() const;
    [[nodiscard]] bool isPresent() const;

    SGamepadTuning tuning;

private:
    // A slot per pad code, then the left stick's four.
    static constexpr std::size_t kSlotCount = 36;

    [[nodiscard]] float readUnit(platform::EGamepadAxis axis, bool readable) const;
    void readAxes(bool readable);
    // Set on the press, cleared while released, left alone while held.
    void applyEdge(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state,
                   EInputCodeType code, std::size_t slot, bool down);
    // Pressed at the press threshold, released only below the lower release one.
    [[nodiscard]] bool isTriggerDown(std::size_t slot, float pull) const;

    platform::IGamepad &gamepad_;
    bool present_ = false;
    SGamepadAxes axes_;
    std::array<bool, kSlotCount> previous_{};
};

} // namespace nocturne::engine
