#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::engine {
namespace {

using ::testing::NiceMock;
using ::testing::Return;
using ::testing::ReturnRef;

constexpr std::size_t kWidth = 8;
constexpr std::uint32_t kUntouched = 0x11223344;
constexpr std::uint32_t kFarDepth = 0x80000000;

// Each texel's colour index is its column, so pixel x of a row from u 0 reads palette[x].
constexpr int kTexelU = 0x8000;
constexpr int kTexelStep = 0x10000;

class CSpecialScanlineTest : public C2dFixture {
protected:
    void SetUp() override {
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.map", std::string(C2d::kColorCubeSize, '\0'));
        givenWritable("fog\\vga.lte", written_);
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(ReturnRef(masks_));
        two_d_.initGraphicsSystem();
        for (std::size_t i = 0; i < texels_.size(); ++i) {
            texels_[i] = static_cast<std::uint8_t>(i);
        }
        texture_.data = texels_;
        texture_.texture_shift1 = 16;
        texture_.texture_mask1 = 0xff;
        texture_.texture_shift2 = 16;
        screen_row_.fill(kUntouched);
        screen_row16_.fill(0x1234);
        depth_row_.fill(kFarDepth);
        rows_ = {screen_row_.data()};
        depth_rows_ = {depth_row_.data()};
    }

    // Pixels left_x up to right_x, texel u stepping a column a pixel.
    static std::pair<SSoftwareEdge, SSoftwareEdge> getEdges(int left_x, int right_x) {
        const int width = right_x - left_x;
        return {SSoftwareEdge{.x_current = left_x << 16, .u_current = kTexelU},
                SSoftwareEdge{.x_current = right_x << 16,
                              .u_current = kTexelU + ((width + 1) * kTexelStep)}};
    }

    void draw(std::uint32_t render_flags, int count = 4) {
        auto [left, right] = getEdges(0, count);
        left_ = left;
        right_ = right;
        drawEdges(render_flags);
    }

    void drawEdges(std::uint32_t render_flags) {
        mode_.render_flags = render_flags;
        special_.renderMMXPerspectiveScanline32(left_, right_, 0, mode_);
    }

    std::string written_;
    std::array<std::uint8_t, 0x10000> texels_{};
    std::array<std::uint8_t, 0x10000> opacity_{};
    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint32_t, kWidth> screen_row_{};
    std::array<std::uint16_t, kWidth> screen_row16_{};
    std::array<std::uint32_t, kWidth> depth_row_{};
    std::array<void *, 1> rows_{};
    std::array<std::uint32_t *, 1> depth_rows_{};
    // 5-6-5.
    SColorMasks masks_{.red_mask16 = 0xf800,
                       .green_mask16 = 0x7e0,
                       .blue_mask16 = 0x1f,
                       .red_mask32 = 0xf80000,
                       .green_mask32 = 0xfc00,
                       .blue_mask32 = 0xf8,
                       .blue_bit_shift = 3,
                       .total_dither_shift = 8,
                       .green_blue_dither_shift = 5};
    SSoftwareEdge left_;
    SSoftwareEdge right_;
    SScanlineMode mode_;
    NiceMock<platform::MockRenderer> renderer_;
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
    SCurrentTexture texture_;
    CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, texture_};
};

// Without colour flags the light is the alpha table's top entry times 128, which scales each
// byte by 255/256: 0xff becomes 0xfe, 0x80 0x7f, and the fourth byte, with no light, 0.
TEST_F(CSpecialScanlineTest, ATexturedRowDrawsEachTexelSlightlyDimmed) {
    palette_[0] = 0xff00ff80;
    palette_[1] = 0x00ffffff;
    palette_[2] = 0x00804020;
    palette_[3] = 0x00000001;
    draw(common::kRenderTextured);
    EXPECT_EQ(screen_row_[0], 0x0000fe7fU);
    EXPECT_EQ(screen_row_[1], 0x00fefefeU);
    EXPECT_EQ(screen_row_[2], 0x007f3f1fU);
    EXPECT_EQ(screen_row_[3], 0x00000000U);
    EXPECT_EQ(screen_row_[4], kUntouched);
    EXPECT_EQ(depth_row_[0], kFarDepth);
}

TEST_F(CSpecialScanlineTest, ARowWithNoWholePixelDrawsNothing) {
    left_ = {.x_current = 3 << 16};
    right_ = {.x_current = (3 << 16) + 0xffff};
    drawEdges(common::kRenderTextured);
    EXPECT_EQ(screen_row_,
              (std::array<std::uint32_t, kWidth>{kUntouched, kUntouched, kUntouched, kUntouched,
                                                 kUntouched, kUntouched, kUntouched, kUntouched}));
}

// The edges may come either way round; the row runs from the one further left.
TEST_F(CSpecialScanlineTest, TheEdgesMayComeEitherWayRound) {
    palette_[0] = 0x00ffffff;
    auto [left, right] = getEdges(2, 4);
    left_ = right;
    right_ = left;
    drawEdges(common::kRenderTextured);
    EXPECT_EQ(screen_row_[1], kUntouched);
    EXPECT_EQ(screen_row_[2], 0x00fefefeU);
    EXPECT_EQ(screen_row_[4], kUntouched);
}

TEST_F(CSpecialScanlineTest, WithoutATextureThePixelIsTheActiveColourOrWhite) {
    two_d_.setActiveRenderColor(0x00808080);
    draw(0, 1);
    EXPECT_EQ(screen_row_[0], 0x007f7f7fU);
    // Vertex colour 0x10000 halves to 0x8000, a lane PSRLW takes to full light.
    auto [left, right] = getEdges(0, 1);
    left_ = left;
    right_ = right;
    left_.red_current = left_.green_current = left_.blue_current = 0x10000;
    drawEdges(common::kRenderVertexColor);
    EXPECT_EQ(screen_row_[0], 0x00ffffffU);
}

// The depth write flag alone fills the depth buffer and leaves the screen.
TEST_F(CSpecialScanlineTest, DepthWriteAloneOnlyFillsTheDepthBuffer) {
    left_ = {.x_current = 0, .depth_current = 1000};
    right_ = {.x_current = 4 << 16, .depth_current = 2000};
    drawEdges(common::kRenderDepthWrite);
    EXPECT_EQ(depth_row_[0], 1000U);
    EXPECT_EQ(depth_row_[1], 1199U);
    EXPECT_EQ(depth_row_[3], 1597U);
    EXPECT_EQ(depth_row_[4], kFarDepth);
    EXPECT_EQ(screen_row_[0], kUntouched);
}

// Depth is reciprocal: a larger value is nearer, and is kept.
TEST_F(CSpecialScanlineTest, TheDepthTestDrawsOnlyWhatIsNearer) {
    palette_.fill(0x00ffffff);
    depth_row_ = {50, 500, 50, 500, 0, 0, 0, 0};
    left_ = {.x_current = 0, .depth_current = 100};
    right_ = {.x_current = 4 << 16, .depth_current = 100};
    drawEdges(common::kRenderTextured | common::kRenderDepthTest | common::kRenderDepthWrite);
    EXPECT_EQ(screen_row_[0], 0x00fefefeU);
    EXPECT_EQ(screen_row_[1], kUntouched);
    EXPECT_EQ(depth_row_[0], 100U);
    EXPECT_EQ(depth_row_[1], 500U);
    EXPECT_EQ(depth_row_[2], 100U);
}

// Blending with no opacity map: a black palette entry is a hole, and the texel goes over black
// unless source alpha asks for the screen underneath.
TEST_F(CSpecialScanlineTest, BlendingWithoutAnOpacityMap) {
    palette_[0] = 0;
    palette_[1] = 0x00ffffff;
    three_d_.setRenderAlpha(0x80 << 8);
    screen_row_.fill(0x00404040);
    draw(common::kRenderBlend, 2);
    EXPECT_EQ(screen_row_[0], 0x00404040U);
    // 254 * 128 / 256.
    EXPECT_EQ(screen_row_[1], 0x007f7f7fU);
    screen_row_.fill(0x00404040);
    draw(common::kRenderBlend | common::kRenderSourceAlpha, 2);
    // (254 * 128 + 64 * 127) / 256.
    EXPECT_EQ(screen_row_[1], 0x009e9e9eU);
}

TEST_F(CSpecialScanlineTest, BlendModeOneAddsToTheScreen) {
    palette_[0] = 0x00ffffff;
    three_d_.setRenderAlpha(0x80 << 8);
    three_d_.setBlendMode(1);
    screen_row_.fill(0x00c0c0c0);
    draw(common::kRenderBlend | common::kRenderSourceAlpha, 1);
    // 192 + 254 * 128 / 256, held to 255.
    EXPECT_EQ(screen_row_[0], 0x00ffffffU);
}

// With an opacity map: a clear texel is a hole, a solid one at full vertex alpha draws as it is,
// and the rest blend over the screen at opacity times alpha.
TEST_F(CSpecialScanlineTest, AnOpacityMapCoversEachTexel) {
    palette_.fill(0x00ffffff);
    opacity_[0] = 0;
    opacity_[1] = 0xff;
    opacity_[2] = 0x80;
    texture_.opacity = opacity_;
    screen_row_.fill(0x00404040);
    auto [left, right] = getEdges(0, 3);
    left_ = left;
    right_ = right;
    left_.alpha_current = 0xffff;
    right_.alpha_current = 0xffff;
    drawEdges(common::kRenderVertexAlpha);
    EXPECT_EQ(screen_row_[0], 0x00404040U);
    EXPECT_EQ(screen_row_[1], 0x00fefefeU);
    // Level 0x80 * 0xffff >> 16 = 127: (254 * 127 + 64 * 128) / 256.
    EXPECT_EQ(screen_row_[2], 0x009e9e9eU);
}

// Below full alpha even a solid texel blends; the polygon's alpha stands in without vertex alpha.
TEST_F(CSpecialScanlineTest, AnOpaqueTexelBelowFullAlphaStillBlends) {
    palette_.fill(0x00ffffff);
    opacity_.fill(0xff);
    texture_.opacity = opacity_;
    three_d_.setRenderAlpha(0x80 << 8);
    screen_row_.fill(0);
    draw(0, 1);
    // Level 0xff * 0x8000 >> 16 = 127.
    EXPECT_EQ(screen_row_[0], 0x007e7e7eU);
}

TEST_F(CSpecialScanlineTest, AdditiveBlendingNeverTakesTheOpaqueShortcut) {
    palette_.fill(0x00808080);
    opacity_.fill(0xff);
    texture_.opacity = opacity_;
    three_d_.setBlendMode(1);
    screen_row_.fill(0x00202020);
    auto [left, right] = getEdges(0, 1);
    left_ = left;
    right_ = right;
    left_.alpha_current = 0xffff;
    right_.alpha_current = 0xffff;
    drawEdges(common::kRenderVertexAlpha);
    // 32 + 127 * 254 / 256.
    EXPECT_EQ(screen_row_[0], 0x009e9e9eU);
}

// Solid alpha draws the pixel toward the mode's solid colour by the vertex alpha.
TEST_F(CSpecialScanlineTest, SolidAlphaMixesTowardTheSolidColour) {
    palette_[0] = 0x00ffffff;
    mode_.solid_color = 0x00000000;
    auto [left, right] = getEdges(0, 1);
    left_ = left;
    right_ = right;
    left_.alpha_current = 0x4000;
    right_.alpha_current = 0x4000;
    drawEdges(common::kRenderTextured | common::kRenderSolidAlpha);
    // 254 * (255 - 64) / 256.
    EXPECT_EQ(screen_row_[0], 0x00bdbdbdU);
}

// Vertex colour halves each channel into its lane; the light scales by lane / 32768.
TEST_F(CSpecialScanlineTest, VertexColourLightsEachChannel) {
    palette_[0] = 0x00ffffff;
    auto [left, right] = getEdges(0, 1);
    left_ = left;
    right_ = right;
    left_.red_current = 0x2000;
    left_.green_current = 0x1000;
    left_.blue_current = 0x800;
    right_ = {.x_current = right_.x_current, .u_current = right_.u_current};
    drawEdges(common::kRenderTextured | common::kRenderVertexColor);
    EXPECT_EQ(screen_row_[0], 0x001f0f07U);
}

// Smooth shading takes red as a level from 0x100, held to 0xfff above it.
TEST_F(CSpecialScanlineTest, SmoothShadingLightsEveryChannelAlike) {
    palette_.fill(0x00ffffff);
    auto [left, right] = getEdges(0, 2);
    left_ = left;
    right_ = right;
    left_.red_current = 0x100 + 0x800;
    right_.red_current = 0x100 + 0x800;
    drawEdges(common::kRenderTextured | common::kRenderSmooth);
    EXPECT_EQ(screen_row_[0], 0x007f7f7fU);
    left_.red_current = 0x50;
    right_.red_current = 0x50;
    drawEdges(common::kRenderTextured | common::kRenderSmooth);
    // Below 0x100 the level wraps past the top and is held there.
    EXPECT_EQ(screen_row_[0], 0x00fefefeU);
}

TEST_F(CSpecialScanlineTest, LightingTakesTheModesLevel) {
    palette_[0] = 0x00ffffff;
    mode_.lighting_value = 0x100 + (0x40 << 4);
    draw(common::kRenderTextured | common::kRenderLighting, 1);
    // Level 0x40 scales by 64/256: 0xff becomes 63.
    EXPECT_EQ(screen_row_[0], 0x003f3f3fU);
    mode_.lighting_value = 0x50000;
    draw(common::kRenderTextured | common::kRenderLighting, 1);
    EXPECT_EQ(screen_row_[0], 0x00fefefeU);
}

// A colour lane stepping to zero or below stays at zero.
TEST_F(CSpecialScanlineTest, AColourLaneSteppingBelowZeroStaysAtZero) {
    palette_.fill(0x00ffffff);
    auto [left, right] = getEdges(0, 2);
    left_ = left;
    right_ = right;
    left_.red_current = 0x2;
    right_.red_current = -0x40000;
    drawEdges(common::kRenderTextured | common::kRenderVertexColor);
    EXPECT_EQ(screen_row_[1], 0x00000000U);
}

// In perspective the coordinates come over depth and are divided back out by it, in 8.24.
TEST_F(CSpecialScanlineTest, PerspectiveTexturesDivideOutTheDepth) {
    palette_[3] = 0x00ffffff;
    mode_.vertex_preprocess_mode = SScanlineMode::kPerspectiveTexture;
    left_ = {.x_current = 0, .u_current = 3 << 16, .depth_current = 1 << 24};
    right_ = {.x_current = 1 << 16, .u_current = 3 << 16, .depth_current = 1 << 24};
    drawEdges(common::kRenderTextured);
    EXPECT_EQ(screen_row_[0], 0x00fefefeU);
}

TEST_F(CSpecialScanlineTest, PerspectiveAtNoDepthReadsTheFirstTexel) {
    palette_[0] = 0x00ffffff;
    mode_.vertex_preprocess_mode = SScanlineMode::kPerspectiveTexture;
    left_ = {.x_current = 0, .u_current = 3 << 16};
    right_ = {.x_current = 1 << 16, .u_current = 3 << 16};
    drawEdges(common::kRenderTextured);
    EXPECT_EQ(screen_row_[0], 0x00fefefeU);
}

// A shift past the coordinate's 32 bits leaves nothing of it.
TEST_F(CSpecialScanlineTest, AShiftPastThirtyTwoBitsLeavesNothing) {
    palette_[0] = 0x00ffffff;
    texture_.texture_shift1 = 40;
    draw(common::kRenderTextured, 2);
    EXPECT_EQ(screen_row_[1], 0x00fefefeU);
}

// Past the alpha table's 256 levels the original read beyond it; here the level is held.
TEST_F(CSpecialScanlineTest, AnAlphaPastTheTableIsHeldToItsEnds) {
    palette_.fill(0x00ffffff);
    auto [left, right] = getEdges(0, 1);
    left_ = left;
    right_ = right;
    left_.alpha_current = 0x20000;
    right_.alpha_current = 0x20000;
    screen_row_.fill(0);
    drawEdges(common::kRenderBlend | common::kRenderVertexAlpha);
    EXPECT_EQ(screen_row_[0], 0x00fdfdfdU);
    left_.alpha_current = -0x20000;
    right_.alpha_current = -0x20000;
    drawEdges(common::kRenderBlend | common::kRenderVertexAlpha);
    EXPECT_EQ(screen_row_[0], 0x00000000U);
}

// The 16-bit scanline spreads each screen pixel to 8-8-8 and packs the result back.
TEST_F(CSpecialScanlineTest, TheSixteenBitScanlinePacksToTheModesLayout) {
    rows_ = {screen_row16_.data()};
    palette_[0] = 0x00ffffff;
    three_d_.setRenderAlpha(0x80 << 8);
    screen_row16_[0] = 0xf800;
    auto [left, right] = getEdges(0, 1);
    mode_.render_flags = common::kRenderBlend | common::kRenderSourceAlpha;
    special_.renderMMXPerspectiveScanline16(left, right, 0, mode_);
    // Red 0xf8 under: (254 * 128 + 248 * 127) / 256 = 250; green and blue 127.
    EXPECT_EQ(screen_row16_[0], 0xfbefU);
    EXPECT_EQ(screen_row16_[1], 0x1234U);
}

TEST_F(CSpecialScanlineTest, TheSixteenBitScanlineDrawsNothingOfAnEmptyRow) {
    rows_ = {screen_row16_.data()};
    special_.renderMMXPerspectiveScanline16({.x_current = 1 << 16}, {.x_current = 1 << 16}, 0,
                                            mode_);
    EXPECT_EQ(screen_row16_[1], 0x1234U);
}

} // namespace
} // namespace nocturne::engine
