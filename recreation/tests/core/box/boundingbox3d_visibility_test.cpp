#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/box/boundingbox3d.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "tests/mocks/core/actorrenderfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

// A camera that records what it is asked to fog and leaves the fog it is given.
class CFogCamera : public CDemonCamera {
public:
    CFogCamera(const SDemonCameraOwners &owners, int reciprocal)
        : CDemonCamera(owners), tables_(owners.tables), reciprocal_(reciprocal) {}

    void setupPerspectiveAndFog(common::CVector3f *position,
                                platform::SProjectedVertex *projected_vertex) override {
        place = *position;
        projected_depth = projected_vertex->transformed_z;
        tables_.perspective_reciprocal = reciprocal_;
    }

    common::CVector3f place;
    int projected_depth = 0;

private:
    SCameraTables &tables_;
    int reciprocal_;
};

// The box sits a little in front of the eye, wholly in view.
class CBoundingBox3DVisibilityTest : public CActorRenderFixture {
protected:
    [[nodiscard]] SDemonCameraOwners cameraOwners() {
        return set_parts_.light_parts.owners(screen_, special_, demon_renderer_, dosio_).camera;
    }

    // Untextured, a polygon goes to the geometry clip only with face capture on.
    bool faceCaptureIsOn() {
        const std::size_t before = geometry_clips_.size();
        platform::SMRGLPrimitiveQuad poly;
        poly.vertices = {{.vertex_index = 0}, {.vertex_index = 1}, {.vertex_index = 2}};
        demon_renderer_.renderTexturedPoly(poly, 0);
        return geometry_clips_.size() > before;
    }

    // Wide enough that its near face covers pixels the profiled depth test samples.
    CBoundingBox3D box_{.min = {.x = -3.0F, .y = -3.0F, .z = 4.0F},
                        .max = {.x = 3.0F, .y = 3.0F, .z = 6.0F}};
};

TEST_F(CBoundingBox3DVisibilityTest, ABoxWhoseNearFacePassesTheDepthsIsVisible) {
    EXPECT_TRUE(box_.isVisible(render_owners_));
}

TEST_F(CBoundingBox3DVisibilityTest, ABoxBehindTheDepthsIsHidden) {
    hideEverything();
    EXPECT_FALSE(box_.isVisible(render_owners_));
}

// Its corners take the vertex buffer's first eight entries; the far ones are left as projected.
TEST_F(CBoundingBox3DVisibilityTest, TheCornersAreProjectedIntoTheVertexBuffer) {
    static_cast<void>(box_.isVisible(render_owners_));
    EXPECT_EQ(vertex_buffer_[4].projected_vertex.transformed_x, -3 * 256);
    EXPECT_EQ(vertex_buffer_[4].projected_vertex.transformed_z, 6 * 256);
    EXPECT_EQ(vertex_buffer_[7].projected_vertex.transformed_x, 3 * 256);
    EXPECT_EQ(vertex_buffer_[7].projected_vertex.transformed_z, 6 * 256);
}

// Every corner past the right edge: nothing is drawn, and face capture is left as it was.
TEST_F(CBoundingBox3DVisibilityTest, ABoxWhollyPastOneSideIsHidden) {
    demon_renderer_.enableFaceCapture(false);
    const CBoundingBox3D right{.min = {.x = 100.0F, .y = -3.0F, .z = 4.0F},
                               .max = {.x = 102.0F, .y = 3.0F, .z = 6.0F}};
    EXPECT_FALSE(right.isVisible(render_owners_));
    EXPECT_FALSE(faceCaptureIsOn());
}

// A box in view draws its faces without face capture; one partly out of view draws them through
// the geometry clip, here only the face toward the eye, wound 0, 2, 3, 1.
TEST_F(CBoundingBox3DVisibilityTest, OnlyABoxPartlyOutOfViewIsClipped) {
    static_cast<void>(box_.isVisible(render_owners_));
    EXPECT_THAT(geometry_clips_, IsEmpty());
    const CBoundingBox3D wide{.min = {.x = -3.0F, .y = -3.0F, .z = 4.0F},
                              .max = {.x = 100.0F, .y = 3.0F, .z = 6.0F}};
    static_cast<void>(wide.isVisible(render_owners_));
    EXPECT_THAT(geometry_clips_, ElementsAre(std::vector{0, 2, 3, 1}));
}

// The faces are drawn with plane culling off, and face capture and plane culling are on after.
TEST_F(CBoundingBox3DVisibilityTest, FaceCaptureAndPlaneCullingAreOnAfterTheTest) {
    demon_renderer_.enableFaceCapture(false);
    demon_renderer_.setPlaneCullingEnabled(false);
    static_cast<void>(box_.isVisible(render_owners_));
    EXPECT_TRUE(faceCaptureIsOn());
    const platform::SMRGLHeaderPrimitive facing_away{.surface_normal = {.a = 1, .d = 1},
                                                     .vertex_indices = {0, 2, 3}};
    demon_renderer_.enableFaceCapture(false);
    EXPECT_FALSE(demon_renderer_.renderDepthProfiledDirect(facing_away));
}

// With the eye inside, no face is toward it, and the box is visible whatever the depths.
TEST_F(CBoundingBox3DVisibilityTest, ABoxAroundTheEyeIsVisible) {
    hideEverything();
    const CBoundingBox3D around{.min = {.x = -1.0F, .y = -1.0F, .z = -1.0F},
                                .max = {.x = 1.0F, .y = 1.0F, .z = 1.0F}};
    EXPECT_TRUE(around.isVisible(render_owners_));
}

// Without a scene camera there is no fog.
TEST_F(CBoundingBox3DVisibilityTest, WithNoSceneCameraTheBoxIsUnfogged) {
    set_parts_.tables.perspective_reciprocal = 5;
    EXPECT_TRUE(box_.isVisible(render_owners_));
    EXPECT_EQ(set_parts_.tables.perspective_reciprocal, 0);
}

// The scene camera fogs the box's centre at the place the renderer was last moved to, which the
// box's own space leaves unturned, and the centre as projected.
TEST_F(CBoundingBox3DVisibilityTest, TheSceneCameraFogsTheCentreAtTheActorsPlace) {
    matrix_.setCameraOrigin(512, 0, 0);
    three_d_.processCameraRelativePoint({.x = 512, .y = 0, .z = 0});
    CFogCamera camera{cameraOwners(), 0};
    set_parts_.tables.scene_camera = &camera;
    EXPECT_TRUE(box_.isVisible(render_owners_));
    EXPECT_EQ(camera.place.x, 2.0F);
    EXPECT_EQ(camera.place.y, 0.0F);
    EXPECT_EQ(camera.place.z, 5.0F);
    EXPECT_EQ(camera.projected_depth, 5 * 256);
}

// A box in fog thicker than 65000 is lost in it.
TEST_F(CBoundingBox3DVisibilityTest, ABoxDeepInTheFogIsHidden) {
    CFogCamera thick{cameraOwners(), 65001};
    set_parts_.tables.scene_camera = &thick;
    EXPECT_FALSE(box_.isVisible(render_owners_));
    CFogCamera thinner{cameraOwners(), 65000};
    set_parts_.tables.scene_camera = &thinner;
    EXPECT_TRUE(box_.isVisible(render_owners_));
}

} // namespace
} // namespace nocturne::core
