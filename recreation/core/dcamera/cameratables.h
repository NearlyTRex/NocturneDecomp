#pragma once

#include "core/color3i.h"
#include "core/dcamera/foggrid.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::core {

// What every camera and light draws with, which the scene camera fills.
struct SCameraTables {
    static constexpr std::size_t kLookupSize = 64;
    static constexpr int kDefaultFogColorIndex = 0x40;

    // The screen the scene camera was last set up for: four thirds of its height wide.
    int screen_width = 0;
    int screen_height = 0;
    // How many times the camera's display was halved to fit 320 wide.
    int downscale_iterations = 0;
    // [a][b] is a times b over 64.
    std::array<std::uint8_t, kLookupSize * kLookupSize> lookup_table{};
    SFogGrid fog_grid;
    // Each light-map level after gamma, the level repeated in all four bytes.
    std::array<std::uint32_t, 256> lightmap_palette{};
    // The palette levels the fog's colour is made of.
    CColor3i fog_color_index{
        .r = kDefaultFogColorIndex, .g = kDefaultFogColorIndex, .b = kDefaultFogColorIndex};
};

} // namespace nocturne::core
