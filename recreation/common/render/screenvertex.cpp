#include "common/render/screenvertex.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::common {
namespace {

constexpr float kScreenScale = 1.0F / 65536.0F;
constexpr float kTexcoordScale = 1.0F / 16777216.0F;
constexpr std::uint32_t kOpaque = 0xff000000U;

bool hasFlag(std::uint32_t flags, std::uint32_t flag) {
    return (flags & flag) != 0;
}

// The masks keep the engine's behaviour for a channel past its 8.8 range: the spare bits carry
// into the next field instead of being discarded.
std::uint32_t packChannels(int r, int g, int b) {
    return (static_cast<std::uint32_t>(r & static_cast<int>(0xffffff00)) << 8U) |
           static_cast<std::uint32_t>(g & static_cast<int>(0xffffff00)) |
           (static_cast<std::uint32_t>(b) >> 8U);
}

// A level repeated across R, G and B, unmasked as the engine writes it: a level past 0..255
// carries into its neighbours.
std::uint32_t packGrey(int level) {
    const auto value = static_cast<std::uint32_t>(level);
    return (value << 16U) | (value << 8U) | value;
}

std::uint32_t paletteColour(const SVertexContext &context, std::uint32_t index) {
    if (context.palette == nullptr) {
        return 0;
    }
    const std::size_t entry = static_cast<std::size_t>(index) * 3;
    return (std::uint32_t{context.palette->at(entry)} << 16U) |
           (std::uint32_t{context.palette->at(entry + 1)} << 8U) |
           std::uint32_t{context.palette->at(entry + 2)};
}

std::uint32_t untexturedDiffuse(const SVertexContext &context, const SVertexInput &input) {
    const std::uint32_t flags = context.render_flags;
    if (hasFlag(flags, kRenderVertexColor)) {
        return kOpaque | packChannels(input.r, input.g, input.b);
    }
    // Per vertex through u when smooth-shaded, per draw otherwise.
    const std::uint32_t index = hasFlag(flags, kRenderSmooth)
                                    ? ((static_cast<std::uint32_t>(input.u) >> 16U) & 0xffU)
                                    : static_cast<std::uint32_t>(context.palette_index & 0xff);
    return kOpaque | paletteColour(context, index);
}

std::uint32_t texturedDiffuse(const SVertexContext &context, const SVertexInput &input,
                              const SLighting &light) {
    const std::uint32_t flags = context.render_flags;
    const int alpha = hasFlag(flags, kRenderVertexAlpha) ? (input.a >> 8) : context.current_alpha;
    if (hasFlag(flags, kRenderVertexColor)) {
        return (static_cast<std::uint32_t>(alpha) << 24U) | packChannels(input.r, input.g, input.b);
    }
    // Adding premultiplied colour folds the alpha into the light level, so it is not applied
    // a second time as alpha.
    if (context.premultiply && context.blend_mode == 1) {
        return kOpaque | packGrey((alpha * light.alpha) / 0x100);
    }
    return (static_cast<std::uint32_t>(alpha) << 24U) | packGrey(light.alpha);
}

} // namespace

float getVertexDepth(const SVertexContext &context, float eye_z) {
    const float scaled = eye_z * context.lod_scale;
    if (context.w_buffer) {
        // Clamped so the reciprocal stays in 1/256..1 whatever the draw distance.
        constexpr float kNearest = 1.0F;
        constexpr float kFarthest = 256.0F;
        return 1.0F - (1.0F / std::clamp(scaled, kNearest, kFarthest));
    }
    // Only the far end clamps: what is behind the camera is already rejected, and clamping the
    // near end would flatten everything in front of it onto one plane.
    return std::min(scaled, 1.0F);
}

SScreenVertex convertVertex(const SVertexContext &context, const SVertexInput &input) {
    const std::uint32_t flags = context.render_flags;
    const auto eye_z = static_cast<float>(input.transformed_z);
    SScreenVertex out{
        .x = static_cast<float>(input.screen_x) * kScreenScale * context.screen_scale_x,
        .y = static_cast<float>(input.screen_y) * kScreenScale * context.screen_scale_y,
        .z = getVertexDepth(context, eye_z),
        .rhw = context.rhw_scale / eye_z,
        .diffuse = 0,
        .specular = 0,
        .u = static_cast<float>(input.u) * kTexcoordScale,
        .v = static_cast<float>(input.v) * kTexcoordScale,
    };
    // The fog factor rides in the specular alpha: 255 leaves the fragment alone, 0 is all fog.
    const int fog = hasFlag(flags, kRenderSolidAlpha) ? 0xff - (input.a >> 8) : 0xff;
    const std::uint32_t fog_bits = static_cast<std::uint32_t>(fog) << 24U;
    if (!hasFlag(flags, kRenderTextured)) {
        // Nothing modulates an untextured fragment, so the light's overflow has nowhere to go.
        out.diffuse = untexturedDiffuse(context, input);
        out.specular = fog_bits;
        return out;
    }
    const SLighting light = getVertexLighting(flags, input.r).value_or(context.light);
    out.specular = fog_bits | packGrey(light.overflow);
    out.diffuse = texturedDiffuse(context, input, light);
    return out;
}

} // namespace nocturne::common
