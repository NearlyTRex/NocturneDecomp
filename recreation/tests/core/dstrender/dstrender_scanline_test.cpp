#include "core/dstrender/dstrender.h"
#include "engine/softwareedge.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::Return;

constexpr std::uint16_t kFar = 0xffff;

class DstrenderScanlineTest : public engine::C2dFixture {
protected:
    void SetUp() override {
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.map", std::string(engine::C2d::kColorCubeSize, '\0'));
        givenWritable("fog\\vga.lte", written_);
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        two_d_.initGraphicsSystem();
        row_.fill(kFar);
        rows_ = {nullptr, row_.data()};
        // Each texel's index is its column.
        for (std::size_t i = 0; i < texels_.size(); ++i) {
            texels_[i] = static_cast<std::uint8_t>(i);
        }
        texture_.data = texels_;
        texture_.texture_shift1 = 16;
        texture_.texture_mask1 = 0xff;
        texture_.texture_shift2 = 16;
    }

    std::string written_;
    std::array<std::uint16_t, 8> row_{};
    std::array<void *, 2> rows_{};
    std::array<std::uint8_t, 0x100> texels_{};
    std::array<std::uint8_t, 0x100> opacity_{};
    engine::SCurrentTexture texture_;
};

// Depth 0x1000 shifted down by 8 is 16. Over 3 pixels the step is the difference over 4, a
// little under 0x100, up to but not including the right edge's pixel.
TEST_F(DstrenderScanlineTest, DepthOnlyWritesTheShiftedDepthWhereItIsNearer) {
    row_[1] = 10;
    renderDepthOnlyStandard({.x_current = 0, .depth_current = 0x1000},
                            {.x_current = 3 << 16, .depth_current = 0x1400}, 1, screen_, two_d_);
    EXPECT_EQ(row_, (std::array<std::uint16_t, 8>{16, 10, 17, kFar, kFar, kFar, kFar, kFar}));
}

// A negative depth compares as a huge unsigned one and is never written.
TEST_F(DstrenderScanlineTest, DepthOnlyNeverWritesANegativeDepth) {
    renderDepthOnlyStandard({.x_current = 0, .depth_current = -0x1000},
                            {.x_current = 1 << 16, .depth_current = -0x1000}, 1, screen_, two_d_);
    EXPECT_EQ(row_[0], kFar);
}

TEST_F(DstrenderScanlineTest, DepthOnlyDrawsNothingOfAnEmptyRow) {
    renderDepthOnlyStandard({.x_current = 2 << 16}, {.x_current = 2 << 16}, 1, screen_, two_d_);
    EXPECT_EQ(row_[2], kFar);
}

// The whole depth is written where the texel's colour index is not zero, through the right
// edge's pixel: texel 0 is a hole.
TEST_F(DstrenderScanlineTest, TexturedAlphaDrawsThroughTheRightEdge) {
    renderTexturedAlphaMMXScanline(
        {.x_current = 0, .u_current = 0x8000, .depth_current = 100},
        {.x_current = 2 << 16, .u_current = 0x38000, .depth_current = 100}, 1, screen_, two_d_,
        texture_);
    EXPECT_EQ(row_, (std::array<std::uint16_t, 8>{kFar, 100, 100, kFar, kFar, kFar, kFar, kFar}));
}

TEST_F(DstrenderScanlineTest, TexturedAlphaTakesCoverageFromAnOpacityMap) {
    opacity_[0] = 1;
    texture_.opacity = opacity_;
    renderTexturedAlphaMMXScanline(
        {.x_current = 0, .u_current = 0x8000, .depth_current = 100},
        {.x_current = 1 << 16, .u_current = 0x28000, .depth_current = 100}, 1, screen_, two_d_,
        texture_);
    EXPECT_EQ(row_[0], 100);
    EXPECT_EQ(row_[1], kFar);
}

TEST_F(DstrenderScanlineTest, TexturedAlphaKeepsWhatIsNearer) {
    row_[1] = 50;
    renderTexturedAlphaMMXScanline(
        {.x_current = 1 << 16, .u_current = 0x18000, .depth_current = 100},
        {.x_current = 1 << 16, .u_current = 0x18000, .depth_current = 100}, 1, screen_, two_d_,
        texture_);
    renderTexturedAlphaMMXScanline(
        {.x_current = 1 << 16, .u_current = 0x18000, .depth_current = 100},
        {.x_current = 2 << 16, .u_current = 0x28000, .depth_current = 100}, 1, screen_, two_d_,
        texture_);
    EXPECT_EQ(row_[1], 50);
    EXPECT_EQ(row_[2], 100);
}

} // namespace
} // namespace nocturne::core
