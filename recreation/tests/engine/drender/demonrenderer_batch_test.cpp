#include "common/render/renderstate.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

namespace nocturne::engine {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;

SRenderVertex at(int x, int y) {
    SRenderVertex vertex;
    vertex.projected_vertex = {
        .transformed_z = 0x1000, .inv_z = 9, .screen_x = x << 16, .screen_y = y << 16};
    return vertex;
}

SMRGLPrimitiveQuad over(const std::vector<int> &indices) {
    SMRGLPrimitiveQuad poly;
    for (const int index : indices) {
        poly.vertices.push_back({.vertex_index = index, .texture_u = 100 + index});
    }
    return poly;
}

// Pixels (10, 2), (10, 6) and (14, 6) at corners 1 to 3, and (16, 2) and (16, 6) at 4 and 5:
// 1, 2, 3 faces away under culling mode 1, and 1, 3, 2 toward it.
class CDemonRendererBatchTest : public CDemonRendererFixture {
protected:
    void SetUp() override {
        vertex_buffer_[1] = at(10, 2);
        vertex_buffer_[2] = at(10, 6);
        vertex_buffer_[3] = at(14, 6);
        vertex_buffer_[4] = at(16, 2);
        vertex_buffer_[5] = at(16, 6);
        ON_CALL(renderer_, drawPolyList(_, _, _, _))
            .WillByDefault([this](SRenderVertex *, const SMRGLPrimitiveQuad *const *polygons,
                                  int count, int render_flags) {
                lists_.emplace_back(polygons, polygons + count);
                list_flags_.push_back(render_flags);
                return 1;
            });
    }

    // Culling by winding, without plane culling or face capture.
    void takeTheStraightPath() {
        demon_renderer_.setRenderingState(true);
        demon_renderer_.enableFaceCapture(false);
    }

    std::vector<std::vector<const SMRGLPrimitiveQuad *>> lists_;
    std::vector<int> list_flags_;
};

TEST_F(CDemonRendererBatchTest, EachPolygonIsDrawnAsATexturedPolyWithTheDefaultFlags) {
    startRenderer();
    std::vector<int> flags;
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, _))
        .Times(2)
        .WillRepeatedly([&flags](SRenderVertex **, int, int render_flags) {
            flags.push_back(render_flags);
            return 1;
        });
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3}), over({1, 3, 2})};
    demon_renderer_.renderQuadBatch(polys, -1);
    EXPECT_EQ(flags, (std::vector<int>{CDemonRenderer::kDefaultTexturedFlags,
                                       CDemonRenderer::kDefaultTexturedFlags}));
    EXPECT_TRUE(lists_.empty());
}

TEST_F(CDemonRendererBatchTest, TheStraightPathListsThePolygonsFacingTheCamera) {
    startRenderer();
    takeTheStraightPath();
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3}), over({1, 3, 2}),
                                                over({4, 5, 2, 1})};
    demon_renderer_.renderQuadBatch(polys, common::kRenderTextured);
    ASSERT_EQ(lists_.size(), 1U);
    EXPECT_EQ(lists_[0], (std::vector<const SMRGLPrimitiveQuad *>{&polys[1], &polys[2]}));
    EXPECT_EQ(list_flags_, std::vector<int>{common::kRenderTextured});
}

TEST_F(CDemonRendererBatchTest, WithoutCullingThePolygonsAreDrawnOneByOne) {
    startRenderer();
    demon_renderer_.setPlaneCullingEnabled(false);
    demon_renderer_.enableFaceCapture(false);
    EXPECT_CALL(renderer_, drawPolygon2(_, 3, common::kRenderTextured)).Times(2);
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3}), over({1, 3, 2})};
    demon_renderer_.renderQuadBatch(polys, common::kRenderTextured);
    EXPECT_TRUE(lists_.empty());
}

TEST_F(CDemonRendererBatchTest, WithNoPolygonFacingTheCameraThereIsNoList) {
    startRenderer();
    takeTheStraightPath();
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 2, 3})};
    demon_renderer_.renderQuadBatch(polys, common::kRenderTextured);
    EXPECT_TRUE(lists_.empty());
}

// The straight path takes every polygon, and all its corners, to the textured triangle, which
// leaves their depth; the untextured route's triangle preprocesses it. Five corners on one row
// leave no edge to draw.
TEST_F(CDemonRendererBatchTest, TheStraightPathRasterisesEveryCorner) {
    vertex_buffer_[0] = at(19, 2);
    vertex_buffer_[6] = at(12, 2);
    vertex_buffer_[7] = at(14, 2);
    takeTheStraightPath();
    const std::vector<SMRGLPrimitiveQuad> polys{over({1, 6, 7, 4, 0})};
    demon_renderer_.renderQuadBatch(polys, common::kRenderDepthTest);
    EXPECT_EQ(vertex_buffer_[0].u, 100);
    EXPECT_EQ(vertex_buffer_[1].projected_vertex.transformed_z, 0x1000);
    demon_renderer_.setRenderingState(false);
    demon_renderer_.renderQuadBatch(polys, common::kRenderDepthTest);
    EXPECT_EQ(vertex_buffer_[1].projected_vertex.transformed_z, 9);
}

} // namespace
} // namespace nocturne::engine
