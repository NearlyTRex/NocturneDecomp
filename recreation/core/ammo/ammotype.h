#pragma once

#include <cstdint>

namespace nocturne::core {

// What a weapon fires; files save the number.
enum class EAmmoType : std::uint8_t {
    kGeneric = 0,
    kHoly = 1,
    kWood = 2,
    kSilver = 3,
    kGold = 4,
    kFlaming = 5,
    kBlanks = 6,
    kLithium = 7,
    kMercury = 8,
};

} // namespace nocturne::core
