#include "engine/drender/drender.h"
#include "engine/softwareedge.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::Return;

constexpr std::uint16_t kFar = 0xffff;

TEST(DepthOnly, PublicInterface) {
    static_assert(std::is_same_v<decltype(&drawShadowDepthRow),
                                 void (*)(const SSoftwareEdge &, const SSoftwareEdge &, int,
                                          IScreenDevice &, const C2d &)>);
}

// A row of 8 far depths, the screen's second.
class DepthOnlyTest : public C2dFixture {
protected:
    void SetUp() override {
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.map", std::string(C2d::kColorCubeSize, '\0'));
        givenWritable("fog\\vga.lte", written_);
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        two_d_.initGraphicsSystem();
        row_.fill(kFar);
        rows_ = {nullptr, row_.data()};
    }

    std::string written_;
    std::array<std::uint16_t, 8> row_{};
    std::array<void *, 2> rows_{};
};

// Depth 0x1000 shifted down by 8 is 16. Over 3 pixels the step is the difference over 4, a
// little under 0x100, up to but not including the right edge's pixel.
TEST_F(DepthOnlyTest, ItWritesTheShiftedDepthWhereItIsNearer) {
    row_[1] = 10;
    drawShadowDepthRow({.x_current = 0, .depth_current = 0x1000},
                       {.x_current = 3 << 16, .depth_current = 0x1400}, 1, screen_, two_d_);
    EXPECT_EQ(row_, (std::array<std::uint16_t, 8>{16, 10, 17, kFar, kFar, kFar, kFar, kFar}));
}

// A negative depth compares as a huge unsigned one and is never written.
TEST_F(DepthOnlyTest, ItNeverWritesANegativeDepth) {
    drawShadowDepthRow({.x_current = 0, .depth_current = -0x1000},
                       {.x_current = 1 << 16, .depth_current = -0x1000}, 1, screen_, two_d_);
    EXPECT_EQ(row_[0], kFar);
}

TEST_F(DepthOnlyTest, ItDrawsNothingOfAnEmptyRow) {
    drawShadowDepthRow({.x_current = 2 << 16}, {.x_current = 2 << 16}, 1, screen_, two_d_);
    EXPECT_EQ(row_[2], kFar);
}

} // namespace
} // namespace nocturne::engine
