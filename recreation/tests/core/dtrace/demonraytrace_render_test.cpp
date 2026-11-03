#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "core/xform/xform.h"
#include "engine/drender/demonrenderer.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <numbers>
#include <span>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr float kEverything = 9999.9F;

// A grid of cubes of (8, 16, 24) from the origin, each with voxels and a triangle that draws
// nothing, seen on a 64 by 48 screen of 32-bit pixels and depths, clipped as the game clips. A
// cube's index is (x * cubes along y + y) * cubes along z + z.
class CDemonRaytraceRenderTest : public engine::CDemonRendererFixture {
protected:
    static constexpr std::size_t kWidth = 64;
    static constexpr std::size_t kHeight = 48;

    CDemonRaytraceRenderTest() {
        two_d_.setupViewportAndClipping(0, 0, kWidth - 1, kHeight - 1);
        for (std::size_t row = 0; row < kHeight; ++row) {
            pixel_rows_.at(row) = pixels_.data() + (row * kWidth);
            depth_rows_.at(row) = depths_.data() + (row * kWidth);
        }
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(pixel_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        clipping_renderer_.setProjectionScale(90.0F);
    }

    void givenGrid(const common::CVector3i &grid) {
        SGeoCube cube;
        cube.vertex_count = 3;
        cube.vertices = {{}, {}, {}};
        cube.triangle_count = 1;
        cube.triangles.resize(1);
        cube.triangles[0].indices = {0, 1, 2};
        const std::vector<SGeoCube> cubes(static_cast<std::size_t>(grid.x * grid.y * grid.z), cube);
        givenFile("data\\set.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion, grid, cubes));
        ASSERT_TRUE(raytrace().loadAndSyncWithGeoFile("set.geo"));
    }

    // The camera at the position, turned by the angles, its relative origin the world's.
    void lookFrom(const common::CVector3f &position, const common::CVector3f &angles = {}) {
        clipping_renderer_.setCameraOriginFromScaledPoint(position);
        clipping_renderer_.setupSceneRendering(angles);
        clipping_renderer_.processCameraRelativeVertex({});
    }

    [[nodiscard]] SCubeDrawOwners owners() {
        return {
            .renderer = clipping_renderer_, .special = special_, .matrix = matrix_, .set = set_};
    }

    [[nodiscard]] CDemonRaytrace &raytrace() {
        return set_parts_.raytrace;
    }

    // The cubes the walk draws.
    [[nodiscard]] std::vector<int> walk(float reach = kEverything) {
        raytrace().renderFrustumCubes(reach, false, owners());
        return raytrace().savePVS();
    }

    std::array<std::uint32_t, kWidth * kHeight> pixels_{};
    std::array<std::uint32_t, kWidth * kHeight> depths_{};
    std::array<void *, kHeight> pixel_rows_{};
    std::array<std::uint32_t *, kHeight> depth_rows_{};
    CSetParts set_parts_{dosio_};
    engine::CDemonRenderer clipping_renderer_{
        matrix_, light_,   two_d_,   three_d_,  vertex_buffer_, special_,
        prim_,   zraster_, texture_, textures_, screen_,        &transformAndClipGeometry};
    CDemonSet set_{
        set_parts_.owners(clipping_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

// Looking along z from cube (1, 0, -1): slab by slab out along z, and within each out along x,
// up from the camera's 1, then down.
TEST_F(CDemonRaytraceRenderTest, AlongZTheCubesAreDrawnOutFromTheCamerasCube) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    EXPECT_THAT(walk(), ElementsAre(3, 0, 4, 1, 5, 2));
}

// The camera's own slab and the next are drawn whatever the depth already there.
TEST_F(CDemonRaytraceRenderTest, PastTheFirstTwoSlabsACubeBehindTheDepthIsNotDrawn) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    depths_.fill(0x7fffffffU);
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    EXPECT_THAT(walk(), ElementsAre(3, 0));
}

// 30 units along the view from z = -40 reaches z = -10, within cube 0 along z; the bounds take
// one more.
TEST_F(CDemonRaytraceRenderTest, TheReachBoundsTheCubesDrawn) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    EXPECT_THAT(walk(30.0F), ElementsAre(3, 0, 4, 1));
}

TEST_F(CDemonRaytraceRenderTest, ASetPVSIsDrawnInsteadOfTheWalk) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    startRenderer();
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    const std::array<int, 2> pvs{4, 1};
    raytrace().setPVS(pvs);
    EXPECT_CALL(renderer_, sync()).Times(2);
    raytrace().renderFrustumCubes(kEverything, true, owners());
    EXPECT_THAT(raytrace().savePVS(), ElementsAre(4, 1));
}

TEST_F(CDemonRaytraceRenderTest, UnaskedASetPVSIsWalkedOver) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    const std::array<int, 1> pvs{4};
    raytrace().setPVS(pvs);
    EXPECT_THAT(walk(), ElementsAre(3, 0, 4, 1, 5, 2));
}

// Asked for with none set, the walk is drawn and becomes the PVS.
TEST_F(CDemonRaytraceRenderTest, WithNoPVSSetTheWalkIsDrawnAndSet) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    raytrace().renderFrustumCubes(kEverything, true, owners());
    EXPECT_THAT(raytrace().savePVS(), ElementsAre(3, 0, 4, 1, 5, 2));
    raytrace().renderFrustumCubes(kEverything, true, owners());
    EXPECT_THAT(raytrace().savePVS(), ElementsAre(3, 0, 4, 1, 5, 2));
}

TEST_F(CDemonRaytraceRenderTest, AnEmptyPVSLeavesNoneSet) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    raytrace().setPVS({});
    EXPECT_THAT(
        [this] { static_cast<void>(raytrace().savePVS()); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonRenderer::getPVS - PVS is not valid!")));
}

TEST_F(CDemonRaytraceRenderTest, APVSCubeOutsideTheGridIsFatal) {
    givenGrid({.x = 2, .y = 1, .z = 3});
    for (const int cube : {-1, 6}) {
        const std::array<int, 1> pvs{cube};
        EXPECT_THAT([&] { raytrace().setPVS(pvs); },
                    ThrowsMessage<common::CFatalError>(StrEq(std::format(
                        "CDemonRaytrace::setPVS - cube {} is outside the grid", cube))));
    }
}

// With no geometry the camera's cube is the x87's indefinite, and nothing is reached.
TEST_F(CDemonRaytraceRenderTest, AWalkThatDrawsNothingLeavesNothingToSave) {
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    raytrace().renderFrustumCubes(kEverything, false, owners());
    EXPECT_THAT(
        [this] { static_cast<void>(raytrace().savePVS()); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonRaytrace::getPVS - no cubes rendered???")));
}

constexpr float kQuarterTurn = std::numbers::pi_v<float> / 2;

// Turned a quarter about y the camera looks along x, from cube (-5, 0, 1): slab by slab along x,
// within each out along y, and within that out along z, up from the camera's 1, then down.
TEST_F(CDemonRaytraceRenderTest, AlongXTheSlabsAreAcrossXThenYThenZ) {
    givenGrid({.x = 3, .y = 2, .z = 2});
    lookFrom({.x = -40.0F, .y = 12.0F, .z = 30.0F}, {.y = kQuarterTurn});
    EXPECT_THAT(walk(), ElementsAre(1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10));
}

// Turned a quarter about x the camera looks down y, from cube (1, 5, 1), so the slabs run down
// from the grid's top; within each out along x, and within that out along z.
TEST_F(CDemonRaytraceRenderTest, DownYTheSlabsAreAcrossYThenXThenZ) {
    givenGrid({.x = 3, .y = 2, .z = 2});
    lookFrom({.x = 12.0F, .y = 80.0F, .z = 30.0F}, {.x = kQuarterTurn});
    EXPECT_THAT(walk(), ElementsAre(7, 6, 11, 10, 3, 2, 5, 4, 9, 8, 1, 0));
}

// Turned 10 degrees toward x, the view looks further along z than x, so the walk is along z.
TEST_F(CDemonRaytraceRenderTest, AnAngledViewWalksAlongItsLargestAxis) {
    givenGrid({.x = 1, .y = 1, .z = 3});
    lookFrom({.x = 4.0F, .y = 8.0F, .z = -40.0F}, {.y = kQuarterTurn / 9});
    EXPECT_THAT(walk(), ElementsAre(0, 1, 2));
}

// All in the camera's slab, so none is tested against the depth: cubes 2 to 5, from 12 to 44
// units right of a camera 10 short of them, have every corner past the view's right edge.
TEST_F(CDemonRaytraceRenderTest, ACubeWhollyPastOneSideOfTheViewIsNotDrawn) {
    givenGrid({.x = 6, .y = 1, .z = 1});
    lookFrom({.x = 4.0F, .y = 8.0F, .z = -10.0F});
    EXPECT_THAT(walk(), ElementsAre(0, 1));
}

// 65536 by 65536 by 1 cubes wraps to none loaded, so every cell reached is missing.
TEST_F(CDemonRaytraceRenderTest, ACellPastTheLoadedCubesIsNotDrawn) {
    givenFile("data\\set.geo",
              geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 65536, .y = 65536, .z = 1}, {}));
    ASSERT_TRUE(raytrace().loadAndSyncWithGeoFile("set.geo"));
    lookFrom({.x = 8.0F, .y = 8.0F, .z = -40.0F});
    raytrace().renderFrustumCubes(30.0F, false, owners());
    EXPECT_THAT(
        [this] { static_cast<void>(raytrace().savePVS()); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonRaytrace::getPVS - no cubes rendered???")));
}

// A cube without voxels is in no PVS.
TEST_F(CDemonRaytraceRenderTest, ACubeWithoutVoxelsIsNotDrawn) {
    SGeoCube solid;
    solid.vertex_count = 3;
    solid.vertices = {{}, {}, {}};
    solid.triangle_count = 1;
    solid.triangles.resize(1);
    givenFile("data\\set.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                       {.x = 1, .y = 1, .z = 2}, {SGeoCube{}, solid}));
    ASSERT_TRUE(raytrace().loadAndSyncWithGeoFile("set.geo"));
    lookFrom({.x = 4.0F, .y = 8.0F, .z = -40.0F});
    EXPECT_THAT(walk(), ElementsAre(1));
}

} // namespace
} // namespace nocturne::core
