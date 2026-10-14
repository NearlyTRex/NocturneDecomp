#pragma once

#include <cstdint>

namespace nocturne::engine {

// What the polygon being drawn asks of the software scanlines.
struct SScanlineMode {
    // The vertex preprocessing that leaves texture coordinates over depth, to divide back out.
    static constexpr int kPerspectiveTexture = 5;

    // common::kRender* bits.
    std::uint32_t render_flags = 0;
    int vertex_preprocess_mode = 0;
    // For lit drawing: the light level, with 0x100 as black.
    int lighting_value = 0;
    // The colour a solid-alpha polygon blends toward.
    std::uint32_t solid_color = 0;
};

} // namespace nocturne::engine
