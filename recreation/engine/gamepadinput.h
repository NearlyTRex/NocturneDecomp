#pragma once

#include "engine/fwd.h"
#include "engine/keys/inputcodetype.h"
#include "engine/rawinput.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string_view>

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
// had it: play, which only looks, sees it held.
//
// The menus get the pad's presses apart from the codes: the d-pad or the left stick moves, A
// confirms, B or Start cancels and X deletes, a direction repeating while it is held. A press waits
// to be taken until it is released, and none is made in the few frames after one of play, so a
// button does its binding and doesn't also act on a menu that opens under it. Confirm and cancel
// also type Return and Escape, for the screens that wait for any key. Mappings come from
// gamecontrollerdb.txt in the game's directory; the decomp also read a copy beside the program.
class CGamepadInput {
public:
    CGamepadInput(platform::IGamepad &gamepad, platform::IFileSystem &file_system,
                  platform::IClock &clock);

    // Once a frame: drops a pad that was unplugged and opens one that was plugged in, then writes
    // its codes and makes its menu presses. Without the focus the pad reads as released, as the
    // keyboard and mouse only reach the focused window, so a second copy of the game doesn't act
    // on its presses.
    void pump(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state, bool focused);
    // As the last pump read them; all 0 without a pad or the focus.
    [[nodiscard]] const SGamepadAxes &getAxes() const;
    [[nodiscard]] bool isPresent() const;

    // The frame was one of play: no menu presses for the next few pumps. More than one, as a
    // frame of play may present more than once.
    void noteGameplayFrame();
    // Whether the pad made a press of the action since it was last taken.
    [[nodiscard]] bool takeMenuAction(EMenuAction action);
    // Drops a press of the action nothing has taken, for a screen where the pad's button
    // shouldn't mean what the key does.
    void withdrawMenuAction(EMenuAction action);
    // Every press waiting dropped, as the input is cleared.
    void clearMenuActions();
    // What the last pump typed, oldest first.
    [[nodiscard]] std::span<const int> getTypedCharacters() const;
    // A pad code as the pad plugged in labels it, a Switch pad's face buttons swapped as they
    // are printed; with none plugged in, or one of no known type, as an Xbox pad's.
    [[nodiscard]] std::optional<std::string_view> getCodeName(EInputCodeType code) const;

    SGamepadTuning tuning;

private:
    // A slot per pad code, then the left stick's four.
    static constexpr std::size_t kSlotCount = 36;
    // Up, down, left and right, confirm, cancel and delete.
    static constexpr std::size_t kMenuActionCount = 7;
    // Confirm and cancel in one pump.
    static constexpr std::size_t kMaxTyped = 2;

    struct SMenuPress {
        bool held = false;
        bool waiting = false;
        // When a held direction next repeats.
        std::uint64_t repeat_at = 0;
    };

    [[nodiscard]] float readUnit(platform::EGamepadAxis axis, bool readable) const;
    void readAxes(bool readable);
    // Set on the press, cleared while released, left alone while held.
    void applyEdge(std::span<std::uint8_t, IRawInput::kInputCodeCount> keyboard_state,
                   EInputCodeType code, std::size_t slot, bool down);
    // Pressed at the press threshold, released only below the lower release one.
    [[nodiscard]] bool isTriggerDown(std::size_t slot, float pull) const;
    [[nodiscard]] bool isButtonDown(platform::EGamepadButton button) const;
    [[nodiscard]] std::uint64_t getMilliseconds() const;
    void makeMenuPresses();
    // Pressed as it goes down, then again after a delay and at a rate while held.
    void updateRepeating(std::size_t index, bool down, std::uint64_t now);
    // One press however long it is held; a press begun where it isn't allowed never makes one.
    // Either way a release takes back a press nobody took.
    void updateOnce(std::size_t index, bool down, bool allowed);
    void press(std::size_t index);

    platform::IGamepad &gamepad_;
    platform::IClock &clock_;
    bool present_ = false;
    SGamepadAxes axes_;
    std::array<bool, kSlotCount> previous_{};
    std::array<SMenuPress, kMenuActionCount> menu_presses_{};
    int gameplay_pumps_ = 0;
    std::array<int, kMaxTyped> typed_{};
    std::size_t typed_count_ = 0;
};

} // namespace nocturne::engine
