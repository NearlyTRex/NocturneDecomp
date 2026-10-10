#include "common/render/renderstate.h"
#include "common/render/screenvertex.h"
#include "platform/gl/gldevice.h"
#include "platform/gl/glrenderer.h"
#include "platform/inputface.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrgltexturebasic.h"
#include "platform/rendervertex.h"
#include "tests/platform/gl/glrenderer_fixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <string_view>
#include <vector>

namespace nocturne::platform::gl {
namespace {

// 31 polygons of 1056 vertices fill the batch to its flush threshold without crossing it.
constexpr std::size_t kFillPolygons = 31;
constexpr std::size_t kFillVertices = 1056;
constexpr std::size_t kFillIndices = kFillPolygons * (kFillVertices - 2) * 3;

SRenderVertex vertexAt(int x, int y, int z) {
    SRenderVertex vertex;
    vertex.projected_vertex = {.transformed_z = z, .screen_x = x << 16, .screen_y = y << 16};
    vertex.u = 0x00400000;
    vertex.v = 0x00800000;
    vertex.r = 0x1000;
    vertex.g = 0x2000;
    vertex.b = 0x3000;
    vertex.a = 0x4000;
    return vertex;
}

std::array<SRenderVertex, 3> triangle(int z = 100) {
    return {vertexAt(10, 20, z), vertexAt(30, 20, z + 50), vertexAt(10, 40, z + 25)};
}

common::SVertexInput inputOf(const SRenderVertex &vertex) {
    return {.screen_x = vertex.projected_vertex.screen_x,
            .screen_y = vertex.projected_vertex.screen_y,
            .transformed_z = vertex.projected_vertex.transformed_z,
            .u = vertex.u,
            .v = vertex.v,
            .r = vertex.r,
            .g = vertex.g,
            .b = vertex.b,
            .a = vertex.a};
}

// The context a plain draw at the fixture's engine state converts with.
common::SVertexContext plainContext(std::uint32_t flags, int rhw_scale) {
    common::SVertexContext context;
    context.render_flags = flags;
    context.rhw_scale = static_cast<float>(rhw_scale);
    return context;
}

std::vector<SHardwareVertex> expected(const common::SVertexContext &context,
                                      std::span<const SRenderVertex> vertices) {
    std::vector<SHardwareVertex> out;
    for (const SRenderVertex &vertex : vertices) {
        out.push_back(toHardwareVertex(common::convertVertex(context, inputOf(vertex))));
    }
    return out;
}

void fillToThreshold(CGlRenderer &renderer) {
    std::vector<SRenderVertex> large(kFillVertices, vertexAt(1, 1, 10));
    for (std::size_t i = 0; i < kFillPolygons; ++i) {
        ASSERT_EQ(renderer.drawPolygon(large.data(), static_cast<int>(kFillVertices), 0), 1);
    }
}

double uniformLocation(const CGlRecorder &gl, std::string_view name) {
    for (const SGlCall &call : gl.getCalls("GetUniformLocation")) {
        if (call.data == textBytes(name)) {
            return call.args[1];
        }
    }
    return -1;
}

std::vector<double> uniformValues(const CGlRecorder &gl, double location) {
    std::vector<double> values;
    for (const SGlCall &call : gl.getCalls("Uniform1i")) {
        if (call.args[0] == location) {
            values.push_back(call.args[1]);
        }
    }
    return values;
}

TEST(CGlRenderer, DrawsNeedAnOpenScene) {
    SRendererFixture f;
    f.open();
    auto points = triangle();
    std::array<SRenderVertex *, 3> pointers = {points.data(), &points[1], &points[2]};
    EXPECT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 0);
    EXPECT_EQ(f.renderer.drawPolygon2(pointers.data(), 3, 0), 0);
    EXPECT_EQ(f.renderer.drawPolyList(points.data(), nullptr, 0, 0), 0);
    EXPECT_EQ(f.renderer.drawPolyList2(points.data(), nullptr, 0, 0), 0);
    ASSERT_EQ(f.renderer.beginScene(), 1);
    EXPECT_EQ(f.renderer.drawPolygon(nullptr, 3, 0), 0);
    EXPECT_EQ(f.renderer.drawPolygon(points.data(), 0, 0), 0);
    EXPECT_EQ(f.renderer.drawPolygon2(nullptr, 3, 0), 0);
    EXPECT_EQ(f.renderer.drawPolygon2(pointers.data(), -1, 0), 0);
    EXPECT_EQ(f.renderer.drawPolyList(nullptr, nullptr, 0, 0), 0);
    EXPECT_EQ(f.renderer.drawPolyList2(nullptr, nullptr, 0, 0), 0);
}

// One reciprocal-w scale for the whole polygon: its farthest depth.
TEST(CGlRenderer, APolygonConvertsAtItsFarthestDepth) {
    SRendererFixture f;
    f.openScene();
    const auto points = triangle();
    auto copy = points;
    ASSERT_EQ(f.renderer.drawPolygon(copy.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(uploadedVertices(f.gl), expected(plainContext(0, 150), points));
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{3});
}

TEST(CGlRenderer, APolygonByPointerConvertsTheSame) {
    SRendererFixture f;
    f.openScene();
    auto points = triangle();
    std::array<SRenderVertex *, 3> pointers = {&points[2], points.data(), &points[1]};
    ASSERT_EQ(f.renderer.drawPolygon2(pointers.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    const std::array<SRenderVertex, 3> order = {points[2], points[0], points[1]};
    EXPECT_EQ(uploadedVertices(f.gl), expected(plainContext(0, 150), order));
}

TEST(CGlRenderer, TheBridgeShapesTheConversion) {
    SRendererFixture f;
    f.openScene();
    std::array<std::uint8_t, 768> palette{};
    palette.at(std::size_t{0x21} * 3) = 0xaa;
    ASSERT_EQ(f.renderer.setColorTable16(palette.data(), nullptr), 1);
    f.engine.current_alpha = 0x80;
    f.engine.console_text_color = 0x7721;
    f.engine.blend_mode = 1;
    f.engine.current_lighting = 0x900;
    f.engine.full_screen_quad_depth = 512;
    f.engine.processor_type = 0;
    const std::uint32_t flags = common::kRenderLighting | common::kRenderBlend;
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, static_cast<int>(flags)), 1);
    ASSERT_EQ(f.renderer.sync(), 1);

    common::SVertexContext context = plainContext(flags, 150);
    context.current_alpha = 0x80;
    context.palette_index = 0x21;
    context.palette = palette;
    context.blend_mode = 1;
    context.light = common::getDrawLighting(flags, 0x900);
    context.w_buffer = true;
    context.lod_scale = 256.0F / 512.0F;
    EXPECT_EQ(uploadedVertices(f.gl), expected(context, points));
}

TEST(CGlRenderer, ALinearDepthIsNormalisedAgainstTheDrawDistance) {
    SRendererFixture f;
    f.openScene();
    f.engine.full_screen_quad_depth = 400;
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    common::SVertexContext context = plainContext(0, 150);
    context.lod_scale = 1.0F / 400.0F;
    EXPECT_EQ(uploadedVertices(f.gl), expected(context, points));
}

TEST(CGlRenderer, WithoutABridgeADrawTakesTheDefaults) {
    SRendererFixture f;
    ASSERT_EQ(f.renderer.init(nullptr), 1);
    ASSERT_EQ(f.renderer.setVideoMode2(640, 480, 16, f.scanlines.data()), 1);
    ASSERT_EQ(f.renderer.beginScene(), 1);
    f.gl.clear();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(uploadedVertices(f.gl), expected(plainContext(0, 150), points));
}

// A member the engine left null reads as the same default as no bridge at all.
TEST(CGlRenderer, ABridgeMemberLeftNullTakesItsDefault) {
    SRendererFixture f;
    f.engine.current_alpha = 0x10;
    CExternalRendererBridge bridge = f.engine.makeBridge();
    bridge.current_alpha = nullptr;
    ASSERT_EQ(f.renderer.init(&bridge), 1);
    ASSERT_EQ(f.renderer.setVideoMode2(640, 480, 16, f.scanlines.data()), 1);
    ASSERT_EQ(f.renderer.beginScene(), 1);
    f.gl.clear();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(uploadedVertices(f.gl), expected(plainContext(0, 150), points));
}

TEST(CGlRenderer, ADrawDistanceOfZeroLeavesDepthUnscaled) {
    SRendererFixture f;
    f.openScene();
    f.engine.full_screen_quad_depth = 0;
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(uploadedVertices(f.gl), expected(plainContext(0, 150), points));
}

// Above 480 lines the engine submits in the hold buffer's 640x480.
TEST(CGlRenderer, AboveFourHundredEightyLinesGeometryIsStretched) {
    SRendererFixture f;
    f.openScene(1024, 768);
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    common::SVertexContext context = plainContext(0, 150);
    context.screen_scale_x = 1024.0F / 640.0F;
    context.screen_scale_y = 768.0F / 480.0F;
    EXPECT_EQ(uploadedVertices(f.gl), expected(context, points));
}

TEST(CGlRenderer, DrawsSharingAStateAreOneGlDraw) {
    SRendererFixture f;
    f.openScene();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{6});
    EXPECT_EQ(f.gl.count("BindTexture"), 1U);
}

TEST(CGlRenderer, AStateChangeDrawsTheBatchFirst) {
    SRendererFixture f;
    f.openScene();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, static_cast<int>(common::kRenderBlend)), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{3});
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), (std::vector<std::size_t>{3, 3}));
}

// Presenting draws with state of its own, so a draw matching the record still binds again.
TEST(CGlRenderer, AfterPresentingTheSameStateBindsAgain) {
    SRendererFixture f;
    f.openScene();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.toggle(), 1);
    ASSERT_EQ(f.renderer.beginScene(), 1);
    f.gl.clear();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    EXPECT_EQ(f.gl.count("BindTexture"), 1U);
}

TEST(CGlRenderer, AReflectionPassBindsAgainOnEachSide) {
    SRendererFixture f;
    f.open();
    const double reflection = uniformLocation(f.gl, "u_reflection");
    ASSERT_EQ(f.renderer.beginScene(), 1);
    f.gl.clear();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    f.renderer.beginReflectionPass();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    // The polygon before the pass is drawn without the reflection.
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{3});
    f.renderer.endReflectionPass();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), (std::vector<std::size_t>{3, 3}));
    EXPECT_EQ(f.gl.count("BindTexture"), 3U);
    EXPECT_THAT(uniformValues(f.gl, reflection), ::testing::ElementsAre(1.0, 0.0));
}

TEST(CGlRenderer, ATexturedDrawBindsTheSelectedTexture) {
    SRendererFixture f;
    f.openScene();
    f.engine.texture_dimension = 1;
    std::array<std::uint8_t, 768> palette{};
    std::array<std::uint8_t, 1> texel = {0};
    SMRGLTextureBasic texture;
    texture.texture_name = {'A'};
    const GLuint name = f.gl.peekName();
    ASSERT_EQ(f.renderer.selectTexture(&texture, 0, texel.data(), palette.data(), nullptr), 1);
    f.gl.clear();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, static_cast<int>(common::kRenderTextured)),
              1);
    EXPECT_EQ(f.gl.getCalls("BindTexture").back(), glCall("BindTexture", GL_TEXTURE_2D, name));
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    EXPECT_EQ(f.gl.getCalls("BindTexture").back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

// A new target rebuilds what is bound, so a texture named before it is named again.
TEST(CGlRenderer, AModeChangeForgetsTheSelectedTexture) {
    SRendererFixture f;
    f.openScene();
    f.engine.texture_dimension = 1;
    std::array<std::uint8_t, 768> palette{};
    std::array<std::uint8_t, 1> texel = {0};
    SMRGLTextureBasic texture;
    texture.texture_name = {'A'};
    ASSERT_EQ(f.renderer.selectTexture(&texture, 0, texel.data(), palette.data(), nullptr), 1);
    ASSERT_EQ(f.renderer.setVideoMode2(640, 480, 16, f.scanlines.data()), 1);
    f.gl.clear();
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, static_cast<int>(common::kRenderTextured)),
              1);
    EXPECT_EQ(f.gl.getCalls("BindTexture").back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

TEST(CGlRenderer, APolygonThatDoesNotFitDrawsTheBatchFirst) {
    SRendererFixture f;
    f.openScene();
    fillToThreshold(f.renderer);
    EXPECT_TRUE(drawnIndexCounts(f.gl).empty());
    std::vector<SRenderVertex> small(33, vertexAt(1, 1, 10));
    ASSERT_EQ(f.renderer.drawPolygon(small.data(), 33, 0), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{kFillIndices});
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl),
              (std::vector<std::size_t>{kFillIndices, std::size_t{31} * 3}));
}

// Past the threshold the batch is drawn while it still has room, rather than on a refusal.
TEST(CGlRenderer, ABatchPastItsThresholdIsDrawnStraightAway) {
    SRendererFixture f;
    f.openScene();
    fillToThreshold(f.renderer);
    auto points = triangle();
    ASSERT_EQ(f.renderer.drawPolygon(points.data(), 3, 0), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{kFillIndices + 3});
}

TEST(CGlRenderer, APolygonLargerThanTheBatchIsDropped) {
    SRendererFixture f;
    f.openScene();
    std::vector<SRenderVertex> huge(CGlDevice::kBatchVertices + 1, vertexAt(1, 1, 10));
    EXPECT_EQ(f.renderer.drawPolygon(huge.data(), static_cast<int>(huge.size()), 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_TRUE(drawnIndexCounts(f.gl).empty());
}

// Each corner indexes the shared buffer and brings its own texture coordinates.
TEST(CGlRenderer, AListPolygonTakesItsCornersTextureCoordinates) {
    SRendererFixture f;
    f.openScene();
    std::array<SRenderVertex, 4> buffer = {vertexAt(0, 0, 10), vertexAt(8, 0, 20),
                                           vertexAt(8, 8, 30), vertexAt(0, 8, 40)};
    SMRGLPrimitiveQuad quad{.vertices = {{.vertex_index = 3, .texture_u = 1, .texture_v = 2},
                                         {.vertex_index = 2, .texture_u = 3, .texture_v = 4},
                                         {.vertex_index = 1, .texture_u = 5, .texture_v = 6},
                                         {.vertex_index = 0, .texture_u = 7, .texture_v = 8}}};
    SMRGLPrimitiveQuad degenerate{.vertices = {{.vertex_index = 0}, {.vertex_index = 1}}};
    std::array<SMRGLPrimitiveQuad *, 3> polygons = {&quad, nullptr, &degenerate};
    ASSERT_EQ(f.renderer.drawPolyList(buffer.data(), polygons.data(), 3, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    std::array<SRenderVertex, 4> corners = {buffer[3], buffer[2], buffer[1], buffer[0]};
    for (std::size_t i = 0; i < corners.size(); ++i) {
        corners.at(i).u = quad.vertices[i].texture_u;
        corners.at(i).v = quad.vertices[i].texture_v;
    }
    EXPECT_EQ(uploadedVertices(f.gl),
              expected(plainContext(0, CGlRenderer::kListRhwScale), corners));
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{6});
}

TEST(CGlRenderer, AnEmptyListDrawsNothing) {
    SRendererFixture f;
    f.openScene();
    std::array<SRenderVertex, 1> buffer{};
    std::array<SMRGLPrimitiveQuad *, 1> polygons{};
    std::array<SInputFace *, 1> faces{};
    EXPECT_EQ(f.renderer.drawPolyList(buffer.data(), nullptr, 4, 0), 1);
    EXPECT_EQ(f.renderer.drawPolyList(buffer.data(), polygons.data(), -1, 0), 1);
    EXPECT_EQ(f.renderer.drawPolyList2(buffer.data(), nullptr, 2, 0), 1);
    EXPECT_EQ(f.renderer.drawPolyList2(buffer.data(), faces.data(), 0, 0), 1);
    ASSERT_EQ(f.renderer.sync(), 1);
    EXPECT_TRUE(drawnIndexCounts(f.gl).empty());
}

// Faces carry 0.16 coordinates, widened to 8.24, and the list is drawn before returning.
TEST(CGlRenderer, AFaceListWidensItsCoordinatesAndDrawsAtOnce) {
    SRendererFixture f;
    f.openScene();
    std::array<SRenderVertex, 3> buffer = {vertexAt(0, 0, 10), vertexAt(8, 0, 20),
                                           vertexAt(8, 8, 30)};
    SInputFace face{
        .vertex_indices = {.vertex_index_0 = 2, .vertex_index_1 = 0, .vertex_index_2 = 1},
        .u_coord_0 = 0x8000,
        .u_coord_1 = 0x0001,
        .u_coord_2 = 0xffff,
        .v_coord_0 = 0x4000,
        .v_coord_1 = 0x0002,
        .v_coord_2 = 0x1234};
    std::array<SInputFace *, 2> faces = {nullptr, &face};
    ASSERT_EQ(f.renderer.drawPolyList2(buffer.data(), faces.data(), 2, 0), 1);
    EXPECT_EQ(drawnIndexCounts(f.gl), std::vector<std::size_t>{3});
    std::array<SRenderVertex, 3> corners = {buffer[2], buffer[0], buffer[1]};
    corners[0].u = 0x800000;
    corners[0].v = 0x400000;
    corners[1].u = 0x100;
    corners[1].v = 0x200;
    corners[2].u = 0xffff00;
    corners[2].v = 0x123400;
    EXPECT_EQ(uploadedVertices(f.gl),
              expected(plainContext(0, CGlRenderer::kListRhwScale), corners));
}

} // namespace
} // namespace nocturne::platform::gl
