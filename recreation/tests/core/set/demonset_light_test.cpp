#include "common/error/fatalerror.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/set/demonset.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

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
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
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
