#include "common/error/fatalerror.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/rect.h"
#include "core/set/demonset.h"
#include "engine/2d/2d.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <span>
#include <vector>

namespace nocturne::core {
namespace {

using common::CVector3i;
using platform::SMRGLPrimitiveQuad;

constexpr int kOne = 0x10000;
constexpr common::CMatrix3x3i kIdentity{
    .m = {CVector3i{.x = kOne}, CVector3i{.y = kOne}, CVector3i{.z = kOne}}};

SMRGLPrimitiveQuad over(const std::vector<int> &indices) {
    SMRGLPrimitiveQuad poly;
    for (const int index : indices) {
        poly.vertices.push_back({.vertex_index = index});
    }
    return poly;
}

class CDemonSetLightTest : public engine::CDemonRendererFixture {
protected:
    CDemonSetLightTest() {
        giveTheCamera(kIdentity);
        // Light from in front at half strength, no ambient, white.
        set_.setLightDirection({.z = -kOne / 2});
        set_.setAmbientBaseQuick(0);
    }

    void giveTheCamera(const common::CMatrix3x3i &transform) {
        matrix_.setTransformMatrix(transform);
        matrix_.invertTransformMatrix();
    }

    // Corners 0 to 3 of a square in the plane z = 0, wound to face +z, the light's way.
    void placeTheSquare() {
        const std::vector<CVector3i> corners{
            {.x = 0, .y = 0}, {.x = 64, .y = 0}, {.x = 64, .y = 64}, {.x = 0, .y = 64}};
        for (std::size_t i = 0; i < corners.size(); ++i) {
            vertex_buffer_[i].projected_vertex = {.transformed_x = corners[i].x,
                                                  .transformed_y = corners[i].y};
        }
    }

    // Untextured, a polygon goes to the geometry clip only with face capture on, and otherwise to
    // the hardware renderer.
    bool faceCaptureIsOn() {
        const std::size_t before = geometry_clips_.size();
        demon_renderer_.renderTexturedPoly(over({0, 1, 2}), 0);
        return geometry_clips_.size() > before;
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
};

TEST_F(CDemonSetLightTest, RotatingPutsTheVerticesInEyeSpaceAndOnTheScreen) {
    startRenderer();
    const std::vector<CVector3i> vertices{{.x = 10, .y = 20, .z = 100}};
    set_.rotateVerticies(vertices);
    EXPECT_EQ(vertex_buffer_[0].projected_vertex.transformed_x, 10);
    EXPECT_EQ(vertex_buffer_[0].projected_vertex.transformed_z, 100);
    EXPECT_GE(vertex_buffer_[0].projected_vertex.screen_x, 0);
    EXPECT_FALSE(faceCaptureIsOn());
}

// A 640 by 480 view centred at (320, 240), y running down the screen, in 16.16, and the scene
// camera keeping its buffers.
class CDemonSetScreenBoundsTest : public CDemonSetLightTest {
protected:
    CDemonSetScreenBoundsTest() {
        two_d_.setProjection({.half_width_fixed = 320 << 16,
                              .neg_half_height_fixed = -240 << 16,
                              .center_x_fixed = 320 << 16,
                              .center_y_fixed = 240 << 16});
        set_parts_.tables.kept_camera = set_parts_.camera.get();
    }

    void onScreen(std::size_t index, int x, int y) {
        vertex_buffer_[index].projected_vertex = {.screen_x = x << 16, .screen_y = y << 16};
    }

    // Out of view, with its eye space coordinates.
    void offScreen(std::size_t index, int x, int y, int z) {
        vertex_buffer_[index].projected_vertex = {.transformed_x = x,
                                                  .transformed_y = y,
                                                  .transformed_z = z,
                                                  .screen_x =
                                                      platform::SProjectedVertex::kClipLeft};
    }

    [[nodiscard]] std::span<const CRect> marked() const {
        return set_parts_.camera->getDirtyRects();
    }
};

// The box the vertices in view reach, in whole pixels.
TEST_F(CDemonSetScreenBoundsTest, TheVerticesInViewMarkTheBoxTheyReach) {
    onScreen(0, 100, 300);
    onScreen(1, 200, 50);
    onScreen(2, 900, 900);
    set_.pushScreenBoundsToCamera(2);
    EXPECT_THAT(marked(), ::testing::ElementsAre(
                              CRect{.x_min = 100, .x_max = 200, .y_min = 50, .y_max = 300}));
}

// A vertex out of view reaches where it projects along an axis it is in view on, and the view's
// edge on a side it is past.
TEST_F(CDemonSetScreenBoundsTest, AVertexOutOfViewReachesTheEdgeItIsPast) {
    // Half way right, past the top.
    offScreen(0, 50, 200, 100);
    set_.pushScreenBoundsToCamera(1);
    // Past the left, at the middle; then past the right and the bottom.
    offScreen(1, -150, 0, 100);
    offScreen(2, 150, -150, 100);
    set_.pushScreenBoundsToCamera(3);
    EXPECT_THAT(marked(),
                ::testing::ElementsAre(CRect{.x_min = 480, .x_max = 480, .y_min = 0, .y_max = 0},
                                       CRect{.x_min = 0, .x_max = 640, .y_min = 0, .y_max = 480}));
}

// With no vertex the box is inside out, which marks nothing; without a camera keeping its
// buffers nothing is marked at all.
TEST_F(CDemonSetScreenBoundsTest, NoVertexMarksAnEmptyBox) {
    set_.pushScreenBoundsToCamera(0);
    EXPECT_THAT(marked(),
                ::testing::ElementsAre(CRect{.x_min = 640, .x_max = 0, .y_min = 480, .y_max = 0}));
    set_parts_.tables.kept_camera = nullptr;
    set_.pushScreenBoundsToCamera(1);
    EXPECT_EQ(marked().size(), 1U);
}

// Rotating marks the box the vertices reach.
TEST_F(CDemonSetScreenBoundsTest, RotatingMarksTheVerticesBox) {
    startRenderer();
    const std::vector<CVector3i> vertices{{.x = 0, .y = 0, .z = 100}};
    set_.rotateVerticies(vertices);
    const int x = vertex_buffer_[0].projected_vertex.screen_x >> 16;
    const int y = vertex_buffer_[0].projected_vertex.screen_y >> 16;
    EXPECT_THAT(marked(),
                ::testing::ElementsAre(CRect{.x_min = x, .x_max = x, .y_min = y, .y_max = y}));
}

TEST_F(CDemonSetLightTest, AVertexOutOfViewLeavesFaceCaptureOn) {
    startRenderer();
    demon_renderer_.enableFaceCapture(false);
    const std::vector<CVector3i> vertices{{.z = -5}, {.z = 100}};
    set_.rotateVerticies(vertices);
    EXPECT_TRUE(faceCaptureIsOn());
}

TEST_F(CDemonSetLightTest, MoreVerticesThanTheBufferHoldsAreFatal) {
    const std::vector<CVector3i> vertices(vertex_buffer_.size() + 1);
    EXPECT_THROW(set_.rotateVerticies(vertices), common::CFatalError);
    EXPECT_THROW(set_.lightVerticies(static_cast<int>(vertices.size()), {}, vertices),
                 common::CFatalError);
}

// Toward the light at half strength is half lit; away from it, unlit.
TEST_F(CDemonSetLightTest, GivenNormalsEachVertexIsLitByItsOwn) {
    const std::vector<CVector3i> normals{{.z = kOne}, {.z = -kOne}};
    vertex_buffer_[0].a = 7;
    set_.lightVerticies(2, {}, normals);
    EXPECT_EQ(vertex_buffer_[0].r, kOne / 2);
    EXPECT_EQ(vertex_buffer_[0].b, kOne / 2);
    EXPECT_EQ(vertex_buffer_[0].a, 0);
    EXPECT_EQ(vertex_buffer_[1].r, 0);
}

TEST_F(CDemonSetLightTest, WithoutNormalsOrFacesTheQuickLightIsFatal) {
    EXPECT_THROW(set_.lightVerticies(1, {}, {}), common::CFatalError);
    EXPECT_NO_THROW(set_.lightVerticies(0, {}, {}));
}

// From nocedit's own code: the first vertex's normal is 30233.77 along x before a bare FISTP rounds
// it to nearest, and the third, on only a degenerate face, has none.
TEST_F(CDemonSetLightTest, FaceNormalsRoundToTheNearestWhole) {
    const std::vector<CVector3i> corners{{.x = -61, .y = -62, .z = 62},
                                         {.x = -37, .y = -45, .z = 22},
                                         {.x = 1, .y = -53, .z = -35},
                                         {.x = -59, .y = -53, .z = -2}};
    for (std::size_t i = 0; i < corners.size(); ++i) {
        vertex_buffer_[i].projected_vertex = {.transformed_x = corners[i].x,
                                              .transformed_y = corners[i].y,
                                              .transformed_z = corners[i].z};
    }
    set_.setLightDirection({.x = -kOne});
    const std::vector<SMRGLPrimitiveQuad> polys{over({0, 0, 2}), over({0, 3, 1})};
    set_.lightVerticies(4, polys, {});
    EXPECT_EQ(vertex_buffer_[0].r, 30234);
    EXPECT_EQ(vertex_buffer_[1].r, 30234);
    EXPECT_EQ(vertex_buffer_[2].r, 0);
    EXPECT_EQ(vertex_buffer_[3].r, 30234);
}

// The rough square roots leave the faces' normals near, not at, unit length.
TEST_F(CDemonSetLightTest, WithoutNormalsTheFacesGiveThem) {
    placeTheSquare();
    set_.setAmbientBaseQuick(100);
    const std::vector<SMRGLPrimitiveQuad> polys{over({0, 1, 2, 3})};
    set_.lightVerticies(5, polys, {});
    constexpr int kHalfLit = 100 + (kOne / 2);
    constexpr int kTolerance = kOne / 16;
    for (std::size_t i = 0; i < 4; ++i) {
        EXPECT_NEAR(vertex_buffer_[i].r, kHalfLit, kTolerance) << i;
    }
    EXPECT_EQ(vertex_buffer_[4].r, 100);
}

TEST_F(CDemonSetLightTest, AFaceWoundTheOtherWayIsUnlit) {
    placeTheSquare();
    const std::vector<SMRGLPrimitiveQuad> polys{over({0, 2, 1})};
    set_.lightVerticies(3, polys, {});
    EXPECT_EQ(vertex_buffer_[0].r, 0);
}

// Only a quad's fourth corner shares its normal; past four, the first three alone do.
TEST_F(CDemonSetLightTest, APolygonOfFiveCornersLightsItsFirstThree) {
    placeTheSquare();
    vertex_buffer_[4].projected_vertex = {.transformed_x = -10, .transformed_y = 30};
    const std::vector<SMRGLPrimitiveQuad> polys{over({0, 1, 2, 3, 4})};
    set_.lightVerticies(5, polys, {});
    EXPECT_GT(vertex_buffer_[2].r, 0);
    EXPECT_EQ(vertex_buffer_[3].r, 0);
    EXPECT_EQ(vertex_buffer_[4].r, 0);
}

// Turned half round, the camera sees the square's back: its world normal faces away.
TEST_F(CDemonSetLightTest, TheFacesAreTakenInWorldSpace) {
    giveTheCamera({.m = {CVector3i{.x = -kOne}, CVector3i{.y = kOne}, CVector3i{.z = -kOne}}});
    placeTheSquare();
    const std::vector<SMRGLPrimitiveQuad> polys{over({0, 1, 2})};
    set_.lightVerticies(3, polys, {});
    EXPECT_EQ(vertex_buffer_[0].r, 0);
}

} // namespace
} // namespace nocturne::core
