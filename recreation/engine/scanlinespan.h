#pragma once

#include "engine/softwareedge.h"
#include "engine/texture/currenttexture.h"

#include <cstddef>
#include <cstdint>
#include <utility>

namespace nocturne::engine {

// The row between two edges in whole pixels, from the edge further left; empty unless count is
// positive. With the edges level the right one counts as further left.
struct SRowSpan {
    const SSoftwareEdge *lo = nullptr;
    const SSoftwareEdge *hi = nullptr;
    int left_x = 0;
    int count = 0;
};

[[nodiscard]] inline SRowSpan getRowSpan(const SSoftwareEdge &left, const SSoftwareEdge &right) {
    SRowSpan span{.lo = &right, .hi = &left};
    if (static_cast<std::uint32_t>(right.x_current) > static_cast<std::uint32_t>(left.x_current)) {
        std::swap(span.lo, span.hi);
    }
    span.left_x = static_cast<int>(static_cast<std::uint32_t>(span.lo->x_current) >> 16U);
    span.count =
        static_cast<int>(static_cast<std::uint32_t>(span.hi->x_current) >> 16U) - span.left_x;
    return span;
}

// The step across a row from one end's value to the other's: the difference IMUL'd by the
// reciprocal of the width plus one, keeping the high half.
[[nodiscard]] inline int getStep(int from, int to, std::uint32_t reciprocal) {
    const auto difference = static_cast<std::int32_t>(static_cast<std::uint32_t>(to) -
                                                      static_cast<std::uint32_t>(from));
    return static_cast<int>((std::int64_t{difference} * static_cast<std::int32_t>(reciprocal)) >>
                            32U);
}

// The texel at a texture position: each coordinate shifted down and masked, as PSRLQ and PAND
// take them.
[[nodiscard]] inline std::size_t getTexelIndex(std::uint32_t u, std::uint32_t v,
                                               const SCurrentTexture &texture) {
    const auto shift = [](std::uint32_t value, int amount) {
        return amount < 32 ? value >> static_cast<unsigned>(amount) : 0U;
    };
    return (shift(u, texture.texture_shift1) & texture.texture_mask1) +
           (shift(v, texture.texture_shift2) & texture.texture_mask2);
}

} // namespace nocturne::engine
