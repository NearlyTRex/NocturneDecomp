#pragma once

#include <cstdint>

namespace nocturne::core {

// Where the iris fade is, in order.
enum class EIrisFade : std::uint8_t {
    Idle,
    // Black, before it opens.
    Starting,
    Opening,
    Closing,
    // Black, for a frame after it closed.
    Closed,
    // Black, until another fade starts.
    Black,
};

} // namespace nocturne::core
