#include "common/render/renderstate.h"

#include <algorithm>

namespace nocturne::common {
namespace {

bool hasFlag(std::uint32_t flags, std::uint32_t flag) {
    return (flags & flag) != 0;
}

// A light level is 8.8 fixed point biased by one unit: unbias, then scale to 0..255.
SLighting splitLight(int raw_light) {
    constexpr int kBias = 0x100;
    constexpr int kFull = 0xff;
    const int alpha = (raw_light - kBias) >> 4;
    if (alpha <= kFull) {
        return {.alpha = alpha, .overflow = 0};
    }
    return {.alpha = kFull, .overflow = std::min(alpha - kBias, kFull)};
}

} // namespace

std::uint32_t effectiveRenderFlags(const SRenderStateInput &input) {
    std::uint32_t flags = input.render_flags;
    if (input.texture_opacity_present && hasFlag(flags, kRenderTextured)) {
        flags |= kRenderBlend | kRenderSourceAlpha;
    }
    if (hasFlag(flags, kRenderSourceAlpha)) {
        flags &= ~kRenderSolidAlpha;
    }
    return flags;
}

SPipelineState getPipelineState(const SRenderStateInput &input) {
    const std::uint32_t flags = effectiveRenderFlags(input);
    SPipelineState state;
    state.texture_enabled = hasFlag(flags, kRenderTextured);
    state.smooth_shading = hasFlag(flags, kRenderSmooth);
    state.fog_enabled = hasFlag(flags, kRenderSolidAlpha);
    // One condition sets ALPHABLENDENABLE, ALPHATESTENABLE and MODULATEALPHA together, so a draw
    // that does not blend keeps the texture's colour and none of its alpha.
    state.blend_enabled = hasFlag(flags, kRenderBlend);
    state.alpha_test_enabled = state.blend_enabled;
    state.modulate_texture_alpha = state.blend_enabled;
    state.source_blend =
        hasFlag(flags, kRenderSourceAlpha) ? EBlendFactor::SourceAlpha : EBlendFactor::One;
    // Premultiplied colour is already scaled by alpha, so the source factor does not repeat it.
    if (input.blend_mode == 0) {
        state.destination_blend = EBlendFactor::InverseSourceAlpha;
        state.source_blend = input.premultiply ? EBlendFactor::SourceAlpha : state.source_blend;
    } else {
        state.destination_blend = EBlendFactor::One;
        state.source_blend = input.premultiply ? EBlendFactor::One : state.source_blend;
    }
    // Write without test seeds the buffer and test without write sorts transparency, so either
    // bit enables depth, and only the test bit makes the compare more than ALWAYS.
    state.depth_test_enabled = hasFlag(flags, kRenderDepthTest | kRenderDepthWrite);
    state.depth_write_enabled = hasFlag(flags, kRenderDepthWrite);
    state.depth_function =
        hasFlag(flags, kRenderDepthTest) ? EDepthFunction::LessEqual : EDepthFunction::Always;
    state.min_filter = input.bilinear ? ETextureFilter::Linear : ETextureFilter::Nearest;
    state.mag_filter = state.min_filter;
    state.mip_filter = input.mipmapped ? EMipFilter::Linear : EMipFilter::None;
    return state;
}

SLighting getDrawLighting(std::uint32_t render_flags, int current_lighting) {
    if (!hasFlag(render_flags, kRenderLighting)) {
        return {};
    }
    return splitLight(current_lighting);
}

std::optional<SLighting> getVertexLighting(std::uint32_t render_flags, int vertex_red) {
    if (!hasFlag(render_flags, kRenderSmooth)) {
        return std::nullopt;
    }
    if (hasFlag(render_flags, kRenderVertexColor)) {
        return SLighting{};
    }
    return splitLight(vertex_red);
}

} // namespace nocturne::common
