#include "common/error/fatalerror.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/skeleton/boneupdatemode.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/pose.h"
#include "core/xform/xform.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <limits>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The bones root, arm on root, hand on arm and leg on root, over the motions stand (frames 0 and
// 1) and wave (frames 2 and 3). The values are the ones nocedit's own code was run on to give the
// exact results below.
constexpr std::string_view kBlendSkeleton =
    "// version\n3\n// counts\n4,4\n// bones\n\"root\",-1\n\"arm\",0\n\"hand\",1\n"
    "\"leg\",0\n// angles\n"
    "1,0,0,0\n1,0,0,0\n1,0,0,0\n1,0,0,0\n"
    "0.8,0,0,0.6\n0.6,0.8,0,0\n1,0,0,0\n0.8,0,0.6,0\n"
    "0.3,0.1,0.9,0.3\n0.7,0.1,0.7,0.1\n0.5,0.5,0.5,0.5\n0.9,0.3,0.1,0.3\n"
    "0.1,0.7,0.7,0.1\n0.3,0.3,0.1,0.9\n0.6,0,0.8,0\n0.2,0.4,0.4,0.8\n"
    "// roots\n0,0,0\n1,0,0.3\n0.1,0.2,0.7\n2.5,1.25,-0.9\n"
    "// canceled\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n"
    "// motion list version\n2\n// states\n1\nS\n// motions\n2\n"
    "// motion 0\n\"stand\",30,0,0,2\n// exit\n1,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
    "// transitions\n0\n// signals\n0\n// markers\n0\n"
    "// motion 1\n\"wave\",30,0,2,2\n// exit\n1,1,0\n// cmd\n1,0,0\n// back\n0,0\n"
    "// transitions\n0\n// signals\n0\n// markers\n0\n"
    "// origins\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n";

SDfmFile blendModelFile() {
    return {.counts = "1,1,1,4,1\n",
            .lods = "1,0,0,100,0\n",
            .skeleton = "BLEND.SKL\n",
            .parts = "\"All\", 0, 0\n0,0\n",
            .vertices = "1\n0,1,0,0,0\n",
            .tris = "",
            .caps = "",
            .textures = "SKIN.RAW\n",
            .origins = "1,2,3\n0,4,0\n0,2,0\n0,-3,0\n",
            .scale = "2,2,2\n",
            .bias = "0,0,0\n",
            .bone_parts = "0\n0\n0\n0\n"};
}

constexpr int kStand = 0;
constexpr int kWave = 1;
constexpr int kRoot = 0;
constexpr int kArm = 1;
constexpr int kHand = 2;
constexpr int kLeg = 3;

// Each bone's share of a blend: its hierarchy distance times a tenth, for a bone_index below 0.
float shareByDepth(int /*current_bone_index*/, int /*target_bone_index*/, float /*blend_weight*/,
                   int hierarchy_distance, CDeformableModelInstance & /*instance*/) {
    return static_cast<float>(hierarchy_distance) * 0.1F;
}

class CDeformableModelInstanceBlendTest : public CDeformableModelFixture {
protected:
    CDeformableModelInstanceBlendTest() {
        givenFile("data\\BLEND.SKL", std::string(kBlendSkeleton));
        givenModel("blend.dfm", blendModelFile());
        model_.init("blend.dfm");
        model_.preCache();
    }

    [[nodiscard]] const SPose &pose() const {
        return model_.getPose();
    }

    [[nodiscard]] common::CQuaternion4f rotation(int bone) const {
        return pose().pose_data.bone_rotations.at(static_cast<std::size_t>(bone));
    }

    [[nodiscard]] std::array<common::CQuaternion4f, 4> rotations() const {
        return {rotation(0), rotation(1), rotation(2), rotation(3)};
    }

    // The bone's turn in the motion at the frame.
    [[nodiscard]] common::CQuaternion4f turnAt(int motion, float frame, int bone) {
        SPose frame_pose;
        model_.computeBoneTransformsForFrame(motion, frame, frame_pose);
        return frame_pose.pose_data.bone_rotations.at(static_cast<std::size_t>(bone));
    }

    static std::string replaced(std::string_view text, std::string_view from, std::string_view to) {
        std::string result(text);
        result.replace(result.find(from), from.size(), to);
        return result;
    }

    // The model on the skeleton text, precached as variant_.
    void loadVariant(const std::string &name, const std::string &skeleton) {
        givenFile("data\\" + name + ".SKL", skeleton);
        SDfmFile file = blendModelFile();
        file.skeleton = name + ".SKL\n";
        givenModel(name + ".dfm", file);
        variant_.init(name + ".dfm");
        variant_.preCache();
    }

    CDeformableModelInstance model_{models_};
    CDeformableModelInstance variant_{models_};
};

TEST_F(CDeformableModelInstanceBlendTest, AModelPosesItsWholeBodyAbsolutelyUnlessToldOtherwise) {
    EXPECT_EQ(model_.getBoneUpdateMode(), EBoneUpdateMode::kAbsolute);
    model_.setBoneUpdateMode(EBoneUpdateMode::kAdditive);
    EXPECT_EQ(model_.getBoneUpdateMode(), EBoneUpdateMode::kAdditive);
}

TEST_F(CDeformableModelInstanceBlendTest, TheDefaultShareIsTheBlendsWeight) {
    EXPECT_EQ(blendWeightCallback(1, 2, 0.25F, 3, model_), 0.25F);
}

// Each bone turned to the motion's frame and unscaled, and the root where the frame puts it,
// scaled.
TEST_F(CDeformableModelInstanceBlendTest, AFramesPoseHasTheMotionsTurnsUnscaled) {
    SPose frame_pose;
    model_.computeBoneTransformsForFrame(kWave, 1.0F, frame_pose);
    EXPECT_EQ(frame_pose.pose_data.bone_rotations[kHand],
              (common::CQuaternion4f{.w = 0.6F, .y = 0.8F}));
    EXPECT_EQ(frame_pose.bone_scales[kLeg], 1.0F);
    EXPECT_TRUE(frame_pose.pose_data.root_position.equals({.x = 5.0F, .y = 2.5F, .z = -1.8F}));
}

TEST_F(CDeformableModelInstanceBlendTest, PosingABranchAbsolutelyTurnsOnlyThoseBonesToTheMotion) {
    const std::array<common::CQuaternion4f, 4> before = rotations();
    model_.updateMotion(kWave, 0.0F, kArm);
    EXPECT_EQ(rotation(kRoot), before[kRoot]);
    EXPECT_EQ(rotation(kArm), turnAt(kWave, 0.0F, kArm));
    EXPECT_EQ(rotation(kHand), turnAt(kWave, 0.0F, kHand));
    EXPECT_EQ(rotation(kLeg), before[kLeg]);
    EXPECT_TRUE(pose().pose_data.root_position.equals({}));
}

// Each turn is the motion's from its parent, carried onto the parent as posed.
TEST_F(CDeformableModelInstanceBlendTest, PosingABranchRelativelyKeepsTheMotionsTurnFromTheParent) {
    model_.updateMotion(kStand, 0.5F, -1);
    model_.setBoneUpdateMode(EBoneUpdateMode::kRelative);
    model_.updateMotion(kWave, 0.25F, kArm);
    EXPECT_EQ(
        rotation(kArm),
        (common::CQuaternion4f{
            .w = -0x1.b2ea2ap-1F, .x = 0x1.46faaep-3F, .y = 0x1.dce512p-2F, .z = -0x1.84ec3ap-3F}));
    EXPECT_EQ(
        rotation(kHand),
        (common::CQuaternion4f{
            .w = 0x1.9e65dp-1F, .x = -0x1.e6d406p-4F, .y = -0x1.924358p-2F, .z = 0x1.ae2b6cp-2F}));
    const common::CQuaternion4f arm_from_root = multiplyQuaternion(
        turnAt(kWave, 0.25F, kArm), negateFirstComponent(turnAt(kWave, 0.25F, kRoot)));
    EXPECT_EQ(rotation(kArm), multiplyQuaternion(arm_from_root, rotation(kRoot)));
}

TEST_F(CDeformableModelInstanceBlendTest, PosingABranchAdditivelyAddsTheMotionsTurnSinceItsStart) {
    model_.updateMotion(kStand, 0.5F, -1);
    model_.setBoneUpdateMode(EBoneUpdateMode::kAdditive);
    model_.updateMotion(kWave, 0.75F, kArm);
    EXPECT_EQ(
        rotation(kArm),
        (common::CQuaternion4f{
            .w = 0x1.5c9b98p-1F, .x = -0x1.c50e9ep-2F, .y = 0x1.786ebp-8F, .z = 0x1.2ad1a8p-1F}));
    EXPECT_EQ(
        rotation(kHand),
        (common::CQuaternion4f{
            .w = 0x1.7002fcp-3F, .x = 0x1.734fdap-1F, .y = -0x1.6fe748p-3F, .z = -0x1.47a39ap-1F}));
    EXPECT_EQ(rotation(kLeg), turnAt(kStand, 0.5F, kLeg));
}

// The root has no parent to work from: its turn since wave's first frame is added to its own.
TEST_F(CDeformableModelInstanceBlendTest, PosingTheRootAdditivelyAddsItsOwnTurn) {
    model_.updateMotion(kStand, 0.5F, -1);
    const common::CQuaternion4f root = rotation(kRoot);
    model_.setBoneUpdateMode(EBoneUpdateMode::kAdditive);
    model_.updateMotion(kWave, 0.75F, kRoot);
    EXPECT_EQ(rotation(kRoot),
              multiplyQuaternion(
                  root, multiplyQuaternion(turnAt(kWave, 0.75F, kRoot),
                                           negateFirstComponent(turnAt(kWave, 0.0F, kRoot)))));
}

// The root moves 0.3 of the way to where the wave puts it, and each bone turns as far.
TEST_F(CDeformableModelInstanceBlendTest, BlendingTheWholeBodyMovesTheRootAndEveryBonePartWay) {
    model_.updateMotion(kStand, 0.5F, -1);
    const std::array<common::CQuaternion4f, 4> before = rotations();
    model_.blendMotion(kWave, 0.5F, 0.3F, -1, blendWeightCallback);
    EXPECT_EQ(pose().pose_data.root_position.x, 0x1.7ae148p+0F);
    EXPECT_EQ(pose().pose_data.root_position.y, 0x1.bd70a6p-2F);
    EXPECT_EQ(pose().pose_data.root_position.z, 0x1.333334p-3F);
    EXPECT_EQ(
        rotation(kHand),
        (common::CQuaternion4f{
            .w = 0x1.ec2262p-1F, .x = 0x1.7dc176p-4F, .y = 0x1.f0484cp-3F, .z = 0x1.7dc176p-4F}));
    for (int bone = 0; bone < 4; ++bone) {
        EXPECT_EQ(rotation(bone), slerpQuaternion(before.at(static_cast<std::size_t>(bone)),
                                                  turnAt(kWave, 0.5F, bone), 0.3F))
            << bone;
    }
}

TEST_F(CDeformableModelInstanceBlendTest, TheCallbackGivesEachBoneItsShare) {
    model_.updateMotion(kStand, 1.0F, -1);
    const std::array<common::CQuaternion4f, 4> before = rotations();
    model_.blendMotion(kWave, 0.5F, 0.5F, -1, shareByDepth);
    EXPECT_EQ(rotation(kRoot),
              slerpQuaternion(before[kRoot], turnAt(kWave, 0.5F, kRoot), 1.0F * 0.1F));
    EXPECT_EQ(rotation(kHand),
              slerpQuaternion(before[kHand], turnAt(kWave, 0.5F, kHand), 3.0F * 0.1F));
}

TEST_F(CDeformableModelInstanceBlendTest, BlendingABranchLeavesTheRestAndTheRoot) {
    model_.updateMotion(kStand, 1.0F, -1);
    const std::array<common::CQuaternion4f, 4> before = rotations();
    const common::CVector3f root = pose().pose_data.root_position;
    model_.blendMotion(kWave, 0.5F, 0.5F, kArm, blendWeightCallback);
    EXPECT_EQ(rotation(kRoot), before[kRoot]);
    EXPECT_EQ(rotation(kLeg), before[kLeg]);
    EXPECT_EQ(rotation(kArm), slerpQuaternion(before[kArm], turnAt(kWave, 0.5F, kArm), 0.5F));
    EXPECT_TRUE(pose().pose_data.root_position.equals(root));
}

TEST_F(CDeformableModelInstanceBlendTest, BlendingRelativelySlerpsTowardsTheRelativeTurn) {
    model_.updateMotion(kStand, 0.5F, -1);
    model_.setBoneUpdateMode(EBoneUpdateMode::kRelative);
    model_.updateMotion(kWave, 0.25F, kArm);
    model_.blendMotion(kWave, 0.75F, 0.4F, kArm, nullptr);
    EXPECT_EQ(
        rotation(kArm),
        (common::CQuaternion4f{
            .w = -0x1.8e61bcp-1F, .x = 0x1.c38de2p-2F, .y = 0x1.7f30cap-2F, .z = -0x1.f606aep-3F}));
    EXPECT_EQ(
        rotation(kHand),
        (common::CQuaternion4f{
            .w = 0x1.cdcc82p-1F, .x = 0x1.0d90a8p-5F, .y = -0x1.8a1ff6p-2F, .z = 0x1.8b56fap-3F}));
}

// Every bone is in the branch, and the root moves part way as it does absolutely.
TEST_F(CDeformableModelInstanceBlendTest, BlendingTheWholeBodyRelativelyTurnsTheRootAsFar) {
    model_.updateMotion(kStand, 0.5F, -1);
    const common::CQuaternion4f root_turn = rotation(kRoot);
    model_.setBoneUpdateMode(EBoneUpdateMode::kRelative);
    model_.blendMotion(kWave, 0.5F, 0.3F, -1, nullptr);
    EXPECT_EQ(rotation(kRoot), slerpQuaternion(root_turn, turnAt(kWave, 0.5F, kRoot), 0.3F));
    EXPECT_EQ(pose().pose_data.root_position.x, 0x1.7ae148p+0F);
}

// 0.001 as the original's double holds it is just below the float 0.001.
TEST_F(CDeformableModelInstanceBlendTest, AWeightAtMostAThousandthOrNaNBlendsNothing) {
    model_.updateMotion(kStand, 1.0F, -1);
    const std::array<common::CQuaternion4f, 4> before = rotations();
    model_.blendMotion(kWave, 0.5F, 0.0009F, -1, blendWeightCallback);
    model_.blendMotion(kWave, 0.5F, std::numeric_limits<float>::quiet_NaN(), -1,
                       blendWeightCallback);
    EXPECT_EQ(rotations(), before);
    model_.blendMotion(kWave, 0.5F, 0.001F, -1, blendWeightCallback);
    EXPECT_NE(rotations(), before);
}

TEST_F(CDeformableModelInstanceBlendTest, BlendingAdditivelyIsFatal) {
    model_.setBoneUpdateMode(EBoneUpdateMode::kAdditive);
    EXPECT_THAT([this] { model_.blendMotion(kWave, 0.5F, 0.5F, kArm, blendWeightCallback); },
                ThrowsMessage<common::CFatalError>(StrEq("Write me!")));
}

// The patch is the target's frame whose bones sit nearest the source frame's.
TEST_F(CDeformableModelInstanceBlendTest, ThePatchIsTheFrameNearestWhereTheBonesAre) {
    EXPECT_EQ(model_.findPatchToFrame(kWave, 1.0F, kWave), 1);
    EXPECT_EQ(model_.findPatchToFrame(kWave, 0.0F, kWave), 0);
    EXPECT_EQ(model_.findPatchToFrame(kStand, 0.5F, kWave), 0);
}

// Stand's second root offset NaN: every distance from it is NaN, taken as nearer each time.
TEST_F(CDeformableModelInstanceBlendTest, ANaNDistanceTakesEveryFrameInTurn) {
    loadVariant("NAN", replaced(kBlendSkeleton, "1,0,0.3\n", "nan,0,0.3\n"));
    EXPECT_EQ(variant_.findPatchToFrame(kStand, 1.0F, kWave), 1);
}

TEST_F(CDeformableModelInstanceBlendTest, AMotionWithNoFramesHasNoPatch) {
    loadVariant("EMPTY", replaced(kBlendSkeleton, "\"wave\",30,0,2,2", "\"wave\",30,0,2,0"));
    EXPECT_EQ(variant_.findPatchToFrame(kStand, 0.0F, kWave), -1);
}

// A skeleton of no bones over three frames, wave's second frame past them: the root blends from
// the last instead. With no bones, no angle is read past them either.
TEST_F(CDeformableModelInstanceBlendTest, ARootFramePastTheSkeletonsLastIsReadAsTheLast) {
    givenFile("data\\SHORT.SKL",
              "// version\n3\n// counts\n0,3\n// bones\n// angles\n// roots\n0,0,0\n1,0,0.3\n"
              "0.1,0.2,0.7\n// canceled\n0,0,0\n0,0,0\n0,0,0\n// motion list version\n2\n"
              "// states\n1\nS\n// motions\n2\n// motion 0\n\"stand\",30,0,0,2\n// exit\n1,0,0\n"
              "// cmd\n1,0,0\n// back\n0,0\n// transitions\n0\n// signals\n0\n// markers\n0\n"
              "// motion 1\n\"wave\",30,0,2,2\n// exit\n1,1,0\n// cmd\n1,0,0\n// back\n0,0\n"
              "// transitions\n0\n// signals\n0\n// markers\n0\n// origins\n");
    SDfmFile file = blendModelFile();
    file.counts = "1,1,1,0,1\n";
    file.skeleton = "SHORT.SKL\n";
    file.origins = "";
    file.bone_parts = "";
    givenModel("short.dfm", file);
    CDeformableModelInstance model(models_);
    model.init("short.dfm");
    model.preCache();
    model.blendMotion(kWave, 0.5F, 1.0F, -1, blendWeightCallback);
    EXPECT_TRUE(model.getPose().pose_data.root_position.equals(
        {.x = 0.1F * 2.0F, .y = 0.2F * 2.0F, .z = 0.7F * 2.0F}));
}

// The canceled movements 1,2,3 to 10,11,12, scaled by the model's 2.
class CDeformableModelInstanceRootMotionTest : public CDeformableModelInstanceBlendTest {
protected:
    CDeformableModelInstanceRootMotionTest() {
        loadVariant("MOVES", replaced(kBlendSkeleton, "// canceled\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n",
                                      "// canceled\n1,2,3\n4,5,6\n7,8,9\n10,11,12\n"));
    }
};

TEST_F(CDeformableModelInstanceRootMotionTest, NoneMovesUnlessTheEndIsAfterTheStart) {
    EXPECT_TRUE(variant_.getRootMotionDelta(2.0F, 1.0F).equals({}));
    EXPECT_TRUE(variant_.getRootMotionDelta(1.5F, 1.5F).equals({}));
}

// Frames 0 to 2 less half of each end frame: (12, 15, 18) - (0.5, 1, 1.5) - (3.5, 4, 4.5), scaled.
TEST_F(CDeformableModelInstanceRootMotionTest, TheEndFramesCountOnlyThePartsBetween) {
    EXPECT_TRUE(
        variant_.getRootMotionDelta(0.5F, 2.5F).equals({.x = 16.0F, .y = 20.0F, .z = 24.0F}));
    EXPECT_TRUE(
        variant_.getRootMotionDelta(1.0F, 2.0F).equals({.x = 8.0F, .y = 10.0F, .z = 12.0F}));
}

TEST_F(CDeformableModelInstanceRootMotionTest, AFrameThatIsntFiniteMovesByNaN) {
    EXPECT_TRUE(std::isnan(variant_.getRootMotionDelta(0.0F, std::nanf("")).x));
    EXPECT_TRUE(
        std::isnan(variant_.getRootMotionDelta(-std::numeric_limits<float>::infinity(), 1.0F).y));
}

// Frames -1, 4 and 5 are outside the list: only frame 0's first half moves, or frame 3's second.
TEST_F(CDeformableModelInstanceRootMotionTest, AFrameOutsideTheListHasNoMovement) {
    EXPECT_TRUE(variant_.getRootMotionDelta(-1.0F, 0.5F).equals({.x = 1.0F, .y = 2.0F, .z = 3.0F}));
    EXPECT_TRUE(
        variant_.getRootMotionDelta(3.5F, 5.5F).equals({.x = 10.0F, .y = 11.0F, .z = 12.0F}));
}

TEST_F(CDeformableModelInstanceRootMotionTest, TheRootMotionIsGatheredScaled) {
    EXPECT_TRUE(variant_.getAccumulatedRootMotion().equals({}));
    variant_.accumulateScaledRootMotion(1.0F, 2.0F, 0.5F);
    variant_.accumulateScaledRootMotion(1.0F, 2.0F, 0.5F);
    EXPECT_TRUE(variant_.getAccumulatedRootMotion().equals({.x = 8.0F, .y = 10.0F, .z = 12.0F}));
}

// Stand plays from frame 0 about half way to 1, at 30 a second.
TEST_F(CDeformableModelInstanceRootMotionTest, AdvancingGathersTheRootMotionPlayed) {
    float time = 1.0F / 60.0F;
    variant_.advance(time);
    const float frame = variant_.getCurrentFrameNumber();
    EXPECT_NEAR(frame, 0.5F, 1e-6F);
    EXPECT_GT(variant_.getAccumulatedRootMotion().x, 0.0F);
    EXPECT_EQ(variant_.getAccumulatedRootMotion().x, variant_.getRootMotionDelta(0.0F, frame).x);
}

// A tween's progress blends the pose towards its target as it is updated: stand routes to state
// T by tweening to wave's second frame over half a second.
TEST_F(CDeformableModelInstanceBlendTest, UpdatingDuringATweenBlendsTowardsItsTarget) {
    const std::string text =
        replaced(kBlendSkeleton, "// transitions\n0\n", "// transitions\n1\n1,3,1,1.0,0.5,0\n");
    loadVariant("TWEEN", replaced(text, "// states\n1\nS\n", "// states\n2\nS\nT\n"));
    variant_.setDesiredState(1, true);
    ASSERT_EQ(variant_.getTweenProgress(), 0.001F);
    variant_.updateAnimation();
    SPose stand;
    variant_.computeBoneTransformsForFrame(kStand, 0.0F, stand);
    SPose wave;
    variant_.computeBoneTransformsForFrame(kWave, 1.0F, wave);
    EXPECT_EQ(variant_.getPose().pose_data.bone_rotations[kRoot],
              slerpQuaternion(stand.pose_data.bone_rotations[kRoot],
                              wave.pose_data.bone_rotations[kRoot], 0.001F));
}

} // namespace
} // namespace nocturne::core
