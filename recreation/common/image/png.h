#pragma once

#include <cstdint>
#include <optional>
#include <span>
#include <vector>

namespace nocturne::common {

// zlib's levels: 0 stores, 1 is the fastest that compresses, 9 the smallest.
inline constexpr int kPngFastest = 1;

// A PNG of an RGB image, a byte a channel, its rows top down with nothing between them. None when
// the pixels aren't width x height of them, or zlib refuses the level.
[[nodiscard]] std::optional<std::vector<std::uint8_t>>
encodePng(int width, int height, std::span<const std::uint8_t> rgb, int level);

} // namespace nocturne::common
