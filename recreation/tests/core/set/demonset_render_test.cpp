#include "common/error/fatalerror.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/color3i.h"
#include "core/dcamera/demoncamera.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::_;
using ::testing::Each;
using ::testing::ElementsAre;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

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

// A set of one camera at (1, 2, 3), whose PVS is its one empty cube, a scene camera framing 64
// by 48, and two renderable actors, the one at the origin the nearer and scaled.
class CDemonSetBackgroundTest : public CDemonSetRenderTest {
protected:
    CDemonSetBackgroundTest() {
        givenFile("models\\test.set",
                  SSetFile{.cameras = "1\n" + cameraText("cam"), .pvs = "1\n\t0\n"}.text());
        givenFile("data\\pier.geo",
                  geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 1, .y = 1, .z = 1}, {{}}));
        set_.load("test.set");
        set_parts_.camera->init(kFrameHeight);
        frame_rows_.fill(screen_row_.data());
        depth_rows_.fill(depth_row_.data());
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(frame_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
        near_.setRenderable(true);
        near_.setScale({.x = 1, .y = 2, .z = 3});
        far_.setRenderable(true);
        far_.setLocation({.position = {.x = 0.0F, .y = 0.0F, .z = 50.0F}, .area_id = 0});
        set_.setActors({&near_, &far_});
        set_.buildActorTypeLists();
    }

    void showTheCamera() {
        EXPECT_THAT([this] { set_.setCameraView(0); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("CDemonCamera::precomputeNormals is not ported yet")));
    }

    // Untextured, a polygon goes to the geometry clip only with face capture on.
    bool faceCaptureIsOn() {
        const std::size_t before = geometry_clips_.size();
        SMRGLPrimitiveQuad poly;
        poly.vertices = {{.vertex_index = 0}, {.vertex_index = 1}, {.vertex_index = 2}};
        demon_renderer_.renderTexturedPoly(poly, 0);
        return geometry_clips_.size() > before;
    }

    static constexpr int kFrameHeight = 48;
    std::array<void *, kFrameHeight> frame_rows_{};
    std::array<std::uint32_t, 64> depth_row_{};
    std::array<std::uint32_t *, kFrameHeight> depth_rows_{};
    CTestActor near_{kTestLeafType};
    CTestActor far_{kTestLeafType};
};

// Nearest first, each draws its background layer opaque, tinted by its scale, and leaves the
// flat colour untinted.
TEST_F(CDemonSetBackgroundTest, EachActorDrawsItsBackgroundOpaqueAndTintedByItsScale) {
    std::vector<std::string> drawn;
    const auto record = [this, &drawn](std::string_view name) {
        return [this, &drawn, name](int layer_flag) {
            const CColor3i &tint = set_.getFlatColor();
            drawn.push_back(std::format("{} {} {},{},{} {:#x}", name, layer_flag, tint.r, tint.g,
                                        tint.b, three_d_.getCurrentAlphaValue()));
        };
    };
    near_.onRenderBackground(record("near"));
    far_.onRenderBackground(record("far"));
    static_cast<void>(demon_renderer_.setRenderAlpha(0x8000));
    showTheCamera();
    EXPECT_THAT(drawn, ElementsAre("near 1 1,2,3 0xff", "far 1 65536,65536,65536 0xff"));
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0x10000, .g = 0x10000, .b = 0x10000}));
}

// An actor that turns face capture off leaves it on for the next.
TEST_F(CDemonSetBackgroundTest, EachActorsBackgroundStartsWithFaceCaptureOn) {
    near_.onRenderBackground([this](int) { demon_renderer_.enableFaceCapture(false); });
    bool far_capturing = false;
    far_.onRenderBackground([this, &far_capturing](int) { far_capturing = faceCaptureIsOn(); });
    showTheCamera();
    EXPECT_TRUE(far_capturing);
}

// The camera keeps the depths the geometry left, which the actors then draw over.
TEST_F(CDemonSetBackgroundTest, TheGeometrysDepthsAreKeptBeforeTheActorsDrawOverThem) {
    depth_row_.fill(7);
    set_parts_.camera->saveZBufferScanlines();
    depth_row_.fill(5);
    std::uint32_t under_actors = 7;
    near_.onRenderBackground([this, &under_actors](int) {
        under_actors = depth_row_[0];
        depth_row_.fill(9);
    });
    showTheCamera();
    EXPECT_NE(under_actors, 7U);
    EXPECT_EQ(set_parts_.camera->getZBuffer()[0], under_actors);
    EXPECT_EQ(depth_row_[0], 9U);
}

// An actor with no background of its own draws nothing into the camera's frame.
TEST_F(CDemonSetBackgroundTest, MostActorsHaveNoBackground) {
    showTheCamera();
    EXPECT_THAT(set_parts_.camera->getFramebuffer(), Each(0U));
}

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
