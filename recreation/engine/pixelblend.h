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

// The MMX font blend of one 32-bit pixel: each byte of coverage, scaled by the render colour's,
// is how much of the blend colour's byte goes over the destination's.
[[nodiscard]] constexpr std::uint32_t blendCoverage32(std::uint32_t coverage,
                                                      std::uint32_t blend_color, std::uint32_t dest,
                                                      std::uint32_t render_color) {
    std::uint32_t out = 0;
    for (unsigned shift = 0; shift < 32U; shift += 8U) {
        const std::uint32_t alpha =
            (((coverage >> shift) & kMaxLevel) * ((render_color >> shift) & kMaxLevel)) >> 8U;
        out |= blendLevel((blend_color >> shift) & kMaxLevel, (dest >> shift) & kMaxLevel, alpha)
               << shift;
    }
    return out;
}

// A source level at an opacity of 0..255 added to a destination level, saturating.
[[nodiscard]] constexpr std::uint32_t addLevel(std::uint32_t source, std::uint32_t dest,
                                               std::uint32_t alpha) {
    return std::min(dest + ((source * alpha) >> 8U), kMaxLevel);
}

} // namespace nocturne::engine
