#pragma once

#include <cstdint>

namespace nocturne::core {

// When a trigger is on, as the editor's "Event type" list names them; files save the number.
enum class ETriggerEventType : std::uint8_t {
    // While what sets it off is inside.
    kMomentary = 0,
    // From the first time it is set off.
    kOneShot = 1,
    // For the frame what sets it off arrives, and the frame it leaves.
    kRisingEdge = 2,
    kFallingEdge = 3,
};

} // namespace nocturne::core
