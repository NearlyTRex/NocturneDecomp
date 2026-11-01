#pragma once

#include <cstdint>

namespace nocturne::core {

// What an actor collides as.
enum class ECollisionType : std::uint8_t {
    kNone = 0,
    kMesh = 1,
    kCylinder = 2,
    kCustom = 3,
};

} // namespace nocturne::core
