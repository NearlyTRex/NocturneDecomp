#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a lever is mounted; files save the number.
enum class ELeverType : std::uint8_t {
    kGround = 0,
    kWall = 1,
    kUnknown = 2,
};

// The sides of a lever, along its z axis, it is pulled from.
enum class ELeverOpenSides : std::uint8_t {
    kPositiveZ = 0,
    kNegativeZ = 1,
    kBoth = 2,
};

} // namespace nocturne::core
