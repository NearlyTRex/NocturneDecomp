#include "common/error/fatalerror.h"
#include "core/enemy/bipedbones.h"
#include "core/mobster/mobster.h"
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

constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Spine", "Bip01 Spine1", "Bip01 Spine2", "Bip01 Head", "Bip01 L UpperArm",
     "Bip01 R UpperArm", "Bip01 L ForeArm", "Bip01 R ForeArm", "Bip01 L Hand", "Bip01 R Hand",
     "Bip01 L Foot", "Bip01 R Foot"});
constexpr auto kParts =
    std::to_array<std::string_view>({"head01", "torso01", "waist01", "larm01", "l4arm01", "rarm01",
                                     "r4arm01", "rthigh01", "rshin01", "lthigh01", "lshin01"});

class CMobsterSetupTest : public CCharacterModelFixture {
protected:
    CMobster mobster_{classes_};
};

TEST_F(CMobsterSetupTest, AMobsterFindsItsBonesAndParts) {
    givenCharacterModel("mobster1.dfm", kBones, kParts);
    mobster_.setup();
    const SBipedBones &bones = mobster_.getBones();
    EXPECT_EQ(bones.spine, 1);
    EXPECT_EQ(bones.spine1, 2);
    EXPECT_EQ(bones.spine2, 3);
    EXPECT_EQ(bones.head, 4);
    EXPECT_EQ(bones.right_foot, 12);
    EXPECT_THAT(mobster_.getParts(), ElementsAre(3, 4, 5, 6, 7, 8, 9, 10, 2, 1, 0));
}

TEST_F(CMobsterSetupTest, ASkeletonWithoutOneOfItsBonesIsFatal) {
    givenCharacterModel("mobster1.dfm", kBones, kParts, "Bip01 Spine1");
    EXPECT_THAT([this] { mobster_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 Spine1 in skeleton CHAR.SKL!")));
}

TEST_F(CMobsterSetupTest, AModelWithoutOneOfItsPartsIsFatal) {
    givenCharacterModel("mobster1.dfm", kBones, kParts, "lshin01");
    EXPECT_THAT(
        [this] { mobster_.setup(); },
        ThrowsMessage<common::CFatalError>(StrEq("Can't find part lshin01 in model mobster1.dfm")));
}

} // namespace
} // namespace nocturne::core
