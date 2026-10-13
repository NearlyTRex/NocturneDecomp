#pragma once

#include <cstdint>
#include <span>

namespace nocturne::engine {

// The texture the renderers draw with, as setupTexture selects it out of the cache. The spans
// are the cache's own buffers, good until the slot is loaded again or the cache is freed.
struct SCurrentTexture {
    // Palette indices, dimension squared.
    std::span<std::uint8_t> data;
    // An alpha per texel; empty when the texture has none.
    std::span<std::uint8_t> opacity;
    // 256 RGB triples.
    std::span<std::uint8_t> palette;
    // The texture is dimension by dimension texels; the renderer bridge reads it from here.
    int dimension = 0;
    int offset_u = 0;
    int offset_v = 0;
    // How the software rasteriser turns a texture position into a texel offset, per dimension.
    int texture_shift1 = 0;
    int texture_shift2 = 0;
    std::uint32_t texture_mask1 = 0;
    std::uint32_t texture_mask2 = 0;
    int texture_bits = 0;
    // Set through a shadow pass, which draws untextured.
    bool textures_disabled = false;
};

} // namespace nocturne::engine
