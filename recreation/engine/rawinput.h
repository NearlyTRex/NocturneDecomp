#pragma once

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
    // Wheel notches since the last take, positive away from the user.
    [[nodiscard]] virtual int takeMouseWheelNotches() = 0;
    // Typed characters, mouse clicks and held keys all dropped.
    virtual void clearInput() = 0;
};

} // namespace nocturne::engine
