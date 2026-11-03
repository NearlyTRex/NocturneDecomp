#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <vector>

namespace nocturne::core {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;
using ::testing::ElementsAre;

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

// With face capture on, each reaches the geometry clip in turn.
TEST_F(CDemonSetRenderTest, EachPrimitiveOfAListIsFilledIntoTheDepth) {
    const std::array<platform::SMRGLHeaderPrimitive, 2> primitives{{
        {.surface_normal = {}, .vertex_indices = {1, 2, 3}},
        {.surface_normal = {}, .vertex_indices = {4, 5, 6}},
    }};
    set_.renderPrimitiveList(primitives);
    EXPECT_THAT(geometry_clips_, ElementsAre(std::vector{1, 2, 3}, std::vector{4, 5, 6}));
}

// Two cubes along x of geometry that draws nothing, seen from (8, 8, -40) along z: the walk
// draws the camera's cube along x, 1, then 0, all in its first slab.
class CDemonSetSceneGeometryTest : public CDemonSetRenderTest {
protected:
    CDemonSetSceneGeometryTest() {
        SGeoCube cube;
        cube.vertex_count = 3;
        cube.vertices = {{}, {}, {}};
        cube.triangle_count = 1;
        cube.triangles.resize(1);
        givenFile("data\\set.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                           {.x = 2, .y = 1, .z = 1}, {cube, cube}));
        EXPECT_TRUE(set_parts_.raytrace.loadAndSyncWithGeoFile("set.geo"));
        demon_renderer_.setProjectionScale(90.0F);
        demon_renderer_.setCameraOriginFromScaledPoint({.x = 8.0F, .y = 8.0F, .z = -40.0F});
        demon_renderer_.setupSceneRendering({});
        demon_renderer_.processCameraRelativeVertex({});
    }
};

TEST_F(CDemonSetSceneGeometryTest, TheSceneIsLitFromAboveAndInFront) {
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_EQ(light_.getLightDirection(), (common::CVector3i{.x = 0, .y = -46333, .z = 46333}));
}

// With no camera shown, a PVS already set is drawn when one is asked for, and the walk
// otherwise; neither is kept by any camera.
TEST_F(CDemonSetSceneGeometryTest, WithNoCameraShownAnyPVSSetIsDrawnWhenAskedFor) {
    const std::array<int, 1> pvs{0};
    set_parts_.raytrace.setPVS(pvs);
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawCameraPVS);
    EXPECT_THAT(set_parts_.raytrace.savePVS(), ElementsAre(0));
    set_.renderSceneGeometry(9999.9F, CDemonSet::kDrawReachedGeometry);
    EXPECT_THAT(set_parts_.raytrace.savePVS(), ElementsAre(1, 0));
}

} // namespace
} // namespace nocturne::core
