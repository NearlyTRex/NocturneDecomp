#include "engine/drender/demonrenderer.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {
namespace {

using platform::SMRGLHeaderPrimitive;
using platform::SRenderVertex;
using ::testing::Return;

// A corner at the pixel, its reciprocal depth taken as its depth: 0x1200 in 24.8, so 0x1200 once
// shifted.
SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x,
                               .transformed_y = y,
                               .transformed_z = 0x1000,
                               .inv_z = 0x1200,
                               .screen_x = x << 16,
                               .screen_y = y << 16};
    return vertex;
}

constexpr std::uint32_t kDepth = 0x1200;
constexpr std::uint32_t kColor = 0x00abcdef;
constexpr std::uint32_t kNearer = 0x1201;
constexpr std::uint32_t kBlank = 0x55555555;

SMRGLHeaderPrimitive cornersOneToThree() {
    return {.surface_normal = {}, .vertex_indices = {1, 2, 3}};
}

// An 8 by 8 screen of 32-bit pixels and depths, drawn without face capture, and the triangle
// from (0, 0) to (8, 0) and (0, 8), whose rows hold 7, 6 and so on down to none.
class CDemonRendererDepthTest : public CDemonRendererFixture {
protected:
    CDemonRendererDepthTest() {
        two_d_.setupViewportAndClipping(0, 0, 7, 7);
        demon_renderer_.enableFaceCapture(false);
        for (std::size_t row = 0; row < kSize; ++row) {
            pixel_rows_.at(row) = pixels_.data() + (row * kSize);
            depth_rows_.at(row) = depths_.data() + (row * kSize);
        }
        pixels_.fill(kBlank);
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(pixel_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        vertex_buffer_[1] = at(0, 0);
        vertex_buffer_[2] = at(8, 0);
        vertex_buffer_[3] = at(0, 8);
        two_d_.setActiveRenderColor(static_cast<int>(kColor));
    }

    [[nodiscard]] std::uint32_t pixel(std::size_t x, std::size_t y) const {
        return pixels_.at((y * kSize) + x);
    }

    [[nodiscard]] std::uint32_t &depth(std::size_t x, std::size_t y) {
        return depths_.at((y * kSize) + x);
    }

    static constexpr std::size_t kSize = 8;
    std::array<std::uint32_t, kSize * kSize> pixels_{};
    std::array<std::uint32_t, kSize * kSize> depths_{};
    std::array<void *, kSize> pixel_rows_{};
    std::array<std::uint32_t *, kSize> depth_rows_{};
};

TEST_F(CDemonRendererDepthTest, ASolidPolygonTakesTheColourAndItsDepthWhereItIsInFront) {
    demon_renderer_.renderSolidColorDepthDirect(cornersOneToThree());
    EXPECT_EQ(pixel(0, 0), kColor);
    EXPECT_EQ(depth(0, 0), kDepth);
    EXPECT_EQ(pixel(6, 0), kColor);
    EXPECT_EQ(pixel(7, 0), kBlank);
    EXPECT_EQ(pixel(0, 6), kColor);
    EXPECT_EQ(depth(0, 6), kDepth);
    EXPECT_EQ(pixel(1, 6), kBlank);
    EXPECT_EQ(pixel(0, 7), kBlank);
}

// The depths compare signed, so a buffer depth with its top bit set is behind everything.
TEST_F(CDemonRendererDepthTest, ASolidPolygonLeavesWhatIsNearerAndFillsWhatIsLevel) {
    depth(0, 0) = kNearer;
    depth(1, 0) = kDepth;
    depth(2, 0) = 0x80000000U;
    demon_renderer_.renderSolidColorDepthDirect(cornersOneToThree());
    EXPECT_EQ(pixel(0, 0), kBlank);
    EXPECT_EQ(depth(0, 0), kNearer);
    EXPECT_EQ(pixel(1, 0), kColor);
    EXPECT_EQ(pixel(2, 0), kColor);
    EXPECT_EQ(depth(2, 0), kDepth);
}

TEST_F(CDemonRendererDepthTest, ASolidPolygonFacingAwayDrawsNothing) {
    SMRGLHeaderPrimitive primitive = cornersOneToThree();
    primitive.surface_normal = {.a = 1, .d = 1};
    demon_renderer_.renderSolidColorDepthDirect(primitive);
    EXPECT_EQ(pixel(0, 0), kBlank);
}

TEST_F(CDemonRendererDepthTest, AProfiledPolygonShowsWhereAnyPixelIsInFront) {
    depths_.fill(kNearer);
    depth(4, 2) = kDepth;
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(cornersOneToThree()));
    EXPECT_EQ(pixel(4, 2), kBlank);
    EXPECT_EQ(depth(4, 2), kDepth);
}

TEST_F(CDemonRendererDepthTest, AProfiledPolygonBehindTheDepthsIsHidden) {
    depths_.fill(kNearer);
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(cornersOneToThree()));
}

// Only the even rows' even pixels are tested.
TEST_F(CDemonRendererDepthTest, AProfiledPolygonTestsEveryOtherPixelOfEveryOtherRow) {
    depths_.fill(kNearer);
    depth(1, 0) = kDepth;
    depth(0, 1) = kDepth;
    depth(3, 2) = kDepth;
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(cornersOneToThree()));
    depth(2, 2) = kDepth;
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(cornersOneToThree()));
}

// From (0, 0) to (7, 0) and (0, 7) the last row tested, 6, holds no pixels.
TEST_F(CDemonRendererDepthTest, AProfiledPolygonsEmptyRowIsHidden) {
    depths_.fill(kNearer);
    vertex_buffer_[2] = at(7, 0);
    vertex_buffer_[3] = at(0, 7);
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(cornersOneToThree()));
}

TEST_F(CDemonRendererDepthTest, AProfiledPolygonFacingAwayIsHidden) {
    SMRGLHeaderPrimitive primitive = cornersOneToThree();
    primitive.surface_normal = {.a = 1, .d = 1};
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(primitive));
}

} // namespace
} // namespace nocturne::engine
