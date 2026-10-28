#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a weapon is; files save the number.
enum class EWeaponState : std::uint8_t {
    kLyingAround = 0,
    kInInventory = 1,
    kInHand = 2,
    kOnHook = 3,
};

} // namespace nocturne::core
