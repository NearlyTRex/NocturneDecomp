#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/set/demonset.h"
#include "core/water/water.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/actorrenderfixture.h"
#include "tests/mocks/core/geofile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::ElementsAre;
using ::testing::IsEmpty;

TEST(CWater, IsConcrete) {
    static_assert(!std::is_abstract_v<CWater>);
}

TEST(CWater, Constructors) {
    static_assert(std::is_constructible_v<CWater>);
}

TEST(CWater, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWater::captureTextures),
                                 void (CWater::*)(engine::CDemonRenderer &)>);
    static_assert(std::is_same_v<decltype(&CWater::calculateVisibleTiles),
                                 void (CWater::*)(const SWaterOwners &)>);
    static_assert(std::is_same_v<decltype(&CWater::process), void (CWater::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWater::render), void (CWater::*)(int, const SWaterOwners &)>);
}

TEST(CWater, StartsStillAtLevelZeroInTilesOf32) {
    const CWater water;
    EXPECT_EQ(water.getWaterLevelY(), 0.0F);
    EXPECT_EQ(water.getTileSize(), 32.0F);
    EXPECT_FALSE(water.getWaveAnimationEnabled());
    EXPECT_THAT(water.getVisibleTiles(), IsEmpty());
    EXPECT_EQ(water.getCurrentFrame(), 0U);
    EXPECT_EQ(water.getWavePhase(), 0.0F);
}

TEST(CWater, TheLevelTilesAndWavesCanBeSet) {
    CWater water;
    water.setLevel(-4.5F, 16.0F);
    water.setWaveAnimationEnabled(true);
    EXPECT_EQ(water.getWaterLevelY(), -4.5F);
    EXPECT_EQ(water.getTileSize(), 16.0F);
    EXPECT_TRUE(water.getWaveAnimationEnabled());
}

// Water two units below the eye, which looks straight down at it, over geometry from (0, 0, 0)
// to (16, 8, 24): its centre is (8, 0, 12), its reach 13.2, so in tiles of 32 the grid is two by
// two, and the tile from (-24, 2, -20) covers the view.
class CWaterTest : public CActorRenderFixture {
protected:
    CWaterTest() {
        constexpr int kOne = 0x10000;
        common::CMatrix3x3i down;
        down.m = {{{.x = kOne}, {.z = kOne}, {.y = kOne}}};
        matrix_.setTransformMatrix(down);
        givenFile("data\\pool.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                            {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        static_cast<void>(set_parts_.raytrace.loadAndSyncWithGeoFile("pool.geo"));
        for (std::size_t frame = 0; frame < CWater::kTextureCount; ++frame) {
            givenFile(std::format("art\\WATER{}.RAW", frame),
                      std::string(std::size_t{32} * 32, static_cast<char>(frame)));
        }
        water_.setLevel(2.0F, 32.0F);
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(::testing::Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(::testing::Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(::testing::ReturnRef(masks_));
        // What the geometry clip leaves of a face over the whole view.
        for (const auto &[x, y] :
             {std::pair{0, 0}, std::pair{8, 0}, std::pair{8, 8}, std::pair{0, 8}}) {
            platform::SRenderVertex corner;
            corner.projected_vertex = {
                .transformed_z = 0x200, .inv_z = 0x200, .screen_x = x << 16, .screen_y = y << 16};
            clipped_.push_back(corner);
        }
    }

    [[nodiscard]] SWaterOwners owners() {
        return {.renderer = demon_renderer_,
                .special = special_,
                .raytrace = set_parts_.raytrace,
                .set = set_,
                .camera_tables = set_parts_.tables,
                .game = set_parts_.classes.getGame(),
                .console = set_parts_.console};
    }

    [[nodiscard]] std::string consoleText() const {
        std::string text;
        for (int row = 0; row < set_parts_.console.getConsoleHeight(); ++row) {
            text += set_parts_.console.getRow(row);
        }
        return text;
    }

    CWater water_;
    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint16_t, 256> palette16_{};
    engine::SColorMasks masks_;
};

// Over geometry with no width or depth but 40 high, the reach is its height: in tiles of 32 the
// grid is four by four, centred at the origin, so the eye is over the corner the middle four
// tiles share, and each shows.
TEST_F(CWaterTest, OverTallGeometryTheReachIsItsHeight) {
    givenFile("data\\tall.geo",
              geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 1, .y = 1, .z = 1}, {SGeoCube{}},
                      {.x = 0.0F, .y = 40.0F, .z = 0.0F}));
    static_cast<void>(set_parts_.raytrace.loadAndSyncWithGeoFile("tall.geo"));
    water_.calculateVisibleTiles(owners());
    EXPECT_TRUE(water_.getCentre().equals({.x = 0.0F, .y = 0.0F, .z = 0.0F}));
    EXPECT_THAT(water_.getVisibleTiles(),
                ElementsAre(SWaterTile{.x = -1, .z = -1}, SWaterTile{.x = -1, .z = 0},
                            SWaterTile{.x = 0, .z = -1}, SWaterTile{.x = 0, .z = 0}));
}

TEST_F(CWaterTest, TheTileUnderTheEyeIsVisibleAndReported) {
    water_.calculateVisibleTiles(owners());
    EXPECT_TRUE(water_.getCentre().equals({.x = 8.0F, .y = 0.0F, .z = 12.0F}));
    EXPECT_THAT(water_.getVisibleTiles(), ElementsAre(SWaterTile{.x = -1, .z = -1}));
    EXPECT_EQ(water_.getVisibleArea(), 1024.0F);
    EXPECT_NE(consoleText().find("Vis water tiles : 1, SqFt : 1024.000000"), std::string::npos);
}

TEST_F(CWaterTest, BehindTheDepthsNoTileIsVisible) {
    hideEverything();
    water_.calculateVisibleTiles(owners());
    EXPECT_THAT(water_.getVisibleTiles(), IsEmpty());
    EXPECT_EQ(water_.getVisibleArea(), 0.0F);
}

// A surface at height 0 is none: no tiles are worked out, nor drawn.
TEST_F(CWaterTest, WaterAtHeightZeroIsNone) {
    water_.calculateVisibleTiles(owners());
    water_.setLevel(0.0F, 32.0F);
    water_.calculateVisibleTiles(owners());
    EXPECT_EQ(water_.getVisibleArea(), 0.0F);
    EXPECT_EQ(water_.getVisibleTiles().size(), 1U);
    set_parts_.tables.perspective_reciprocal = 9;
    water_.render(0, owners());
    EXPECT_EQ(set_parts_.tables.perspective_reciprocal, 9);
}

// The ripples step a frame once more than 0x2000 of frame time has gone, wrapping after the
// sixteenth, and the waves roll on a turn a second; each corner is grey without omni lights.
TEST_F(CWaterTest, TheRipplesAndWavesMoveWithTheFrameTime) {
    water_.calculateVisibleTiles(owners());
    CGame &game = set_parts_.classes.getGame();
    game.slamDT(0.125F);
    water_.render(0, owners());
    EXPECT_EQ(water_.getCurrentFrame(), 0U);
    EXPECT_EQ(texture_.dimension, 32);
    EXPECT_EQ(water_.getWavePhase(), static_cast<float>(0.125 * 3.1415926535));
    EXPECT_EQ(vertex_buffer_[3].r, 0x8000);
    EXPECT_EQ(vertex_buffer_[3].b, 0x8000);
    game.slamDT(0.25F);
    for (int frame = 1; frame <= 16; ++frame) {
        water_.render(0, owners());
        EXPECT_EQ(water_.getCurrentFrame(), static_cast<std::size_t>(frame % 16));
    }
}

// Still water lies flat; waving water's corners rise and fall with the waves, each at its own
// point of the grid.
TEST_F(CWaterTest, WavingWatersCornersRideTheWaves) {
    water_.calculateVisibleTiles(owners());
    water_.render(1, owners());
    const int flat = vertex_buffer_[1].projected_vertex.transformed_z;
    water_.setWaveAnimationEnabled(true);
    set_parts_.classes.getGame().slamDT(0.5F);
    water_.render(0, owners());
    const float phase = water_.getWavePhase();
    const auto height = [phase](int x, int z) {
        return std::lround(
            static_cast<float>(std::sin((z * 3.1415926535 * 0.5) + (x * 3.1415926535) + phase) *
                               0.25) *
            256.0F);
    };
    EXPECT_EQ(vertex_buffer_[1].projected_vertex.transformed_z - flat, height(0, -1));
    EXPECT_EQ(vertex_buffer_[2].projected_vertex.transformed_z - flat, height(0, 0));
    EXPECT_EQ(vertex_buffer_[3].projected_vertex.transformed_z - flat, height(-1, 0));
}

// Waving water blends over the frame at 0xa000 of full alpha; still water draws in one solid
// colour while the hardware renderer is on.
TEST_F(CWaterTest, EachKindOfWaterDrawsItsOwnWay) {
    water_.calculateVisibleTiles(owners());
    startRenderer();
    std::vector<int> flags;
    ON_CALL(renderer_, drawPolygon2(_, _, _))
        .WillByDefault([&flags](platform::SRenderVertex **, int, int render_flags) {
            flags.push_back(render_flags);
            return 1;
        });
    ON_CALL(renderer_, drawPolygon(_, _, _))
        .WillByDefault([&flags](platform::SRenderVertex *, int, int render_flags) {
            flags.push_back(render_flags);
            return 1;
        });
    water_.setWaveAnimationEnabled(true);
    water_.render(0, owners());
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0xa0);
    water_.setWaveAnimationEnabled(false);
    water_.render(0, owners());
    EXPECT_THAT(flags, ElementsAre(0x267, _));
}

// In software still water is a decal for render mode 0, leaving the depths, and alpha-blended for
// the others, writing them.
TEST_F(CWaterTest, InSoftwareStillWaterIsADecalOrBlended) {
    water_.calculateVisibleTiles(owners());
    depths_.fill(kFarthest);
    water_.render(0, owners());
    EXPECT_EQ(depths_[(3 * kSize) + 3], kFarthest);
    water_.render(1, owners());
    EXPECT_NE(depths_[(3 * kSize) + 3], kFarthest);
}

} // namespace
} // namespace nocturne::core
