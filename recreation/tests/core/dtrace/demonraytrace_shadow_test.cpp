#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/demoncube.h"
#include "core/dtrace/demonraytrace.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <optional>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A box of a voxel by a voxel by a voxel, from its corner.
constexpr common::CVector3f kVoxelMax{.x = 1.0F, .y = 2.0F, .z = 3.0F};
constexpr common::CVector3f kNoTurn{};

// A grid of two cubes along x: the first with a triangle and voxels counting up from 0, the
// second empty.
class CDemonRaytraceShadowTest : public engine::CPodFixture {
protected:
    CDemonRaytraceShadowTest() {
        SGeoCube solid;
        solid.vertex_count = 3;
        solid.vertices = {{}, {.x = 1.0F}, {.z = 1.0F}};
        solid.triangle_count = 1;
        solid.triangles.resize(1);
        solid.triangles[0].indices = {0, 1, 2};
        givenFile("data\\set.geo", geoFile(4, {.x = 2, .y = 1, .z = 1}, {solid, {}}));
        EXPECT_TRUE(raytrace_.loadAndSyncWithGeoFile("set.geo"));
    }

    [[nodiscard]] const CDemonCube &cube(int x) const {
        return *raytrace_.getCubeAt(x, 0, 0);
    }

    // The voxels' byte at the row and column of the copy; -1 for a copy the cube hasn't.
    [[nodiscard]] static int voxelByte(const std::optional<SVoxelGrid> &copy, int row, int column) {
        return copy ? copy->voxels.at(static_cast<std::size_t>(row))
                          .at(static_cast<std::size_t>(column))
                    : -1;
    }

    [[nodiscard]] int firstRow(int x) const {
        return voxelByte(cube(x).getVoxelBuffer1(), 0, 0);
    }

    CDemonRaytrace raytrace_{dosio_};
};

TEST_F(CDemonRaytraceShadowTest, APositionsVoxelIsCountedFromTheGridsCorner) {
    EXPECT_EQ(raytrace_.worldPositionToVoxelCoords({.x = 8.5F, .y = 2.5F, .z = 3.5F}),
              (common::CVector3i{.x = 8, .y = 1, .z = 1}));
    EXPECT_EQ(raytrace_.worldPositionToVoxelCoords({.x = -0.5F}).x, -1);
}

// Three samples a side, all in the voxel at x 2, whose bit is set in the first copy alone.
TEST_F(CDemonRaytraceShadowTest, ABoxWithinAVoxelMarksIt) {
    raytrace_.markShadowVoxels({.x = 2.0F}, kNoTurn, {}, kVoxelMax);
    EXPECT_EQ(firstRow(0), 4);
    EXPECT_EQ(voxelByte(cube(0).getVoxelBuffer2(), 0, 0), 0);
    EXPECT_EQ(voxelByte(cube(0).getVoxelBuffer1(), 0, 1), 1);
}

// The box reaches from voxel 7 of the first cube into voxel 8, the second's first, which is
// given voxels to hold it.
TEST_F(CDemonRaytraceShadowTest, ABoxAcrossCubesMarksEach) {
    raytrace_.markShadowVoxels({.x = 8.0F}, kNoTurn, {.x = -0.5F},
                               {.x = 0.5F, .y = 2.0F, .z = 3.0F});
    EXPECT_EQ(firstRow(0), 0x80);
    EXPECT_EQ(firstRow(1), 1);
    EXPECT_EQ(cube(1).getVoxelBuffer2(), std::optional<SVoxelGrid>(SVoxelGrid{}));
}

// A half turn carries the box from 1 along x of the position to 1 behind it, across voxels 2
// and 3.
TEST_F(CDemonRaytraceShadowTest, ABoxTurnedIsMarkedWhereItIsTurnedTo) {
    raytrace_.markShadowVoxels({.x = 4.0F, .y = 0.5F, .z = 1.5F}, {.y = 3.14159265F},
                               {.x = 0.5F, .y = -0.5F, .z = -0.5F},
                               {.x = 1.5F, .y = 0.5F, .z = 0.5F});
    EXPECT_EQ(firstRow(0), 4 | 8);
}

TEST_F(CDemonRaytraceShadowTest, ABoxOutsideTheGridMarksNothing) {
    for (const common::CVector3f &position :
         {common::CVector3f{.x = -10.0F}, common::CVector3f{.y = -10.0F},
          common::CVector3f{.z = -10.0F}, common::CVector3f{.x = 100.0F},
          common::CVector3f{.y = 100.0F}, common::CVector3f{.z = 100.0F}}) {
        raytrace_.markShadowVoxels(position, kNoTurn, {}, kVoxelMax);
    }
    EXPECT_EQ(firstRow(0), 0);
    EXPECT_FALSE(cube(1).getVoxelBuffer1().has_value());
}

// 65536 * 65536 * 1 wraps to no cubes, though the place is in the grid.
TEST_F(CDemonRaytraceShadowTest, AGridWithoutTheCubeAtAPlaceIsFatal) {
    givenFile("data\\wrapped.geo", geoFile(4, {.x = 65536, .y = 65536, .z = 1}, {}));
    ASSERT_TRUE(raytrace_.loadAndSyncWithGeoFile("wrapped.geo"));
    EXPECT_THAT([this] { raytrace_.markShadowVoxels({.x = 1.0F}, kNoTurn, {}, kVoxelMax); },
                ThrowsMessage<common::CFatalError>(StrEq("Parity Check 999")));
}

} // namespace
} // namespace nocturne::core
