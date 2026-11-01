#include "common/error/fatalerror.h"
#include "core/haystack/haystack.h"
#include "core/hero/herobones.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A hero's bones after the root, in skeleton order: so bone n is the nth here, from 1.
constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Spine", "Bip01 Spine2", "Bip01 head", "Bip01 L Clavicle", "Bip01 R Clavicle",
     "Bip01 L UpperArm", "Bip01 R UpperArm", "Bip01 L ForeArm", "Bip01 R ForeArm", "Bip01 L Hand",
     "Bip01 R Hand", "Bip01 L Thigh", "Bip01 R Thigh", "Bip01 L Calf", "Bip01 R Calf",
     "Bip01 L Foot", "Bip01 R Foot"});

class CHaystackSetupTest : public CCharacterModelFixture {
protected:
    CHaystack haystack_{classes_};
};

TEST_F(CHaystackSetupTest, HaystackFindsTheBonesHeNeeds) {
    givenCharacterModel("haystack.dfm", kBones);
    haystack_.setup();
    const SHeroBones &bones = haystack_.getBones();
    EXPECT_EQ(bones.spine, 1);
    EXPECT_EQ(bones.spine2, 2);
    EXPECT_EQ(bones.head, 3);
    EXPECT_EQ(bones.left_clavicle, 4);
    EXPECT_EQ(bones.right_hand, 11);
    EXPECT_EQ(bones.left_thigh, 12);
    EXPECT_EQ(bones.right_foot, 17);
}

TEST_F(CHaystackSetupTest, ASkeletonWithoutOneOfHisBonesIsFatal) {
    givenCharacterModel("haystack.dfm", kBones, kOnePart, "Bip01 R Calf");
    EXPECT_THAT([this] { haystack_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 R Calf in skeleton CHAR.SKL!")));
}

} // namespace
} // namespace nocturne::core
