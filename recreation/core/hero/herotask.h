#pragma once

#include <cstdint>

namespace nocturne::core {

// What a hero the game steers does; files save the number.
enum class EHeroTask : std::uint8_t {
    kStand = 0,
    kFollow = 1,
    kKill = 2,
    kGuard = 3,
    kSuspend = 4,
};

} // namespace nocturne::core
