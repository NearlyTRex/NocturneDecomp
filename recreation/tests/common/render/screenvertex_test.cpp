#include "common/render/screenvertex.h"

#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::common {
namespace {

std::array<std::uint8_t, 768> makePalette() {
    std::array<std::uint8_t, 768> palette{};
    for (std::size_t i = 0; i < 256; ++i) {
        palette.at(i * 3) = static_cast<std::uint8_t>(i);
        palette.at((i * 3) + 1) = static_cast<std::uint8_t>(255 - i);
        palette.at((i * 3) + 2) = static_cast<std::uint8_t>(i * 7);
    }
    return palette;
}

const std::array<std::uint8_t, 768> kPalette = makePalette();

SVertexContext baseContext(std::uint32_t flags) {
    return {.render_flags = flags,
            .rhw_scale = 65536.0F,
            .screen_scale_x = 1.0F,
            .screen_scale_y = 1.0F,
            .current_alpha = 0x80,
            .palette_index = 0x21,
            .palette = &kPalette,
            .premultiply = false,
            .blend_mode = 0,
            .light = {.alpha = 0xc0, .overflow = 0},
            .w_buffer = false,
            .lod_scale = 1.0F / 4096.0F};
}

// buildTLVertex transliterated in its own order with its own expressions, independently of the
// code under test.
SScreenVertex oracle(const SVertexContext &ctx, const SVertexInput &in) {
    SScreenVertex o;
    const std::uint32_t flags = ctx.render_flags;
    o.x = static_cast<float>(in.screen_x) * 1.5258789e-05F * ctx.screen_scale_x;
    o.y = static_cast<float>(in.screen_y) * 1.5258789e-05F * ctx.screen_scale_y;
    auto local = static_cast<float>(in.transformed_z);
    o.rhw = ctx.rhw_scale / local;
    const int fog = (flags & 8U) != 0 ? 0xff - (in.a >> 8) : 0xff;
    int light_alpha = ctx.light.alpha;
    int light_overflow = ctx.light.overflow;
    if ((flags & 4U) != 0) {
        light_overflow = 0;
        light_alpha = 0xff;
        if ((flags & 0x200U) == 0) {
            light_alpha = (in.r - 0x100) >> 4;
            if (light_alpha > 0xff) {
                light_overflow = std::min(light_alpha - 0x100, 0xff);
                light_alpha = 0xff;
            }
        }
    }
    const auto r_bits = static_cast<std::uint32_t>(in.r & -256) << 8U;
    const auto g_bits = static_cast<std::uint32_t>(in.g & -256);
    const auto b_bits = static_cast<std::uint32_t>(in.b) >> 8U;
    if ((flags & 1U) == 0) {
        if ((flags & 0x200U) == 0) {
            const std::uint32_t index =
                (flags & 4U) == 0 ? static_cast<std::uint32_t>(ctx.palette_index & 0xff)
                                  : ((static_cast<std::uint32_t>(in.u) & 0xff0000U) >> 16U);
            const std::size_t p = static_cast<std::size_t>(index) * 3;
            o.diffuse = ((std::uint32_t{kPalette.at(p)} | 0xffffff00U) << 16U) |
                        (std::uint32_t{kPalette.at(p + 1)} << 8U) |
                        std::uint32_t{kPalette.at(p + 2)};
        } else {
            o.diffuse = r_bits | g_bits | b_bits | 0xff000000U;
        }
        o.specular = static_cast<std::uint32_t>(fog) << 24U;
    } else {
        const auto ov = static_cast<std::uint32_t>(light_overflow);
        o.specular = (((static_cast<std::uint32_t>(fog) << 16U) | ov) << 8U) | (ov << 16U) | ov;
        const int alpha = (flags & 0x100U) == 0 ? ctx.current_alpha : (in.a >> 8);
        if ((flags & 0x200U) != 0) {
            o.diffuse = r_bits | g_bits | b_bits | (static_cast<std::uint32_t>(alpha) << 24U);
        } else if (!ctx.premultiply || ctx.blend_mode != 1) {
            const auto la = static_cast<std::uint32_t>(light_alpha);
            o.diffuse =
                (((static_cast<std::uint32_t>(alpha) << 16U) | la) << 8U) | (la << 16U) | la;
        } else {
            const auto la = static_cast<std::uint32_t>(alpha * light_alpha / 0x100);
            o.diffuse = ((la | 0xffff0000U) << 8U) | (la << 16U) | la;
        }
    }
    if (ctx.w_buffer) {
        local = std::clamp(local * ctx.lod_scale, 1.0F, 256.0F);
        o.z = 1.0F - (1.0F / local);
    } else {
        o.z = std::min(local * ctx.lod_scale, 1.0F);
    }
    o.u = static_cast<float>(in.u) * 5.9604645e-08F;
    o.v = static_cast<float>(in.v) * 5.9604645e-08F;
    return o;
}

void expectMatchesOracle(const SVertexContext &ctx, std::span<const SVertexInput> inputs) {
    for (std::size_t i = 0; i < inputs.size(); ++i) {
        SCOPED_TRACE("flags=" + std::to_string(ctx.render_flags) + " vertex=" + std::to_string(i) +
                     " w=" + std::to_string(static_cast<int>(ctx.w_buffer)) +
                     " premultiply=" + std::to_string(static_cast<int>(ctx.premultiply)) +
                     " blend_mode=" + std::to_string(ctx.blend_mode));
        EXPECT_EQ(convertVertex(ctx, inputs[i]), oracle(ctx, inputs[i]));
    }
}

TEST(ScreenVertex, MatchesBuildTlVertexAcrossEveryPackingPath) {
    // Ordinary values, channels at both ends of their range, and depths either side of the clamps.
    const std::array<SVertexInput, 4> inputs = {{
        {0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0x1400000, 0xF0000, 4096, 0x00800000, 0x00400000, 0x1000, 0x2000, 0x3000, 0x8000},
        {-0x10000, 0x2A0000, 1, 0x7F000000, 0x00000001, 0xFF00, 0xFF00, 0xFF00, 0xFF00},
        {0x28000000, -0x50000, 100000, 0x00ABCDEF, 0x00FEDCBA, 0x10FF, 0x0100, 0x08A0, 0x0180},
    }};
    constexpr std::array<std::uint32_t, 5> kBits = {
        kRenderTextured, kRenderSmooth, kRenderSolidAlpha, kRenderVertexAlpha, kRenderVertexColor};
    for (std::uint32_t mask = 0; mask < 32; ++mask) {
        std::uint32_t flags = 0;
        for (std::size_t bit = 0; bit < kBits.size(); ++bit) {
            flags |= (mask & (1U << bit)) != 0 ? kBits.at(bit) : 0;
        }
        // Every combination of w-buffer, premultiply and blend mode.
        for (std::uint32_t variant = 0; variant < 8; ++variant) {
            SVertexContext ctx = baseContext(flags);
            ctx.w_buffer = (variant & 1U) != 0;
            ctx.premultiply = (variant & 2U) != 0;
            ctx.blend_mode = static_cast<int>((variant >> 2U) & 1U);
            expectMatchesOracle(ctx, inputs);
        }
    }
}

// Worked out from the formats rather than read from the source, which an oracle would share.
TEST(ScreenVertex, FixedPointScalesComeFromTheFormats) {
    const SVertexContext ctx = baseContext(0);
    SVertexInput in{.screen_x = 320 << 16,
                    .screen_y = 240 << 16,
                    .transformed_z = 1,
                    .u = 1 << 24,
                    .v = 1 << 23,
                    .r = 0,
                    .g = 0,
                    .b = 0,
                    .a = 0};
    const SScreenVertex out = convertVertex(ctx, in);
    EXPECT_EQ(out.x, 320.0F);
    EXPECT_EQ(out.y, 240.0F);
    EXPECT_EQ(out.u, 1.0F);
    EXPECT_EQ(out.v, 0.5F);
    in.screen_x = (320 << 16) | 0x8000;
    EXPECT_EQ(convertVertex(ctx, in).x, 320.5F);
}

TEST(ScreenVertex, HoldBufferScaleStretchesTo640x480Space) {
    SVertexContext ctx = baseContext(0);
    ctx.screen_scale_x = 1280.0F / 640.0F;
    ctx.screen_scale_y = 960.0F / 480.0F;
    const SVertexInput in{.screen_x = 320 << 16,
                          .screen_y = 240 << 16,
                          .transformed_z = 1,
                          .u = 0,
                          .v = 0,
                          .r = 0,
                          .g = 0,
                          .b = 0,
                          .a = 0};
    const SScreenVertex out = convertVertex(ctx, in);
    EXPECT_EQ(out.x, 640.0F);
    EXPECT_EQ(out.y, 480.0F);
}

TEST(ScreenVertex, UntexturedWithoutAPaletteIsBlack) {
    SVertexContext ctx = baseContext(0);
    ctx.palette = nullptr;
    EXPECT_EQ(convertVertex(ctx, {}).diffuse, 0xff000000U);
}

void expectNormalisedAndMonotonic(bool w_buffer) {
    SCOPED_TRACE("w=" + std::to_string(static_cast<int>(w_buffer)));
    SVertexContext ctx = baseContext(0);
    ctx.w_buffer = w_buffer;
    float previous = -1.0F;
    for (int eye = 1; eye <= 8192; eye += 7) {
        const float z = getVertexDepth(ctx, static_cast<float>(eye));
        EXPECT_GE(z, 0.0F);
        EXPECT_LE(z, 1.0F);
        EXPECT_GE(z, previous);
        previous = z;
    }
}

TEST(ScreenVertex, DepthCurvesAreNormalisedAndMonotonic) {
    expectNormalisedAndMonotonic(false);
    expectNormalisedAndMonotonic(true);
}

// Reciprocal depth stops one clamp short of the far plane, so the most distant geometry still
// passes LESS-OR-EQUAL against a buffer cleared to 1.
TEST(ScreenVertex, FarDepthSaturatesPerCurve) {
    SVertexContext ctx = baseContext(0);
    EXPECT_EQ(getVertexDepth(ctx, 1.0e9F), 1.0F);
    ctx.w_buffer = true;
    EXPECT_EQ(getVertexDepth(ctx, 1.0e9F), 1.0F - (1.0F / 256.0F));
}

TEST(ScreenVertex, ReciprocalDepthStartsAtZeroWithinTheFirstUnit) {
    SVertexContext ctx = baseContext(0);
    EXPECT_GT(getVertexDepth(ctx, 100.0F), 0.0F);
    ctx.w_buffer = true;
    EXPECT_EQ(getVertexDepth(ctx, 100.0F), 0.0F);
}

} // namespace
} // namespace nocturne::common
