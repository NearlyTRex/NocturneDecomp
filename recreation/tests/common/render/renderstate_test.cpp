#include "common/render/renderstate.h"

#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <string>

namespace nocturne::common {
namespace {

// Direct3D 7 render-state numbers, as the DX7 renderer's applyRenderState sets them.
constexpr int kD3dZEnable = 7;
constexpr int kD3dShadeMode = 9;
constexpr int kD3dZWriteEnable = 14;
constexpr int kD3dAlphaTestEnable = 15;
constexpr int kD3dSourceBlend = 19;
constexpr int kD3dDestinationBlend = 20;
constexpr int kD3dTextureMapBlend = 21;
constexpr int kD3dZFunction = 23;
constexpr int kD3dAlphaBlendEnable = 27;
constexpr int kD3dFogEnable = 28;

struct SOracleState {
    std::uint32_t flags = 0;
    bool textured = false;
    std::array<int, 32> state{};
};

// applyRenderState transliterated in its own order with its raw D3D values, independently of the
// code under test, so a slip in either shows as a mismatch rather than agreement with itself.
SOracleState oracle(std::uint32_t render_flags, int blend_mode, bool opacity, bool premultiply) {
    SOracleState o;
    std::uint32_t flags = render_flags;
    if (opacity && (flags & 1U) != 0) {
        flags |= 0x22U;
    }
    o.state.at(kD3dSourceBlend) = (flags & 0x20U) != 0 ? 5 : 2;
    if ((flags & 0x20U) != 0) {
        flags &= 0xfffffff7U;
    }
    if (blend_mode == 0) {
        o.state.at(kD3dDestinationBlend) = 6;
        o.state.at(kD3dSourceBlend) = premultiply ? 5 : o.state.at(kD3dSourceBlend);
    } else {
        o.state.at(kD3dDestinationBlend) = 2;
        o.state.at(kD3dSourceBlend) = premultiply ? 2 : o.state.at(kD3dSourceBlend);
    }
    o.textured = (flags & 1U) != 0;
    const bool blend = (flags & 2U) != 0;
    o.state.at(kD3dAlphaBlendEnable) = blend ? 1 : 0;
    o.state.at(kD3dAlphaTestEnable) = blend ? 1 : 0;
    o.state.at(kD3dTextureMapBlend) = blend ? 4 : 2;
    o.state.at(kD3dShadeMode) = (flags & 4U) != 0 ? 2 : 1;
    o.state.at(kD3dFogEnable) = (flags & 8U) != 0 ? 1 : 0;
    if ((flags & 0xc0U) == 0) {
        o.state.at(kD3dZEnable) = 0;
        o.state.at(kD3dZWriteEnable) = 0;
        o.state.at(kD3dZFunction) = 8;
    } else if ((flags & 0x40U) == 0) {
        o.state.at(kD3dZEnable) = 1;
        o.state.at(kD3dZWriteEnable) = 1;
        o.state.at(kD3dZFunction) = 8;
    } else {
        o.state.at(kD3dZEnable) = 1;
        o.state.at(kD3dZWriteEnable) = (flags & 0x80U) != 0 ? 1 : 0;
        o.state.at(kD3dZFunction) = 4;
    }
    o.flags = flags;
    return o;
}

EBlendFactor blendFromD3d(int d3d) {
    switch (d3d) {
    case 2:
        return EBlendFactor::One;
    case 5:
        return EBlendFactor::SourceAlpha;
    default:
        return EBlendFactor::InverseSourceAlpha;
    }
}

// The oracle's D3D states in the pipeline's terms, with the filters the input leaves off.
SPipelineState toPipelineState(const SOracleState &o) {
    SPipelineState state;
    state.texture_enabled = o.textured;
    state.blend_enabled = o.state.at(kD3dAlphaBlendEnable) == 1;
    state.alpha_test_enabled = o.state.at(kD3dAlphaTestEnable) == 1;
    state.modulate_texture_alpha = o.state.at(kD3dTextureMapBlend) == 4;
    state.smooth_shading = o.state.at(kD3dShadeMode) == 2;
    state.fog_enabled = o.state.at(kD3dFogEnable) == 1;
    state.depth_test_enabled = o.state.at(kD3dZEnable) == 1;
    state.depth_write_enabled = o.state.at(kD3dZWriteEnable) == 1;
    state.depth_function =
        o.state.at(kD3dZFunction) == 4 ? EDepthFunction::LessEqual : EDepthFunction::Always;
    state.source_blend = blendFromD3d(o.state.at(kD3dSourceBlend));
    state.destination_blend = blendFromD3d(o.state.at(kD3dDestinationBlend));
    return state;
}

void expectMatchesOracle(std::uint32_t flags, int blend_mode, bool opacity, bool premultiply) {
    SCOPED_TRACE("flags=" + std::to_string(flags) + " blend_mode=" + std::to_string(blend_mode) +
                 " opacity=" + std::to_string(static_cast<int>(opacity)) +
                 " premultiply=" + std::to_string(static_cast<int>(premultiply)));
    const SRenderStateInput input{.render_flags = flags,
                                  .blend_mode = blend_mode,
                                  .texture_opacity_present = opacity,
                                  .premultiply = premultiply,
                                  .bilinear = false,
                                  .mipmapped = false};
    const SOracleState want = oracle(flags, blend_mode, opacity, premultiply);
    EXPECT_EQ(effectiveRenderFlags(input), want.flags);
    EXPECT_EQ(getPipelineState(input), toPipelineState(want));
}

TEST(RenderState, MatchesTheDx7RenderStatesForEveryInput) {
    for (std::uint32_t flags = 0; flags < 0x100; ++flags) {
        for (const int blend_mode : {0, 1}) {
            for (const bool opacity : {false, true}) {
                expectMatchesOracle(flags, blend_mode, opacity, false);
                expectMatchesOracle(flags, blend_mode, opacity, true);
            }
        }
    }
}

SRenderStateInput inputWith(std::uint32_t flags, bool opacity) {
    return {.render_flags = flags,
            .blend_mode = 0,
            .texture_opacity_present = opacity,
            .premultiply = false,
            .bilinear = false,
            .mipmapped = false};
}

TEST(RenderState, OpacityTableMakesATexturedDrawBlendBySourceAlpha) {
    EXPECT_EQ(effectiveRenderFlags(inputWith(kRenderTextured, true)),
              kRenderTextured | kRenderBlend | kRenderSourceAlpha);
    EXPECT_EQ(effectiveRenderFlags(inputWith(kRenderSmooth, true)), kRenderSmooth);
}

TEST(RenderState, SourceAlphaDropsTheFogFactor) {
    EXPECT_EQ(effectiveRenderFlags(inputWith(kRenderSourceAlpha | kRenderSolidAlpha, false)),
              kRenderSourceAlpha);
    EXPECT_FALSE(
        getPipelineState(inputWith(kRenderTextured | kRenderSolidAlpha, true)).fog_enabled);
}

TEST(RenderState, DepthBitsAreIndependent) {
    const SPipelineState none = getPipelineState(inputWith(0, false));
    EXPECT_FALSE(none.depth_test_enabled);
    EXPECT_EQ(none.depth_function, EDepthFunction::Always);
    // Seeds depth without testing.
    const SPipelineState seed = getPipelineState(inputWith(kRenderDepthWrite, false));
    EXPECT_TRUE(seed.depth_test_enabled);
    EXPECT_TRUE(seed.depth_write_enabled);
    EXPECT_EQ(seed.depth_function, EDepthFunction::Always);
    // Sorts against the world without occluding itself.
    const SPipelineState sort = getPipelineState(inputWith(kRenderDepthTest, false));
    EXPECT_TRUE(sort.depth_test_enabled);
    EXPECT_FALSE(sort.depth_write_enabled);
    EXPECT_EQ(sort.depth_function, EDepthFunction::LessEqual);
}

TEST(RenderState, FiltersFollowTheQualitySettings) {
    SRenderStateInput input = inputWith(kRenderTextured, false);
    const SPipelineState plain = getPipelineState(input);
    EXPECT_EQ(plain.min_filter, ETextureFilter::Nearest);
    EXPECT_EQ(plain.mag_filter, ETextureFilter::Nearest);
    EXPECT_EQ(plain.mip_filter, EMipFilter::None);
    input.bilinear = true;
    input.mipmapped = true;
    const SPipelineState filtered = getPipelineState(input);
    EXPECT_EQ(filtered.min_filter, ETextureFilter::Linear);
    EXPECT_EQ(filtered.mag_filter, ETextureFilter::Linear);
    EXPECT_EQ(filtered.mip_filter, EMipFilter::Linear);
}

TEST(RenderState, PipelineStatesCompareByValue) {
    EXPECT_EQ(getPipelineState(inputWith(kRenderTextured, false)),
              getPipelineState(inputWith(kRenderTextured, false)));
    EXPECT_NE(getPipelineState(inputWith(kRenderTextured, false)),
              getPipelineState(inputWith(kRenderBlend, false)));
}

TEST(RenderState, UnlitDrawIsAtFullBrightness) {
    EXPECT_EQ(getDrawLighting(0, 0x1000), (SLighting{.alpha = 0xff, .overflow = 0}));
}

TEST(RenderState, LightLevelIsBiasedEightEight) {
    EXPECT_EQ(getDrawLighting(kRenderLighting, 0x100), (SLighting{.alpha = 0, .overflow = 0}));
    EXPECT_EQ(getDrawLighting(kRenderLighting, 0x1000), (SLighting{.alpha = 0xf0, .overflow = 0}));
    EXPECT_EQ(getDrawLighting(kRenderLighting, 0x1100), (SLighting{.alpha = 0xff, .overflow = 0}));
}

TEST(RenderState, LightPastFullBrightnessOverflowsAndSaturates) {
    EXPECT_EQ(getDrawLighting(kRenderLighting, 0x1200),
              (SLighting{.alpha = 0xff, .overflow = 0x10}));
    EXPECT_EQ(getDrawLighting(kRenderLighting, 0x7fff),
              (SLighting{.alpha = 0xff, .overflow = 0xff}));
}

TEST(RenderState, VertexLightingNeedsASmoothDraw) {
    EXPECT_FALSE(getVertexLighting(0, 0x1000).has_value());
    EXPECT_EQ(getVertexLighting(kRenderSmooth, 0x1000), (SLighting{.alpha = 0xf0, .overflow = 0}));
}

TEST(RenderState, VertexColourDrawIsAlreadyAtItsBrightness) {
    EXPECT_EQ(getVertexLighting(kRenderSmooth | kRenderVertexColor, 0x1000), SLighting{});
}

} // namespace
} // namespace nocturne::common
