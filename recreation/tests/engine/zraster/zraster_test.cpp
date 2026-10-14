#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/zraster/zraster.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

TEST(EngineZrasterFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CZRaster::rasterizeTriangle),
                       void (CZRaster::*)(std::span<SRenderVertex>, const SPolygonState &)>);
    static_assert(std::is_same_v<decltype(&CZRaster::rasterizePolygonCustom),
                                 void (CZRaster::*)(std::span<SRenderVertex>, const SPolygonState &,
                                                    const CustomScanlineDrawer &)>);
}

// One row: its number, the edges' x and depth as passed, and the first edge's red.
struct SRow {
    int y = 0;
    int first_x = 0;
    int second_x = 0;
    int first_depth = 0;
    int first_red = 0;

    bool operator==(const SRow &) const = default;
};

SRenderVertex at(int x, int y, int depth = 0) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    vertex.projected_vertex.transformed_z = depth;
    return vertex;
}

class CZRasterTest : public C2dFixture {
protected:
    void SetUp() override {
        two_d_.setupViewportAndClipping(0, 0, 63, 15);
        state_.draw_scanline = [this](const SSoftwareEdge &left, const SSoftwareEdge &right,
                                      int y) {
            rows_.push_back({.y = y,
                             .first_x = right.x_current,
                             .second_x = left.x_current,
                             .first_depth = right.depth_current});
            return y == stop_row_;
        };
        custom_ = [this](int y, const SSoftwareEdge &first, const SSoftwareEdge &second) {
            rows_.push_back({.y = y,
                             .first_x = first.x_current,
                             .second_x = second.x_current,
                             .first_depth = first.depth_current,
                             .first_red = first.red_current});
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

    // A vertical side at x 10 from row 2 to row 6, a level bottom, and a slope back up from 14;
    // every depth 3.
    static std::vector<SRenderVertex> getTriangle() {
        return {at(10, 2, 3), at(10, 6, 3), at(14, 6, 3)};
    }

    std::vector<SRow> rows_;
    int stop_row_ = -1;
    SPolygonState state_;
    CustomScanlineDrawer custom_;
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
    CZRaster zraster_{special_, two_d_, three_d_, texture_};
};

// Depth 3 in 24.8 is 768, less the bias; the first edge found is the vertical side.
TEST_F(CZRasterTest, ATriangleIsDrawnWithDepthInTwentyFourEightLessTheBias) {
    std::vector<SRenderVertex> triangle = getTriangle();
    state_.depth_bias = 100;
    zraster_.rasterizeTriangle(triangle, state_);
    EXPECT_EQ(rows_, (std::vector<SRow>{
                         {.y = 2, .first_x = 10 << 16, .second_x = 720891, .first_depth = 668},
                         {.y = 3, .first_x = 10 << 16, .second_x = 786423, .first_depth = 668},
                         {.y = 4, .first_x = 10 << 16, .second_x = 851955, .first_depth = 668},
                         {.y = 5, .first_x = 10 << 16, .second_x = 917487, .first_depth = 668}}));
}

TEST_F(CZRasterTest, ARowCanStopTheTriangle) {
    std::vector<SRenderVertex> triangle = getTriangle();
    stop_row_ = 3;
    zraster_.rasterizeTriangle(triangle, state_);
    ASSERT_EQ(rows_.size(), 2U);
    EXPECT_EQ(rows_.back().y, 3);
}

TEST_F(CZRasterTest, TheRowsRunPastTwelveHundred) {
    std::vector<SRenderVertex> tall{at(10, 1195), at(10, 1210), at(14, 1210)};
    zraster_.rasterizeTriangle(tall, state_);
    EXPECT_EQ(rows_.back().y, 1209);
}

TEST_F(CZRasterTest, OnlyTheFirstThreeCornersAreTestedForFacing) {
    // (0, 1, 2) faces away under mode 1; the rest of the fan does not matter.
    std::vector<SRenderVertex> quad{at(10, 0), at(10, 6), at(14, 6), at(4, 3)};
    three_d_.setCullingMode(1);
    zraster_.rasterizeTriangle(quad, state_);
    zraster_.rasterizePolygonCustom(quad, state_, custom_);
    EXPECT_TRUE(rows_.empty());
    three_d_.setCullingMode(2);
    zraster_.rasterizeTriangle(quad, state_);
    EXPECT_FALSE(rows_.empty());
}

// A vertex the clip left is put on the screen; its reciprocal depth is set only when the
// preprocessing mode has one of its low three bits set.
TEST_F(CZRasterTest, AClippedVertexGetsItsReciprocalDepthOnlyForSomeModes) {
    const auto project = [this](int mode) {
        std::vector<SRenderVertex> triangle = getTriangle();
        triangle[0].projected_vertex = {.transformed_x = -100,
                                        .transformed_y = 100,
                                        .transformed_z = 100,
                                        .inv_z = 5,
                                        .screen_x = -1};
        state_.vertex_processing = true;
        state_.mode.vertex_preprocess_mode = mode;
        zraster_.rasterizeTriangle(triangle, state_);
        EXPECT_EQ(triangle[0].projected_vertex.screen_x, 1 << 16);
        return triangle[0].projected_vertex.inv_z;
    };
    EXPECT_EQ(project(0), 5);
    EXPECT_EQ(project(8), 5);
    EXPECT_EQ(project(4), 0x7fffffff / 100);
    EXPECT_EQ(project(9), 0x7fffffff / 100);
}

TEST_F(CZRasterTest, WithoutVertexProcessingTheTriangleProjectsNothing) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[1].projected_vertex.screen_x = -(1 << 16);
    zraster_.rasterizeTriangle(triangle, state_);
    EXPECT_EQ(triangle[1].projected_vertex.screen_x, -(1 << 16));
}

TEST_F(CZRasterTest, OfThePreprocessingTheTriangleRunsOnlyTheDepthModes) {
    const auto depthAfter = [this](int mode) {
        std::vector<SRenderVertex> triangle = getTriangle();
        for (SRenderVertex &vertex : triangle) {
            vertex.projected_vertex.transformed_z = 0x1000;
            vertex.projected_vertex.inv_z = 77;
        }
        state_.mode.vertex_preprocess_mode = mode;
        zraster_.rasterizeTriangle(triangle, state_);
        return triangle[0].projected_vertex.transformed_z;
    };
    EXPECT_EQ(depthAfter(1), 77);
    EXPECT_EQ(depthAfter(2), 0x1000);
    EXPECT_EQ(depthAfter(6), 77);
}

TEST_F(CZRasterTest, WithTheRendererOnTheTriangleGoesToIt) {
    startRenderer();
    std::vector<SRenderVertex> triangle = getTriangle();
    EXPECT_CALL(renderer_, drawPolygon(triangle.data(), 3, 0)).WillOnce(Return(1));
    zraster_.rasterizeTriangle(triangle, state_);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CZRasterTest, WithTexturesOffTheTriangleIsDrawnInSoftware) {
    startRenderer();
    texture_.textures_disabled = true;
    std::vector<SRenderVertex> triangle = getTriangle();
    zraster_.rasterizeTriangle(triangle, state_);
    EXPECT_EQ(rows_.size(), 4U);
}

// The custom routine gets the row first and the edges in the order found, with red carried.
TEST_F(CZRasterTest, ACustomPolygonGoesThroughTheCallersRoutine) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[1].r = 0x40000;
    zraster_.rasterizePolygonCustom(triangle, state_, custom_);
    ASSERT_EQ(rows_.size(), 4U);
    EXPECT_EQ(rows_[0], (SRow{.y = 2,
                              .first_x = 10 << 16,
                              .second_x = 720891,
                              .first_depth = 768,
                              .first_red = 65531}));
}

TEST_F(CZRasterTest, ACustomPolygonProjectsClippedVerticesWhateverTheProcessing) {
    std::vector<SRenderVertex> triangle = getTriangle();
    triangle[0].projected_vertex = {
        .transformed_x = -100, .transformed_y = 100, .transformed_z = 100, .screen_x = -1};
    zraster_.rasterizePolygonCustom(triangle, state_, custom_);
    EXPECT_EQ(triangle[0].projected_vertex.screen_x, 1 << 16);
    EXPECT_EQ(triangle[0].projected_vertex.inv_z, 0x7fffffff / 100);
}

TEST_F(CZRasterTest, ACustomPolygonRunsEveryPreprocessingMode) {
    std::vector<SRenderVertex> triangle = getTriangle();
    state_.mode.vertex_preprocess_mode = 2;
    zraster_.rasterizePolygonCustom(triangle, state_, custom_);
    EXPECT_EQ(triangle[0].projected_vertex.transformed_z, 1 << 24);
}

TEST_F(CZRasterTest, ACustomPolygonNeverGoesToTheRenderer) {
    startRenderer();
    std::vector<SRenderVertex> triangle = getTriangle();
    EXPECT_CALL(renderer_, drawPolygon(_, _, _)).Times(0);
    zraster_.rasterizePolygonCustom(triangle, state_, custom_);
    EXPECT_EQ(rows_.size(), 4U);
}

} // namespace
} // namespace nocturne::engine
