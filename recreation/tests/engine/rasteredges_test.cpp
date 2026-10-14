#include "engine/polygonstate.h"
#include "engine/rasteredges.h"
#include "engine/softwareedge.h"
#include "platform/rendervertex.h"

#include <gtest/gtest.h>

#include <array>
#include <limits>
#include <vector>

namespace nocturne::engine::raster {
namespace {

using platform::SRenderVertex;

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    return vertex;
}

// Copies the values onto the edge, so a test can see which side each came from.
void rampToTop(const SEdgeSlope &, const SRenderVertex &top, const SRenderVertex &,
               SSoftwareEdge &edge) {
    edge.x_current = top.projected_vertex.screen_x;
}

TEST(EngineRasterEdges, CornersArePickedFromTheBufferByIndex) {
    std::vector<SRenderVertex> buffer{at(0, 0), at(1, 1), at(2, 2)};
    const std::vector<SRenderVertex *> corners = getCorners(buffer, std::array{2, 0});
    EXPECT_EQ(corners, (std::vector<SRenderVertex *>{&buffer[2], buffer.data()}));
}

TEST(EngineRasterEdges, CullingModeZeroKeepsEveryTriangle) {
    const SRenderVertex v0 = at(10, 2);
    const SRenderVertex v1 = at(10, 6);
    const SRenderVertex v2 = at(14, 6);
    EXPECT_FALSE(isBackFacing(v0, v1, v2, 0));
    EXPECT_TRUE(isBackFacing(v0, v1, v2, 1));
    EXPECT_FALSE(isBackFacing(v0, v1, v2, 2));
}

// The level bottom gives no edge, and each edge runs from its higher corner.
TEST(EngineRasterEdges, EdgesSkipLevelSidesAndRunDownTheScreen) {
    const std::vector<SRenderVertex> triangle{at(10, 2), at(10, 6), at(14, 6)};
    const SEdgeList list = buildEdges(getCorners(triangle), rampToTop);
    ASSERT_EQ(list.edges.size(), 2U);
    EXPECT_EQ(list.first_row, 2);
    EXPECT_EQ(list.edges[1].y_min, 2);
    EXPECT_EQ(list.edges[1].y_max, 6);
    EXPECT_EQ(list.edges[1].x_current, 10 << 16);
}

TEST(EngineRasterEdges, WithNoEdgesTheFirstRowStaysAtTheCeiling) {
    const std::vector<SRenderVertex> line{at(0, 3), at(9, 3)};
    EXPECT_EQ(buildEdges(getCorners(line), rampToTop).first_row, kFirstRowCeiling);
}

TEST(EngineRasterEdges, RedGoesDownADepthEdgeOnlyWhenAsked) {
    const SRenderVertex top = at(0, 0);
    SRenderVertex bottom = at(0, 4);
    bottom.r = 0x40000;
    const SEdgeSlope slope = getEdgeSlope(0, 4 << 16);
    SSoftwareEdge plain;
    rampDepthEdge(slope, top, bottom, false, plain);
    stepDepthEdge(plain, false);
    EXPECT_EQ(plain.red_current, 0);
    SSoftwareEdge lit;
    rampDepthEdge(slope, top, bottom, true, lit);
    stepDepthEdge(lit, true);
    EXPECT_EQ(lit.red_current, 65531 + 65532);
}

class CWalkScanlinesTest : public ::testing::Test {
protected:
    // A rectangle's two sides from row 0 to row 4: the left side found first.
    static SEdgeList getRectangle() {
        const std::vector<SRenderVertex> corners{at(0, 0), at(0, 4), at(8, 4), at(8, 0)};
        return buildEdges(getCorners(corners), rampToTop);
    }

    void walk(SEdgeList &list, ERowStop stop) {
        walkScanlines(
            list, std::numeric_limits<int>::max(), [](SSoftwareEdge &) {},
            [this](const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
                rows_.push_back({y, left.x_current, right.x_current});
                return true;
            },
            stop);
    }

    std::vector<std::array<int, 3>> rows_;
};

TEST_F(CWalkScanlinesTest, TheSecondEdgeFoundIsTheLeft) {
    SEdgeList list = getRectangle();
    walk(list, ERowStop::Honoured);
    EXPECT_EQ(rows_, (std::vector<std::array<int, 3>>{{0, 8 << 16, 0}}));
}

TEST_F(CWalkScanlinesTest, AStopIsIgnoredUnlessHonoured) {
    SEdgeList list = getRectangle();
    walk(list, ERowStop::Ignored);
    EXPECT_EQ(rows_.size(), 4U);
}

} // namespace
} // namespace nocturne::engine::raster
