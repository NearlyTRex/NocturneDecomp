#pragma once

#include <cstdint>

namespace nocturne::core {

// The script's letterbox; the values are frozen, as saved games hold them.
enum class ELetterbox : std::uint8_t {
    Off = 0,
    On = 1,
    // The bottom bar alone, the top of the shot left showing.
    Bottom = 2,
};

} // namespace nocturne::core
