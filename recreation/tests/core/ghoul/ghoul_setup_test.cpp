#include "common/error/fatalerror.h"
#include "core/enemy/bipedbones.h"
#include "core/ghoul/ghoul.h"
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
    {"Bip01 Spine", "Bip01 Spine2", "Bip01 Head", "Bip01 L UpperArm", "Bip01 R UpperArm",
     "Bip01 L ForeArm", "Bip01 R ForeArm", "Bip01 L Hand", "Bip01 R Hand", "Bip01 L Foot",
     "Bip01 R Foot"});
constexpr auto kParts = std::to_array<std::string_view>(
    {"head01", "high torso01", "lo torso01", "r high arm01", "r lo arm01", "l high arm01",
     "l lo arm01", "r thigh01", "r shin01", "l thigh01", "l shin01"});

class CGhoulSetupTest : public CCharacterModelFixture {
protected:
    CGhoul ghoul_{classes_};
};

TEST_F(CGhoulSetupTest, AGhoulFindsItsBonesAndParts) {
    givenCharacterModel("guul.dfm", kBones, kParts);
    ghoul_.setup();
    EXPECT_EQ(ghoul_.getBones().head, 3);
    EXPECT_EQ(ghoul_.getBones().spine1, -1);
    EXPECT_THAT(ghoul_.getParts(), ElementsAre(3, 4, 5, 6, 7, 8, 9, 10, 2, 1, 0));
}

TEST_F(CGhoulSetupTest, AModelWithoutOneOfItsPartsIsFatal) {
    givenCharacterModel("guul.dfm", kBones, kParts, "r lo arm01");
    EXPECT_THAT([this] { ghoul_.setup(); }, ThrowsMessage<common::CFatalError>(StrEq(
                                                "Can't find part r lo arm01 in model guul.dfm")));
}

} // namespace
} // namespace nocturne::core
