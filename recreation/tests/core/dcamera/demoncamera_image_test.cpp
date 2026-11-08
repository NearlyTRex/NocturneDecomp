#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "tests/mocks/engine/demonrendererfixture.h"
#include "tests/mocks/support/lzwstream.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <functional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Each;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::size_t kPlane = SCameraTables::kFogPlaneSize;
constexpr std::size_t kPlaneWidth = SCameraTables::kFogPlaneWidth;
constexpr std::size_t kImageWidth = 640;
constexpr std::size_t kImageHeight = 480;
constexpr std::size_t kTexture = 256;
constexpr int kFogDictionarySize = 0x10000;
constexpr int kFogValueBits = 6;
constexpr int kDensity = 0x10000;

// A palette black but for the entries given, each red, green, blue.
std::string palette(std::initializer_list<std::array<int, 4>> entries) {
    std::string colors(768, '\0');
    for (const auto &[index, red, green, blue] : entries) {
        const auto at = static_cast<std::size_t>(index) * 3;
        colors[at] = static_cast<char>(red);
        colors[at + 1] = static_cast<char>(green);
        colors[at + 2] = static_cast<char>(blue);
    }
    return colors;
}

// The 640 by 480 image, each pixel's palette index the function's.
std::string image(const std::function<int(std::size_t, std::size_t)> &index) {
    std::string pixels(kImageWidth * kImageHeight, '\0');
    for (std::size_t y = 0; y < kImageHeight; ++y) {
        for (std::size_t x = 0; x < kImageWidth; ++x) {
            pixels[(y * kImageWidth) + x] = static_cast<char>(index(x, y));
        }
    }
    return pixels;
}

// A .fog: its density grid, every byte 'g', then what follows it.
std::string fogFile(std::string_view after_grid) {
    return std::string(sizeof(SFogGrid::planes), 'g') + std::string(after_grid);
}

// The planes' values compressed as the original's .fog writer does.
std::string compressedPlanes(const std::vector<std::uint8_t> &values) {
    return support::compressLzw(values, kFogDictionarySize, kFogValueBits);
}

// A camera "cam" over a frame 640 wide, whose backdrop texture is in the art.
class CDemonCameraImageTest : public engine::CDemonRendererFixture {
protected:
    CDemonCameraImageTest() {
        givenFile("art\\BACKGND.RAW", std::string(kTexture * kTexture, '\0'));
        givenFile("art\\BACKGND.act", palette({}));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(hardware_palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(hardware_palette32_)));
        tables_.fog_grid.density_multiplier = kDensity;
        std::ranges::fill(tables_.fog_planes, 5);
    }

    // The palette, a flat image of index 1 and no fog.
    void givenFlatBackdrop(std::string_view colors) {
        givenFile("backdrop\\cam.ACT", std::string(colors));
        givenFile("backdrop\\cam.raw", image([](std::size_t, std::size_t) { return 1; }));
    }

    void givenFog(std::string_view after_grid) {
        givenFile("backdrop\\cam.ACT", palette({}));
        givenFile("backdrop\\cam.fog", fogFile(after_grid));
    }

    std::array<std::uint16_t, 256> hardware_palette16_{};
    std::array<std::uint32_t, 256> hardware_palette32_{};
    SCameraTables tables_;
    common::CWatcomRandom crt_;
    CDemonCamera camera_{{.tables = tables_,
                          .screen = screen_,
                          .special = special_,
                          .crt_random = crt_,
                          .renderer = demon_renderer_,
                          .dosio = dosio_}};
};

TEST_F(CDemonCameraImageTest, ANameWithoutAnExtensionIsFatal) {
    EXPECT_THAT(
        [this] { camera_.loadImage("cam"); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonCamera::loadImage - no extention")));
}

TEST_F(CDemonCameraImageTest, WithoutAPaletteNothingIsLoaded) {
    camera_.init(480);
    givenFile("backdrop\\cam.fog", fogFile("EFD"));
    givenFile("backdrop\\cam.raw", image([](std::size_t, std::size_t) { return 1; }));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(camera_.getFramebuffer(), Each(0U));
    EXPECT_EQ(tables_.fog_grid.planes[0][0][0], 0);
}

// Below 32 bits the colours are 8-8-8, red highest. At 480 lines each pixel is the image's.
TEST_F(CDemonCameraImageTest, ThePaletteMayBeWithTheArtAndAt480LinesTheImageIsCopied) {
    camera_.init(480);
    givenFile("art\\cam.ACT", palette({{1, 1, 2, 3}}));
    givenFile("art\\cam.raw", image([](std::size_t, std::size_t) { return 1; }));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(camera_.getFramebuffer(), Each(0x010203U));
}

TEST_F(CDemonCameraImageTest, AtFullDepthTheColoursGoWhereTheScreensChannelsAre) {
    ON_CALL(screen_, getBitsPerPixel()).WillByDefault(Return(32));
    channels_.red.bit_position = 0;
    channels_.green.bit_position = 8;
    channels_.blue.bit_position = 16;
    camera_.init(480);
    givenFlatBackdrop(palette({{1, 1, 2, 3}}));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(camera_.getFramebuffer(), Each(0x030201U));
}

// Each of the four loses its channels' two low bits.
TEST_F(CDemonCameraImageTest, At240LinesEachPixelAveragesFour) {
    camera_.init(240);
    givenFile(
        "backdrop\\cam.ACT",
        palette({{0, 4, 4, 4}, {1, 8, 8, 8}, {2, 12, 12, 12}, {3, 16, 16, 16}, {4, 7, 7, 7}}));
    givenFile("backdrop\\cam.raw", image([](std::size_t x, std::size_t y) {
                  return x < 2 && y < 2 ? static_cast<int>((y * 2) + x) : 4;
              }));
    camera_.loadImage("cam.raw");
    const std::span<const std::uint32_t> frame = camera_.getFramebuffer();
    EXPECT_EQ(frame[0], 0x0a0a0aU);
    EXPECT_EQ(frame[1], 0x040404U);
}

// Between 240 and 480 lines a flat image stays as bright as it is.
TEST_F(CDemonCameraImageTest, BetweenTheFootprintsCornersAreBlendedAtTheirOwnBrightness) {
    camera_.init(48);
    givenFlatBackdrop(palette({{1, 100, 150, 200}}));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(camera_.getFramebuffer(), Each(0x6496c8U));
}

// Every 2.5 columns and 1.875 rows of the image make a texel.
TEST_F(CDemonCameraImageTest, TheImageShrunkAndItsPaletteBecomeTheBackdropTexture) {
    startRenderer();
    camera_.init(48);
    givenFile("backdrop\\cam.ACT", palette({{1, 1, 2, 3}}));
    givenFile("backdrop\\cam.raw", image([](std::size_t x, std::size_t y) {
                  return static_cast<int>((x + (y * 3)) & 0xffU);
              }));
    EXPECT_CALL(renderer_, updateTexture(&tables_.backdrop_texture, 256, _, _, nullptr))
        .Times(2)
        .WillRepeatedly(Return(1));
    camera_.loadImage("cam.raw");
    const std::span<std::uint8_t> texels = texture_.data;
    EXPECT_EQ(texels[1], 2);
    EXPECT_EQ(texels[kTexture + 1], 5);
    EXPECT_EQ(texels[(2 * kTexture) + 2], 14);
    EXPECT_EQ(texture_.palette[3], 1);
    EXPECT_EQ(texture_.palette[5], 3);
}

TEST_F(CDemonCameraImageTest, AMissingFogOrImageIsSkipped) {
    camera_.init(480);
    givenFile("backdrop\\cam.ACT", palette({{1, 1, 2, 3}}));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(camera_.getFramebuffer(), Each(0U));
    EXPECT_EQ(tables_.fog_grid.planes[0][0][0], 0);
    EXPECT_THAT(tables_.fog_planes, Each(5));
}

TEST_F(CDemonCameraImageTest, AFogWithoutDensityHasBlankPlanes) {
    tables_.fog_grid.density_multiplier = 0;
    givenFog("");
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_grid.planes[15][15][15], 'g');
    EXPECT_THAT(tables_.fog_planes, Each(0));
}

// Each value is the running sum of its row's steps, four times over: 1, 2, 3 and on, the next
// row starting again.
TEST_F(CDemonCameraImageTest, AStillFogHasOnePlaneOfSteps) {
    givenFog("EFD" + compressedPlanes(std::vector<std::uint8_t>(kPlane, 1)));
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_plane_count, 1);
    EXPECT_EQ(tables_.fog_planes[0], 4);
    EXPECT_EQ(tables_.fog_planes[2], 12);
    EXPECT_EQ(tables_.fog_planes[kPlaneWidth], 4);
    EXPECT_EQ(tables_.fog_planes[kPlane], 5);
}

// Each plane's values are over the plane before's.
TEST_F(CDemonCameraImageTest, ADriftingFogHasSixteenPlanesEachOverTheLast) {
    tables_.fog_grid.scroll_vector.x = 1;
    std::vector<std::uint8_t> steps(kPlane * SCameraTables::kMaxFogPlanes, 0);
    for (std::size_t row = 0; row < steps.size(); row += kPlaneWidth) {
        steps[row] = 1;
    }
    givenFog("LZW" + compressedPlanes(steps));
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_plane_count, 16);
    EXPECT_EQ(tables_.fog_planes[kPlaneWidth - 1], 4);
    EXPECT_EQ(tables_.fog_planes[kPlane], 8);
    EXPECT_EQ(tables_.fog_planes[(15 * kPlane) + 7], 64);
}

TEST_F(CDemonCameraImageTest, ADriftAlongAnyAxisMakesSixteenPlanes) {
    givenFog("");
    tables_.fog_grid.scroll_vector = {.x = 0, .y = 1, .z = 0};
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_plane_count, 16);
    tables_.fog_grid.scroll_vector = {.x = 0, .y = 0, .z = 1};
    tables_.fog_plane_count = 0;
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_plane_count, 16);
}

TEST_F(CDemonCameraImageTest, PlanesWithoutATagAreRaw) {
    givenFog(std::string(kPlane, '\x09'));
    camera_.loadImage("cam.raw");
    EXPECT_THAT(std::span(tables_.fog_planes).first(kPlane), Each(9));
    EXPECT_EQ(tables_.fog_planes[kPlane], 5);
}

TEST_F(CDemonCameraImageTest, ATagWithNothingAfterItIsFatal) {
    givenFog("EFD");
    EXPECT_THAT([this] { camera_.loadImage("cam.raw"); },
                ThrowsMessage<common::CFatalError>(StrEq("Hell froze loading cam.fog")));
}

TEST_F(CDemonCameraImageTest, MoreThanHalfAMillionCompressedBytesIsFatal) {
    givenFog("LZW" + std::string(500001, '\0'));
    EXPECT_THAT(
        [this] { camera_.loadImage("cam.raw"); },
        ThrowsMessage<common::CFatalError>(StrEq("cam.fog too big to fit in decompress buffer")));
}

// A 512 by 384 window's display is 256 by 192: each plane's top left takes the nearest of the
// whole plane.
TEST_F(CDemonCameraImageTest, ForA384LineWindowThePlanesShrinkToItsDisplay) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(384));
    camera_.init(384);
    std::string raw(kPlane, '\0');
    for (std::size_t at = 0; at < raw.size(); ++at) {
        raw[at] = static_cast<char>(((at % kPlaneWidth) + ((at / kPlaneWidth) * 3)) & 0xffU);
    }
    givenFog(raw);
    givenFile("backdrop\\cam.raw", image([](std::size_t, std::size_t) { return 0; }));
    camera_.loadImage("cam.raw");
    EXPECT_EQ(tables_.fog_planes[4], 5);
    EXPECT_EQ(tables_.fog_planes[4 * kPlaneWidth], 15);
    EXPECT_EQ(tables_.fog_planes[kPlaneWidth + 1], 4);
}

} // namespace
} // namespace nocturne::core
