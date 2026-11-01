#include "common/error/fatalerror.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/hero/herobones.h"
#include "core/stranger/stranger.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::ReturnRef;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// His bones after the root, in skeleton order: so bone n is the nth here, from 1.
constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Pelvis",     "Bip01 Spine",      "Bip01 Spine1",     "Bip01 Spine2",
     "Bip01 Neck",       "Bip01 head",       "Bip01 L Clavicle", "Bip01 R Clavicle",
     "Bip01 L UpperArm", "Bip01 R UpperArm", "Bip01 L ForeArm",  "Bip01 R ForeArm",
     "Bip01 L Hand",     "Bip01 R Hand",     "Bip01 L Thigh",    "Bip01 R Thigh",
     "Bip01 L Calf",     "Bip01 R Calf",     "Bip01 L Foot",     "Bip01 R Foot"});
constexpr auto kParts = std::to_array<std::string_view>({"body", "head01"});
constexpr auto kMotions =
    std::to_array<std::string_view>({"stand", "pickup", "turnlstart", "turnrstart"});

// His root 10 up, his right hand and upper arm off it, and his hat to find.
class CStrangerSetupTest : public CCharacterModelFixture {
protected:
    CStrangerSetupTest() {
        bone_origins_ = {
            {"Bip01", "0,10,0"}, {"Bip01 R Hand", "1,2,3"}, {"Bip01 R UpperArm", "4,5,6"}};
        ON_CALL(keyframed_models_, loadModel(StrEq("stranger-hat.kfm")))
            .WillByDefault(ReturnRef(hat_model_));
    }

    void givenStranger(std::string_view missing = "") {
        givenCharacterModel("stranger.dfm", kBones, kParts, missing, kMotions);
    }

    CKeyFramedModel hat_model_{dosio_};
    CStranger stranger_{classes_};
};

TEST_F(CStrangerSetupTest, HeFindsHisBonesMotionsAndHead) {
    givenStranger();
    stranger_.setup();
    const SStrangerBones &found = stranger_.getBones();
    EXPECT_EQ(found.pelvis, 1);
    EXPECT_EQ(found.bones.spine, 2);
    EXPECT_EQ(found.spine1, 3);
    EXPECT_EQ(found.bones.spine2, 4);
    EXPECT_EQ(found.neck, 5);
    EXPECT_EQ(found.bones.head, 6);
    EXPECT_EQ(found.bones.right_upper_arm, 10);
    EXPECT_EQ(found.bones.right_hand, 14);
    EXPECT_EQ(found.bones.right_foot, 20);
    EXPECT_EQ(found.turn_left_start_motion, 2);
    EXPECT_EQ(found.turn_right_start_motion, 3);
    EXPECT_EQ(stranger_.getHeadPart(), 1);
    EXPECT_EQ(stranger_.getModel().getModelName(), "stranger.dfm");
}

// Measured on his root, in his pickup pose.
TEST_F(CStrangerSetupTest, HisReachIsMeasuredInThePickupPose) {
    givenStranger();
    stranger_.setup();
    EXPECT_TRUE(stranger_.getPickupRightHandPosition().equals({.x = 1.0F, .y = 12.0F, .z = 3.0F}));
    EXPECT_TRUE(
        stranger_.getPickupRightUpperArmPosition().equals({.x = 4.0F, .y = 15.0F, .z = 6.0F}));
}

TEST_F(CStrangerSetupTest, HeWearsHisHat) {
    givenStranger();
    EXPECT_CALL(keyframed_models_, loadModel(StrEq("stranger-hat.kfm")));
    stranger_.setup();
    EXPECT_EQ(stranger_.getHat().getModelName(), "stranger-hat.kfm");
}

// The neck is looked for before the spine.
TEST_F(CStrangerSetupTest, ASkeletonWithoutOneOfHisBonesIsFatal) {
    givenStranger("Bip01 Neck");
    EXPECT_THAT([this] { stranger_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 Neck in skeleton CHAR.SKL!")));
}

TEST_F(CStrangerSetupTest, ASkeletonWithoutHisPickupIsFatal) {
    givenStranger("pickup");
    EXPECT_THAT([this] { stranger_.setup(); }, ThrowsMessage<common::CFatalError>(StrEq(
                                                   "Can't find motion \"pickup\" in motion list")));
}

TEST_F(CStrangerSetupTest, AModelWithoutHisHeadIsFatal) {
    givenStranger("head01");
    EXPECT_THAT(
        [this] { stranger_.setup(); },
        ThrowsMessage<common::CFatalError>(StrEq("Can't find part head01 in model stranger.dfm")));
}

} // namespace
} // namespace nocturne::core
