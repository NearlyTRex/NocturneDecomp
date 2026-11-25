#pragma once

#include <cstdint>

namespace nocturne::core {

// The INI's flashlightRange, the enhanced game's. The values are frozen.
enum class EFlashlightRange : std::uint8_t {
    // The originals': each lit weapon set the flashlight to reach 32 units every frame.
    Original = 0,
    Long = 1,
};

inline constexpr int kFlashlightRangeCount = 2;
inline constexpr int kOriginalFlashlightRange = 32;
inline constexpr int kLongFlashlightRange = 64;

} // namespace nocturne::core
