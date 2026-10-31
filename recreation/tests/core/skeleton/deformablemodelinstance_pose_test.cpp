#include "common/error/fatalerror.h"
#include "common/math/extendedfloat.h"
#include "common/math/matrix3x4f.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/pose.h"
#include "core/xform/xform.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <format>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A quarter turn about z.
const common::CQuaternion4f kQuarterTurn{.w = std::sqrt(0.5F), .z = std::sqrt(0.5F)};

// The bones root and child, child on root, over two frames of the motion walk: at the first both
// unturned with the root where it started, at the second the root a quarter turn about z and 10
// along x.
std::string poseSkeletonFile() {
    return std::format(
        "// version\n3\n// counts\n2,2\n// bones\n\"root\",-1\n\"child\",0\n// angles\n1,0,0,0\n"
        "1,0,0,0\n{0},0,0,{0}\n1,0,0,0\n// roots\n0,0,0\n10,0,0\n// canceled\n0,0,0\n0,0,0\n"
        "// motion list version\n2\n// states\n1\nWALK\n// motions\n1\n// motion 0\n"
        "\"walk\",30,0,0,2\n// exit\n1,0,0\n// cmd\n0,0,0\n// back\n0,0\n// transitions\n0\n"
        "// signals\n0\n// markers\n0\n// origins\n0,0,0\n0,0,0\n",
        std::sqrt(0.5F));
}

// One level of two vertices: the first on the root at (1, 0, 0), the second half on the root at
// (0, 1, 0) and half on the child at (0, 0, 2). The root's origin is (1, 2, 3), the child's
// (0, 4, 0), and the root offset scale is 2.
SDfmFile poseModelFile() {
    return {.counts = "1,1,1,2,1\n",
            .lods = "2,0,0,100,0\n",
            .skeleton = "POSE.SKL\n",
            .parts = "\"All\", 0, 0\n0,0\n",
            .vertices = "1\n0,1,1,0,0\n2\n0,0.5,0,1,0\n1,0.5,0,0,2\n",
            .tris = "",
            .caps = "",
            .textures = "SKIN.RAW\n",
            .origins = "1,2,3\n0,4,0\n",
            .scale = "2,2,2\n",
            .bias = "0,0,0\n",
            .bone_parts = "0\n0\n"};
}

void expectNear(const common::CVector3f &actual, const common::CVector3f &expected) {
    EXPECT_NEAR(actual.x, expected.x, 1e-5F);
    EXPECT_NEAR(actual.y, expected.y, 1e-5F);
    EXPECT_NEAR(actual.z, expected.z, 1e-5F);
}

common::CVector3f translationOf(const common::CMatrix3x4f &matrix) {
    return {.x = matrix.m[0][3], .y = matrix.m[1][3], .z = matrix.m[2][3]};
}

class CDeformableModelInstancePoseTest : public CDeformableModelFixture {
protected:
    CDeformableModelInstancePoseTest() {
        givenFile("data\\POSE.SKL", poseSkeletonFile());
        givenModel("pose.dfm", poseModelFile());
        model_.init("pose.dfm");
    }

    [[nodiscard]] const SPose &pose() const {
        return model_.getPose();
    }

    CDeformableModelInstance model_{models_};
};

TEST_F(CDeformableModelInstancePoseTest, PrecachingFindsTheModelAndPlaysItsSkeletonsMotions) {
    model_.preCache();
    EXPECT_EQ(model_.getModelPtr(), &models_.getDeformableModel("pose.dfm"));
    EXPECT_EQ(model_.getSkeletonPtr()->getLoadedFilename(), "POSE.SKL");
    EXPECT_EQ(model_.getMotionList(), &model_.getSkeletonPtr()->getMotionList());
}

// The first frame of the first motion: no bone turned, and the root where its origin is.
TEST_F(CDeformableModelInstancePoseTest, APrecachedModelIsPosedAtItsMotionsFrame) {
    model_.preCache();
    EXPECT_EQ(pose().pose_data.bone_rotations[0], (common::CQuaternion4f{.w = 1.0F}));
    EXPECT_TRUE(pose().pose_data.root_position.equals({}));
    EXPECT_THAT(std::span(pose().bone_scales).first(2), ElementsAre(1.0F, 1.0F));
    EXPECT_TRUE(
        translationOf(pose().bone_model_matrices[0]).equals({.x = 1.0F, .y = 2.0F, .z = 3.0F}));
    EXPECT_TRUE(
        translationOf(pose().bone_model_matrices[1]).equals({.x = 1.0F, .y = 6.0F, .z = 3.0F}));
    EXPECT_EQ(model_.getCachedSkinnedLodIndex(), -1);
}

// The first vertex at (2, 2, 3), the second halfway between (1, 3, 3) and (1, 6, 5).
TEST_F(CDeformableModelInstancePoseTest, SkinningMovesEachVertexByTheBonesItFollows) {
    model_.preCache();
    model_.skinVerticesForLOD(0);
    EXPECT_THAT(model_.getSkinnedVertices(),
                ElementsAre(common::CVector3i{.x = 512, .y = 512, .z = 768},
                            common::CVector3i{.x = 256, .y = 1152, .z = 1024}));
    EXPECT_EQ(model_.getCachedSkinnedLodIndex(), 0);
}

// From (1, 2, 3) to (2, 4.5, 4), padded by a twentieth of each side's length.
TEST_F(CDeformableModelInstancePoseTest, TheBoxIsTheSkinnedVerticesPaddedByATwentieth) {
    model_.preCache();
    const auto pad = [](double length) {
        return static_cast<float>(length * static_cast<double>(0.05F));
    };
    const CBoundingBox3D &box = model_.getBoundingBox();
    EXPECT_EQ(box.min.x, 1.0F - pad(1.0));
    EXPECT_EQ(box.min.y, 2.0F - pad(2.5));
    EXPECT_EQ(box.min.z, 3.0F - pad(1.0));
    EXPECT_EQ(box.max.x, 2.0F + pad(1.0));
    EXPECT_EQ(box.max.y, 4.5F + pad(2.5));
    EXPECT_EQ(box.max.z, 4.0F + pad(1.0));
}

// The root's turn and offset come halfway, the offset scaled by 2.
TEST_F(CDeformableModelInstancePoseTest, BetweenFramesTheBonesTurnAndTheRootMovesPartWay) {
    model_.preCache();
    model_.jumpToMotion(0, 0.5F);
    model_.updateAnimationAndTransforms();
    EXPECT_EQ(pose().pose_data.bone_rotations[0], slerpQuaternion({.w = 1.0F}, kQuarterTurn, 0.5F));
    EXPECT_TRUE(pose().pose_data.root_position.equals({.x = 10.0F}));
}

// The child's origin turns with the root, so it lies 4 along -x of the root's.
TEST_F(CDeformableModelInstancePoseTest, AChildIsCarriedByItsParentsMatrix) {
    model_.preCache();
    model_.updateMotionAtFrame(0, 1.0F);
    EXPECT_TRUE(pose().pose_data.root_position.equals({.x = 20.0F}));
    expectNear(translationOf(pose().bone_model_matrices[0]), {.x = 21.0F, .y = 2.0F, .z = 3.0F});
    expectNear(translationOf(pose().bone_model_matrices[1]), {.x = 17.0F, .y = 2.0F, .z = 3.0F});
    EXPECT_NEAR(pose().bone_model_matrices[0].m[1][0], 1.0F, 1e-6F);
}

// The root's origin, every bone's scale and the root offsets are scaled with the model.
TEST_F(CDeformableModelInstancePoseTest, AScaledModelScalesItsRootBonesAndRootMotion) {
    model_.setScaleFactor(2.0F);
    model_.preCache();
    EXPECT_EQ(model_.getScaleFactor(), 2.0F);
    EXPECT_THAT(std::span(pose().bone_scales).first(2), ElementsAre(2.0F, 2.0F));
    const common::CMatrix3x4f &root = pose().bone_model_matrices[0];
    EXPECT_EQ(root.m[0][0], 2.0F);
    EXPECT_EQ(root.m[1][1], 2.0F);
    EXPECT_TRUE(translationOf(root).equals({.x = 2.0F, .y = 4.0F, .z = 6.0F}));
    EXPECT_TRUE(
        translationOf(pose().bone_model_matrices[1]).equals({.x = 2.0F, .y = 12.0F, .z = 6.0F}));
    model_.updateMotionAtFrame(0, 1.0F);
    EXPECT_TRUE(pose().pose_data.root_position.equals({.x = 40.0F}));
}

TEST_F(CDeformableModelInstancePoseTest, TheRestPoseHasNoTurnAtTheRestScale) {
    model_.setScaleFactor(3.0F);
    model_.preCache();
    model_.updateMotionAtFrame(0, 1.0F);
    model_.resetToRestPose();
    EXPECT_EQ(pose().pose_data.bone_rotations[0], (common::CQuaternion4f{.w = 1.0F}));
    EXPECT_THAT(std::span(pose().bone_scales).first(2), ElementsAre(3.0F, 3.0F));
    EXPECT_TRUE(pose().pose_data.root_position.equals({}));
}

// A level the model hasn't got skins nothing.
TEST_F(CDeformableModelInstancePoseTest, FreeingForgetsTheSkinnedVerticesUntilRoomIsMade) {
    model_.preCache();
    model_.free();
    EXPECT_TRUE(model_.getSkinnedVertices().empty());
    model_.skinVerticesForLOD(1);
    EXPECT_EQ(model_.getCachedSkinnedLodIndex(), 1);
    model_.allocPointList();
    EXPECT_EQ(model_.getSkinnedVertices().size(), 2U);
    EXPECT_EQ(model_.getCachedSkinnedLodIndex(), -1);
}

// With no vertices the box lies between the extremes it starts from, turned inside out.
TEST_F(CDeformableModelInstancePoseTest, AModelWithoutLevelsHasNoVerticesAndAnInsideOutBox) {
    SDfmFile file = poseModelFile();
    file.counts = "0,1,1,2,1\n";
    file.lods = "";
    file.parts = "\"All\", 0, 0\n";
    file.vertices = "";
    givenModel("empty.dfm", file);
    model_.init("empty.dfm");
    model_.preCache();
    EXPECT_TRUE(model_.getSkinnedVertices().empty());
    constexpr float kMost = 2147483648.0F / 256.0F;
    const float pad =
        (common::CExtendedFloat(-2.0 * kMost) * common::CExtendedFloat(0.05F)).toFloat();
    EXPECT_EQ(model_.getBoundingBox().min.x, kMost - pad);
    EXPECT_EQ(model_.getBoundingBox().max.x, -kMost + pad);
}

TEST_F(CDeformableModelInstancePoseTest, NamingAModelForgetsTheOneFound) {
    model_.preCache();
    model_.init("pose.dfm");
    EXPECT_THAT([this] { static_cast<void>(model_.getModelPtr()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Tried to do something with model pose.dfm, but modelPtr not set.  "
                          "(CDeformableModelInstance::preCache not called.")));
}

TEST_F(CDeformableModelInstancePoseTest, AnUnnamedModelHasNoneToFind) {
    CDeformableModelInstance unnamed(models_);
    EXPECT_THAT(
        [&unnamed] { static_cast<void>(unnamed.getSkeletonPtr()); },
        ThrowsMessage<common::CFatalError>(StrEq(
            "CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.")));
}

} // namespace
} // namespace nocturne::core
