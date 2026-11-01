#include "common/error/fatalerror.h"
#include "core/enemy/bipedbones.h"
#include "core/skeleton/partvisibility.h"
#include "core/zombie/zombie.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The zombie's bones after the root, in skeleton order: so bone n is the nth here, from 1.
constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Spine", "Bip01 Spine2", "Bip01 Head", "Bip01 L UpperArm", "Bip01 R UpperArm",
     "Bip01 L ForeArm", "Bip01 R ForeArm", "Bip01 L Hand", "Bip01 R Hand", "Bip01 L Foot",
     "Bip01 R Foot"});
constexpr auto kParts = std::to_array<std::string_view>(
    {"head01", "torso01", "waist01", "larm01", "l4arm01", "rarm01", "r4arm01"});

class CZombieSetupTest : public CCharacterModelFixture {
protected:
    void givenZombie(std::string_view model, std::string_view missing = "") {
        givenCharacterModel(model, kBones, kParts, missing);
        zombie_.getModel().init(model);
    }

    CZombie zombie_{classes_};
};

TEST_F(CZombieSetupTest, AZombieFindsItsBonesAndParts) {
    givenZombie("zombie1.dfm");
    zombie_.setup();
    const SBipedBones &bones = zombie_.getBones();
    EXPECT_EQ(bones.spine, 1);
    EXPECT_EQ(bones.spine2, 2);
    EXPECT_EQ(bones.head, 3);
    EXPECT_EQ(bones.left_upper_arm, 4);
    EXPECT_EQ(bones.right_upper_arm, 5);
    EXPECT_EQ(bones.left_forearm, 6);
    EXPECT_EQ(bones.right_forearm, 7);
    EXPECT_EQ(bones.left_hand, 8);
    EXPECT_EQ(bones.right_hand, 9);
    EXPECT_EQ(bones.left_foot, 10);
    EXPECT_EQ(bones.right_foot, 11);
    EXPECT_EQ(bones.spine1, -1);
    EXPECT_THAT(zombie_.getParts(), ElementsAre(3, 4, 5, 6, 2, 1, 0));
    EXPECT_EQ(zombie_.getModel().getPartVisibility(CZombie::kSpareForearmPart),
              EPartVisibility::kHidden);
    EXPECT_FALSE(zombie_.isTransparent());
    EXPECT_GE(zombie_.getRiseDelay(), 0.0F);
    EXPECT_LE(zombie_.getRiseDelay(), 1.0F);
}

// newzomb1.dfm's left arm parts are its right arm's, and the other way about.
TEST_F(CZombieSetupTest, NewZombOnesArmsAreSwapped) {
    givenZombie("NEWZOMB1.DFM");
    zombie_.setup();
    EXPECT_THAT(zombie_.getParts(), ElementsAre(5, 6, 3, 4, 2, 1, 0));
}

TEST_F(CZombieSetupTest, WithoutARightForearmTheSparePartStandsInAndNoWaistIsNone) {
    givenZombie("zombie1.dfm", "r4arm01");
    zombie_.setup();
    EXPECT_EQ(zombie_.getParts()[3], CZombie::kSpareForearmPart);
    givenZombie("zombie2.dfm", "waist01");
    zombie_.setup();
    EXPECT_EQ(zombie_.getParts()[4], -1);
}

TEST_F(CZombieSetupTest, ASkeletonWithoutOneOfItsBonesIsFatal) {
    givenZombie("zombie1.dfm", "Bip01 R Foot");
    EXPECT_THAT([this] { zombie_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 R Foot in skeleton CHAR.SKL!")));
}

TEST_F(CZombieSetupTest, AModelWithoutOneOfItsOtherPartsIsFatal) {
    givenZombie("zombie2.dfm", "torso01");
    EXPECT_THAT([this] { zombie_.setup(); }, ThrowsMessage<common::CFatalError>(StrEq(
                                                 "Can't find part torso01 in model zombie2.dfm")));
}

} // namespace
} // namespace nocturne::core
