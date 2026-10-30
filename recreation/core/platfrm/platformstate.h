#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a platform is between its ends; files save the number.
enum class EPlatformState : std::uint8_t {
    kAtStart = 0,
    kAtEnd = 1,
    kStopped = 2,
    kMovingToEnd = 3,
    kMovingToStart = 4,
};

} // namespace nocturne::core
