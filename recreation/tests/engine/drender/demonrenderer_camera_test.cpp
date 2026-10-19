#include "common/math/matrix3x3f.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

using common::CMatrix3x3f;
using common::CMatrix3x3i;
using common::CVector3f;
using common::CVector3i;

constexpr int kOne = 0x10000;
// Half a radian in 65536-to-a-turn angles: 0.5 / pi * 32768 is 5215.19.
constexpr int kHalfRadian = 5215;

CMatrix3x3f rotationBy(const CVector3f &euler_angles) {
    CMatrix3x3f rotation;
    rotation.buildRotationMatrix(euler_angles);
    return rotation;
}

class CDemonRendererCameraTest : public CDemonRendererFixture {
protected:
    CDemonRendererCameraTest() {
        two_d_.setupViewportAndClipping(0, 0, 639, 479);
    }
};

TEST_F(CDemonRendererCameraTest, TheCameraOriginIsThePointInFixedPointChopped) {
    demon_renderer_.setCameraOriginFromScaledPoint({.x = 1.5F, .y = -2.999F, .z = 0.0039F});
    EXPECT_EQ(demon_renderer_.getCameraOriginFixed(), (CVector3i{.x = 384, .y = -767, .z = 0}));
    EXPECT_EQ(matrix_.getCameraOrigin(), demon_renderer_.getCameraOriginFixed());
}

TEST_F(CDemonRendererCameraTest, AVertexPutsTheCameraRelativeToIt) {
    matrix_.setCameraOrigin(1000, 2000, 3000);
    demon_renderer_.processCameraRelativeVertex({.x = 1.0F, .y = 2.0F, .z = 3.0F});
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.x = 744, .y = 1488, .z = 2232}));
}

TEST_F(CDemonRendererCameraTest, AFieldOfViewOfEighteenIsTheUnitScale) {
    demon_renderer_.setProjectionScale(18.0F);
    EXPECT_EQ(matrix_.getProjectionScale(), CMatrix::kUnitProjectionScale);
}

TEST_F(CDemonRendererCameraTest, TheProjectionScaleShrinksAsTheFieldOfViewWidens) {
    // 18 / 28 of 65536 is 42130.29; 42130 is what the running decompilation holds at FOV 28.
    demon_renderer_.setProjectionScale(28.0F);
    EXPECT_EQ(matrix_.getProjectionScale(), 42130);
}

TEST_F(CDemonRendererCameraTest, AnUnturnedCameraKeepsItsAxesScaledForTheScreen) {
    demon_renderer_.setupCameraAndProjection(rotationBy({}));
    // 640 / 480 of 65536 is 87381.33, the y axis stretched so a square stays square.
    EXPECT_EQ(
        matrix_.getTransformMatrix(),
        (CMatrix3x3i{.m = {CVector3i{.x = kOne}, CVector3i{.y = 87381}, CVector3i{.z = kOne}}}));
    EXPECT_EQ(matrix_.getCameraRotation(), CVector3i{});
}

TEST_F(CDemonRendererCameraTest, TheInverseIsTakenFromTheScaledTransform) {
    demon_renderer_.setupCameraAndProjection(rotationBy({}));
    // 65536 * 65536 / 87381 is 49152.28.
    EXPECT_EQ(matrix_.getInverseMatrix().m[1].y, 49152);
}

TEST_F(CDemonRendererCameraTest, BothScreenAxesScaleWithTheProjection) {
    matrix_.setProjectionScale(kOne / 2);
    demon_renderer_.setupCameraAndProjection(rotationBy({}));
    EXPECT_EQ(matrix_.getTransformMatrix(),
              (CMatrix3x3i{
                  .m = {CVector3i{.x = 2 * kOne}, CVector3i{.y = 174762}, CVector3i{.z = kOne}}}));
}

TEST_F(CDemonRendererCameraTest, ASquareClipLeavesTheAxesEqual) {
    two_d_.setupViewportAndClipping(10, 20, 109, 119);
    demon_renderer_.setupCameraAndProjection(rotationBy({}));
    EXPECT_EQ(matrix_.getTransformMatrix().m[1].y, kOne);
}

TEST_F(CDemonRendererCameraTest, TheCameraAnglesArePitchYawRollFromXZY) {
    demon_renderer_.setupCameraAndProjection(rotationBy({.x = 0.5F}));
    EXPECT_EQ(matrix_.getCameraRotation(), (CVector3i{.x = kHalfRadian}));
    demon_renderer_.setupCameraAndProjection(rotationBy({.y = 0.5F}));
    EXPECT_EQ(matrix_.getCameraRotation(), (CVector3i{.z = kHalfRadian}));
    demon_renderer_.setupCameraAndProjection(rotationBy({.z = 0.5F}));
    EXPECT_EQ(matrix_.getCameraRotation(), (CVector3i{.y = kHalfRadian}));
}

TEST_F(CDemonRendererCameraTest, TheSceneCameraIsBuiltFromItsAngles) {
    const CVector3f angles{.x = 0.25F, .y = -0.5F, .z = 1.0F};
    demon_renderer_.setupCameraAndProjection(rotationBy(angles));
    const CMatrix3x3i expected = matrix_.getTransformMatrix();
    const CVector3i expected_rotation = matrix_.getCameraRotation();
    matrix_.setTransformMatrix({});
    matrix_.storeCameraRotation({});
    demon_renderer_.setupSceneRendering(angles);
    EXPECT_EQ(matrix_.getTransformMatrix(), expected);
    EXPECT_EQ(matrix_.getCameraRotation(), expected_rotation);
}

TEST_F(CDemonRendererCameraTest, ATransformTurnsByTheAnglesAsXZYAndMovesInFixedPoint) {
    // 0.1, 0.2 and 0.3 radians are 1043.04, 2086.08 and 3129.11 in matrix angles.
    CLight reference_light;
    CMatrix reference{two_d_, reference_light};
    reference.matrixPushAndTransform(1043, 3129, 2086, 256, 512, -128);
    const CVector3f translation{.x = 1.0F, .y = 2.0F, .z = -0.5F};
    demon_renderer_.applyScaledTransform({.x = 0.1F, .y = 0.2F, .z = 0.3F}, &translation);
    EXPECT_EQ(matrix_.getTransformMatrix(), reference.getTransformMatrix());
    EXPECT_EQ(matrix_.getRelativeOrigin(), reference.getRelativeOrigin());
}

TEST_F(CDemonRendererCameraTest, ATransformWithoutATranslationOnlyTurns) {
    CLight reference_light;
    CMatrix reference{two_d_, reference_light};
    matrix_.setRelativeOrigin({.x = kOne});
    reference.setRelativeOrigin({.x = kOne});
    reference.matrixPushAndTransform(1043, 3129, 2086, 0, 0, 0);
    demon_renderer_.applyScaledTransform({.x = 0.1F, .y = 0.2F, .z = 0.3F}, nullptr);
    EXPECT_EQ(matrix_.getTransformMatrix(), reference.getTransformMatrix());
    EXPECT_EQ(matrix_.getRelativeOrigin(), reference.getRelativeOrigin());
}

TEST_F(CDemonRendererCameraTest, APopUndoesATransform) {
    matrix_.setRelativeOrigin({.x = 7});
    demon_renderer_.applyScaledTransform({}, nullptr);
    matrix_.setRelativeOrigin({});
    demon_renderer_.matrixPop();
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.x = 7}));
}

TEST_F(CDemonRendererCameraTest, APushSavesTheTransformAsItIs) {
    matrix_.setRelativeOrigin({.y = 9});
    demon_renderer_.matrixPush();
    matrix_.setRelativeOrigin({});
    demon_renderer_.matrixPop();
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.y = 9}));
}

TEST_F(CDemonRendererCameraTest, AViewportClipsToItsWindowUntilItsPop) {
    demon_renderer_.pushViewport(10, 20, 100, 50);
    EXPECT_EQ(two_d_.getClipRect(), (SClipRect{.left = 10, .top = 20, .right = 110, .bottom = 70}));
    demon_renderer_.popViewport();
    EXPECT_EQ(two_d_.getClipRect(), (SClipRect{.left = 0, .top = 0, .right = 639, .bottom = 479}));
}

} // namespace
} // namespace nocturne::engine
