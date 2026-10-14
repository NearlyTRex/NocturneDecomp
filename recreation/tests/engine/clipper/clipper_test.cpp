#include "engine/clipper/clipper.h"
#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;

TEST(EngineClipperFunctions, PublicInterface) {
    using Interpolator = void (*)(const SRenderVertex &, const SRenderVertex &, SRenderVertex &);
    static_assert(std::is_same_v<decltype(&interpolateVertexLeftClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexRightClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexBottomClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexTopClip), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexNearClip),
                                 void (*)(const SRenderVertex &, const SRenderVertex &, int,
                                          SRenderVertex &)>);
    static_assert(std::is_same_v<decltype(&interpolateVertexLeftClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexRightClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexBottomClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&interpolateVertexTopClipAdvanced), Interpolator>);
    static_assert(std::is_same_v<decltype(&clipAndRasterize), void (*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&clipPolygonToViewport), void (*)(int, int *)>);
}

constexpr int kMark = 7;

SRenderVertex makeVertex(int x, int y, int z, int scale) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x, .transformed_y = y, .transformed_z = z};
    vertex.u = 100 * scale;
    vertex.v = 200 * scale;
    vertex.r = 300 * scale;
    vertex.g = 400 * scale;
    vertex.b = 500 * scale;
    vertex.a = 600 * scale;
    return vertex;
}

// A vertex holding a mark in every field, to show which ones a clip writes.
SRenderVertex marked() {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = kMark,
                               .transformed_y = kMark,
                               .transformed_z = kMark,
                               .inv_z = kMark,
                               .screen_x = kMark,
                               .screen_y = kMark};
    vertex.u = kMark;
    vertex.v = kMark;
    vertex.r = kMark;
    vertex.g = kMark;
    vertex.b = kMark;
    vertex.a = kMark;
    return vertex;
}

void expectPoint(const SRenderVertex &vertex, int x, int y, int z) {
    EXPECT_EQ(vertex.projected_vertex.transformed_x, x);
    EXPECT_EQ(vertex.projected_vertex.transformed_y, y);
    EXPECT_EQ(vertex.projected_vertex.transformed_z, z);
    EXPECT_EQ(vertex.projected_vertex.screen_x, -1);
    EXPECT_EQ(vertex.projected_vertex.inv_z, kMark);
    EXPECT_EQ(vertex.projected_vertex.screen_y, kMark);
}

// Halfway along an edge from a vertex at zero: the colour, alpha and texture coordinates halve.
void expectBasicCarry(const SRenderVertex &vertex) {
    EXPECT_EQ(vertex.u, 50);
    EXPECT_EQ(vertex.v, 100);
    EXPECT_EQ(vertex.r, 150);
    EXPECT_EQ(vertex.a, 300);
    EXPECT_EQ(vertex.g, kMark);
    EXPECT_EQ(vertex.b, kMark);
}

void expectAdvancedCarry(const SRenderVertex &vertex) {
    EXPECT_EQ(vertex.u, 50);
    EXPECT_EQ(vertex.v, 100);
    EXPECT_EQ(vertex.r, 150);
    EXPECT_EQ(vertex.g, 200);
    EXPECT_EQ(vertex.b, 250);
    EXPECT_EQ(vertex.a, 300);
}

TEST(EngineClipperFunctions, LeftClipMeetsXEqualToTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexLeftClip(makeVertex(0, 0, 10, 0), makeVertex(20, 8, 10, 1), output);
    expectPoint(output, 10, 4, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, RightClipMeetsXEqualToMinusTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexRightClip(makeVertex(0, 0, 10, 0), makeVertex(-20, 8, 10, 1), output);
    expectPoint(output, -10, 4, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, BottomClipMeetsYEqualToTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexBottomClip(makeVertex(0, 0, 10, 0), makeVertex(8, 20, 10, 1), output);
    expectPoint(output, 4, 10, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, TopClipMeetsYEqualToMinusTheDepth) {
    SRenderVertex output = marked();
    interpolateVertexTopClip(makeVertex(0, 0, 10, 0), makeVertex(8, -20, 10, 1), output);
    expectPoint(output, 4, -10, 10);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, NearClipMeetsTheGivenDepth) {
    SRenderVertex output = marked();
    interpolateVertexNearClip(makeVertex(0, 0, 2, 0), makeVertex(20, 40, 22, 1), 12, output);
    expectPoint(output, 10, 20, 12);
    expectBasicCarry(output);
}

TEST(EngineClipperFunctions, TheAdvancedClipsCarryGreenAndBlueToo) {
    SRenderVertex output = marked();
    interpolateVertexLeftClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(20, 8, 10, 1), output);
    expectPoint(output, 10, 4, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexRightClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(-20, 8, 10, 1), output);
    expectPoint(output, -10, 4, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexBottomClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(8, 20, 10, 1), output);
    expectPoint(output, 4, 10, 10);
    expectAdvancedCarry(output);

    output = marked();
    interpolateVertexTopClipAdvanced(makeVertex(0, 0, 10, 0), makeVertex(8, -20, 10, 1), output);
    expectPoint(output, 4, -10, 10);
    expectAdvancedCarry(output);
}

// The outside vertex lying on the plane makes the fraction its largest, a step short of one.
TEST(EngineClipperFunctions, AnOutsideVertexOnThePlaneIsReachedJustShort) {
    SRenderVertex output = marked();
    interpolateVertexLeftClip(makeVertex(0, 0, 10, 0), makeVertex(100, 100, 100, 1), output);
    expectPoint(output, 99, 99, 99);
}

} // namespace
} // namespace nocturne::engine
