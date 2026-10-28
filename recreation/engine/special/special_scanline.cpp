#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/pixel16.h"
#include "engine/special/scanlinemode.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <tuple>
#include <utility>

namespace nocturne::engine {
namespace {

// Four 16-bit lanes of an MMX register, lowest first: blue, green, red and the fourth byte.
using Words = std::array<std::uint16_t, 4>;

// What the vertex-colour flag draws an untextured pixel in.
constexpr std::uint32_t kSpecialColor = 0xffffff;
constexpr int kOpaqueOpacity = 0xff;
// Past this a pixel's alpha is full.
constexpr int kFullAlpha = 0xff00;
constexpr int kTopLevel = 0xff;
constexpr std::uint32_t kBlack = 0x100;
constexpr std::uint32_t kBrightest = 0xfff;

Words unpackBytes(std::uint32_t pixel) {
    Words words{};
    for (std::size_t lane = 0; lane < words.size(); ++lane) {
        words[lane] = static_cast<std::uint16_t>((pixel >> (lane * 8U)) & 0xffU);
    }
    return words;
}

// PACKUSWB: each lane read as signed and held to a byte.
std::uint32_t packBytes(const Words &words) {
    std::uint32_t pixel = 0;
    for (std::size_t lane = 0; lane < words.size(); ++lane) {
        const int level = std::clamp<int>(static_cast<std::int16_t>(words[lane]), 0, kTopLevel);
        pixel |= static_cast<std::uint32_t>(level) << (lane * 8U);
    }
    return pixel;
}

template <typename TOperation>
Words eachLane(const Words &a, const Words &b, TOperation operation) {
    Words result{};
    for (std::size_t lane = 0; lane < result.size(); ++lane) {
        result[lane] = static_cast<std::uint16_t>(operation(a[lane], b[lane]));
    }
    return result;
}

Words shiftLeft(const Words &words, unsigned shift) {
    return eachLane(words, words, [shift](std::uint32_t a, std::uint32_t) { return a << shift; });
}

Words shiftRight(const Words &words, unsigned shift) {
    return eachLane(words, words, [shift](std::uint32_t a, std::uint32_t) { return a >> shift; });
}

// PMULLW.
Words multiplyLow(const Words &a, const Words &b) {
    return eachLane(a, b, [](std::uint32_t x, std::uint32_t y) { return x * y; });
}

// PMULHW: the signed product's top 16 bits.
Words multiplyHigh(const Words &a, const Words &b) {
    return eachLane(a, b, [](std::uint16_t x, std::uint16_t y) {
        return static_cast<std::uint32_t>(
            (int{static_cast<std::int16_t>(x)} * int{static_cast<std::int16_t>(y)}) >> 16);
    });
}

// PADDUSW.
Words addSaturating(const Words &a, const Words &b) {
    return eachLane(a, b,
                    [](std::uint32_t x, std::uint32_t y) { return std::min(x + y, 0xffffU); });
}

// PADDW.
Words addWrapping(const Words &a, const Words &b) {
    return eachLane(a, b, [](std::uint32_t x, std::uint32_t y) { return x + y; });
}

Words exclusiveOr(const Words &a, const Words &b) {
    return eachLane(a, b, [](std::uint32_t x, std::uint32_t y) { return x ^ y; });
}

// PADDW, then a lane that is not above zero as a signed word goes to zero.
Words stepColor(const Words &color, const Words &delta) {
    return eachLane(color, delta, [](std::uint32_t x, std::uint32_t y) {
        const auto lane = static_cast<std::uint16_t>(x + y);
        return static_cast<std::int16_t>(lane) > 0 ? lane : 0U;
    });
}

// The alpha table's entry: the level in each colour lane, the fourth zero. The original read
// past its 256 entries for a level outside them.
Words getAlphaEntry(int level) {
    const auto clamped = static_cast<std::uint16_t>(std::clamp(level, 0, kTopLevel));
    return {clamped, clamped, clamped, 0};
}

// A texel's colour scaled by the lighting, each lane held to a byte: PSLLW 4, then PMULHW by
// the colour accumulator over 8, then PACKUSWB.
std::uint32_t lightPixel(std::uint32_t pixel, const Words &color) {
    return packBytes(multiplyHigh(shiftLeft(unpackBytes(pixel), 4), shiftRight(color, 3)));
}

// The source over the destination at the alpha table level, or added to it with blend mode 1.
std::uint32_t blendPixel(std::uint32_t source, const Words &dest, int level, int blend_mode) {
    const Words alpha = getAlphaEntry(level);
    const Words weighted = multiplyLow(unpackBytes(source), alpha);
    const Words under = blend_mode == 0
                            ? multiplyLow(dest, exclusiveOr(alpha, getAlphaEntry(kTopLevel)))
                            : shiftLeft(dest, 8);
    return packBytes(shiftRight(addSaturating(weighted, under), 8));
}

// The original faulted on a zero depth or a quotient past 32 bits; this gives zero for the first
// and keeps the low 32 bits of the second.
int divideOverDepth(int coordinate, int depth) {
    if (depth == 0) {
        return 0;
    }
    return static_cast<int>(
        static_cast<std::uint32_t>((std::int64_t{coordinate} * (std::int64_t{1} << 24U)) / depth));
}

struct SPixels32 {
    std::uint32_t *row;

    [[nodiscard]] std::uint32_t read(int x) const {
        return row[x];
    }
    void write(int x, std::uint32_t pixel) const {
        row[x] = pixel;
    }
};

struct SPixels16 {
    std::uint16_t *row;
    const SColorMasks *masks;

    [[nodiscard]] std::uint32_t read(int x) const {
        return expandPixel16(row[x], *masks);
    }
    void write(int x, std::uint32_t pixel) const {
        row[x] = packPixel16(pixel, *masks);
    }
};

// Everything one row of the perspective scanline reads.
struct SScanlineInputs {
    const SScanlineMode &mode;
    const SCurrentTexture &texture;
    std::span<const std::uint32_t, 256> palette;
    std::uint32_t reciprocal;
    int alpha_value;
    int blend_mode;
    std::uint32_t active_render_color;
};

// The colour accumulator across the row and its step, by the first of vertex colour, smooth
// shading and lighting the flags ask for; plain full colour otherwise.
std::pair<Words, Words> getColorRamp(const SRowSpan &span, const SScanlineInputs &in) {
    const std::uint32_t flags = in.mode.render_flags;
    const auto ramp = [&in](std::uint32_t from, std::uint32_t to) {
        return std::pair{static_cast<std::uint16_t>(from & 0xffffU),
                         static_cast<std::uint16_t>(
                             static_cast<std::uint32_t>(getStep(
                                 static_cast<int>(from), static_cast<int>(to), in.reciprocal)) &
                             0xffffU)};
    };
    if ((flags & common::kRenderVertexColor) != 0) {
        const auto half = [](int level) { return static_cast<std::uint32_t>(level) >> 1U; };
        const auto [red, red_step] = ramp(half(span.lo->red_current), half(span.hi->red_current));
        const auto [green, green_step] =
            ramp(half(span.lo->green_current), half(span.hi->green_current));
        const auto [blue, blue_step] =
            ramp(half(span.lo->blue_current), half(span.hi->blue_current));
        return {{blue, green, red, 0}, {blue_step, green_step, red_step, 0}};
    }
    if ((flags & common::kRenderSmooth) != 0) {
        const auto level = [](int red) {
            return std::min(static_cast<std::uint32_t>(red) - kBlack, kBrightest) << 3U;
        };
        const auto [shade, shade_step] =
            ramp(level(span.lo->red_current), level(span.hi->red_current));
        return {{shade, shade, shade, 0}, {shade_step, shade_step, shade_step, 0}};
    }
    if ((flags & common::kRenderLighting) != 0) {
        const std::uint32_t light =
            std::min((static_cast<std::uint32_t>(in.mode.lighting_value) - kBlack) >> 4U,
                     static_cast<std::uint32_t>(kTopLevel));
        return {shiftLeft(getAlphaEntry(static_cast<int>(light)), 7), {}};
    }
    return {shiftLeft(getAlphaEntry(kTopLevel), 7), {}};
}

// The values stepped across the row, and what each steps by.
struct SRowWalk {
    int u = 0;
    int v = 0;
    int depth = 0;
    int alpha = 0;
    Words color{};
    int u_step = 0;
    int v_step = 0;
    int depth_step = 0;
    int alpha_step = 0;
    Words color_step{};

    void step() {
        u = common::wrappingAdd(u, u_step);
        v = common::wrappingAdd(v, v_step);
        depth = common::wrappingAdd(depth, depth_step);
        alpha = common::wrappingAdd(alpha, alpha_step);
        color = stepColor(color, color_step);
    }
};

// The walk from the edge further left. With an opacity map or blending, the alpha is the
// polygon's unless vertex alpha is asked for; otherwise it is none unless solid alpha is.
SRowWalk startRow(const SRowSpan &span, const SScanlineInputs &in) {
    const SSoftwareEdge &lo = *span.lo;
    const SSoftwareEdge &hi = *span.hi;
    const std::uint32_t flags = in.mode.render_flags;
    SRowWalk walk{.u = lo.u_current, .v = lo.v_current, .depth = lo.depth_current};
    int u_end = hi.u_current;
    int v_end = hi.v_current;
    if (in.mode.vertex_preprocess_mode == SScanlineMode::kPerspectiveTexture) {
        walk.u = divideOverDepth(lo.u_current, lo.depth_current);
        walk.v = divideOverDepth(lo.v_current, lo.depth_current);
        u_end = divideOverDepth(hi.u_current, hi.depth_current);
        v_end = divideOverDepth(hi.v_current, hi.depth_current);
    }
    walk.u_step = getStep(walk.u, u_end, in.reciprocal);
    walk.v_step = getStep(walk.v, v_end, in.reciprocal);
    walk.depth_step = getStep(lo.depth_current, hi.depth_current, in.reciprocal);
    std::tie(walk.color, walk.color_step) = getColorRamp(span, in);
    const bool blending = !in.texture.opacity.empty() || (flags & common::kRenderBlend) != 0;
    if (blending && (flags & common::kRenderVertexAlpha) == 0) {
        walk.alpha = in.alpha_value << 8;
    } else if (blending || (flags & common::kRenderSolidAlpha) != 0) {
        walk.alpha = lo.alpha_current;
        walk.alpha_step = getStep(lo.alpha_current, hi.alpha_current, in.reciprocal);
    }
    return walk;
}

// A texel through its opacity: a clear one is a hole, a solid one at full alpha draws as it
// is, and the rest blend over the screen at opacity times alpha.
std::optional<std::uint32_t> shadeOpacityTexel(std::size_t texel, std::uint32_t dest,
                                               const SRowWalk &walk, const SScanlineInputs &in) {
    const int opacity = in.texture.opacity[texel];
    if (opacity == 0) {
        return std::nullopt;
    }
    const std::uint32_t lit = lightPixel(in.palette[in.texture.data[texel]], walk.color);
    if (walk.alpha > kFullAlpha && opacity >= kOpaqueOpacity && in.blend_mode == 0) {
        return lit;
    }
    // IMUL keeps the low 32 bits, and SHR shifts them unsigned.
    const std::uint32_t coverage =
        static_cast<std::uint32_t>(opacity) * static_cast<std::uint32_t>(walk.alpha);
    return blendPixel(lit, unpackBytes(dest), static_cast<int>(coverage >> 16U), in.blend_mode);
}

// A texel blended at the row's alpha, over black unless source alpha asks for the screen. A
// texel whose palette entry is black is a hole.
std::optional<std::uint32_t> shadeBlendedTexel(std::size_t texel, std::uint32_t dest,
                                               const SRowWalk &walk, const SScanlineInputs &in) {
    const std::uint32_t source = in.palette[in.texture.data[texel]];
    if (source == 0) {
        return std::nullopt;
    }
    const Words under =
        (in.mode.render_flags & common::kRenderSourceAlpha) != 0 ? unpackBytes(dest) : Words{};
    return blendPixel(lightPixel(source, walk.color), under, walk.alpha >> 8, in.blend_mode);
}

// The texel, white for vertex colour, or the active colour, mixed toward the solid colour by
// the alpha for solid alpha. The mix adds without saturating, as PADDW does.
std::uint32_t shadeSolid(std::size_t texel, const SRowWalk &walk, const SScanlineInputs &in) {
    const std::uint32_t flags = in.mode.render_flags;
    std::uint32_t source = in.active_render_color;
    if ((flags & common::kRenderTextured) != 0) {
        source = in.palette[in.texture.data[texel]];
    } else if ((flags & common::kRenderVertexColor) != 0) {
        source = kSpecialColor;
    }
    const std::uint32_t lit = lightPixel(source, walk.color);
    if ((flags & common::kRenderSolidAlpha) == 0) {
        return lit;
    }
    const Words level = getAlphaEntry(walk.alpha >> 8);
    const Words mixed =
        addWrapping(multiplyLow(unpackBytes(lit), exclusiveOr(level, getAlphaEntry(kTopLevel))),
                    multiplyLow(unpackBytes(in.mode.solid_color), level));
    return packBytes(shiftRight(mixed, 8));
}

// The depth write flag alone fills the depth buffer and draws nothing.
void fillDepths(std::uint32_t *depths, const SRowSpan &span, const SScanlineInputs &in) {
    int depth = span.lo->depth_current;
    const int depth_step = getStep(span.lo->depth_current, span.hi->depth_current, in.reciprocal);
    for (int x = 0; x < span.count; ++x) {
        depths[x] = static_cast<std::uint32_t>(depth);
        depth = common::wrappingAdd(depth, depth_step);
    }
}

template <typename TPixels>
void drawPerspectiveRow(TPixels pixels, std::uint32_t *depths, const SRowSpan &span,
                        const SScanlineInputs &in) {
    const std::uint32_t flags = in.mode.render_flags;
    if (flags == common::kRenderDepthWrite) {
        fillDepths(depths, span, in);
        return;
    }
    SRowWalk walk = startRow(span, in);
    const bool opacity_map = !in.texture.opacity.empty();
    const bool blending = (flags & common::kRenderBlend) != 0;
    for (int x = 0; x < span.count; ++x, walk.step()) {
        if ((flags & common::kRenderDepthTest) != 0 &&
            walk.depth < std::bit_cast<std::int32_t>(depths[x])) {
            continue;
        }
        const std::size_t texel = getTexelIndex(static_cast<std::uint32_t>(walk.u),
                                                static_cast<std::uint32_t>(walk.v), in.texture);
        std::optional<std::uint32_t> drawn;
        if (opacity_map) {
            drawn = shadeOpacityTexel(texel, pixels.read(x), walk, in);
        } else if (blending) {
            drawn = shadeBlendedTexel(texel, pixels.read(x), walk, in);
        } else {
            drawn = shadeSolid(texel, walk, in);
        }
        if (!drawn) {
            continue;
        }
        pixels.write(x, *drawn);
        if ((flags & common::kRenderDepthWrite) != 0) {
            depths[x] = static_cast<std::uint32_t>(walk.depth);
        }
    }
}

SScanlineInputs getScanlineInputs(const SRowSpan &span, const SScanlineMode &mode,
                                  IScreenDevice &screen, const C2d &two_d, const C3d &three_d,
                                  const SCurrentTexture &texture) {
    return {.mode = mode,
            .texture = texture,
            .palette = screen.getHardwarePalette32(),
            .reciprocal =
                two_d.getReciprocalLookupTable()[static_cast<std::size_t>(span.count) + 1],
            .alpha_value = three_d.getCurrentAlphaValue(),
            .blend_mode = three_d.getBlendMode(),
            .active_render_color = static_cast<std::uint32_t>(two_d.getActiveRenderColor())};
}

} // namespace

// The original kept the row's running values in globals nothing else reads.
// nocedit 0x005b4031
void CSpecial::renderMMXPerspectiveScanline32(const SSoftwareEdge &left_vertex,
                                              const SSoftwareEdge &right_vertex, int scanline_y,
                                              const SScanlineMode &mode) {
    const SRowSpan span = getRowSpan(left_vertex, right_vertex);
    if (span.count <= 0) {
        return;
    }
    const auto row = static_cast<std::size_t>(scanline_y);
    drawPerspectiveRow(
        SPixels32{.row = static_cast<std::uint32_t *>(screen_.getScreenRows()[row]) + span.left_x},
        screen_.getZBufferRows()[row] + span.left_x, span,
        getScanlineInputs(span, mode, screen_, two_d_, three_d_, current_texture_));
}

// The 32-bit scanline with each screen pixel spread from and packed back to the mode's 16 bits.
// nocedit 0x005b4823
void CSpecial::renderMMXPerspectiveScanline16(const SSoftwareEdge &left_vertex,
                                              const SSoftwareEdge &right_vertex, int scanline_y,
                                              const SScanlineMode &mode) {
    const SRowSpan span = getRowSpan(left_vertex, right_vertex);
    if (span.count <= 0) {
        return;
    }
    const auto row = static_cast<std::size_t>(scanline_y);
    drawPerspectiveRow(
        SPixels16{.row = static_cast<std::uint16_t *>(screen_.getScreenRows()[row]) + span.left_x,
                  .masks = &screen_.getColorMasks()},
        screen_.getZBufferRows()[row] + span.left_x, span,
        getScanlineInputs(span, mode, screen_, two_d_, three_d_, current_texture_));
}

} // namespace nocturne::engine
