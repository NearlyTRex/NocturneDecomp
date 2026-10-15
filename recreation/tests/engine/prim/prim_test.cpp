#include "engine/prim/prim.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <array>
#include <span>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;

constexpr int kLargest = 0x7fffffff;
constexpr int kInverse = 1234;

TEST(EnginePrimFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&prepareDepthBuffer), void (*)(std::span<SRenderVertex>)>);
    static_assert(
        std::is_same_v<decltype(&normalizeTextureCoords), void (*)(std::span<SRenderVertex>)>);
    static_assert(std::is_same_v<decltype(&adjustNearPlaneTextureCoords),
                                 void (*)(std::span<SRenderVertex>)>);
    static_assert(std::is_same_v<decltype(&replaceWWithDepth), void (*)(std::span<SRenderVertex>)>);
    static_assert(std::is_same_v<decltype(&calculateTriangleWindingOrder),
                                 bool (*)(const SRenderVertex &, const SRenderVertex &,
                                          const SRenderVertex &, int)>);
    static_assert(std::is_same_v<decltype(&getTriangleWindingFromIndices1),
                                 bool (*)(std::span<const SRenderVertex>,
                                          const platform::SMRGLPrimitiveQuad &, int)>);
    static_assert(std::is_same_v<decltype(&getTriangleWindingFromPackedIndices),
                                 int (*)(platform::STrianglePackedIndices *)>);
    static_assert(
        std::is_same_v<decltype(&findEdgeInBuffer),
                       SSoftwareEdge *(*)(std::span<SSoftwareEdge>, int, const SSoftwareEdge *)>);
    static_assert(std::is_same_v<decltype(&CPrim::renderPolygonSoftware),
                                 void (CPrim::*)(std::span<SRenderVertex>, const SPolygonState &)>);
    static_assert(std::is_same_v<decltype(&CPrim::renderIndexedPolygonSoftware),
                                 void (CPrim::*)(std::span<SRenderVertex>, std::span<const int>,
                                                 const SPolygonState &)>);
    static_assert(std::is_same_v<decltype(&CPrim::renderScanlinePolygon),
                                 void (CPrim::*)(std::span<SRenderVertex>, const SPolygonState &)>);
    static_assert(std::is_same_v<decltype(&CPrim::renderIndexedPolygonAdvanced),
                                 void (CPrim::*)(std::span<SRenderVertex>, std::span<const int>,
                                                 const SPolygonState &)>);
}

SRenderVertex atDepth(int depth, int u = 0, int v = 0) {
    SRenderVertex vertex;
    vertex.projected_vertex.transformed_z = depth;
    vertex.projected_vertex.inv_z = kInverse;
    vertex.u = u;
    vertex.v = v;
    return vertex;
}

std::vector<int> getDepths(std::span<const SRenderVertex> vertices) {
    std::vector<int> depths;
    depths.reserve(vertices.size());
    for (const SRenderVertex &vertex : vertices) {
        depths.push_back(vertex.projected_vertex.transformed_z);
    }
    return depths;
}

SRenderVertex onScreen(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x;
    vertex.projected_vertex.screen_y = y;
    return vertex;
}

// Shifted down by 16, the depth of the first two is zero; a negative one is not.
TEST(EnginePrimFunctions, PreparingTheDepthGivesTheReciprocalAndTheLargestToTheNearest) {
    std::array vertices{atDepth(0), atDepth(15), atDepth(16), atDepth(-1), atDepth(100)};
    prepareDepthBuffer(vertices);
    EXPECT_EQ(getDepths(vertices), (std::vector{kLargest, kLargest, kInverse, kInverse, kInverse}));
}

TEST(EnginePrimFunctions, ReplacingWGivesTheReciprocalAndTheLargestAtNoDepth) {
    std::array vertices{atDepth(0), atDepth(1), atDepth(-5)};
    replaceWWithDepth(vertices);
    EXPECT_EQ(getDepths(vertices), (std::vector{kLargest, kInverse, kInverse}));
}

TEST(EnginePrimFunctions, NormalizingScalesByTheNearestDepth) {
    std::array vertices{atDepth(200, 1000, 600), atDepth(100, 1000, 600), atDepth(400, 40, 80)};
    normalizeTextureCoords(vertices);
    EXPECT_EQ(vertices[0].u, 500);
    EXPECT_EQ(vertices[0].v, 300);
    EXPECT_EQ(vertices[1].u, 1000);
    EXPECT_EQ(vertices[2].v, 20);
    EXPECT_EQ(getDepths(vertices), (std::vector{1 << 23, 1 << 24, 1 << 22}));
}

// The vertex at no depth is skipped, but still counts as the nearest.
TEST(EnginePrimFunctions, NormalizingLeavesAVertexAtNoDepth) {
    std::array vertices{atDepth(0, 7, 9), atDepth(100, 50, 60)};
    normalizeTextureCoords(vertices);
    EXPECT_EQ(vertices[0].u, 7);
    EXPECT_EQ(vertices[0].v, 9);
    EXPECT_EQ(vertices[1].u, 0);
    EXPECT_EQ(getDepths(vertices), (std::vector{0, 0}));
}

// -2 times 0x7fffffff over 1 needs 33 bits; the low 32 are kept.
TEST(EnginePrimFunctions, NormalizingKeepsTheLowBitsOfAnOversizedQuotient) {
    std::array vertices{atDepth(-200), atDepth(100, kLargest)};
    normalizeTextureCoords(vertices);
    EXPECT_EQ(vertices[1].u, 2);
}

TEST(EnginePrimFunctions, AdjustingTakesCoordinatesThroughTheReciprocalInSixteenths) {
    std::array vertices{atDepth(4096, 0x10000, -0x100), atDepth(257, 0x10000)};
    adjustNearPlaneTextureCoords(vertices);
    EXPECT_EQ(vertices[0].projected_vertex.transformed_z, kLargest / 256);
    EXPECT_EQ(vertices[0].u, 32767);
    EXPECT_EQ(vertices[0].v, -128);
    EXPECT_EQ(vertices[1].projected_vertex.transformed_z, kLargest / 16);
    EXPECT_EQ(vertices[1].u, 524287);
}

TEST(EnginePrimFunctions, AdjustingHoldsTheReciprocalAtItsLargestNearTheEye) {
    std::array vertices{atDepth(256, 0x10000), atDepth(-40)};
    adjustNearPlaneTextureCoords(vertices);
    EXPECT_EQ(getDepths(vertices), (std::vector{kLargest, kLargest}));
    EXPECT_EQ(vertices[0].u, 8388607);
}

TEST(EnginePrimFunctions, CullingModeOneKeepsClockwiseTriangles) {
    const SRenderVertex v0 = onScreen(0, 0);
    const SRenderVertex v1 = onScreen(10, 0);
    const SRenderVertex v2 = onScreen(0, 10);
    EXPECT_TRUE(calculateTriangleWindingOrder(v0, v1, v2, 1));
    EXPECT_FALSE(calculateTriangleWindingOrder(v0, v2, v1, 1));
}

// The fourth corner plays no part.
TEST(EnginePrimFunctions, APolygonsWindingIsItsFirstThreeCornersInTheBuffer) {
    const std::array<SRenderVertex, 4> buffer{onScreen(0, 10), onScreen(0, 0), onScreen(10, 0),
                                              onScreen(5, 5)};
    const auto polygon = [](int a, int b, int c) {
        return platform::SMRGLPrimitiveQuad{.surface_normal = {},
                                            .vertices = {{.vertex_index = a},
                                                         {.vertex_index = b},
                                                         {.vertex_index = c},
                                                         {.vertex_index = 3}}};
    };
    EXPECT_TRUE(getTriangleWindingFromIndices1(buffer, polygon(1, 2, 0), 1));
    EXPECT_FALSE(getTriangleWindingFromIndices1(buffer, polygon(1, 0, 2), 1));
    EXPECT_TRUE(getTriangleWindingFromIndices1(buffer, polygon(1, 0, 2), 2));
}

TEST(EnginePrimFunctions, AnyOtherCullingModeKeepsAnticlockwiseTriangles) {
    const SRenderVertex v0 = onScreen(0, 0);
    const SRenderVertex v1 = onScreen(10, 0);
    const SRenderVertex v2 = onScreen(0, 10);
    EXPECT_FALSE(calculateTriangleWindingOrder(v0, v1, v2, 0));
    EXPECT_TRUE(calculateTriangleWindingOrder(v0, v2, v1, 2));
}

TEST(EnginePrimFunctions, ADegenerateTriangleIsNeverKept) {
    const SRenderVertex v0 = onScreen(0, 0);
    const SRenderVertex v1 = onScreen(5, 5);
    const SRenderVertex v2 = onScreen(10, 10);
    EXPECT_FALSE(calculateTriangleWindingOrder(v0, v1, v2, 1));
    EXPECT_FALSE(calculateTriangleWindingOrder(v0, v1, v2, 0));
}

// 16.16 screen positions make products past 32 bits.
TEST(EnginePrimFunctions, WindingComparesTheProductsInSixtyFourBits) {
    EXPECT_TRUE(calculateTriangleWindingOrder(onScreen(0, 0), onScreen(600 << 16, 0),
                                              onScreen(0, 400 << 16), 1));
}

} // namespace
} // namespace nocturne::engine
