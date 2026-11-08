#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dskybox/dskybox.h"
#include "core/dtrace/demonraytrace.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Return;

// A dome of radius 0.8242 and one of 1005.94, as nocedit's own code works out their corners.
constexpr float kSmallScale = std::bit_cast<float>(0x3f52fff7U);
constexpr float kLargeScale = std::bit_cast<float>(0x447b7bfbU);

TEST(SkyDomeCorners, ARowGoesRoundAndAColumnUp) {
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 0, 0), (common::CVector3i{.x = 0, .y = 4, .z = 210}));
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 0, 3), (common::CVector3i{.x = 0, .y = 194, .z = 80}));
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 1, 1), (common::CVector3i{.x = 74, .y = 80, .z = 180}));
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 7, 2),
              (common::CVector3i{.x = 57, .y = 149, .z = -137}));
    EXPECT_EQ(getSkyDomeCorner(kLargeScale, 0, 2),
              (common::CVector3i{.x = 0, .y = 182094, .z = 182094}));
}

// Half a turn and a whole one leave a sine just off zero, chopped to it.
TEST(SkyDomeCorners, ATinySineIsChoppedToNothing) {
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 8, 0).x, 0);
    EXPECT_EQ(getSkyDomeCorner(kSmallScale, 16, 1).x, 0);
}

TEST(SkyDomeCorners, TheQuadOverheadIsAQuarterTurnUpFromTheTopRow) {
    EXPECT_EQ(getSkyDomeTopCorner(kSmallScale), (common::CVector3i{.x = 117, .y = 210, .z = 117}));
    EXPECT_EQ(getSkyDomeTopCorner(kLargeScale),
              (common::CVector3i{.x = 143070, .y = 257519, .z = 143070}));
}

// Geometry from (0, 0, 0) to (16, 8, 24), its textures in the art, seen from far behind.
class CSkyDomeTest : public engine::CDemonRendererFixture {
protected:
    CSkyDomeTest() {
        givenFile("data\\set.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                           {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        EXPECT_TRUE(raytrace_.loadAndSyncWithGeoFile("set.geo"));
        givenFile("art\\stars.raw", std::string(std::size_t{256} * 256, '\0'));
        givenFile("art\\stars.act", std::string(768, '\0'));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette32_)));
        demon_renderer_.setProjectionScale(90.0F);
        demon_renderer_.setCameraOriginFromScaledPoint({.x = 8.0F, .y = 4.0F, .z = -400.0F});
        demon_renderer_.setupSceneRendering({});
    }

    // Each quad the hardware renderer is handed, as its corners' places in the buffer, and the
    // flags it is drawn with.
    void recordDraws() {
        startRenderer();
        ON_CALL(renderer_, drawPolygon2(_, 4, _))
            .WillByDefault([this](platform::SRenderVertex **corners, int count, int render_flags) {
                std::vector<long> indices;
                for (const platform::SRenderVertex *corner : std::span(corners, count)) {
                    indices.push_back(corner - vertex_buffer_.data());
                }
                drawn_.push_back(indices);
                flags_.push_back(render_flags);
                return 1;
            });
    }

    std::array<std::uint16_t, 256> palette16_{};
    std::array<std::uint32_t, 256> palette32_{};
    std::vector<std::vector<long>> drawn_;
    std::vector<int> flags_;
    CDemonRaytrace raytrace_{dosio_};
    CSkyDome dome_{demon_renderer_, special_, raytrace_};
};

TEST_F(CSkyDomeTest, TheSkyIsNiteskyUntilASetNamesItsOwn) {
    EXPECT_EQ(dome_.getTexture().texture_name, "NITESKY.RAW");
    dome_.renderSkyDome("stars.raw", 200);
    EXPECT_EQ(dome_.getTexture().texture_name, "stars.raw");
}

// Half the depth is the widest: 12 times 1.414.
TEST_F(CSkyDomeTest, TheDomeStandsOnTheGeometrysFloorAndSpansItsWidestSide) {
    dome_.renderSkyDome("stars.raw", 200);
    const common::CVector3f &center = dome_.getCenter();
    EXPECT_EQ(center.x, 8.0F);
    EXPECT_EQ(center.y, 0.0F);
    EXPECT_EQ(center.z, 12.0F);
    EXPECT_FLOAT_EQ(dome_.getVertexScale(), 16.968F);
}

TEST_F(CSkyDomeTest, EachCornerIsLitByTheBrightness) {
    dome_.renderSkyDome("stars.raw", 200);
    for (const std::size_t corner : {std::size_t{0}, std::size_t{3}, std::size_t{67}}) {
        EXPECT_EQ(vertex_buffer_[corner].r, 200);
        EXPECT_EQ(vertex_buffer_[corner].g, 200);
        EXPECT_EQ(vertex_buffer_[corner].b, 200);
        EXPECT_EQ(vertex_buffer_[corner].a, 0);
    }
}

// The quad overhead, then each column's three rows, its corners the column's and the next's.
TEST_F(CSkyDomeTest, TheTopThenSixteenColumnsOfThreeRowsAreDrawn) {
    recordDraws();
    dome_.renderSkyDome("stars.raw", 200);
    ASSERT_EQ(drawn_.size(), 49U);
    EXPECT_EQ(drawn_[0], (std::vector<long>{0, 1, 2, 3}));
    EXPECT_EQ(drawn_[1], (std::vector<long>{0, 1, 5, 4}));
    EXPECT_EQ(drawn_[3], (std::vector<long>{2, 3, 7, 6}));
    EXPECT_EQ(drawn_[4], (std::vector<long>{4, 5, 9, 8}));
    EXPECT_EQ(drawn_[48], (std::vector<long>{62, 63, 67, 66}));
    EXPECT_THAT(flags_, ::testing::Each(0x2c5));
}

} // namespace
} // namespace nocturne::core
