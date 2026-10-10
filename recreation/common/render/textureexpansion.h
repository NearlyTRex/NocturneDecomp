#pragma once

#include <array>
#include <cstdint>
#include <span>

namespace nocturne::common {

// 256 RGB triples as 0x00RRGGBB; the expansion supplies alpha.
[[nodiscard]] std::array<std::uint32_t, 256>
packTexturePalette(std::span<const std::uint8_t, 768> palette);

// 8-bit texels to 0xAARRGGBB. Without an opacity plane, a texel whose palette colour is black is
// fully transparent, whichever index it is; with one, every texel takes the plane's alpha, black
// included. opacity is empty or one byte per texel; out holds one word per texel. Throws
// std::invalid_argument when either is shorter than indices.
void expandTexture(std::span<const std::uint8_t> indices,
                   const std::array<std::uint32_t, 256> &palette,
                   std::span<const std::uint8_t> opacity, std::span<std::uint32_t> out);

} // namespace nocturne::common
