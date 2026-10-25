#include "common/render/renderstate.h"
#include "core/xform/xform.h"
#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <span>
#include <vector>

namespace nocturne::core {
namespace {

using platform::SRenderVertex;

struct SEyePoint {
    int x = 0;
    int y = 0;
    int z = 0;

    bool operator==(const SEyePoint &) const = default;
};

// A vertex the projection marked as outside the view, as any one of them sends a polygon through
// the clip.
SRenderVertex outside(int x, int y, int z, int r = 0) {
    SRenderVertex vertex;
    vertex.projected_vertex = {
        .transformed_x = x, .transformed_y = y, .transformed_z = z, .screen_x = -1};
    vertex.r = r;
    return vertex;
}

std::vector<SEyePoint> getPoints(const std::vector<SRenderVertex> &polygon) {
    std::vector<SEyePoint> points;
    points.reserve(polygon.size());
    for (const SRenderVertex &vertex : polygon) {
        points.push_back({.x = vertex.projected_vertex.transformed_x,
                          .y = vertex.projected_vertex.transformed_y,
                          .z = vertex.projected_vertex.transformed_z});
    }
    return points;
}

std::vector<SRenderVertex> clip(const std::vector<SRenderVertex> &polygon,
                                std::uint32_t render_flags = 0) {
    std::vector<int> indices;
    indices.reserve(polygon.size());
    for (std::size_t i = 0; i < polygon.size(); ++i) {
        indices.push_back(static_cast<int>(i));
    }
    std::vector<SRenderVertex> clipped{outside(1, 2, 3)};
    transformAndClipGeometry(polygon, indices, render_flags, clipped);
    return clipped;
}

TEST(XformClip, APolygonAllInViewIsCopiedInIndexOrder) {
    std::array<SRenderVertex, 3> vertices{};
    vertices[0].projected_vertex.transformed_x = 10;
    vertices[2].projected_vertex.transformed_x = 30;
    const std::array<int, 2> indices{2, 0};
    std::vector<SRenderVertex> clipped;
    transformAndClipGeometry(vertices, indices, 0, clipped);
    ASSERT_EQ(clipped.size(), 2U);
    EXPECT_EQ(clipped[0].projected_vertex.transformed_x, 30);
    EXPECT_EQ(clipped[1].projected_vertex.transformed_x, 10);
}

TEST(XformClip, AnEdgeAcrossASideIsCutWhereItMeetsIt) {
    const std::vector<SRenderVertex> clipped =
        clip({outside(0, 0, 10), outside(20, 0, 10), outside(0, 5, 10)});
    EXPECT_EQ(getPoints(clipped), (std::vector<SEyePoint>{
                                      {.x = 0, .y = 0, .z = 10},
                                      {.x = 10, .y = 0, .z = 10},
                                      {.x = 10, .y = 2, .z = 10},
                                      {.x = 0, .y = 5, .z = 10},
                                  }));
}

TEST(XformClip, SmoothShadingCarriesRedToTheCutPoints) {
    const std::vector<SRenderVertex> clipped =
        clip({outside(0, 0, 10, 0), outside(20, 0, 10, 100), outside(0, 5, 10, 200)},
             common::kRenderSmooth);
    ASSERT_EQ(clipped.size(), 4U);
    EXPECT_EQ(clipped[1].r, 50);
    EXPECT_EQ(clipped[2].r, 150);
    EXPECT_EQ(clipped[2].projected_vertex.screen_x, -1);
}

TEST(XformClip, FlatShadingLeavesTheCutPointsRedAtZero) {
    const std::vector<SRenderVertex> clipped =
        clip({outside(0, 0, 10, 0), outside(20, 0, 10, 100), outside(0, 5, 10, 200)});
    ASSERT_EQ(clipped.size(), 4U);
    EXPECT_EQ(clipped[1].r, 0);
    EXPECT_EQ(clipped[2].r, 0);
    EXPECT_EQ(clipped[3].r, 200);
}

TEST(XformClip, APolygonPastAnySideLeavesNone) {
    EXPECT_TRUE(clip({outside(20, 0, 10), outside(15, 0, 10), outside(30, 5, 10)}).empty());
    EXPECT_TRUE(clip({outside(-20, 0, 10), outside(-15, 0, 10), outside(-30, 5, 10)}).empty());
    EXPECT_TRUE(clip({outside(0, 20, 10), outside(1, 15, 10), outside(2, 30, 10)}).empty());
    EXPECT_TRUE(clip({outside(0, -20, 10), outside(1, -15, 10), outside(2, -30, 10)}).empty());
}

TEST(XformClip, TwoVerticesOutsideTheViewLeaveNone) {
    EXPECT_TRUE(clip({outside(0, 0, 10), outside(1, 1, 10)}).empty());
}

TEST(XformClip, ACutPointAtNoDepthGoesToTheCentreOneStepOut) {
    EXPECT_EQ(getPoints(clip({outside(2, 3, 5), outside(-5, -1, -5), outside(9, -5, 12)})),
              (std::vector<SEyePoint>{
                  {.x = 2, .y = 3, .z = 5},
                  {.x = 0, .y = 1, .z = 1},
                  {.x = 0, .y = 0, .z = 1},
                  {.x = 2, .y = -3, .z = 3},
                  {.x = 9, .y = -5, .z = 12},
              }));
}

// The y passes chop a point on the left side a step past it.
TEST(XformClip, AnXChoppedPastTheLeftSideIsPulledBack) {
    EXPECT_EQ(getPoints(clip({outside(-8, 6, 12), outside(-10, -4, -9), outside(3, 12, 2)})),
              (std::vector<SEyePoint>{
                  {.x = -8, .y = 6, .z = 12},
                  {.x = -8, .y = 4, .z = 8},
                  {.x = -5, .y = 5, .z = 5},
                  {.x = -5, .y = 8, .z = 8},
              }));
}

// Sums that wrap can leave x past the right side.
TEST(XformClip, AnXWrappedPastTheRightSideIsPulledBack) {
    EXPECT_EQ(
        getPoints(clip({outside(-627980133, 1983849424, 1), outside(130376819, -1, -2147483392),
                        outside(1731630531, 0, 1766854345)})),
        (std::vector<SEyePoint>{
            {.x = -2147483396, .y = 2147483396, .z = -2147483396},
            {.x = 1731630531, .y = 0, .z = 1766854345},
            {.x = -761258608, .y = 761258608, .z = -761258608},
        }));
}

TEST(XformClip, EachPlaneInterpolatorCutsItsOwnSide) {
    SRenderVertex vertex_out;
    clipInterpolateRightPlane(outside(0, 0, 10), outside(20, 8, 10), 0, vertex_out);
    EXPECT_EQ(getPoints({vertex_out}), (std::vector<SEyePoint>{{.x = 10, .y = 4, .z = 10}}));
    clipInterpolateLeftPlane(outside(0, 0, 10), outside(-20, 8, 10), 0, vertex_out);
    EXPECT_EQ(getPoints({vertex_out}), (std::vector<SEyePoint>{{.x = -10, .y = 4, .z = 10}}));
    clipInterpolateTopPlane(outside(0, 0, 10), outside(8, 20, 10), 0, vertex_out);
    EXPECT_EQ(getPoints({vertex_out}), (std::vector<SEyePoint>{{.x = 4, .y = 10, .z = 10}}));
    clipInterpolateBottomPlane(outside(0, 0, 10), outside(8, -20, 10), 0, vertex_out);
    EXPECT_EQ(getPoints({vertex_out}), (std::vector<SEyePoint>{{.x = 4, .y = -10, .z = 10}}));
}

TEST(XformClip, APlaneInterpolatorLeavesWhatItDoesNotCarry) {
    const SRenderVertex vertex_a = outside(0, 0, 10, 0);
    SRenderVertex vertex_b = outside(20, 8, 10, 100);
    vertex_b.u = 100;
    vertex_b.g = 100;
    SRenderVertex vertex_out;
    vertex_out.u = 7;
    vertex_out.g = 7;
    vertex_out.r = 7;
    clipInterpolateRightPlane(vertex_a, vertex_b, 0, vertex_out);
    EXPECT_EQ(vertex_out.r, 7);
    clipInterpolateRightPlane(vertex_a, vertex_b, common::kRenderSmooth, vertex_out);
    EXPECT_EQ(vertex_out.r, 50);
    EXPECT_EQ(vertex_out.u, 7);
    EXPECT_EQ(vertex_out.g, 7);
}

} // namespace
} // namespace nocturne::core
