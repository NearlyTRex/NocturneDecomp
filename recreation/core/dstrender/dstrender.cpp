#include "core/dstrender/dstrender.h"

#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/pixel16.h"
#include "engine/texture/currenttexture.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {
namespace {

using engine::SRowSpan;

std::uint16_t *getDepthRow(engine::IScreenDevice &screen, int scanline_y, int left_x) {
    return static_cast<std::uint16_t *>(
               screen.getScreenRows()[static_cast<std::size_t>(scanline_y)]) +
           left_x;
}

std::uint32_t getReciprocal(const engine::C2d &two_d, int count) {
    return two_d.getReciprocalLookupTable()[static_cast<std::size_t>(count) + 1];
}

} // namespace

// The original's loop ran while its byte offset was at most twice the count, one pixel past the
// row's end.
// nocedit 0x004907e7
void renderTexturedAlphaMMXScanline(const engine::SSoftwareEdge &left_edge,
                                    const engine::SSoftwareEdge &right_edge, int scanline_y,
                                    engine::IScreenDevice &screen, const engine::C2d &two_d,
                                    const engine::SCurrentTexture &texture) {
    const SRowSpan span = engine::getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    std::uint16_t *row = getDepthRow(screen, scanline_y, span.left_x);
    const std::uint32_t reciprocal = getReciprocal(two_d, span.count);
    const engine::SSoftwareEdge &lo = *span.lo;
    const engine::SSoftwareEdge &hi = *span.hi;
    const int u_step = engine::getStep(lo.u_current, hi.u_current, reciprocal);
    const int v_step = engine::getStep(lo.v_current, hi.v_current, reciprocal);
    const int depth_step = engine::getStep(lo.depth_current, hi.depth_current, reciprocal);
    const std::span<const std::uint8_t> coverage =
        texture.opacity.empty() ? texture.data : texture.opacity;
    int u = lo.u_current;
    int v = lo.v_current;
    int depth = lo.depth_current;
    for (int x = 0; x <= span.count; ++x) {
        // Unsigned, so a depth stepped below zero is behind everything.
        if (std::bit_cast<std::uint32_t>(depth) < row[x] &&
            coverage[engine::getTexelIndex(static_cast<std::uint32_t>(u),
                                           static_cast<std::uint32_t>(v), texture)] != 0) {
            row[x] = static_cast<std::uint16_t>(depth);
        }
        u = common::wrappingAdd(u, u_step);
        v = common::wrappingAdd(v, v_step);
        depth = common::wrappingAdd(depth, depth_step);
    }
}

namespace {

// The fog's weight at a level, all fog at kFullFog: the original's table g_LightmapData, a level
// to an entry, 255 and up all fog.
constexpr int kFullFog = 0x3fc0;
constexpr unsigned kTopFogLevel = 255;
constexpr int kFogWeightStep = 0x40;
// The fog's colour is weighed at 10 bits, and each channel's sum kept to 12 before rounding.
constexpr unsigned kFogColorShift = 6;
constexpr unsigned kRoundingShift = 4;
constexpr std::uint32_t kChannel = 0xff;
constexpr unsigned kChannelBits = 8;
constexpr unsigned kPixelBits = 32;
// Each pair's two dither offsets, by the screen row's evenness, in 16ths of a level.
struct SDither {
    int first = 0;
    int second = 0;
};
constexpr SDither kEvenRows{.first = 0, .second = 8};
constexpr SDither kOddRows{.first = 4, .second = 12};
constexpr SDither kEvenRows16{.first = 0, .second = 0x40};
constexpr SDither kOddRows16{.first = 0x20, .second = 0x60};

using SPixelPair = std::array<std::uint32_t, 2>;

[[nodiscard]] int getFogWeight(unsigned level) {
    return static_cast<int>(std::min(level, kTopFogLevel)) * kFogWeightStep;
}

// The high half of the signed product, as MMX's PMULHW takes it.
[[nodiscard]] int multiplyHigh(int first, int second) {
    return (int{static_cast<std::int16_t>(first)} * int{static_cast<std::int16_t>(second)}) >> 16;
}

[[nodiscard]] std::uint32_t getChannel(std::uint32_t pixel, unsigned shift) {
    return (pixel >> shift) & kChannel;
}

// The backdrop pixel times the light's colour, toward the fog's colour by the weight. The
// product's low 16 bits are taken as signed, as MMX's PMULLW leaves them.
[[nodiscard]] std::uint32_t blendPixel(std::uint32_t backdrop, std::uint32_t light_color,
                                       int weight, std::uint32_t fog_color, int dither) {
    std::uint32_t pixel = 0;
    for (unsigned shift = 0; shift < kPixelBits; shift += kChannelBits) {
        const auto lit =
            static_cast<int>(getChannel(backdrop, shift) * getChannel(light_color, shift));
        const auto fog = static_cast<int>(getChannel(fog_color, shift) << kFogColorShift);
        const auto sum = static_cast<std::uint16_t>(multiplyHigh(lit, weight ^ kFullFog) +
                                                    multiplyHigh(fog, weight) + dither);
        pixel |= std::min<std::uint32_t>(sum >> kRoundingShift, kChannel) << shift;
    }
    return pixel;
}

// Each channel's mean, rounded down.
[[nodiscard]] std::uint32_t averageColors(std::uint32_t first, std::uint32_t second) {
    std::uint32_t color = 0;
    for (unsigned shift = 0; shift < kPixelBits; shift += kChannelBits) {
        color |= ((getChannel(first, shift) + getChannel(second, shift)) >> 1U) << shift;
    }
    return color;
}

// The pair from the pixel, each with its own light and fog.
[[nodiscard]] SPixelPair blendPerPixelPair(std::span<const std::uint32_t> backdrop,
                                           std::span<const std::uint8_t> light,
                                           std::span<const std::uint8_t> fog, std::size_t pixel,
                                           const SLightmapLook &look, SDither dither) {
    const auto blend = [&](std::size_t at, int offset) {
        return blendPixel(backdrop[at], look.palette[light[at]],
                          getFogWeight(fog[at] + (light[at] >> 1U)), look.fog_color, offset);
    };
    return {blend(pixel, dither.first), blend(pixel + 1, dither.second)};
}

// The pair, the display's pixel pair, from its light and the next's, the light the mean of the
// row's and the row's below when there is one below; the fog takes half the next's.
[[nodiscard]] SPixelPair blendSharedPair(std::span<const std::uint32_t> backdrop,
                                         std::span<const std::uint8_t> light,
                                         std::span<const std::uint8_t> light_below,
                                         std::span<const std::uint8_t> fog, std::size_t pair,
                                         const SLightmapLook &look, SDither dither) {
    const auto level = [&](std::size_t at) -> unsigned {
        return light_below.empty() ? light[at] : (light[at] + light_below[at]) >> 1U;
    };
    const unsigned here = level(pair);
    const unsigned next = level(pair + 1);
    const std::uint32_t color = look.palette[here];
    const int weight = getFogWeight(fog[pair] + (next >> 1U));
    return {blendPixel(backdrop[pair * 2], color, weight, look.fog_color, dither.first),
            blendPixel(backdrop[(pair * 2) + 1], averageColors(color, look.palette[next]), weight,
                       look.fog_color, dither.second)};
}

void store(std::span<std::uint32_t> output, std::size_t pixel, const SPixelPair &pair) {
    output[pixel] = pair[0];
    output[pixel + 1] = pair[1];
}

void store(std::span<std::uint16_t> output, std::size_t pixel, const SPixelPair &pair,
           const engine::SColorMasks &masks) {
    output[pixel] = engine::packPixel16(pair[0], masks);
    output[pixel + 1] = engine::packPixel16(pair[1], masks);
}

// The display rows the blur reads, 320 wide.
constexpr std::size_t kBlurStride = 320;
// Each neighbour's weight: the centre's 4, an edge's 2, a corner's 1, 16 in all.
constexpr std::array<std::array<unsigned, 3>, 3> kBlurWeights{{{1, 2, 1}, {2, 4, 2}, {1, 2, 1}}};
constexpr unsigned kBlurShift = 4;
// The weights are halved and each byte raised 7 bits for MMX's signed multiply, the sum of the
// two high halves then lowered 6.
constexpr int kFullAlpha = 0xffff;
constexpr int kAlphaByteShift = 7;
constexpr int kAlphaSumShift = 6;
constexpr int kTopLevel = 0xff;

} // namespace

// nocedit 0x004926e1
void blendLightmapPerPxU32toU32BB12Px2MMX(std::span<std::uint32_t> output,
                                          std::span<const std::uint32_t> backdrop,
                                          std::span<const std::uint8_t> light,
                                          std::span<const std::uint8_t> fog,
                                          const SLightmapLook &look) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel, blendPerPixelPair(backdrop, light, fog, pixel, look, kEvenRows));
    }
}

// nocedit 0x00492bd5
void blendLightmapPerPxU64toU32AmbientPx2MMX(std::span<std::uint32_t> output,
                                             std::span<const std::uint32_t> backdrop,
                                             std::span<const std::uint8_t> light,
                                             std::span<const std::uint8_t> fog,
                                             const SLightmapLook &look) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel, blendPerPixelPair(backdrop, light, fog, pixel, look, kOddRows));
    }
}

// nocedit 0x004917bc
void blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(std::span<std::uint32_t> output,
                                                   std::span<const std::uint32_t> backdrop,
                                                   std::span<const std::uint8_t> light,
                                                   std::span<const std::uint8_t> fog,
                                                   const SLightmapLook &look) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel, blendSharedPair(backdrop, light, {}, fog, pixel / 2, look, kEvenRows));
    }
}

// nocedit 0x00491c9a
void blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(std::span<std::uint32_t> output,
                                                       std::span<const std::uint32_t> backdrop,
                                                       std::span<const std::uint8_t> light,
                                                       std::span<const std::uint8_t> light_below,
                                                       std::span<const std::uint8_t> fog,
                                                       const SLightmapLook &look) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel,
              blendSharedPair(backdrop, light, light_below, fog, pixel / 2, look, kOddRows));
    }
}

// nocedit 0x00493860
void blendLightmapPerPxU32toU16pBB12Px2MMX(std::span<std::uint16_t> output,
                                           std::span<const std::uint32_t> backdrop,
                                           std::span<const std::uint8_t> light,
                                           std::span<const std::uint8_t> fog,
                                           const SLightmapLook &look,
                                           const engine::SColorMasks &masks) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel, blendPerPixelPair(backdrop, light, fog, pixel, look, kEvenRows),
              masks);
    }
}

// nocedit 0x00493dc4
void blendLightmapPerPxU64toU16pAmbientPx2MMX(std::span<std::uint16_t> output,
                                              std::span<const std::uint32_t> backdrop,
                                              std::span<const std::uint8_t> light,
                                              std::span<const std::uint8_t> fog,
                                              const SLightmapLook &look,
                                              const engine::SColorMasks &masks) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel, blendPerPixelPair(backdrop, light, fog, pixel, look, kOddRows), masks);
    }
}

// nocedit 0x00492f03
void blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(std::span<std::uint16_t> output,
                                                   std::span<const std::uint32_t> backdrop,
                                                   std::span<const std::uint8_t> light,
                                                   std::span<const std::uint8_t> fog,
                                                   const SLightmapLook &look,
                                                   const engine::SColorMasks &masks) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel,
              blendSharedPair(backdrop, light, {}, fog, pixel / 2, look, kEvenRows16), masks);
    }
}

// nocedit 0x00493450
void blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(std::span<std::uint16_t> output,
                                                    std::span<const std::uint32_t> backdrop,
                                                    std::span<const std::uint8_t> light,
                                                    std::span<const std::uint8_t> light_below,
                                                    std::span<const std::uint8_t> fog,
                                                    const SLightmapLook &look,
                                                    const engine::SColorMasks &masks) {
    for (std::size_t pixel = 0; pixel < output.size(); pixel += 2) {
        store(output, pixel,
              blendSharedPair(backdrop, light, light_below, fog, pixel / 2, look, kOddRows16),
              masks);
    }
}

// The original also blurred the row's first and last pixels, reading one before the buffer and
// one after it; the caller clears both.
// nocedit 0x00492042
void verticalBlur3TapMMXStride320(std::span<std::uint8_t> output,
                                  std::span<const std::uint8_t> rows, std::size_t row,
                                  std::size_t count) {
    for (std::size_t x = 1; x + 1 < count; ++x) {
        unsigned sum = 0;
        for (std::size_t dy = 0; dy < kBlurWeights.size(); ++dy) {
            for (std::size_t dx = 0; dx < kBlurWeights[dy].size(); ++dx) {
                sum += kBlurWeights[dy][dx] * rows[((row + dy - 1) * kBlurStride) + x + dx - 1];
            }
        }
        output[x] = static_cast<std::uint8_t>(sum >> kBlurShift);
    }
}

// nocedit 0x00492e8a
void alphaBlendPixelsMMX(std::span<std::uint8_t> output, std::span<const std::uint8_t> first,
                         std::span<const std::uint8_t> second, int alpha) {
    const int second_weight = alpha >> 1;
    const int first_weight = (kFullAlpha - alpha) >> 1;
    for (std::size_t at = 0; at < output.size(); ++at) {
        const int sum = multiplyHigh(first[at] << kAlphaByteShift, first_weight) +
                        multiplyHigh(second[at] << kAlphaByteShift, second_weight);
        output[at] = static_cast<std::uint8_t>(std::min(sum >> kAlphaSumShift, kTopLevel));
    }
}

} // namespace nocturne::core
