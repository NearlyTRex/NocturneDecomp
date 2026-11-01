#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/demoncube.h"
#include "core/dcube/demoncubetriangle.h"
#include "core/dtrace/demonraytrace.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

std::string geo(std::int32_t version, const common::CVector3i &grid,
                const std::vector<SGeoCube> &cubes) {
    return geoFile(version, grid, cubes);
}

// A cube with one triangle over its three vertices, of ground type 5.
SGeoCube solidCube() {
    return {.min_bounds = {.x = 1.0F, .y = 2.0F, .z = 3.0F},
            .max_bounds = {.x = 4.0F, .y = 5.0F, .z = 6.0F},
            .vertex_count = 3,
            .vertices = {{.x = 1.0F}, {.y = 1.0F}, {.z = 1.0F}},
            .triangle_count = 1,
            .triangles = {{.indices = {0, 2, 1},
                           .normal = {.x = 0.0F, .y = 1.0F, .z = 0.0F},
                           .plane_distance = 7.0F,
                           .dominant_axis = 1,
                           .ground_type = 5}},
            .voxel_base = 10};
}

// Voxels counting up from first, row by row, as writeCube writes them.
SVoxelGrid countingVoxels(std::uint8_t first) {
    SVoxelGrid voxels;
    for (std::array<std::uint8_t, 8> &row : voxels.voxels) {
        for (std::uint8_t &voxel : row) {
            voxel = first++;
        }
    }
    return voxels;
}

class CDemonRaytraceLoadTest : public engine::CPodFixture {
protected:
    void load(const std::string &file) {
        givenFile("data\\set.geo", file);
        EXPECT_TRUE(raytrace_.loadAndSyncWithGeoFile("set.geo"));
    }

    void expectFatal(const std::string &file, const std::string &message) {
        givenFile("data\\set.geo", file);
        EXPECT_THAT([this] { static_cast<void>(raytrace_.loadAndSyncWithGeoFile("set.geo")); },
                    ThrowsMessage<common::CFatalError>(StrEq(message)));
    }

    CDemonRaytrace raytrace_{dosio_};
};

TEST_F(CDemonRaytraceLoadTest, TheGridAndItsBoxAreRead) {
    load(geo(4, {.x = 2, .y = 1, .z = 1}, {solidCube(), {}}));
    EXPECT_EQ(raytrace_.getGridSize(), (common::CVector3i{.x = 2, .y = 1, .z = 1}));
    EXPECT_EQ(raytrace_.getBBoxMax().y, 8.0F);
    EXPECT_EQ(raytrace_.getBBoxMin().x, 0.0F);
    EXPECT_EQ(raytrace_.getCellSize().z, 24.0F);
    // A voxel is an eighth of a cube each way.
    EXPECT_EQ(raytrace_.getAdjustedSize().x, 1.0F);
    EXPECT_EQ(raytrace_.getAdjustedSize().y, 2.0F);
    EXPECT_EQ(raytrace_.getAdjustedSize().z, 3.0F);
}

TEST_F(CDemonRaytraceLoadTest, EachCubeHoldsItsBoundsAndVertices) {
    load(geo(4, {.x = 2, .y = 1, .z = 1}, {solidCube(), {}}));
    const CDemonCube *cube = raytrace_.getCubeAt(0, 0, 0);
    ASSERT_NE(cube, nullptr);
    EXPECT_EQ(cube->getMinBounds().z, 3.0F);
    EXPECT_EQ(cube->getMaxBounds().x, 4.0F);
    ASSERT_EQ(cube->getVertices().size(), 3U);
    EXPECT_EQ(cube->getVertices()[2].z, 1.0F);
}

TEST_F(CDemonRaytraceLoadTest, EachTriangleHoldsItsCornersPlaneAndGroundType) {
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {solidCube()}));
    const CDemonCube *cube = raytrace_.getCubeAt(0, 0, 0);
    ASSERT_NE(cube, nullptr);
    ASSERT_EQ(cube->getTriangles().size(), 1U);
    const CDemonCubeTriangle &triangle = cube->getTriangles()[0];
    EXPECT_EQ(triangle.getVertexIndices(), (std::array<int, 3>{0, 2, 1}));
    EXPECT_EQ(triangle.getNormal().y, 1.0F);
    EXPECT_EQ(triangle.getPlaneDistance(), 7.0F);
    EXPECT_EQ(triangle.getDominantAxis(), 1U);
    EXPECT_EQ(
        std::vector<std::uint8_t>(cube->getGroundTypes().begin(), cube->getGroundTypes().end()),
        (std::vector<std::uint8_t>{5}));
}

// The 64 voxel bytes, row by row, go into both buffers.
TEST_F(CDemonRaytraceLoadTest, EachCubeHoldsItsVoxelsTwice) {
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {solidCube()}));
    const CDemonCube *cube = raytrace_.getCubeAt(0, 0, 0);
    ASSERT_NE(cube, nullptr);
    EXPECT_EQ(cube->getVoxelBuffer1(), std::optional<SVoxelGrid>(countingVoxels(10)));
    EXPECT_EQ(cube->getVoxelBuffer2(), cube->getVoxelBuffer1());
}

// Cube (x, y, z) is at x * height * depth + y * depth + z.
TEST_F(CDemonRaytraceLoadTest, CubesRunDepthThenHeightThenWidth) {
    std::vector<SGeoCube> cubes(8);
    for (int i = 0; i < 8; ++i) {
        cubes[static_cast<std::size_t>(i)].min_bounds.x = static_cast<float>(i);
    }
    load(geo(4, {.x = 2, .y = 2, .z = 2}, cubes));
    EXPECT_EQ(raytrace_.getCubeAt(1, 0, 1)->getMinBounds().x, 5.0F);
    EXPECT_EQ(raytrace_.getCubeAt(0, 1, 0)->getMinBounds().x, 2.0F);
}

TEST_F(CDemonRaytraceLoadTest, AnEmptyCubeHasNoGeometryOrVoxels) {
    load(geo(4, {.x = 2, .y = 1, .z = 1}, {solidCube(), {}}));
    const CDemonCube *cube = raytrace_.getCubeAt(1, 0, 0);
    ASSERT_NE(cube, nullptr);
    EXPECT_TRUE(cube->getVertices().empty());
    EXPECT_TRUE(cube->getTriangles().empty());
    EXPECT_FALSE(cube->getVoxelBuffer1().has_value());
    EXPECT_FALSE(cube->getVoxelBuffer2().has_value());
}

// The original wrote them to a buffer it never made.
TEST_F(CDemonRaytraceLoadTest, VerticesOfACubeWithoutTrianglesAreKept) {
    SGeoCube cube;
    cube.vertex_count = 1;
    cube.vertices = {{.x = 9.0F}};
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {cube}));
    ASSERT_EQ(raytrace_.getCubeAt(0, 0, 0)->getVertices().size(), 1U);
    EXPECT_EQ(raytrace_.getCubeAt(0, 0, 0)->getVertices()[0].x, 9.0F);
}

TEST_F(CDemonRaytraceLoadTest, OutsideTheGridThereIsNoCube) {
    load(geo(4, {.x = 2, .y = 1, .z = 1}, {solidCube(), {}}));
    EXPECT_EQ(raytrace_.getCubeAt(-1, 0, 0), nullptr);
    EXPECT_EQ(raytrace_.getCubeAt(0, -1, 0), nullptr);
    EXPECT_EQ(raytrace_.getCubeAt(0, 0, -1), nullptr);
    EXPECT_EQ(raytrace_.getCubeAt(2, 0, 0), nullptr);
    EXPECT_EQ(raytrace_.getCubeAt(0, 1, 0), nullptr);
    EXPECT_EQ(raytrace_.getCubeAt(0, 0, 1), nullptr);
}

TEST_F(CDemonRaytraceLoadTest, WithoutTheFileTheGridStaysAsItWas) {
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {solidCube()}));
    EXPECT_FALSE(raytrace_.loadAndSyncWithGeoFile("none.geo"));
    EXPECT_NE(raytrace_.getCubeAt(0, 0, 0), nullptr);
}

TEST_F(CDemonRaytraceLoadTest, ANewFileReplacesTheGrid) {
    load(geo(4, {.x = 2, .y = 1, .z = 1}, {solidCube(), {}}));
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {{}}));
    EXPECT_EQ(raytrace_.getCubeAt(1, 0, 0), nullptr);
    EXPECT_TRUE(raytrace_.getCubeAt(0, 0, 0)->getTriangles().empty());
}

TEST_F(CDemonRaytraceLoadTest, OnlyVersionFourIsRead) {
    expectFatal(geo(0, {}, {}), "CDemonRaytrace::loadBinary - invalid version");
    expectFatal(geo(5, {}, {}), "CDemonRaytrace::loadBinary - file is newer than .exe!");
    expectFatal(geo(3, {}, {}), "Release build doesn't support old geometry");
}

TEST_F(CDemonRaytraceLoadTest, ANegativeCountWhereMemoryIsNeededIsFatal) {
    SGeoCube vertices = solidCube();
    vertices.vertex_count = -1;
    expectFatal(geo(4, {.x = 1, .y = 1, .z = 1}, {vertices}),
                "CDemonCube::allocMemory - Out of vertex memory");
    SGeoCube triangles = solidCube();
    triangles.triangle_count = -1;
    expectFatal(geo(4, {.x = 1, .y = 1, .z = 1}, {triangles}),
                "CDemonCube::allocMemory - Out of tri memory");
    expectFatal(geo(4, {.x = -1, .y = 1, .z = 1}, {}),
                "CDemonRaytrace::allocNewCubeList - Out of memory!");
}

// Without triangles nothing is made, so a negative vertex count reads no vertices.
TEST_F(CDemonRaytraceLoadTest, ANegativeVertexCountWithoutTrianglesReadsNone) {
    SGeoCube cube;
    cube.vertex_count = -1;
    load(geo(4, {.x = 1, .y = 1, .z = 1}, {cube}));
    EXPECT_TRUE(raytrace_.getCubeAt(0, 0, 0)->getVertices().empty());
}

// 65536 * 65536 * 1 wraps to no cubes.
TEST_F(CDemonRaytraceLoadTest, AGridWhoseCountWrapsHasNoCubes) {
    load(geo(4, {.x = 65536, .y = 65536, .z = 1}, {}));
    EXPECT_EQ(raytrace_.getCubeAt(0, 0, 0), nullptr);
}

// A file that ends early reads as zeros from there.
TEST_F(CDemonRaytraceLoadTest, AShortFileReadsAsZeros) {
    std::string file = geo(4, {.x = 1, .y = 1, .z = 1}, {solidCube()});
    file.resize(64);
    load(file);
    const CDemonCube *cube = raytrace_.getCubeAt(0, 0, 0);
    ASSERT_NE(cube, nullptr);
    EXPECT_TRUE(cube->getTriangles().empty());
}

} // namespace
} // namespace nocturne::core
