#pragma once

#include "engine/fwd.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {

// winrun's input as the window delivered it, for the code below wincore that reads it.
class IRawInput {
public:
    // Every input code the game can bind, keys and mouse buttons alike.
    static constexpr std::size_t kInputCodeCount = 600;

    virtual ~IRawInput() = default;

    // One per code: nonzero while held, and for one pump after a press released within it.
    [[nodiscard]] virtual std::span<std::uint8_t, kInputCodeCount> getKeyboardState() = 0;
    // The scancode bits kept: 0x7f folds extended keys onto their twins, 0x1ff keeps them.
    [[nodiscard]] virtual int getInputKeyMask() const = 0;
    virtual void setInputKeyMask(int mask) = 0;
    [[nodiscard]] virtual int getMouseX() const = 0;
    [[nodiscard]] virtual int getMouseY() const = 0;
    // 1 for the left button, 2 the right and 4 the middle.
    [[nodiscard]] virtual int getMouseButtonFlags() const = 0;
    // Counts the left button up until it is next pressed.
    virtual void releaseLeftMouseButton() = 0;
    // Moves the pointer there, in the game's coordinates.
    virtual void setCursorPosition(int x, int y) = 0;
    // Wheel notches since the last take, positive away from the user.
    [[nodiscard]] virtual int takeMouseWheelNotches() = 0;
    // Typed characters, mouse clicks and held keys all dropped.
    virtual void clearInput() = 0;
    // Typed characters alone dropped.
    virtual void clearKeypresses() = 0;
    // Nonzero while a typed character waits.
    [[nodiscard]] virtual int wasKeyPressed() const = 0;
    // The window was closed: every wait for input gives up.
    [[nodiscard]] virtual bool getInputDisabled() const = 0;
    // The next typed character, presenting frames on the screen until one comes; 0 once the
    // window has closed.
    virtual int getNextKeypress(IScreenDevice &screen) = 0;
};

} // namespace nocturne::engine
