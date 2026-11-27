#include "common/error/fatalerror.h"
#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "platform/inputface.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrgltexturebasic.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SInputFace;
using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// Untextured, so each drawn face goes through the geometry clip, which records its corners.
constexpr int kUntextured = static_cast<int>(common::kRenderDepthTest);

SRenderVertex at(int x, int y, int depth) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_x = x,
                               .transformed_y = y,
                               .transformed_z = depth,
                               .screen_x = x << 16,
                               .screen_y = y << 16};
    return vertex;
}

SMRGLPrimitiveQuad triangle(int a, int b, int c) {
    return {.surface_normal = {},
            .vertices = {{.vertex_index = a}, {.vertex_index = b}, {.vertex_index = c}}};
}

SInputFace face(std::uint16_t a, std::uint16_t b, std::uint16_t c) {
    return {.vertex_indices = {.vertex_index_0 = a, .vertex_index_1 = b, .vertex_index_2 = c}};
}

class CDemonRendererCaptureTest : public CDemonRendererFixture {
protected:
    void SetUp() override {
        // A near triangle, 1 to 3, whose nearest corner is 0x100 deep, and a far one, 4 to 6,
        // whose nearest is 0x800.
        vertex_buffer_[1] = at(0, 0, 0x100);
        vertex_buffer_[2] = at(4, 0, 0x900);
        vertex_buffer_[3] = at(0, 1, 0x900);
        vertex_buffer_[4] = at(0, 0, 0x900);
        vertex_buffer_[5] = at(4, 0, 0x800);
        vertex_buffer_[6] = at(0, 1, 0x900);
    }

    void captureNearThenFar() {
        demon_renderer_.renderTexturedPoly(triangle(1, 2, 3), kUntextured);
        demon_renderer_.renderTexturedPoly(triangle(4, 5, 6), kUntextured);
    }
};

// Nothing is drawn while capturing; the faces come out the farthest first.
TEST_F(CDemonRendererCaptureTest, CapturedFacesAreDrawnFarthestFirst) {
    demon_renderer_.setTextureCaptureMode(false);
    captureNearThenFar();
    EXPECT_THAT(geometry_clips_, IsEmpty());
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(4, 5, 6), ElementsAre(1, 2, 3)));
}

// Capture ends with the drawing: a polygon after it is drawn at once.
TEST_F(CDemonRendererCaptureTest, TheNearestFirstModeDrawsTheNearestFirst) {
    demon_renderer_.setTextureCaptureMode(true);
    captureNearThenFar();
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(1, 2, 3), ElementsAre(4, 5, 6)));
    demon_renderer_.renderTexturedPoly(triangle(1, 2, 3), kUntextured);
    EXPECT_EQ(geometry_clips_.size(), 3U);
}

// A new capture starts empty; faces of one depth keep their order.
TEST_F(CDemonRendererCaptureTest, ANewCaptureStartsEmpty) {
    demon_renderer_.setTextureCaptureMode(false);
    captureNearThenFar();
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedPoly(triangle(1, 2, 3), kUntextured);
    demon_renderer_.renderTexturedPoly(triangle(3, 2, 1), kUntextured);
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(1, 2, 3), ElementsAre(3, 2, 1)));
}

// A quad's two triangles share its first corner; past four corners the rest are left out. The
// batch is kept the same way.
TEST_F(CDemonRendererCaptureTest, AQuadIsKeptAsTwoTriangles) {
    const SMRGLPrimitiveQuad quad{.surface_normal = {},
                                  .vertices = {{.vertex_index = 1},
                                               {.vertex_index = 2},
                                               {.vertex_index = 3},
                                               {.vertex_index = 4},
                                               {.vertex_index = 5}}};
    demon_renderer_.setTextureCaptureMode(true);
    demon_renderer_.renderQuadBatch(std::span(&quad, 1), kUntextured);
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(1, 2, 3), ElementsAre(1, 3, 4)));
}

// The batch draws at once while not capturing.
TEST_F(CDemonRendererCaptureTest, TheBatchDrawsAtOnceWhileNotCapturing) {
    const SMRGLPrimitiveQuad poly = triangle(1, 2, 3);
    demon_renderer_.setPlaneCullingEnabled(false);
    demon_renderer_.renderQuadBatch(std::span(&poly, 1), kUntextured);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

// A face's coordinates are a polygon's top 16 bits of fraction.
TEST_F(CDemonRendererCaptureTest, AKeptFaceTakesThePolygonsCoordinatesInSixteenBits) {
    SMRGLPrimitiveQuad poly = triangle(1, 2, 3);
    poly.vertices[0].texture_u = 0x123456;
    poly.vertices[2].texture_v = 0x10ffff00;
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedPoly(poly, -1);
    demon_renderer_.processCapturedFaces();
    EXPECT_EQ(vertex_buffer_[1].u, 0x123400);
    EXPECT_EQ(vertex_buffer_[3].v, 0xffff00);
}

TEST_F(CDemonRendererCaptureTest, AFaceFacingAwayIsNotKept) {
    SMRGLPrimitiveQuad poly = triangle(1, 2, 3);
    poly.surface_normal = {.a = 1, .d = 1};
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedPoly(poly, kUntextured);
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, IsEmpty());
}

// While face capture is on, a face wholly past one side is left out; past different sides, it is
// kept.
TEST_F(CDemonRendererCaptureTest, AFaceWhollyPastOneSideIsNotKept) {
    for (int i = 1; i <= 3; ++i) {
        vertex_buffer_[i].projected_vertex.screen_x = platform::SProjectedVertex::kClipRight;
    }
    vertex_buffer_[4].projected_vertex.screen_x = platform::SProjectedVertex::kClipRight;
    vertex_buffer_[5].projected_vertex.screen_x = platform::SProjectedVertex::kClipLeft;
    vertex_buffer_[6].projected_vertex.screen_x = platform::SProjectedVertex::kClipLeft;
    demon_renderer_.setTextureCaptureMode(false);
    captureNearThenFar();
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(4, 5, 6)));
}

// Without face capture a face is kept by its winding, as culling asks. Culling is off once the
// faces are drawn.
TEST_F(CDemonRendererCaptureTest, WithoutFaceCaptureAFaceIsKeptByItsWinding) {
    demon_renderer_.enableFaceCapture(false);
    demon_renderer_.setRenderingState(true);
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    demon_renderer_.renderTexturedFace(face(1, 3, 2), kUntextured);
    demon_renderer_.enableFaceCapture(true);
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, ElementsAre(ElementsAre(1, 2, 3)));
    EXPECT_EQ(three_d_.getCullingMode(), 0);
}

// Drawn without face capture, the faces don't turn culling on first.
TEST_F(CDemonRendererCaptureTest, WithoutFaceCaptureTheFacesAreDrawnAsCullingStands) {
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    demon_renderer_.enableFaceCapture(false);
    demon_renderer_.processCapturedFaces();
    EXPECT_THAT(geometry_clips_, IsEmpty());
    EXPECT_EQ(three_d_.getCullingMode(), 0);
}

TEST_F(CDemonRendererCaptureTest, TooManyFacesIsFatal) {
    demon_renderer_.setTextureCaptureMode(false);
    for (int i = 0; i < 5000; ++i) {
        demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    }
    EXPECT_THAT(
        [this] { demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured); },
        ThrowsMessage<common::CFatalError>(StrEq("CDR::captureFace - too many faces captured")));
}

TEST_F(CDemonRendererCaptureTest, TooManyTexturesIsFatal) {
    platform::SMRGLTextureBasic texture;
    demon_renderer_.setTextureCaptureMode(false);
    for (int i = 0; i < 101; ++i) {
        demon_renderer_.captureTexture(texture);
    }
    EXPECT_THAT(
        [&] { demon_renderer_.captureTexture(texture); },
        ThrowsMessage<common::CFatalError>(StrEq("CDR::texture - Too many captured textures")));
}

// Each face is drawn with the texture current as it came: drawn farthest first, the near face's
// texture is current after; nearest first, the far face's.
TEST_F(CDemonRendererCaptureTest, EachFaceIsDrawnWithItsOwnTexture) {
    std::array<std::uint32_t, 256> palette{};
    std::array<std::uint16_t, 256> palette16{};
    ON_CALL(screen_, getBitsPerPixel()).WillByDefault(::testing::Return(32));
    ON_CALL(screen_, getHardwarePalette32())
        .WillByDefault(::testing::Return(std::span<std::uint32_t, 256>(palette)));
    ON_CALL(screen_, getHardwarePalette16())
        .WillByDefault(::testing::Return(std::span<std::uint16_t, 256>(palette16)));
    constexpr std::size_t kTexels = std::size_t{32} * 32;
    givenFile("art\\near.raw", std::string(kTexels, '\x05'));
    givenFile("art\\far.raw", std::string(kTexels, '\x06'));
    platform::SMRGLTextureBasic near_texture{.texture_name = "near.raw"};
    platform::SMRGLTextureBasic far_texture{.texture_name = "far.raw"};
    for (const bool nearest_first : {false, true}) {
        demon_renderer_.setTextureCaptureMode(nearest_first);
        demon_renderer_.renderTexturedPoly(triangle(1, 2, 3), kUntextured);
        demon_renderer_.captureTexture(near_texture);
        demon_renderer_.renderTexturedPoly(triangle(1, 2, 3), kUntextured);
        demon_renderer_.captureTexture(far_texture);
        demon_renderer_.renderTexturedPoly(triangle(4, 5, 6), kUntextured);
        demon_renderer_.processCapturedFaces();
        EXPECT_EQ(texture_.data.front(), nearest_first ? 6 : 5);
    }
}

// In the shadow pass nothing is kept, the faces drawn at once, and the kept faces aren't drawn:
// the capture goes on after.
TEST_F(CDemonRendererCaptureTest, TheShadowPassKeepsNothing) {
    demon_renderer_.setShadowPass(1);
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    EXPECT_EQ(geometry_clips_.size(), 1U);
    demon_renderer_.setShadowPass(0);
    demon_renderer_.setTextureCaptureMode(false);
    demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    demon_renderer_.setShadowPass(1);
    demon_renderer_.processCapturedFaces();
    demon_renderer_.setShadowPass(0);
    demon_renderer_.renderTexturedFace(face(1, 2, 3), kUntextured);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

// Drawn, a face gives its corners its own coordinates in 8.24; -1 takes the default flags. In the
// shadow pass the corners keep theirs.
TEST_F(CDemonRendererCaptureTest, ADrawnFaceGivesItsCornersItsCoordinates) {
    SInputFace given = face(1, 2, 3);
    given.u_coord_1 = 0x1234;
    given.v_coord_2 = 0xffff;
    demon_renderer_.renderTexturedFace(given, -1);
    EXPECT_EQ(vertex_buffer_[2].u, 0x123400);
    EXPECT_EQ(vertex_buffer_[3].v, 0xffff00);
    vertex_buffer_[2].u = 7;
    demon_renderer_.setShadowPass(1);
    demon_renderer_.renderTexturedFace(given, -1);
    EXPECT_EQ(vertex_buffer_[2].u, 7);
}

} // namespace
} // namespace nocturne::engine
