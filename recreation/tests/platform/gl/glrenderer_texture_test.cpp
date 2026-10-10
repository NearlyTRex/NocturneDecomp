#include "platform/gl/glrenderer.h"
#include "platform/mrgltexturebasic.h"
#include "tests/platform/gl/glrenderer_fixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::platform::gl {
namespace {

std::array<std::uint8_t, 768> greyPalette() {
    std::array<std::uint8_t, 768> palette{};
    for (std::size_t i = 0; i < 256; ++i) {
        palette.at(i * 3) = static_cast<std::uint8_t>(i);
        palette.at((i * 3) + 1) = static_cast<std::uint8_t>(i);
        palette.at((i * 3) + 2) = static_cast<std::uint8_t>(i);
    }
    return palette;
}

SMRGLTextureBasic named(std::string_view name) {
    SMRGLTextureBasic texture;
    std::ranges::copy(name, texture.texture_name.begin());
    return texture;
}

std::span<const std::uint32_t> uploadedTexels(const CGlRecorder &gl, std::size_t count) {
    return {static_cast<const std::uint32_t *>(gl.getCalls("TexImage2D").back().pointer), count};
}

TEST(CGlRenderer, ColourTableDescribesASixteenBitFrame) {
    SRendererFixture f;
    f.open(640, 480, 16);
    std::array<std::uint8_t, 768> palette{};
    palette.at(3) = 8;
    palette.at(4) = 4;
    palette.at(5) = 8;
    palette.at(6) = 0xff;
    palette.at(7) = 0xff;
    palette.at(8) = 0xff;
    std::array<std::uint16_t, 256> table{};
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), table.data()), 1);
    const SEngineState &e = f.engine;
    EXPECT_EQ((std::array{e.red_bit_position, e.red_scale_factor, e.red_dither_shift}),
              (std::array{11, 8, 3}));
    EXPECT_EQ((std::array{e.green_bit_position, e.green_scale_factor, e.green_dither_shift}),
              (std::array{5, 4, 2}));
    EXPECT_EQ((std::array{e.blue_bit_position, e.blue_scale_factor, e.blue_dither_shift}),
              (std::array{0, 8, 3}));
    EXPECT_EQ(table[0], 0);
    EXPECT_EQ(table[1], (1U << 11U) | (1U << 5U) | 1U);
    EXPECT_EQ(table[2], 0xffff);
}

// The table's entries are 16 bits, so a 32-bit frame's colour keeps its low half.
TEST(CGlRenderer, ColourTableDescribesAThirtyTwoBitFrame) {
    SRendererFixture f;
    f.open(640, 480, 32);
    std::array<std::uint8_t, 768> palette{};
    palette.at(0) = 0x12;
    palette.at(1) = 0x34;
    palette.at(2) = 0x56;
    std::array<std::uint16_t, 256> table{};
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), table.data()), 1);
    EXPECT_EQ(f.engine.red_bit_position, 16);
    EXPECT_EQ(f.engine.green_bit_position, 8);
    EXPECT_EQ(f.engine.blue_bit_position, 0);
    EXPECT_EQ(f.engine.red_scale_factor, 1);
    EXPECT_EQ(f.engine.blue_dither_shift, 0);
    EXPECT_EQ(table[0], 0x3456);
}

TEST(CGlRenderer, ColourTableWithoutADeviceAssumesThirtyTwoBits) {
    SRendererFixture f;
    f.gl.link_fails = true;
    CExternalRendererBridge bridge = f.engine.makeBridge();
    ASSERT_EQ(f.renderer.init(&bridge), 0);
    std::array<std::uint8_t, 768> palette{};
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), nullptr), 1);
    EXPECT_EQ(f.engine.red_bit_position, 16);
}

TEST(CGlRenderer, ColourTableNeedsABridgeAndAPalette) {
    SRendererFixture f;
    ASSERT_EQ(f.renderer.init(nullptr), 1);
    std::array<std::uint8_t, 768> palette{};
    std::array<std::uint16_t, 256> table{};
    table.fill(7);
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), table.data()), 1);
    EXPECT_EQ(table[0], 7);
    f.open();
    EXPECT_EQ(f.renderer.setColorTable16(nullptr, table.data()), 1);
    EXPECT_EQ(table[0], 7);
    EXPECT_EQ(f.engine.red_bit_position, -1);
}

TEST(CGlRenderer, ABridgeMemberTheEngineDidNotShareStaysUnwritten) {
    SRendererFixture f;
    CExternalRendererBridge bridge = f.engine.makeBridge();
    bridge.green_scale_factor = nullptr;
    ASSERT_EQ(f.renderer.init(&bridge), 1);
    std::array<std::uint8_t, 768> palette{};
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), nullptr), 1);
    EXPECT_EQ(f.engine.green_scale_factor, -1);
    EXPECT_EQ(f.engine.green_bit_position, 8);
}

// A bridge given once is kept across an init that passes none.
TEST(CGlRenderer, InitWithoutABridgeKeepsTheLastOne) {
    SRendererFixture f;
    f.open();
    ASSERT_EQ(f.renderer.init(nullptr), 1);
    std::array<std::uint8_t, 768> palette{};
    EXPECT_EQ(f.renderer.setColorTable16(palette.data(), nullptr), 1);
    EXPECT_EQ(f.engine.red_bit_position, 11);
}

TEST(CGlRenderer, ATextureIsExpandedAndUploadedOnce) {
    SRendererFixture f;
    f.open();
    f.engine.texture_dimension = 2;
    auto palette = greyPalette();
    std::array<std::uint8_t, 4> texels = {0, 1, 2, 3};
    SMRGLTextureBasic texture = named("WALL.RAW");
    f.gl.clear();
    EXPECT_EQ(f.renderer.selectTexture(&texture, 64, texels.data(), palette.data(), nullptr), 1);
    ASSERT_EQ(f.gl.count("TexImage2D"), 1U);
    EXPECT_EQ(f.gl.getCalls("TexImage2D")[0].args[3], 2);
    // Black is transparent without an opacity plane.
    EXPECT_THAT(uploadedTexels(f.gl, 4),
                ::testing::ElementsAre(0x00000000U, 0xff010101U, 0xff020202U, 0xff030303U));
    EXPECT_EQ(f.renderer.selectTexture(&texture, 64, texels.data(), palette.data(), nullptr), 1);
    EXPECT_EQ(f.gl.count("TexImage2D"), 1U);
}

TEST(CGlRenderer, UpdateTextureUploadsAgainUnderTheSameName) {
    SRendererFixture f;
    f.open();
    f.engine.texture_dimension = 2;
    auto palette = greyPalette();
    std::array<std::uint8_t, 4> texels = {4, 4, 4, 4};
    std::array<std::uint8_t, 4> opacity = {0x10, 0x20, 0x30, 0x40};
    SMRGLTextureBasic texture = named("WALL.RAW");
    ASSERT_EQ(f.renderer.selectTexture(&texture, 0, texels.data(), palette.data(), nullptr), 1);
    f.gl.clear();
    EXPECT_EQ(f.renderer.updateTexture(&texture, 0, texels.data(), palette.data(), opacity.data()),
              1);
    ASSERT_EQ(f.gl.count("TexImage2D"), 1U);
    EXPECT_THAT(uploadedTexels(f.gl, 4),
                ::testing::ElementsAre(0x10040404U, 0x20040404U, 0x30040404U, 0x40040404U));
}

// All sixteen characters of a name count, with no terminator after them.
TEST(CGlRenderer, ANameMayFillAllSixteenCharacters) {
    SRendererFixture f;
    f.open();
    f.engine.texture_dimension = 1;
    auto palette = greyPalette();
    std::array<std::uint8_t, 1> texel = {1};
    SMRGLTextureBasic first = named("ABCDEFGHIJKLMNOP");
    SMRGLTextureBasic second = named("ABCDEFGHIJKLMNOQ");
    f.gl.clear();
    ASSERT_EQ(f.renderer.selectTexture(&first, 0, texel.data(), palette.data(), nullptr), 1);
    ASSERT_EQ(f.renderer.selectTexture(&second, 0, texel.data(), palette.data(), nullptr), 1);
    EXPECT_EQ(f.gl.count("TexImage2D"), 2U);
}

TEST(CGlRenderer, NothingIsUploadedWithoutEverythingATextureNeeds) {
    SRendererFixture f;
    auto palette = greyPalette();
    std::array<std::uint8_t, 4> texels{};
    SMRGLTextureBasic texture = named("WALL.RAW");
    EXPECT_EQ(f.renderer.selectTexture(&texture, 0, texels.data(), palette.data(), nullptr), 1);
    f.open();
    f.engine.texture_dimension = 2;
    f.gl.clear();
    EXPECT_EQ(f.renderer.selectTexture(nullptr, 0, texels.data(), palette.data(), nullptr), 1);
    EXPECT_EQ(f.renderer.selectTexture(&texture, 0, nullptr, palette.data(), nullptr), 1);
    EXPECT_EQ(f.renderer.selectTexture(&texture, 0, texels.data(), nullptr, nullptr), 1);
    f.engine.texture_dimension = 0;
    EXPECT_EQ(f.renderer.selectTexture(&texture, 0, texels.data(), palette.data(), nullptr), 1);
    f.engine.texture_dimension = CGlRenderer::kMaxTextureDimension + 1;
    EXPECT_EQ(f.renderer.selectTexture(&texture, 0, texels.data(), palette.data(), nullptr), 1);
    EXPECT_EQ(f.gl.count("TexImage2D"), 0U);
}

} // namespace
} // namespace nocturne::platform::gl
