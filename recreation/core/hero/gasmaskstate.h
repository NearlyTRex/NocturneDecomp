#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a hero's gas mask is; files save the number, and scripts ask for kOnFace.
enum class EGasMaskState : std::uint8_t {
    kAway = 0,
    kInHand = 1,
    kOnFace = 2,
};

} // namespace nocturne::core
