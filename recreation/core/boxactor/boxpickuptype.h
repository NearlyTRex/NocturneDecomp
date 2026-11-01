#pragma once

#include <cstdint>

namespace nocturne::core {

// What a hero can do with a box actor; files save the number.
enum class EBoxPickupType : std::uint8_t {
    kCant = 0,
    kRummage = 1,
    kInventory = 2,
    kCarry = 3,
    kHeavy = 4,
};

} // namespace nocturne::core
