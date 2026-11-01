#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::engine {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;

// A corner at the pixel, of reciprocal depth 9.
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

SMRGLPrimitiveQuad cornersOneToThree() {
    return {.surface_normal = {},
            .vertices = {{.vertex_index = 1}, {.vertex_index = 2}, {.vertex_index = 3}}};
}

// Eight rows of eight depths, each the depth given, drawn without face capture.
class CDemonRendererCountTest : public CDemonRendererFixture {
protected:
    CDemonRendererCountTest() {
        two_d_.setupViewportAndClipping(0, 0, 7, 7);
        demon_renderer_.enableFaceCapture(false);
        for (std::size_t row = 0; row < rows_.size(); ++row) {
            rows_.at(row) = depths_.data() + (row * 8);
        }
    }

    void givenDepths(std::uint32_t depth) {
        depths_.fill(depth);
    }

    void givenTriangle() {
        vertex_buffer_[1] = at(0, 0);
        vertex_buffer_[2] = at(8, 0);
        vertex_buffer_[3] = at(0, 8);
    }

    std::array<std::uint32_t, 64> depths_{};
    std::array<std::uint32_t *, 8> rows_{};
};

// The rows of the triangle from (0, 0) to (8, 0) and (0, 8) hold 7, 6 and so on down to none:
// 28 pixels.
TEST_F(CDemonRendererCountTest, EachPixelNoNearerThanTheDepthsIsCounted) {
    givenTriangle();
    EXPECT_EQ(demon_renderer_.countVisiblePixelsPoly(cornersOneToThree(), rows_), 28);
}

TEST_F(CDemonRendererCountTest, APixelBehindTheDepthsIsNot) {
    givenTriangle();
    givenDepths(0xffffffffU);
    EXPECT_EQ(demon_renderer_.countVisiblePixelsPoly(cornersOneToThree(), rows_), 0);
}

TEST_F(CDemonRendererCountTest, APolygonFacingAwayCountsNothing) {
    givenTriangle();
    SMRGLPrimitiveQuad poly = cornersOneToThree();
    poly.surface_normal = {.a = 1, .d = 1};
    EXPECT_EQ(demon_renderer_.countVisiblePixelsPoly(poly, rows_), 0);
}

TEST_F(CDemonRendererCountTest, APolygonWhollyPastASideCountsNothing) {
    givenTriangle();
    for (std::size_t corner = 1; corner <= 3; ++corner) {
        vertex_buffer_[corner].projected_vertex.screen_x = platform::SProjectedVertex::kClipLeft;
    }
    EXPECT_EQ(demon_renderer_.countVisiblePixelsPoly(cornersOneToThree(), rows_), 0);
}

// 65536 over the scale, chopped.
TEST_F(CDemonRendererCountTest, ASimpleProjectionScaleIsTheUnitOverIt) {
    demon_renderer_.setProjectionScaleSimple(2.0F);
    EXPECT_EQ(matrix_.getProjectionScale(), 0x8000);
    demon_renderer_.setProjectionScaleSimple(3.0F);
    EXPECT_EQ(matrix_.getProjectionScale(), 21845);
}

} // namespace
} // namespace nocturne::engine
