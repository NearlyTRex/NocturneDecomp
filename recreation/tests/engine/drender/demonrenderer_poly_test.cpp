#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SMRGLHeaderPrimitive;
using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;
using ::testing::Return;
using ::testing::ReturnRef;

constexpr std::uint32_t kAlphaBlendedFlags = CDemonRenderer::kDefaultTexturedFlags;
constexpr std::uint32_t kDestReadBlendFlags = 0x2e7;
constexpr std::uint32_t kUntouched = 0x11223344;

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x,
                               .transformed_y = y,
                               .transformed_z = 0x1000,
                               .inv_z = 9,
                               .screen_x = x << 16,
                               .screen_y = y << 16};
    return vertex;
}

// Corners 1 to 3 of the buffer, each with texture coordinates of its own.
SMRGLPrimitiveQuad getPoly() {
    return {.surface_normal = {},
            .vertices = {{.vertex_index = 1, .texture_u = 10, .texture_v = 11},
                         {.vertex_index = 2, .texture_u = 20, .texture_v = 21},
                         {.vertex_index = 3, .texture_u = 30, .texture_v = 31}}};
}

class CDemonRendererPolyTest : public CDemonRendererFixture {
protected:
    void SetUp() override {
        // Pixels (0, 0), (4, 0) and (0, 1): one row, at the top.
        vertex_buffer_[1] = at(0, 0);
        vertex_buffer_[2] = at(4, 0);
        vertex_buffer_[3] = at(0, 1);
        ON_CALL(renderer_, drawPolygon2(_, _, _))
            .WillByDefault([this](SRenderVertex **corners, int count, int render_flags) {
                hardware_corners_.emplace_back(corners, corners + count);
                hardware_flags_.push_back(render_flags);
                return 1;
            });
        ON_CALL(renderer_, drawPolygon(_, _, _))
            .WillByDefault([this](SRenderVertex *vertices, int count, int render_flags) {
                hardware_polygons_.emplace_back(vertices, vertices + count);
                hardware_flags_.push_back(render_flags);
                return 1;
            });
    }

    std::vector<std::vector<SRenderVertex *>> hardware_corners_;
    std::vector<std::vector<SRenderVertex>> hardware_polygons_;
    std::vector<int> hardware_flags_;
};

TEST_F(CDemonRendererPolyTest, EachCornerTakesThePolygonsTextureCoordinates) {
    startRenderer();
    demon_renderer_.renderAlphaBlendedPoly(getPoly());
    EXPECT_EQ(vertex_buffer_[2].u, 20);
    EXPECT_EQ(vertex_buffer_[2].v, 21);
    ASSERT_EQ(hardware_corners_.size(), 1U);
    EXPECT_EQ(
        hardware_corners_[0],
        (std::vector<SRenderVertex *>{&vertex_buffer_[1], &vertex_buffer_[2], &vertex_buffer_[3]}));
}

TEST_F(CDemonRendererPolyTest, EachEntryPointDrawsWithItsOwnFlags) {
    startRenderer();
    demon_renderer_.renderTexturedPoly(getPoly(), -1);
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderTextured);
    demon_renderer_.renderAlphaBlendedPoly(getPoly());
    demon_renderer_.renderDestReadBlendPoly(getPoly());
    EXPECT_EQ(hardware_flags_,
              (std::vector<int>{CDemonRenderer::kDefaultTexturedFlags, common::kRenderTextured,
                                kAlphaBlendedFlags, kDestReadBlendFlags}));
}

// The buffer's corners keep the texture coordinates they hold.
TEST_F(CDemonRendererPolyTest, ADirectPolygonDrawsTheBuffersCornersAsTheyAre) {
    startRenderer();
    vertex_buffer_[2].u = 7;
    const SMRGLHeaderPrimitive prim{.surface_normal = {}, .vertex_indices = {1, 2, 3}};
    demon_renderer_.renderTexturedDirect(prim, -1);
    demon_renderer_.renderTexturedDirect(prim, common::kRenderTextured);
    EXPECT_EQ(vertex_buffer_[2].u, 7);
    ASSERT_EQ(hardware_corners_.size(), 2U);
    EXPECT_EQ(
        hardware_corners_[0],
        (std::vector<SRenderVertex *>{&vertex_buffer_[1], &vertex_buffer_[2], &vertex_buffer_[3]}));
    EXPECT_EQ(hardware_flags_,
              (std::vector<int>{CDemonRenderer::kDefaultTexturedFlags, common::kRenderTextured}));
}

TEST_F(CDemonRendererPolyTest, ADirectPolygonFacingAwayIsSkippedUnlessPlaneCullingIsOff) {
    startRenderer();
    const SMRGLHeaderPrimitive prim{.surface_normal = {.a = 1, .d = 1},
                                    .vertex_indices = {1, 2, 3}};
    demon_renderer_.renderTexturedDirect(prim, -1);
    EXPECT_TRUE(hardware_corners_.empty());
    demon_renderer_.setPlaneCullingEnabled(false);
    demon_renderer_.renderTexturedDirect(prim, -1);
    EXPECT_EQ(hardware_corners_.size(), 1U);
}

TEST_F(CDemonRendererPolyTest, APolygonFacingAwayIsSkipped) {
    startRenderer();
    SMRGLPrimitiveQuad poly = getPoly();
    poly.surface_normal = {.a = 1, .d = 1};
    demon_renderer_.renderTexturedPoly(poly, -1);
    demon_renderer_.renderAlphaBlendedPoly(poly);
    demon_renderer_.renderDestReadBlendPoly(poly);
    EXPECT_TRUE(hardware_corners_.empty());
    EXPECT_EQ(vertex_buffer_[1].u, 0);
}

TEST_F(CDemonRendererPolyTest, DestReadBlendingSkipsAPolygonWhollyPastASide) {
    startRenderer();
    for (int i = 1; i <= 3; ++i) {
        vertex_buffer_[i].projected_vertex.screen_x = platform::SProjectedVertex::kClipRight;
    }
    demon_renderer_.renderDestReadBlendPoly(getPoly());
    EXPECT_TRUE(hardware_corners_.empty());
    EXPECT_TRUE(hardware_polygons_.empty());
    EXPECT_EQ(vertex_buffer_[1].u, 0);
}

// The frustum clip keeps a polygon from the hardware renderer with textures off; the viewport
// clip, which takes vertex colour, does not.
TEST_F(CDemonRendererPolyTest, VertexColourGoesThroughTheViewportClip) {
    startRenderer();
    texture_.textures_disabled = true;
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderTextured);
    EXPECT_TRUE(hardware_corners_.empty());
    demon_renderer_.renderTexturedPoly(getPoly(),
                                       common::kRenderTextured | common::kRenderVertexColor);
    EXPECT_EQ(hardware_corners_.size(), 1U);
}

TEST_F(CDemonRendererPolyTest, AnUntexturedPolygonIsClippedByTheGeometryClip) {
    startRenderer();
    clipped_ = {at(0, 0), at(4, 0), at(0, 1)};
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderDepthTest);
    EXPECT_EQ(geometry_clips_, (std::vector<std::vector<int>>{{1, 2, 3}}));
    ASSERT_EQ(hardware_polygons_.size(), 1U);
    EXPECT_EQ(hardware_polygons_[0].size(), 3U);
}

TEST_F(CDemonRendererPolyTest, AGeometryClipLeavingTwoCornersDrawsNothing) {
    startRenderer();
    clipped_ = {at(0, 0), at(4, 0)};
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderDepthTest);
    EXPECT_EQ(geometry_clips_.size(), 1U);
    EXPECT_TRUE(hardware_polygons_.empty());
}

TEST_F(CDemonRendererPolyTest, WithoutFaceCaptureTheCornersAreDrawnAsTheyAre) {
    startRenderer();
    demon_renderer_.enableFaceCapture(false);
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderTextured);
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderDepthTest);
    EXPECT_TRUE(geometry_clips_.empty());
    EXPECT_EQ(hardware_corners_.size(), 2U);
}

// The simple triangle's preprocessing gives each corner its reciprocal depth as its depth.
TEST_F(CDemonRendererPolyTest, WithoutFaceCaptureAnUntexturedPolygonIsDrawnByDepth) {
    demon_renderer_.enableFaceCapture(false);
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderTextured);
    EXPECT_EQ(vertex_buffer_[1].projected_vertex.transformed_z, 0x1000);
    demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderDepthTest);
    EXPECT_EQ(vertex_buffer_[1].projected_vertex.transformed_z, 9);
}

// Drawn in software from (0, 0), (8, 0) and (0, 8), each row from x 0 and every row on one
// buffer: the top row's seven pixels reach the fifth 32-bit pixel only at 32 bits.
class CDemonRendererScanlineTest : public CDemonRendererPolyTest {
protected:
    void SetUp() override {
        CDemonRendererPolyTest::SetUp();
        vertex_buffer_[2] = at(8, 0);
        vertex_buffer_[3] = at(0, 8);
        rows_.fill(screen_row_.data());
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.map", std::string(C2d::kColorCubeSize, '\0'));
        givenWritable("fog\\vga.lte", written_);
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(rows_)));
        depth_rows_.fill(depth_row_.data());
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(ReturnRef(masks_));
        two_d_.initGraphicsSystem();
        texture_.data = texels_;
        texture_.texture_shift1 = 16;
        texture_.texture_mask1 = 0xff;
        texture_.texture_shift2 = 16;
        screen_row_.fill(kUntouched);
        demon_renderer_.enableFaceCapture(false);
    }

    void drawAt(int bits_per_pixel) {
        ON_CALL(screen_, getBitsPerPixel()).WillByDefault(Return(bits_per_pixel));
        demon_renderer_.renderTexturedPoly(getPoly(), common::kRenderTextured);
    }

    std::string written_;
    std::array<std::uint8_t, 0x10000> texels_{};
    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint32_t, 8> screen_row_{};
    std::array<void *, 8> rows_{};
    std::array<std::uint32_t, 8> depth_row_{};
    std::array<std::uint32_t *, 8> depth_rows_{};
    SColorMasks masks_{.red_mask16 = 0xf800, .green_mask16 = 0x7e0, .blue_mask16 = 0x1f};
};

TEST_F(CDemonRendererScanlineTest, AThirtyTwoBitScreenTakesTheThirtyTwoBitScanline) {
    drawAt(32);
    EXPECT_NE(screen_row_[4], kUntouched);
}

TEST_F(CDemonRendererScanlineTest, ASixteenBitScreenTakesTheSixteenBitScanline) {
    drawAt(16);
    EXPECT_NE(screen_row_[0], kUntouched);
    EXPECT_EQ(screen_row_[4], kUntouched);
}

} // namespace
} // namespace nocturne::engine
