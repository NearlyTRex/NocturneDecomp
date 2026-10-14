#include "engine/3d/3d.h"
#include "engine/pixelblend.h"
#include "engine/screendevice.h"
#include "engine/special/pixel16.h"
#include "engine/special/special.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::engine {
namespace {

// Outside additive blending, coverage from here up draws the source as it is, and coverage up
// to kInvisibleCoverage draws nothing.
constexpr std::uint32_t kOpaqueCoverage = 65000;
constexpr std::uint32_t kInvisibleCoverage = 0xff;
constexpr std::uint32_t kTopByte = 0xff000000;
constexpr int kMaxGlobalAlpha = 0xffff;

// A pixel's coverage is its own alpha times the global alpha's top byte. The original took a
// global alpha past 0xffff too, and indexed past its alpha table with it.
std::uint32_t getGlobalLevel(int global_alpha) {
    return static_cast<std::uint32_t>(std::clamp(global_alpha, 0, kMaxGlobalAlpha)) >> 8U;
}

// The three colour bytes mixed; the fourth comes out zero.
std::uint32_t blendPixel(std::uint32_t source, std::uint32_t dest, std::uint32_t alpha) {
    std::uint32_t out = 0;
    for (unsigned shift = 0; shift < 24U; shift += 8U) {
        out |= blendLevel((source >> shift) & kMaxLevel, (dest >> shift) & kMaxLevel, alpha)
               << shift;
    }
    return out;
}

// The three colour bytes added; the destination's fourth byte is kept.
std::uint32_t addPixel(std::uint32_t source, std::uint32_t dest, std::uint32_t alpha) {
    std::uint32_t out = dest & kTopByte;
    for (unsigned shift = 0; shift < 24U; shift += 8U) {
        out |= addLevel((source >> shift) & kMaxLevel, (dest >> shift) & kMaxLevel, alpha) << shift;
    }
    return out;
}

} // namespace

// The original drew one pixel of an empty row.
// nocedit 0x005b555c
void CSpecial::renderAlphaRow32(std::span<std::uint32_t> dest_pixels,
                                std::span<const std::uint8_t> src_indices,
                                std::span<const std::uint8_t> src_alpha, int global_alpha) {
    const std::uint32_t global_level = getGlobalLevel(global_alpha);
    const std::size_t count = std::min({dest_pixels.size(), src_indices.size(), src_alpha.size()});
    for (std::size_t i = 0; i < count; ++i) {
        if (const std::optional<std::uint32_t> pixel =
                getAlphaPixel(src_indices[i], src_alpha[i] * global_level, dest_pixels[i])) {
            dest_pixels[i] = *pixel;
        }
    }
}

// nocedit 0x005b55f7
void CSpecial::renderAlphaRow16(std::span<std::uint16_t> dest_pixels,
                                std::span<const std::uint8_t> src_indices,
                                std::span<const std::uint8_t> src_alpha, int global_alpha) {
    const SColorMasks &masks = screen_.getColorMasks();
    const std::uint32_t global_level = getGlobalLevel(global_alpha);
    const std::size_t count = std::min({dest_pixels.size(), src_indices.size(), src_alpha.size()});
    for (std::size_t i = 0; i < count; ++i) {
        if (const std::optional<std::uint32_t> pixel =
                getAlphaPixel(src_indices[i], src_alpha[i] * global_level,
                              expandPixel16(dest_pixels[i], masks))) {
            dest_pixels[i] = packPixel16(*pixel, masks);
        }
    }
}

// The 8-8-8 pixel an index leaves over dest, or nothing when it is too faint to draw.
std::optional<std::uint32_t> CSpecial::getAlphaPixel(std::uint8_t index, std::uint32_t coverage,
                                                     std::uint32_t dest) const {
    const std::uint32_t source = screen_.getHardwarePalette32()[index];
    if (three_d_.getBlendMode() == C3d::kAdditiveBlend) {
        return addPixel(source, dest, coverage >> 8U);
    }
    if (coverage >= kOpaqueCoverage) {
        return source;
    }
    if (coverage <= kInvisibleCoverage) {
        return std::nullopt;
    }
    return blendPixel(source, dest, coverage >> 8U);
}

} // namespace nocturne::engine
