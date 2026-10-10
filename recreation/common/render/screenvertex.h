#pragma once

#include "common/render/renderstate.h"

#include <cstdint>
#include <span>

namespace nocturne::common {

// A projected vertex as the engine submits it.
struct SVertexInput {
    // 16.16 pixels.
    int screen_x = 0;
    int screen_y = 0;
    // Eye-space depth.
    int transformed_z = 0;
    // 8.24.
    int u = 0;
    int v = 0;
    // 8.8.
    int r = 0;
    int g = 0;
    int b = 0;
    int a = 0;
};

// What every vertex of a draw shares.
struct SVertexContext {
    // Already through effectiveRenderFlags.
    std::uint32_t render_flags = 0;
    // Numerator of the reciprocal w the draw submits with.
    float rhw_scale = 1.0F;
    // Above 480 lines the engine submits in the 640x480 hold buffer's space, stretched to the
    // target by these; both 1 otherwise.
    float screen_scale_x = 1.0F;
    float screen_scale_y = 1.0F;
    // 0..255; the alpha of a draw without per-vertex alpha.
    int current_alpha = 0xff;
    // Indexes the palette for a flat untextured draw; a smooth one indexes by the vertex's u.
    int palette_index = 0;
    // 256 RGB triples; empty when no untextured draw needs it, and then black.
    std::span<const std::uint8_t> palette;
    bool premultiply = false;
    int blend_mode = 0;
    // The draw's light level; a smooth-shaded draw overrides it per vertex.
    SLighting light;
    // Reciprocal depth, which spends its precision near the camera, instead of linear.
    bool w_buffer = false;
    // Normalises depth against the draw distance the engine chose.
    float lod_scale = 1.0F;
};

struct SScreenVertex {
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
    float rhw = 0.0F;
    // 0xAARRGGBB.
    std::uint32_t diffuse = 0;
    // 0xAARRGGBB: alpha is the fog factor, RGB the light level's overflow.
    std::uint32_t specular = 0;
    float u = 0.0F;
    float v = 0.0F;

    bool operator==(const SScreenVertex &) const = default;
};

// buildTLVertex: the screen vertex a draw submits.
[[nodiscard]] SScreenVertex convertVertex(const SVertexContext &context, const SVertexInput &input);
// Depth normalised to 0..1, linear in eye space or on the reciprocal curve.
[[nodiscard]] float getVertexDepth(const SVertexContext &context, float eye_z);

} // namespace nocturne::common
