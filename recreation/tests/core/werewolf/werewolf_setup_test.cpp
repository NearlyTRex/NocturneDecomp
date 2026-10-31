#include "common/error/fatalerror.h"
#include "core/werewolf/werewolf.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Head", "Bip01jaw2", "Bip01 Spine3", "Bip01 L Finger1", "Bip01 R Finger1"});

class CWerewolfSetupTest : public CCharacterModelFixture {
protected:
    CWerewolf werewolf_{classes_};
};

// Its eyes are lit as it is made, and so it is drawn as transparent.
TEST_F(CWerewolfSetupTest, AWerewolfFindsItsBonesAndDrawsItsGlowAndHowl) {
    givenCharacterModel("wolfbrn.dfm", kBones);
    werewolf_.setup();
    const SWerewolfBones &bones = werewolf_.getBones();
    EXPECT_EQ(bones.head, 1);
    EXPECT_EQ(bones.jaw, 2);
    EXPECT_EQ(bones.spine3, 3);
    EXPECT_EQ(bones.left_finger, 4);
    EXPECT_EQ(bones.right_finger, 5);
    EXPECT_TRUE(werewolf_.isTransparent());
    EXPECT_GE(werewolf_.getEyeGlowPhase(), 0.0F);
    EXPECT_LE(werewolf_.getEyeGlowPhase(), 1.0F);
    EXPECT_GE(werewolf_.getHowlCooldown(), 10.0F);
    EXPECT_LE(werewolf_.getHowlCooldown(), 30.0F);
}

TEST_F(CWerewolfSetupTest, ASkeletonWithoutOneOfItsBonesIsFatal) {
    givenCharacterModel("wolfbrn.dfm", kBones, kOnePart, "Bip01jaw2");
    EXPECT_THAT([this] { werewolf_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01jaw2 in skeleton CHAR.SKL!")));
}

} // namespace
} // namespace nocturne::core
