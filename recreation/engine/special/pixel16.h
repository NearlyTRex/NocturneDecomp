#pragma once

#include "engine/screendevice.h"

#include <cstdint>

namespace nocturne::engine {

// A 16-bit pixel spread to 8-8-8, each channel's level in the top bits of its byte.
[[nodiscard]] inline std::uint32_t expandPixel16(std::uint16_t pixel, const SColorMasks &masks) {
    return ((pixel & masks.blue_mask16) << static_cast<unsigned>(masks.blue_bit_shift)) |
           ((pixel & masks.green_mask16) << static_cast<unsigned>(masks.green_blue_dither_shift)) |
           ((pixel & masks.red_mask16) << static_cast<unsigned>(masks.total_dither_shift));
}

[[nodiscard]] inline std::uint16_t packPixel16(std::uint32_t pixel, const SColorMasks &masks) {
    return static_cast<std::uint16_t>(
        ((pixel & masks.blue_mask32) >> static_cast<unsigned>(masks.blue_bit_shift)) |
        ((pixel & masks.green_mask32) >> static_cast<unsigned>(masks.green_blue_dither_shift)) |
        ((pixel & masks.red_mask32) >> static_cast<unsigned>(masks.total_dither_shift)));
}

} // namespace nocturne::engine
