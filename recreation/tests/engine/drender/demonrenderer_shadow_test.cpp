#include "engine/drender/demonrenderer.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SMRGLHeaderPrimitive;
using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::Return;

constexpr std::uint16_t kFar = 0xffff;
// Texture coordinates the buffer's corners keep while the shadow pass draws.
constexpr int kKeptU = 7;
constexpr int kKeptV = 9;
constexpr int kPolyU = 100;

// A corner at the pixel, 0x1000 deep.
SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x,
                               .transformed_y = y,
                               .transformed_z = 0x1000,
                               .inv_z = 0x1200,
                               .screen_x = x << 16,
                               .screen_y = y << 16};
    vertex.u = kKeptU;
    vertex.v = kKeptV;
    return vertex;
}

SMRGLPrimitiveQuad over(const std::vector<int> &indices) {
    SMRGLPrimitiveQuad poly;
    for (const int index : indices) {
        poly.vertices.push_back({.vertex_index = index, .texture_u = kPolyU, .texture_v = kPolyU});
    }
    return poly;
}

// An 8 by 8 light's map of 16-bit depths as the screen's rows, in the shadow pass, without face
// capture, and the triangle from (0, 0) to (8, 0) and (0, 8) at corners 1 to 3.
class CDemonRendererShadowTest : public CDemonRendererFixture {
protected:
    CDemonRendererShadowTest() {
        two_d_.setupViewportAndClipping(0, 0, 7, 7);
        demon_renderer_.enableFaceCapture(false);
        map_.fill(kFar);
        for (std::size_t row = 0; row < kSize; ++row) {
            map_rows_.at(row) = map_.data() + (row * kSize);
            depth_rows_.at(row) = depths_.data() + (row * kSize);
        }
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(map_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        vertex_buffer_[1] = at(0, 0);
        vertex_buffer_[2] = at(8, 0);
        vertex_buffer_[3] = at(0, 8);
        demon_renderer_.setShadowPass(1);
    }

    [[nodiscard]] std::uint16_t mapAt(std::size_t x, std::size_t y) const {
        return map_.at((y * kSize) + x);
    }

    // The triangle's corner pixel is drawn and the pixel past its far corner is not.
    void expectTheTriangleDrawn() const {
        EXPECT_NE(mapAt(0, 0), kFar);
        EXPECT_NE(mapAt(0, 6), kFar);
        EXPECT_EQ(mapAt(7, 7), kFar);
    }

    void expectTheCornersKeptTheirCoordinates() const {
        for (std::size_t corner = 1; corner <= 3; ++corner) {
            EXPECT_EQ(vertex_buffer_[corner].u, kKeptU);
            EXPECT_EQ(vertex_buffer_[corner].v, kKeptV);
        }
    }

    static constexpr std::size_t kSize = 8;
    std::array<std::uint16_t, kSize * kSize> map_{};
    std::array<std::uint32_t, kSize * kSize> depths_{};
    std::array<void *, kSize> map_rows_{};
    std::array<std::uint32_t *, kSize> depth_rows_{};
};

TEST_F(CDemonRendererShadowTest, ADirectTexturedPolygonDrawsOnlyItsDepth) {
    demon_renderer_.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {1, 2, 3}}, -1);
    expectTheTriangleDrawn();
}

TEST_F(CDemonRendererShadowTest, ATexturedPolygonDrawsOnlyItsDepthAndLeavesTheCorners) {
    demon_renderer_.renderTexturedPoly(over({1, 2, 3}), -1);
    expectTheTriangleDrawn();
    expectTheCornersKeptTheirCoordinates();
}

TEST_F(CDemonRendererShadowTest, AnAlphaBlendedPolygonDrawsOnlyItsDepthAndLeavesTheCorners) {
    demon_renderer_.renderAlphaBlendedPoly(over({1, 2, 3}));
    expectTheTriangleDrawn();
    expectTheCornersKeptTheirCoordinates();
}

// A see-through polygon draws its depth only through the texture's solid texels, at the
// coordinates the corners already had.
class CDemonRendererCutoutTest : public CDemonRendererShadowTest {
protected:
    CDemonRendererCutoutTest() {
        texture_.data = texels_;
        texture_.opacity = opacity_;
        texture_.texture_shift1 = 16;
        texture_.texture_mask1 = 0xff;
        texture_.texture_shift2 = 16;
    }

    std::array<std::uint8_t, 0x100> texels_{};
    std::array<std::uint8_t, 0x100> opacity_{};
};

TEST_F(CDemonRendererCutoutTest, SolidTexelsTakeTheDepth) {
    opacity_.fill(1);
    demon_renderer_.renderDestReadBlendPoly(over({1, 2, 3}));
    expectTheTriangleDrawn();
    expectTheCornersKeptTheirCoordinates();
}

TEST_F(CDemonRendererCutoutTest, HolesLeaveTheMapAlone) {
    demon_renderer_.renderDestReadBlendPoly(over({1, 2, 3}));
    EXPECT_EQ(mapAt(0, 0), kFar);
    EXPECT_EQ(mapAt(0, 6), kFar);
}

// Culling by winding, without plane culling or face capture, each polygon goes straight to the
// depth-only draw: one of the two windings faces the camera.
TEST_F(CDemonRendererShadowTest, TheBatchsStraightPathDrawsOnlyTheDepths) {
    demon_renderer_.setRenderingState(true);
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3}), over({1, 3, 2})};
    demon_renderer_.renderQuadBatch(polys, -1);
    expectTheTriangleDrawn();
    expectTheCornersKeptTheirCoordinates();
}

// The rasteriser's bias pushes each depth back before it is drawn, 0x8000 in 24.8 being 0x80 once
// shifted into the map, both one polygon at a time and on the batch's straight path.
TEST_F(CDemonRendererShadowTest, TheBiasPushesTheDepthsDrawnBack) {
    EXPECT_EQ(demon_renderer_.getRasterizerDepthBias(), 0);
    demon_renderer_.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {1, 2, 3}}, -1);
    const std::uint16_t unbiased = mapAt(0, 0);
    map_.fill(kFar);
    demon_renderer_.setRasterizerDepthBias(0x8000);
    EXPECT_EQ(demon_renderer_.getRasterizerDepthBias(), 0x8000);
    demon_renderer_.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {1, 2, 3}}, -1);
    EXPECT_EQ(mapAt(0, 0), unbiased - 0x80);
    map_.fill(kFar);
    demon_renderer_.setRenderingState(true);
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3}), over({1, 3, 2})};
    demon_renderer_.renderQuadBatch(polys, -1);
    EXPECT_EQ(mapAt(0, 0), unbiased - 0x80);
}

// The profiled test asks the light's map, not the screen's depths.
TEST_F(CDemonRendererShadowTest, AProfiledPolygonIsShownWhereItIsNearerThanTheMap) {
    depths_.fill(0xffffffffU);
    const SMRGLHeaderPrimitive prim{.surface_normal = {}, .vertex_indices = {1, 2, 3}};
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(prim));
    map_.fill(0);
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(prim));
    EXPECT_EQ(mapAt(0, 0), 0);
}

// Only the even rows' even pixels are tested.
TEST_F(CDemonRendererShadowTest, AProfiledPolygonTestsEveryOtherPixelOfTheMap) {
    map_.fill(0);
    map_.at(1) = kFar;
    map_.at(kSize) = kFar;
    const SMRGLHeaderPrimitive prim{.surface_normal = {}, .vertex_indices = {1, 2, 3}};
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(prim));
    map_.at((2 * kSize) + 2) = kFar;
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(prim));
}

// From (0, 0) to (7, 0) and (0, 7) the last row tested, 6, holds no pixels.
TEST_F(CDemonRendererShadowTest, AProfiledPolygonsEmptyRowIsHiddenFromTheMap) {
    map_.fill(0);
    map_.at(6 * kSize) = kFar;
    vertex_buffer_[2] = at(7, 0);
    vertex_buffer_[3] = at(0, 7);
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(
        {.surface_normal = {}, .vertex_indices = {1, 2, 3}}));
}

// With the hardware renderer on, the test still runs in software against the screen's depths,
// and the shadow pass is as it was after it.
TEST_F(CDemonRendererShadowTest, WithTheHardwareRendererTheProfiledTestRunsInSoftware) {
    demon_renderer_.setShadowPass(0);
    special_.setUseExternalRenderer(true);
    depths_.fill(0);
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(
        {.surface_normal = {}, .vertex_indices = {1, 2, 3}}));
    EXPECT_EQ(demon_renderer_.isShadowPass(), 0);
    EXPECT_FALSE(texture_.textures_disabled);
    demon_renderer_.setShadowPass(1);
    map_.fill(0);
    map_.at(0) = kFar;
    EXPECT_TRUE(demon_renderer_.renderDepthProfiledDirect(
        {.surface_normal = {}, .vertex_indices = {1, 2, 3}}));
    EXPECT_EQ(demon_renderer_.isShadowPass(), 1);
}

} // namespace
} // namespace nocturne::engine
