#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/prim/prim.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

// One scanline call: the row, and each edge's x where it was drawn.
struct SRowCall {
    int y = 0;
    int left_x = 0;
    int right_x = 0;
    int left_depth = 0;
    int left_green = 0;

    bool operator==(const SRowCall &) const = default;
};

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    return vertex;
}

class CPrimRasterTest : public C2dFixture {
protected:
    void SetUp() override {
        two_d_.setupViewportAndClipping(0, 0, 63, 15);
        state_.draw_scanline = [this](const SSoftwareEdge &left, const SSoftwareEdge &right,
                                      int y) {
            rows_.push_back({.y = y,
                             .left_x = left.x_current,
                             .right_x = right.x_current,
                             .left_depth = left.depth_current,
                             .left_green = left.green_current});
        };
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(screen_rows_)));
        ON_CALL(screen_, getColorTable16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(color_table16_)));
        ON_CALL(screen_, getColorChannels()).WillByDefault(ReturnRef(channels_));
        ON_CALL(renderer_, init(_)).WillByDefault(Return(1));
        ON_CALL(renderer_, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
        ON_CALL(renderer_, lockFrame()).WillByDefault(Return(1));
        ON_CALL(renderer_, unlockFrame()).WillByDefault(Return(1));
    }

    void startRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.setResolutionAndColorTable(4, 1, 32), 1);
    }

    // The first vertex's depth after the triangle is drawn with every depth 0x1000 and every
    // reciprocal 77.
    int getDepthAfterPreprocessing(int mode) {
        std::vector<SRenderVertex> triangle = getTriangle();
        for (SRenderVertex &vertex : triangle) {
            vertex.projected_vertex.transformed_z = 0x1000;
            vertex.projected_vertex.inv_z = 77;
        }
        state_.mode.vertex_preprocess_mode = mode;
        prim_.renderPolygonSoftware(triangle, state_);
        return triangle[0].projected_vertex.transformed_z;
    }

    // A right triangle: a vertical side at x 10 from row 2 to row 6, a level bottom, and a
    // slope back up from x 14.
    static std::vector<SRenderVertex> getTriangle() {
        return {at(10, 2), at(10, 6), at(14, 6)};
    }

    std::vector<SRowCall> rows_;
    SPolygonState state_;
    std::array<std::uint32_t, 4> screen_row_{};
    std::array<void *, 1> screen_rows_{screen_row_.data()};
    std::array<std::uint16_t, 256> color_table16_{};
    SColorChannels channels_;
    NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, texture_};
    CPrim prim_{special_, two_d_, three_d_, texture_};
};

TEST(EnginePrimFindEdge, FindsTheFirstEdgeStartingOnARowButTheOneExcluded) {
    std::array<SSoftwareEdge, 3> edges{SSoftwareEdge{.y_min = 2}, SSoftwareEdge{.y_min = 5},
                                       SSoftwareEdge{.y_min = 2}};
    EXPECT_EQ(findEdgeInBuffer(edges, 2, nullptr), edges.data());
    EXPECT_EQ(findEdgeInBuffer(edges, 2, edges.data()), &edges[2]);
    EXPECT_EQ(findEdgeInBuffer(edges, 3, nullptr), nullptr);
}

// The vertical side's x never moves; the slope gains its width over the height, 65532 a row in
// 16.16, starting half a row in.
TEST_F(CPrimRasterTest, ATriangleIsDrawnARowAtATimeDownToItsBottom) {
    std::vector<SRenderVertex> triangle = getTriangle();
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_EQ(rows_, (std::vector<SRowCall>{{.y = 2, .left_x = 720891, .right_x = 10 << 16},
                                            {.y = 3, .left_x = 786423, .right_x = 10 << 16},
                                            {.y = 4, .left_x = 851955, .right_x = 10 << 16},
                                            {.y = 5, .left_x = 917487, .right_x = 10 << 16}}));
}

TEST_F(CPrimRasterTest, APolygonOnOneRowDrawsNothing) {
    std::vector<SRenderVertex> sliver{at(1, 3), at(5, 3), at(9, 3)};
    prim_.renderPolygonSoftware(sliver, state_);
    EXPECT_TRUE(rows_.empty());
}

// A vertex part way down one side ends that side's first edge, and the next edge starting on
// that row carries on.
TEST_F(CPrimRasterTest, AnEdgeEndingPartWayIsReplacedByTheNext) {
    std::vector<SRenderVertex> quad{at(10, 0), at(4, 3), at(10, 6), at(16, 3)};
    prim_.renderPolygonSoftware(quad, state_);
    // Without the replacement the rows would stop at 3, where both first edges end.
    ASSERT_EQ(rows_.size(), 6U);
    EXPECT_EQ(rows_[0].y, 0);
    EXPECT_EQ(rows_[5].y, 5);
}

TEST_F(CPrimRasterTest, NoRowIsDrawnAtOrPastTheScanlineLimit) {
    std::vector<SRenderVertex> tall{at(10, 1195), at(10, 1210), at(14, 1210)};
    prim_.renderPolygonSoftware(tall, state_);
    ASSERT_FALSE(rows_.empty());
    EXPECT_EQ(rows_.front().y, 1195);
    EXPECT_EQ(rows_.back().y, 1199);
}

TEST_F(CPrimRasterTest, CullingDropsATriangleFacingAway) {
    std::vector<SRenderVertex> triangle = getTriangle();
    three_d_.setCullingMode(1);
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_TRUE(rows_.empty());
    three_d_.setCullingMode(2);
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_EQ(rows_.size(), 4U);
}

// A polygon is kept if any triangle of its fan faces the camera.
TEST_F(CPrimRasterTest, CullingKeepsAPolygonWithAnyTriangleFacing) {
    // The fan (0, 1, 2) faces away under mode 1, and (0, 2, 3) faces.
    std::vector<SRenderVertex> quad{at(10, 0), at(10, 6), at(14, 6), at(4, 3)};
    three_d_.setCullingMode(1);
    prim_.renderPolygonSoftware(quad, state_);
    EXPECT_FALSE(rows_.empty());
}

TEST_F(CPrimRasterTest, AVertexLeftByTheClipIsProjectedFirst) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[0].projected_vertex = {
        .transformed_x = -100, .transformed_y = 100, .transformed_z = 100, .screen_x = -1};
    state_.vertex_processing = true;
    prim_.renderPolygonSoftware(triangle, state_);
    // Half width 31 left of the centre at 32, a row past half height 7 above the centre at 8.
    EXPECT_EQ(triangle[0].projected_vertex.screen_x, 1 << 16);
    EXPECT_EQ(triangle[0].projected_vertex.screen_y, 1 << 16);
    EXPECT_EQ(triangle[0].projected_vertex.inv_z, 0x7fffffff / 100);
}

TEST_F(CPrimRasterTest, WithoutVertexProcessingNothingIsProjected) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[1].projected_vertex.screen_x = -(1 << 16);
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_EQ(triangle[1].projected_vertex.screen_x, -(1 << 16));
}

TEST_F(CPrimRasterTest, PreprocessingModesOneToThreeRunTheirHelpers) {
    EXPECT_EQ(getDepthAfterPreprocessing(0), 0x1000);
    EXPECT_EQ(getDepthAfterPreprocessing(1), 77);
    EXPECT_EQ(getDepthAfterPreprocessing(2), 1 << 24);
    EXPECT_EQ(getDepthAfterPreprocessing(3), 0x7fffffff / 0x100);
}

TEST_F(CPrimRasterTest, PreprocessingModesFourToSixRunTheirHelpers) {
    EXPECT_EQ(getDepthAfterPreprocessing(4), 0x1000);
    EXPECT_EQ(getDepthAfterPreprocessing(5), 1 << 24);
    EXPECT_EQ(getDepthAfterPreprocessing(6), 77);
}

// Under a pixel tall, an edge on two rows gets no gradients and starts where its top is.
TEST_F(CPrimRasterTest, AnEdgeUnderAPixelTallIsNotSloped) {
    std::vector<SRenderVertex> triangle{at(0, 0), at(10, 0), at(0, 4)};
    triangle[0].projected_vertex.screen_y = 0x1ffff;
    triangle[1].projected_vertex.screen_y = 0x20001;
    prim_.renderPolygonSoftware(triangle, state_);
    ASSERT_FALSE(rows_.empty());
    EXPECT_EQ(rows_.front().y, 1);
    EXPECT_EQ(rows_.front().right_x, 0);
}

// Concave: the left side's first edge ends at a bottom corner with nothing below it, so the
// rows stop there though the right side goes on.
TEST_F(CPrimRasterTest, AConcavePolygonStopsWhereASideEndsWithNothingBelow) {
    std::vector<SRenderVertex> notched{at(0, 0), at(10, 0), at(10, 10), at(5, 3), at(0, 6)};
    prim_.renderPolygonSoftware(notched, state_);
    ASSERT_EQ(rows_.size(), 6U);
    EXPECT_EQ(rows_.back().y, 5);
}

TEST_F(CPrimRasterTest, WithTheRendererOnThePolygonGoesToIt) {
    startRenderer();
    std::vector<SRenderVertex> triangle = getTriangle();
    state_.mode.render_flags = common::kRenderTextured;
    EXPECT_CALL(renderer_, drawPolygon(triangle.data(), 3, common::kRenderTextured))
        .WillOnce(Return(1));
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CPrimRasterTest, WithTexturesOffTheRendererIsPassedOver) {
    startRenderer();
    texture_.textures_disabled = true;
    std::vector<SRenderVertex> triangle = getTriangle();
    EXPECT_CALL(renderer_, drawPolygon(_, _, _)).Times(0);
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_EQ(rows_.size(), 4U);
}

TEST_F(CPrimRasterTest, AnIndexedPolygonReadsItsCornersFromTheBuffer) {
    std::vector<SRenderVertex> buffer{at(0, 0), at(14, 6), at(10, 6), at(10, 2)};
    const std::array<int, 3> indices{3, 2, 1};
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_EQ(rows_.size(), 4U);
    EXPECT_EQ(rows_.front().y, 2);
}

// With preprocessing 1 the edges take the reciprocal depth, which the corners already hold.
TEST_F(CPrimRasterTest, AnIndexedPolygonTakesTheReciprocalDepthForModeOne) {
    std::vector<SRenderVertex> buffer = getTriangle();
    for (SRenderVertex &vertex : buffer) {
        vertex.projected_vertex.transformed_z = 5;
        vertex.projected_vertex.inv_z = 900;
    }
    const std::array<int, 3> indices{0, 1, 2};
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_EQ(rows_.front().left_depth, 5);
    rows_.clear();
    state_.mode.vertex_preprocess_mode = 1;
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_EQ(rows_.front().left_depth, 900);
}

// The indexed path tests each run of three corners: here (1, 2, 3) faces under mode 1 though
// neither triangle of the fan from corner 0 does.
TEST_F(CPrimRasterTest, AnIndexedPolygonCullsAStripNotAFan) {
    std::vector<SRenderVertex> buffer{at(0, 0), at(0, 4), at(4, 4), at(9, 5)};
    const std::array<int, 4> indices{0, 1, 2, 3};
    three_d_.setCullingMode(1);
    std::vector<SRenderVertex> plain = buffer;
    prim_.renderPolygonSoftware(plain, state_);
    EXPECT_TRUE(rows_.empty());
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_FALSE(rows_.empty());
}

TEST_F(CPrimRasterTest, AnIndexedPolygonFacingAwayIsCulled) {
    std::vector<SRenderVertex> buffer = getTriangle();
    const std::array<int, 3> indices{0, 1, 2};
    three_d_.setCullingMode(1);
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CPrimRasterTest, WithTheRendererOnAnIndexedPolygonGoesToIt) {
    startRenderer();
    std::vector<SRenderVertex> buffer = getTriangle();
    const std::array<int, 3> indices{2, 1, 0};
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, 0))
        .WillOnce([&buffer](SRenderVertex **corners, int, int) {
            EXPECT_EQ(corners[0], &buffer[2]);
            EXPECT_EQ(corners[2], buffer.data());
            return 1;
        });
    prim_.renderIndexedPolygonSoftware(buffer, indices, state_);
    EXPECT_TRUE(rows_.empty());
}

// The slope from (10, 2) green 0 to (14, 6) green 0x40000 is the left edge: it gains 65532 a
// row, and starts most of a row's worth in, as x does.
TEST_F(CPrimRasterTest, TheAdvancedRasteriserCarriesGreenAndBlueDownTheEdges) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[2].g = 0x40000;
    prim_.renderScanlinePolygon(triangle, state_);
    ASSERT_EQ(rows_.size(), 4U);
    EXPECT_EQ(rows_[0].left_green, 65531);
    EXPECT_GT(rows_[1].left_green, rows_[0].left_green);
}

TEST_F(CPrimRasterTest, TheSimpleRasteriserLeavesGreenAndBlueAlone) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[2].g = 0x40000;
    prim_.renderPolygonSoftware(triangle, state_);
    EXPECT_EQ(rows_[1].left_green, 0);
}

TEST_F(CPrimRasterTest, TheAdvancedRasteriserRunsPastTheScanlineLimit) {
    std::vector<SRenderVertex> tall{at(10, 1195), at(10, 1210), at(14, 1210)};
    prim_.renderScanlinePolygon(tall, state_);
    ASSERT_FALSE(rows_.empty());
    EXPECT_EQ(rows_.back().y, 1209);
}

// Each corner is normalised on its own, so its depth becomes 1 in 8.24; the simple indexed
// rasteriser leaves the buffer alone.
TEST_F(CPrimRasterTest, TheAdvancedIndexedRasteriserPreprocessesEachCornerInTheBuffer) {
    std::vector<SRenderVertex> buffer = getTriangle();
    buffer[0].projected_vertex.transformed_z = 100;
    buffer[1].projected_vertex.transformed_z = 400;
    buffer[2].projected_vertex.transformed_z = 900;
    const std::array<int, 3> indices{0, 1, 2};
    state_.mode.vertex_preprocess_mode = 2;
    std::vector<SRenderVertex> simple = buffer;
    prim_.renderIndexedPolygonSoftware(simple, indices, state_);
    EXPECT_EQ(simple[1].projected_vertex.transformed_z, 400);
    prim_.renderIndexedPolygonAdvanced(buffer, indices, state_);
    EXPECT_EQ(buffer[0].projected_vertex.transformed_z, 1 << 24);
    EXPECT_EQ(buffer[1].projected_vertex.transformed_z, 1 << 24);
    EXPECT_EQ(buffer[2].projected_vertex.transformed_z, 1 << 24);
}

} // namespace
} // namespace nocturne::engine
