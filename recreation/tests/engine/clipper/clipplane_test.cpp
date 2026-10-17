#include "engine/clipper/clipplane.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <vector>

namespace nocturne::engine {
namespace {

using platform::SProjectedVertex;
using platform::SRenderVertex;

constexpr int kIntMin = -0x7fffffff - 1;

TEST(ClipPlane, APointOnAPlaneIsPastIt) {
    EXPECT_TRUE(isPastPlane({.transformed_x = 10, .transformed_z = 10}, kPositiveXPlane));
    EXPECT_TRUE(isPastPlane({.transformed_x = -10, .transformed_z = 10}, kNegativeXPlane));
    EXPECT_TRUE(isPastPlane({.transformed_y = 10, .transformed_z = 10}, kPositiveYPlane));
    EXPECT_TRUE(isPastPlane({.transformed_y = -10, .transformed_z = 10}, kNegativeYPlane));
}

TEST(ClipPlane, APointWithinTheDepthIsInsideEverySide) {
    const SProjectedVertex point{.transformed_x = 9, .transformed_y = -9, .transformed_z = 10};
    EXPECT_FALSE(isPastPlane(point, kPositiveXPlane));
    EXPECT_FALSE(isPastPlane(point, kNegativeXPlane));
    EXPECT_FALSE(isPastPlane(point, kPositiveYPlane));
    EXPECT_FALSE(isPastPlane(point, kNegativeYPlane));
}

// Negating the most negative depth leaves it, so only the most negative x is past minus it.
TEST(ClipPlane, MinusTheMostNegativeDepthWraps) {
    EXPECT_TRUE(isPastPlane({.transformed_x = kIntMin, .transformed_z = kIntMin}, kNegativeXPlane));
    EXPECT_FALSE(isPastPlane({.transformed_x = 0, .transformed_z = kIntMin}, kNegativeXPlane));
}

TEST(ClipPlane, AClipReturnsHowFarAlongTheEdgeItMetThePlane) {
    SProjectedVertex output;
    EXPECT_EQ(clipEdgeToPlane({.transformed_z = 10}, {.transformed_x = 30, .transformed_z = 10},
                              kPositiveXPlane, output),
              715827882); // A third, in 1.31.
    EXPECT_EQ(output.transformed_x, 10);
    EXPECT_EQ(output.transformed_z, 10);
}

SRenderVertex corner(int x, int z) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x, .transformed_z = z};
    return vertex;
}

// Marks each cut with the x of the corner inside and minus the x of the one outside.
void markCut(const SRenderVertex &inside, const SRenderVertex &outside, SRenderVertex &cut) {
    cut.u = inside.projected_vertex.transformed_x;
    cut.v = -outside.projected_vertex.transformed_x;
}

// Corner 1 is in view and corners 2 and 3 past the right side.
TEST(ClipPlane, APassKeepsCornersInsideAndCutsEachEdgeAcross) {
    const std::vector<SRenderVertex> polygon{corner(1, 10), corner(20, 10), corner(30, 10)};
    std::vector<SRenderVertex> clipped;
    clipPolygonToPlane(polygon, kPositiveXPlane, markCut, 0, clipped);
    ASSERT_EQ(clipped.size(), 3U);
    EXPECT_EQ(clipped[0].projected_vertex.transformed_x, 1);
    EXPECT_EQ(clipped[1].u, 1);
    EXPECT_EQ(clipped[1].v, -20);
    EXPECT_EQ(clipped[2].u, 1);
    EXPECT_EQ(clipped[2].v, -30);
}

TEST(ClipPlane, APassStartsFromTheCornerItIsGiven) {
    const std::vector<SRenderVertex> polygon{corner(1, 10), corner(20, 10), corner(30, 10)};
    std::vector<SRenderVertex> clipped;
    clipPolygonToPlane(polygon, kPositiveXPlane, markCut, 2, clipped);
    ASSERT_EQ(clipped.size(), 3U);
    EXPECT_EQ(clipped[0].v, -30);
    EXPECT_EQ(clipped[1].projected_vertex.transformed_x, 1);
}

TEST(ClipPlane, APassCanTestCornersItsOwnWay) {
    const std::vector<SRenderVertex> polygon{corner(1, 10), corner(2, 99), corner(3, 10)};
    std::vector<SRenderVertex> clipped;
    clipPolygonToPlane(
        polygon,
        [](const SRenderVertex &vertex) { return vertex.projected_vertex.transformed_z > 50; },
        markCut, 0, clipped);
    ASSERT_EQ(clipped.size(), 4U);
    EXPECT_EQ(clipped[1].v, -2);
}

TEST(ClipPlane, APointAtNoDepthGoesToTheCentreOneStepOut) {
    SProjectedVertex point{.transformed_x = 5, .transformed_y = 6, .transformed_z = 0};
    pullOntoView(point);
    EXPECT_EQ(point.transformed_x, 0);
    EXPECT_EQ(point.transformed_y, 0);
    EXPECT_EQ(point.transformed_z, 1);
}

TEST(ClipPlane, AnXPastASideIsPulledOntoIt) {
    SProjectedVertex right{.transformed_x = 12, .transformed_y = 20, .transformed_z = 10};
    pullOntoView(right);
    EXPECT_EQ(right.transformed_x, 10);
    EXPECT_EQ(right.transformed_y, 20);
    SProjectedVertex left{.transformed_x = -12, .transformed_z = 10};
    pullOntoView(left);
    EXPECT_EQ(left.transformed_x, -10);
    SProjectedVertex inside{.transformed_x = 3, .transformed_z = 10};
    pullOntoView(inside);
    EXPECT_EQ(inside.transformed_x, 3);
}

} // namespace
} // namespace nocturne::engine
