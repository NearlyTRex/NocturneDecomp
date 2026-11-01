#pragma once

#include <cstdint>

namespace nocturne::core {

// How a door moves as it opens; files save the number.
enum class EDoorType : std::uint8_t {
    kSwing = 0,
    kVertical = 1,
    kSlide = 2,
    kTilt = 3,
};

// Which edge a door hangs from.
enum class EDoorSide : std::uint8_t {
    kLeft = 0,
    kRight = 1,
};

enum class EDoorState : std::uint8_t {
    kClosed = 0,
    kOpening = 1,
    kOpen = 2,
    kClosing = 3,
};

// Which way a swinging door turns as it opens.
enum class EDoorSwing : std::uint8_t {
    kClockwise = 0,
    kCounterClockwise = 1,
};

// The sides of a door, along its z axis, it opens from.
enum class EDoorOpenSides : std::uint8_t {
    kNeither = 0,
    kPositiveZ = 1,
    kNegativeZ = 2,
    kBoth = 3,
};

} // namespace nocturne::core
