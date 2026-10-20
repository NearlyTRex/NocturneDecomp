#include "common/render/renderstate.h"
#include "core/set/demonset.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

namespace nocturne::core {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex.screen_x = x << 16;
    vertex.projected_vertex.screen_y = y << 16;
    return vertex;
}

class CDemonSetRenderTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

// Each polygon reaches the hardware renderer through the quad batch, -1 taking its default.
TEST_F(CDemonSetRenderTest, APrimitiveBatchIsDrawnAsTheRenderersQuadBatch) {
    startRenderer();
    vertex_buffer_[1] = at(10, 2);
    vertex_buffer_[2] = at(14, 6);
    vertex_buffer_[3] = at(10, 6);
    std::vector<SMRGLPrimitiveQuad> polys(
        2, SMRGLPrimitiveQuad{.surface_normal = {},
                              .vertices = {{.vertex_index = 1, .texture_u = 9},
                                           {.vertex_index = 2},
                                           {.vertex_index = 3}}});
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, engine::CDemonRenderer::kDefaultTexturedFlags))
        .Times(2);
    set_.renderPrimitiveBatch(polys, -1);
    EXPECT_EQ(vertex_buffer_[1].u, 9);
}

} // namespace
} // namespace nocturne::core
