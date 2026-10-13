#pragma once

#include <algorithm>
#include <cstdint>

namespace nocturne::engine {

// The brightest 8-bit level, and the opacity that covers completely.
inline constexpr std::uint32_t kMaxLevel = 0xff;

// A source level over a destination level at an opacity of 0..255. The two weights sum to 255,
// not 256, so even full opacity keeps a trace of the destination, as the MMX blenders do.
[[nodiscard]] constexpr std::uint32_t blendLevel(std::uint32_t source, std::uint32_t dest,
                                                 std::uint32_t alpha) {
    return ((source * alpha) + (dest * (kMaxLevel - alpha))) >> 8U;
}

// A source level at an opacity of 0..255 added to a destination level, saturating.
[[nodiscard]] constexpr std::uint32_t addLevel(std::uint32_t source, std::uint32_t dest,
                                               std::uint32_t alpha) {
    return std::min(dest + ((source * alpha) >> 8U), kMaxLevel);
}

} // namespace nocturne::engine
