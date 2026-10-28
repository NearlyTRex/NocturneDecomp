#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/drender/drender.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
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
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

using TriangleRenderer = void (*)(std::span<SRenderVertex>, std::span<const int>,
                                  const SPolygonState &, CSpecial &, const C3d &,
                                  const SCurrentTexture &);

TEST(EngineDrenderFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&qsortByCapturedFaceDepthAscending), int (*)(SFace **, SFace **)>);
    static_assert(
        std::is_same_v<decltype(&qsortByCapturedFaceDepthDescending), int (*)(SFace **, SFace **)>);
    static_assert(std::is_same_v<decltype(&renderTriangleTextured), TriangleRenderer>);
    static_assert(std::is_same_v<decltype(&renderTriangleSimple), TriangleRenderer>);
}

// One row: its number and both edges as drawn.
struct SRow {
    int y = 0;
    SSoftwareEdge left;
    SSoftwareEdge right;
};

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    return vertex;
}

class CDrenderTriangleTest : public C2dFixture {
protected:
    void SetUp() override {
        two_d_.setupViewportAndClipping(0, 0, 63, 15);
        state_.draw_scanline = [this](const SSoftwareEdge &left, const SSoftwareEdge &right,
                                      int y) {
            rows_.push_back({.y = y, .left = left, .right = right});
            return y == stop_row_;
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

    void renderTextured(std::span<SRenderVertex> buffer, std::span<const int> indices) {
        renderTriangleTextured(buffer, indices, state_, special_, three_d_, texture_);
    }

    void renderSimple(std::span<SRenderVertex> buffer, std::span<const int> indices) {
        renderTriangleSimple(buffer, indices, state_, special_, three_d_, texture_);
    }

    // A vertical side at x 10 from row 2 to row 6, a level bottom, and a slope back up from 14,
    // behind a corner the indices skip. The vertical side is the first edge found, so it is
    // drawn as the right.
    static std::vector<SRenderVertex> getBuffer() {
        return {at(0, 0), at(10, 2), at(10, 6), at(14, 6)};
    }

    static constexpr std::array<int, 3> kIndices{1, 2, 3};

    std::vector<SRow> rows_;
    int stop_row_ = -1;
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
};

// Every corner holds the same values, so each edge starts on them and gains nothing.
std::vector<SRenderVertex> withEveryChannel(std::vector<SRenderVertex> buffer) {
    for (SRenderVertex &vertex : buffer) {
        vertex.u = 1;
        vertex.v = 2;
        vertex.r = 3;
        vertex.a = 4;
        vertex.g = 5;
        vertex.b = 6;
        vertex.projected_vertex.inv_z = 7;
        vertex.projected_vertex.transformed_z = 8;
    }
    return buffer;
}

TEST_F(CDrenderTriangleTest, TexturedCarriesEachChannelAndTheReciprocalDepth) {
    std::vector<SRenderVertex> buffer = withEveryChannel(getBuffer());
    renderTextured(buffer, kIndices);
    ASSERT_EQ(rows_.size(), 4U);
    const SSoftwareEdge &edge = rows_.front().right;
    EXPECT_EQ(edge.x_current, 10 << 16);
    EXPECT_EQ(edge.u_current, 1);
    EXPECT_EQ(edge.v_current, 2);
    EXPECT_EQ(edge.red_current, 3);
    EXPECT_EQ(edge.alpha_current, 4);
    EXPECT_EQ(edge.depth_current, 7);
    EXPECT_EQ(edge.green_current, 0);
    EXPECT_EQ(edge.blue_current, 0);
}

TEST_F(CDrenderTriangleTest, TexturedCarriesGreenAndBlueForVertexColour) {
    std::vector<SRenderVertex> buffer = withEveryChannel(getBuffer());
    state_.mode.render_flags = common::kRenderVertexColor;
    renderTextured(buffer, kIndices);
    ASSERT_FALSE(rows_.empty());
    EXPECT_EQ(rows_.front().right.green_current, 5);
    EXPECT_EQ(rows_.front().right.blue_current, 6);
}

// The renderer is on, but with textures off the software rasteriser draws.
TEST_F(CDrenderTriangleTest, WithTexturesOffTexturedTakesTheTransformedDepth) {
    startRenderer();
    texture_.textures_disabled = true;
    std::vector<SRenderVertex> buffer = withEveryChannel(getBuffer());
    EXPECT_CALL(renderer_, drawPolygon2(_, _, _)).Times(0);
    renderTextured(buffer, kIndices);
    ASSERT_FALSE(rows_.empty());
    EXPECT_EQ(rows_.front().right.depth_current, 8);
}

// The slope from (10, 2) to (14, 6) is the left edge: what grows by 0x40000 down it gains 65532
// a row, and starts most of a row's worth in, as x does.
TEST_F(CDrenderTriangleTest, TexturedStepsTheChannelsDownTheRows) {
    std::vector<SRenderVertex> buffer = getBuffer();
    buffer[3].u = 0x40000;
    buffer[3].g = 0x40000;
    state_.mode.render_flags = common::kRenderVertexColor;
    renderTextured(buffer, kIndices);
    ASSERT_EQ(rows_.size(), 4U);
    for (std::size_t i = 0; i < rows_.size(); ++i) {
        const int expected = 65531 + (static_cast<int>(i) * 65532);
        EXPECT_EQ(rows_[i].left.x_current, (10 << 16) + expected);
        EXPECT_EQ(rows_[i].left.u_current, expected);
        EXPECT_EQ(rows_[i].left.green_current, expected);
    }
}

TEST_F(CDrenderTriangleTest, ARowCanStopTheTexturedTriangle) {
    std::vector<SRenderVertex> buffer = getBuffer();
    stop_row_ = 3;
    renderTextured(buffer, kIndices);
    ASSERT_EQ(rows_.size(), 2U);
    EXPECT_EQ(rows_.back().y, 3);
}

TEST_F(CDrenderTriangleTest, TheTexturedRowsRunPastTwelveHundred) {
    std::vector<SRenderVertex> buffer{at(10, 1195), at(10, 1210), at(14, 1210)};
    renderTextured(buffer, std::array{0, 1, 2});
    EXPECT_EQ(rows_.back().y, 1209);
}

// Under mode 1, (0, 1, 2) faces away though (1, 2, 3) faces the camera.
TEST_F(CDrenderTriangleTest, OnlyTheFirstThreeCornersAreCulled) {
    std::vector<SRenderVertex> buffer{at(0, 0), at(0, 4), at(4, 4), at(9, 5)};
    three_d_.setCullingMode(1);
    renderTextured(buffer, std::array{0, 1, 2, 3});
    EXPECT_TRUE(rows_.empty());
    renderTextured(buffer, std::array{1, 2, 3, 0});
    EXPECT_FALSE(rows_.empty());
}

TEST_F(CDrenderTriangleTest, WithTheRendererOnTheTexturedTriangleGoesToIt) {
    startRenderer();
    std::vector<SRenderVertex> buffer = getBuffer();
    state_.mode.render_flags = common::kRenderTextured;
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, common::kRenderTextured))
        .WillOnce([&buffer](SRenderVertex **corners, int, int) {
            EXPECT_EQ(corners[0], &buffer[1]);
            EXPECT_EQ(corners[2], &buffer[3]);
            return 1;
        });
    renderTextured(buffer, kIndices);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CDrenderTriangleTest, SimpleDrawsDepthInTwentyFourEightLessTheBias) {
    std::vector<SRenderVertex> buffer = getBuffer();
    for (SRenderVertex &vertex : buffer) {
        vertex.projected_vertex.transformed_z = 3;
    }
    state_.depth_bias = 100;
    renderSimple(buffer, kIndices);
    ASSERT_EQ(rows_.size(), 4U);
    EXPECT_EQ(rows_.front().right.depth_current, 668);
    EXPECT_EQ(rows_.front().left.x_current, 720891);
}

// Modes 1 and 6 give a corner at depth its reciprocal as its depth; others leave it.
TEST_F(CDrenderTriangleTest, SimplePreprocessesTheDepthOfItsCorners) {
    for (const auto [mode, expected] :
         std::array{std::pair{1, 9 * 256}, std::pair{6, 9 * 256}, std::pair{2, 0x1000 * 256}}) {
        std::vector<SRenderVertex> buffer = getBuffer();
        for (SRenderVertex &vertex : buffer) {
            vertex.projected_vertex.transformed_z = 0x1000;
            vertex.projected_vertex.inv_z = 9;
        }
        state_.mode.vertex_preprocess_mode = mode;
        rows_.clear();
        renderSimple(buffer, kIndices);
        ASSERT_FALSE(rows_.empty());
        EXPECT_EQ(rows_.front().right.depth_current, expected) << mode;
        EXPECT_EQ(buffer[0].projected_vertex.transformed_z, 0x1000) << mode;
    }
}

TEST_F(CDrenderTriangleTest, ARowCanStopTheSimpleTriangle) {
    std::vector<SRenderVertex> buffer = getBuffer();
    stop_row_ = 2;
    renderSimple(buffer, kIndices);
    EXPECT_EQ(rows_.size(), 1U);
}

TEST_F(CDrenderTriangleTest, ASimpleTriangleFacingAwayIsCulled) {
    std::vector<SRenderVertex> buffer = getBuffer();
    three_d_.setCullingMode(1);
    renderSimple(buffer, kIndices);
    EXPECT_TRUE(rows_.empty());
}

TEST_F(CDrenderTriangleTest, WithTheRendererOnTheSimpleTriangleGoesToIt) {
    startRenderer();
    std::vector<SRenderVertex> buffer = getBuffer();
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, 0)).WillOnce(Return(1));
    renderSimple(buffer, kIndices);
    EXPECT_TRUE(rows_.empty());
}

} // namespace
} // namespace nocturne::engine
