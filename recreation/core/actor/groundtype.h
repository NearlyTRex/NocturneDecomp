#pragma once

#include <cstdint>

namespace nocturne::core {

// What an actor's surface is made of, for the footsteps on it; files save the number.
enum class EGroundType : std::uint8_t {
    kDefault = 0,
    kNone = 1,
    kConcrete = 2,
    kDirt = 3,
    kGrass = 4,
    kMetal = 5,
    kWater = 6,
    kWood = 7,
    kMarble = 8,
    kMud = 9,
    kCarpet = 10,
    kBlood = 11,
    kGlass = 12,
    kGravel = 13,
};

} // namespace nocturne::core
