#include "common/math/vector3f.h"
#include "common/serial/binaryreader.h"
#include "common/serial/binarywriter.h"
#include "core/dcube/demoncube.h"
#include "core/dcube/demoncubetriangle.h"
#include "core/dtrace/demonraytrace.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/engine/podfixture.h"

#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using common::CVector3f;

// A triangle over the vertices given, facing rays along -normal, read as a .GEO file holds it.
CDemonCubeTriangle makeTriangle(const CVector3f &normal, float plane_distance,
                                std::uint32_t dominant_axis) {
    common::CBinaryWriter writer;
    for (const std::int32_t index : {0, 1, 2}) {
        writer.write(index);
    }
    writer.write(normal.x);
    writer.write(normal.y);
    writer.write(normal.z);
    writer.write(plane_distance);
    writer.write(dominant_axis);
    common::CBinaryReader reader(writer.getData());
    CDemonCubeTriangle triangle;
    triangle.readFromFile(reader);
    return triangle;
}

// The floor y = 0 under (0, 0, 0), (1, 0, 0) and (0, 0, 1), met by rays coming down.
class CDemonCubeTriangleRayTest : public ::testing::Test {
protected:
    std::array<CVector3f, 3> floor_{CVector3f{.x = 0, .y = 0, .z = 0},
                                    CVector3f{.x = 1, .y = 0, .z = 0},
                                    CVector3f{.x = 0, .y = 0, .z = 1}};
    CDemonCubeTriangle down_ = makeTriangle({.x = 0, .y = -1, .z = 0}, 0.0F, 1);

    [[nodiscard]] float down(float x, float z, float from = 1.0F, float drop = 2.0F) const {
        return down_.rayTriangleIntersection(floor_, {.x = x, .y = from, .z = z},
                                             {.x = 0, .y = -drop, .z = 0});
    }
};

TEST_F(CDemonCubeTriangleRayTest, ARayDownMeetsTheFloorPartWay) {
    EXPECT_FLOAT_EQ(down(0.2F, 0.2F), 0.5F);
}

TEST_F(CDemonCubeTriangleRayTest, ARayUpOrFromBelowOrTooShortMissesIt) {
    EXPECT_EQ(down(0.2F, 0.2F, 1.0F, -2.0F), -1.0F);
    EXPECT_EQ(down(0.2F, 0.2F, -1.0F), -1.0F);
    EXPECT_EQ(down(0.2F, 0.2F, 1.0F, 0.5F), -1.0F);
}

TEST_F(CDemonCubeTriangleRayTest, ARayBesideTheTriangleMissesIt) {
    EXPECT_EQ(down(-0.1F, 0.2F), -1.0F);
    EXPECT_EQ(down(0.2F, -0.1F), -1.0F);
    EXPECT_EQ(down(0.8F, 0.8F), -1.0F);
}

// A wall seen along x is tested on y and z, one seen along z on x and y.
TEST_F(CDemonCubeTriangleRayTest, WallsAreTestedOnTheirOwnAxes) {
    const std::array<CVector3f, 3> across_x{CVector3f{.x = 0, .y = 0, .z = 0},
                                            CVector3f{.x = 0, .y = 1, .z = 0},
                                            CVector3f{.x = 0, .y = 0, .z = 1}};
    const CDemonCubeTriangle facing_x = makeTriangle({.x = -1, .y = 0, .z = 0}, 0.0F, 0);
    EXPECT_FLOAT_EQ(facing_x.rayTriangleIntersection(across_x, {.x = 1, .y = 0.2F, .z = 0.2F},
                                                     {.x = -2, .y = 0, .z = 0}),
                    0.5F);
    const std::array<CVector3f, 3> across_z{CVector3f{.x = 0, .y = 0, .z = 0},
                                            CVector3f{.x = 1, .y = 0, .z = 0},
                                            CVector3f{.x = 0, .y = 1, .z = 0}};
    const CDemonCubeTriangle facing_z = makeTriangle({.x = 0, .y = 0, .z = -1}, 0.0F, 2);
    EXPECT_FLOAT_EQ(facing_z.rayTriangleIntersection(across_z, {.x = 0.2F, .y = 0.2F, .z = 1},
                                                     {.x = 0, .y = 0, .z = -2}),
                    0.5F);
}

TEST_F(CDemonCubeTriangleRayTest, ADominantAxisPastTwoMeetsNothing) {
    const CDemonCubeTriangle odd = makeTriangle({.x = 0, .y = -1, .z = 0}, 0.0F, 3);
    EXPECT_EQ(odd.rayTriangleIntersection(floor_, {.x = 0.2F, .y = 1, .z = 0.2F},
                                          {.x = 0, .y = -2, .z = 0}),
              -1.0F);
}

// A floor at y = 2 under the cube from x 8 to 16, of ground type 5, over others at y = 1 of type
// 6, listed before it, and at y = 0.5 of type 7, listed after, in a grid of two cubes along x,
// each 8 by 16 by 24, the first empty.
SGeoCube floorCube() {
    SGeoCube cube;
    cube.vertex_count = 9;
    cube.vertices = {
        {.x = 8, .y = 2, .z = 0},    {.x = 16, .y = 2, .z = 0},    {.x = 8, .y = 2, .z = 24},
        {.x = 8, .y = 1, .z = 0},    {.x = 16, .y = 1, .z = 0},    {.x = 8, .y = 1, .z = 24},
        {.x = 8, .y = 0.5F, .z = 0}, {.x = 16, .y = 0.5F, .z = 0}, {.x = 8, .y = 0.5F, .z = 24}};
    cube.triangle_count = 3;
    cube.triangles = {{.indices = {3, 4, 5},
                       .normal = {.x = 0, .y = -1, .z = 0},
                       .plane_distance = 1.0F,
                       .dominant_axis = 1,
                       .ground_type = 6},
                      {.indices = {0, 1, 2},
                       .normal = {.x = 0, .y = -1, .z = 0},
                       .plane_distance = 2.0F,
                       .dominant_axis = 1,
                       .ground_type = 5},
                      {.indices = {6, 7, 8},
                       .normal = {.x = 0, .y = -1, .z = 0},
                       .plane_distance = 0.5F,
                       .dominant_axis = 1,
                       .ground_type = 7}};
    return cube;
}

class CDemonRaytraceRayTest : public engine::CPodFixture {
protected:
    CDemonRaytraceRayTest() {
        load(geoFile(4, {.x = 2, .y = 1, .z = 1}, {SGeoCube{}, floorCube()}));
    }

    void load(const std::string &file) {
        givenFile("data\\set.geo", file);
        EXPECT_TRUE(raytrace_.loadAndSyncWithGeoFile("set.geo"));
    }

    // The ray's hit, its normal and ground type as they come out, from a type of -7 and no
    // normal.
    struct SHit {
        float along = 0.0F;
        CVector3f normal;
        int ground_type = kUntouched;
    };
    static constexpr int kUntouched = -7;

    [[nodiscard]] SHit cast(const CVector3f &start, const CVector3f &end) const {
        SHit hit;
        hit.along = raytrace_.rayVoxelIntersection(start, end, &hit.normal, &hit.ground_type);
        return hit;
    }

    CDemonRaytrace raytrace_{dosio_};
};

TEST_F(CDemonRaytraceRayTest, ARayInOneCubeMeetsItsTriangle) {
    const SHit hit = cast({.x = 10, .y = 6, .z = 4}, {.x = 10, .y = 0, .z = 4});
    EXPECT_FLOAT_EQ(hit.along, 4.0F / 6.0F);
    EXPECT_TRUE(hit.normal.equals({.x = 0, .y = 1, .z = 0}));
    EXPECT_EQ(hit.ground_type, 5);
    EXPECT_TRUE(raytrace_.rayVoxelGridTest({.x = 10, .y = 6, .z = 4}, {.x = 10, .y = 0, .z = 4}));
}

TEST_F(CDemonRaytraceRayTest, ARayAcrossCubesMeetsTheFarOnesTriangle) {
    const SHit hit = cast({.x = 6, .y = 3, .z = 4}, {.x = 14, .y = 1, .z = 4});
    EXPECT_FLOAT_EQ(hit.along, 0.5F);
    EXPECT_EQ(hit.ground_type, 5);
    EXPECT_TRUE(raytrace_.rayVoxelGridTest({.x = 6, .y = 3, .z = 4}, {.x = 14, .y = 1, .z = 4}));
}

// From outside the grid, the cells past it hold no cube.
TEST_F(CDemonRaytraceRayTest, ARayFromOutsideTheGridWalksIn) {
    EXPECT_EQ(cast({.x = -2, .y = 3, .z = 4}, {.x = 22, .y = 1, .z = 4}).ground_type, 5);
    EXPECT_TRUE(raytrace_.rayVoxelGridTest({.x = -2, .y = 3, .z = 4}, {.x = 22, .y = 1, .z = 4}));
}

// The grid test weighs each axis by the ray's own length along it, but its boundaries by cells:
// across cells taller than they are wide, a ray that falls steeply turns down out of the grid
// before it reaches the floor, where the hit test, weighing by cells, walks on to it.
TEST_F(CDemonRaytraceRayTest, AcrossTallCellsTheGridTestCanTurnOffTheRay) {
    EXPECT_EQ(cast({.x = 2, .y = 6, .z = 4}, {.x = 12, .y = 0, .z = 4}).ground_type, 5);
    EXPECT_FALSE(raytrace_.rayVoxelGridTest({.x = 2, .y = 6, .z = 4}, {.x = 12, .y = 0, .z = 4}));
}

// The nearer of the two floors is the one met, whichever the cube lists first; a ray that stops
// short of both meets neither.
TEST_F(CDemonRaytraceRayTest, TheNearestTriangleIsMet) {
    EXPECT_EQ(cast({.x = 10, .y = 6, .z = 4}, {.x = 10, .y = 0, .z = 4}).ground_type, 5);
    EXPECT_EQ(cast({.x = 10, .y = 6, .z = 4}, {.x = 10, .y = 3, .z = 4}).ground_type, 1);
}

// A ray from beyond any face of the grid into it is walked; so is one that leaves the grid along
// y or z alone.
TEST_F(CDemonRaytraceRayTest, RaysIntoTheGridFromAnySideAreWalked) {
    for (const auto &[start, end] : std::vector<std::pair<CVector3f, CVector3f>>{
             {{.x = 4, .y = -5, .z = 4}, {.x = 4, .y = 6, .z = 4}},
             {{.x = 4, .y = 6, .z = -5}, {.x = 4, .y = 6, .z = 4}},
             {{.x = 20, .y = 6, .z = 4}, {.x = 4, .y = 6, .z = 4}},
             {{.x = 4, .y = 20, .z = 4}, {.x = 4, .y = 6, .z = 4}},
             {{.x = 4, .y = 6, .z = 30}, {.x = 4, .y = 6, .z = 4}}}) {
        EXPECT_EQ(cast(start, end).ground_type, 1);
        EXPECT_FALSE(raytrace_.rayVoxelGridTest(start, end));
        EXPECT_FALSE(raytrace_.rayVoxelGridTest(end, start));
    }
}

// A walked ray that meets nothing reports ground type 1.
TEST_F(CDemonRaytraceRayTest, ARayThatMeetsNothingIsAMiss) {
    const SHit hit = cast({.x = 2, .y = 6, .z = 4}, {.x = 6, .y = 0, .z = 20});
    EXPECT_EQ(hit.along, -1.0F);
    EXPECT_EQ(hit.ground_type, 1);
    EXPECT_FALSE(raytrace_.rayVoxelGridTest({.x = 2, .y = 6, .z = 4}, {.x = 6, .y = 0, .z = 20}));
    EXPECT_EQ(cast({.x = 2, .y = 6, .z = 4}, {.x = 2, .y = 0, .z = 4}).ground_type, 1);
}

// A ray wholly to one side of the grid isn't walked, and reports no ground type.
TEST_F(CDemonRaytraceRayTest, ARayBesideTheGridIsntWalked) {
    for (const auto &[start, end] : std::vector<std::pair<CVector3f, CVector3f>>{
             {{.x = -5, .y = 4, .z = 4}, {.x = -1, .y = 0, .z = 4}},
             {{.x = 4, .y = -5, .z = 4}, {.x = 4, .y = -1, .z = 4}},
             {{.x = 4, .y = 4, .z = -5}, {.x = 4, .y = 0, .z = -1}},
             {{.x = 17, .y = 4, .z = 4}, {.x = 20, .y = 0, .z = 4}},
             {{.x = 4, .y = 17, .z = 4}, {.x = 4, .y = 20, .z = 4}},
             {{.x = 4, .y = 4, .z = 25}, {.x = 4, .y = 0, .z = 30}}}) {
        const SHit hit = cast(start, end);
        EXPECT_EQ(hit.along, -1.0F);
        EXPECT_EQ(hit.ground_type, kUntouched);
    }
}

// Two cells apart but too short to measure, a ray meets nothing.
TEST_F(CDemonRaytraceRayTest, ARayTooShortToMeasureMeetsNothing) {
    const SHit hit = cast({.x = -1e-30F, .y = 4, .z = 4}, {.x = 0, .y = 4, .z = 4});
    EXPECT_EQ(hit.along, -1.0F);
    EXPECT_EQ(hit.ground_type, kUntouched);
    EXPECT_FALSE(
        raytrace_.rayVoxelGridTest({.x = -1e-30F, .y = 4, .z = 4}, {.x = -2e-30F, .y = 4, .z = 4}));
}

// Across a grid of two cubes each way, rays every way along each diagonal walk it through.
TEST_F(CDemonRaytraceRayTest, DiagonalRaysWalkTheGridEveryWay) {
    load(geoFile(4, {.x = 2, .y = 2, .z = 2}, std::vector<SGeoCube>(8)));
    for (const auto &[start, end] : std::vector<std::pair<CVector3f, CVector3f>>{
             {{.x = 1, .y = 1, .z = 1}, {.x = 15, .y = 7, .z = 23}},
             {{.x = 15, .y = 7, .z = 23}, {.x = 1, .y = 1, .z = 1}},
             {{.x = 1, .y = 7, .z = 2}, {.x = 15, .y = 1, .z = 22}},
             {{.x = 15, .y = 1, .z = 1}, {.x = 1, .y = 6, .z = 23}},
             {{.x = 2, .y = 1, .z = 23}, {.x = 14, .y = 7, .z = 3}},
             {{.x = 1, .y = 1, .z = 1}, {.x = 1, .y = 3, .z = 40}}}) {
        EXPECT_EQ(cast(start, end).ground_type, 1);
        EXPECT_FALSE(raytrace_.rayVoxelGridTest(start, end));
    }
}

} // namespace
} // namespace nocturne::core
