#pragma once

#include <cstdint>

namespace nocturne::core {

// What a flame looks like; files save the number. The editor offers the first four.
enum class EFlameType : std::uint8_t {
    kTorch = 0,
    kCandle = 1,
    kBlue = 2,
    kNone = 3,
    kBody = 4,
};

} // namespace nocturne::core
