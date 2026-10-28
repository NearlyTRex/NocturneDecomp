#pragma once

#include <cstdint>

namespace nocturne::core {

// What sets a trigger off, as the editor's "What triggers me" list names them; files save the
// number.
enum class ETriggerCause : std::uint8_t {
    kHero = 0,
    kActor = 1,
    kLight = 2,
    kActionButton = 3,
    kBullet = 4,
    kLaser = 5,
    kExplosion = 6,
    kDamage = 7,
    kMotion = 8,
    kMatchedActors = 9,
};

} // namespace nocturne::core
