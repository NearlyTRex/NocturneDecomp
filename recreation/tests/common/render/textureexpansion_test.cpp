#include "common/render/textureexpansion.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>

namespace nocturne::common {
namespace {

// Several blacks, including index 0, and one entry a unit off black that must not key out.
std::array<std::uint8_t, 768> makePalette() {
    std::array<std::uint8_t, 768> palette{};
    for (std::size_t i = 0; i < 256; ++i) {
        palette.at(i * 3) = static_cast<std::uint8_t>(i * 3);
        palette.at((i * 3) + 1) = static_cast<std::uint8_t>(i * 5);
        palette.at((i * 3) + 2) = static_cast<std::uint8_t>(i * 11);
    }
    for (const std::size_t black : {0U, 7U, 128U, 255U}) {
        palette.at(black * 3) = 0;
        palette.at((black * 3) + 1) = 0;
        palette.at((black * 3) + 2) = 0;
    }
    constexpr std::size_t kNearBlack = std::size_t{9} * 3;
    palette.at(kNearBlack) = 0;
    palette.at(kNearBlack + 1) = 0;
    palette.at(kNearBlack + 2) = 1;
    return palette;
}

// The expansion loops of expandTextureAndBuildMips, keeping their shape.
std::vector<std::uint32_t> oracle(const std::vector<std::uint8_t> &indices,
                                  const std::array<std::uint8_t, 768> &palette,
                                  const std::vector<std::uint8_t> &opacity) {
    std::array<std::uint32_t, 256> packed{};
    for (std::size_t i = 0; i < 256; ++i) {
        packed.at(i) = std::uint32_t{palette.at((i * 3) + 2)} |
                       (std::uint32_t{palette.at((i * 3) + 1)} << 8U) |
                       (std::uint32_t{palette.at(i * 3)} << 16U);
    }
    std::vector<std::uint32_t> out;
    for (std::size_t i = 0; i < indices.size(); ++i) {
        const std::uint32_t colour = packed.at(indices.at(i));
        if (opacity.empty()) {
            out.push_back(colour != 0 ? colour | 0xff000000U : 0);
        } else {
            out.push_back(colour | (std::uint32_t{opacity.at(i)} << 24U));
        }
    }
    return out;
}

std::vector<std::uint32_t> expand(const std::vector<std::uint8_t> &indices,
                                  const std::array<std::uint8_t, 768> &palette,
                                  const std::vector<std::uint8_t> &opacity) {
    std::vector<std::uint32_t> out(indices.size());
    expandTexture(indices, packTexturePalette(palette), opacity, out);
    return out;
}

TEST(TextureExpansion, MatchesTheEngine) {
    const std::array<std::uint8_t, 768> palette = makePalette();
    std::vector<std::uint8_t> indices;
    std::vector<std::uint8_t> opacity;
    constexpr std::size_t kTexels = std::size_t{64} * 64;
    for (std::size_t i = 0; i < kTexels; ++i) {
        indices.push_back(static_cast<std::uint8_t>((i * 37) & 0xffU));
        opacity.push_back(static_cast<std::uint8_t>((i * 13) & 0xffU));
    }
    EXPECT_EQ(expand(indices, palette, {}), oracle(indices, palette, {}));
    EXPECT_EQ(expand(indices, palette, opacity), oracle(indices, palette, opacity));
}

TEST(TextureExpansion, ColourKeyIsAColourNotAnIndex) {
    const std::vector<std::uint32_t> out = expand({0, 7, 128, 255, 9, 1, 200}, makePalette(), {});
    EXPECT_EQ(out.at(0), 0U);
    EXPECT_EQ(out.at(1), 0U);
    EXPECT_EQ(out.at(2), 0U);
    EXPECT_EQ(out.at(3), 0U);
    EXPECT_EQ(out.at(4), 0xff000001U);
    EXPECT_EQ(out.at(5) >> 24U, 0xffU);
    EXPECT_EQ(out.at(6) >> 24U, 0xffU);
}

TEST(TextureExpansion, OpacityPlaneReplacesTheColourKey) {
    const std::vector<std::uint32_t> out = expand({0, 7, 1}, makePalette(), {0xff, 0x40, 0x00});
    EXPECT_EQ(out.at(0), 0xff000000U);
    EXPECT_EQ(out.at(1), 0x40000000U);
    EXPECT_EQ(out.at(2) >> 24U, 0U);
    EXPECT_NE(out.at(2), 0U);
}

TEST(TextureExpansion, OpacityIsPerTexelNotPerPaletteEntry) {
    const std::vector<std::uint32_t> out = expand({40, 40, 40}, makePalette(), {0x10, 0x80, 0xf0});
    EXPECT_EQ(out.at(0) >> 24U, 0x10U);
    EXPECT_EQ(out.at(1) >> 24U, 0x80U);
    EXPECT_EQ(out.at(2) >> 24U, 0xf0U);
    EXPECT_EQ(out.at(0) & 0xffffffU, out.at(2) & 0xffffffU);
}

TEST(TextureExpansion, PackedPaletteIsRgbHighToLow) {
    std::array<std::uint8_t, 768> palette{};
    palette.at(0) = 0x12;
    palette.at(1) = 0x34;
    palette.at(2) = 0x56;
    palette.at(3) = 0xff;
    const std::array<std::uint32_t, 256> packed = packTexturePalette(palette);
    EXPECT_EQ(packed.at(0), 0x00123456U);
    EXPECT_EQ(packed.at(1), 0x00ff0000U);
}

TEST(TextureExpansion, RejectsShortPlanes) {
    const std::array<std::uint32_t, 256> palette = packTexturePalette(makePalette());
    const std::vector<std::uint8_t> indices = {1, 2, 3};
    std::vector<std::uint32_t> short_out(2);
    std::vector<std::uint32_t> out(3);
    const std::vector<std::uint8_t> short_opacity = {1, 2};
    EXPECT_THROW(expandTexture(indices, palette, {}, short_out), std::invalid_argument);
    EXPECT_THROW(expandTexture(indices, palette, short_opacity, out), std::invalid_argument);
}

} // namespace
} // namespace nocturne::common
