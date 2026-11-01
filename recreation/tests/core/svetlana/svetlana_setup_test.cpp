#include "common/error/fatalerror.h"
#include "core/hero/herobones.h"
#include "core/svetlana/svetlana.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// Her bones after the root, in skeleton order: so bone n is the nth here, from 1.
constexpr auto kBones = std::to_array<std::string_view>(
    {"Bip01 Spine", "Bip01 Spine2", "Bip01 head", "Bip01 L Clavicle", "Bip01 R Clavicle",
     "Bip01 L UpperArm", "Bip01 R UpperArm", "Bip01 L ForeArm", "Bip01 R ForeArm", "Bip01 L Hand",
     "Bip01 R Hand", "Bip01 L Thigh", "Bip01 R Thigh", "Bip01 L Calf", "Bip01 R Calf",
     "Bip01 L Foot", "Bip01 R Foot", "Bipblade01", "BipR14"});
constexpr auto kParts = std::to_array<std::string_view>({"body", "lblade01", "rblade02"});

// Her cape and hair, of no points.
class CSvetlanaSetupTest : public CCharacterModelFixture {
protected:
    CSvetlanaSetupTest() {
        for (const char *cloth : {"svetcape", "svethair"}) {
            givenFile(std::format("models\\{}.cth", cloth),
                      std::format("//\n{}\n//\nnone.kfm\n//\n1,1,1,1,1,1,1,1\n//\n1\n//\n0\n//\n0\n"
                                  "//\n//\n0\n",
                                  cloth == std::string_view("svetcape") ? 3 : 2));
        }
    }

    CSvetlana svetlana_{classes_};
};

TEST_F(CSvetlanaSetupTest, SheFindsHerBonesBladesCapeAndHair) {
    givenCharacterModel("svetlana.dfm", kBones, kParts);
    svetlana_.setup();
    EXPECT_EQ(svetlana_.getModel().getModelName(), "svetlana.dfm");
    EXPECT_EQ(svetlana_.getBones().spine, 1);
    EXPECT_EQ(svetlana_.getBones().right_foot, 17);
    EXPECT_EQ(svetlana_.getBladeBone(), 18);
    EXPECT_EQ(svetlana_.getRibbonBone(), 19);
    EXPECT_EQ(svetlana_.getLeftBladePart(), 1);
    EXPECT_EQ(svetlana_.getRightBladePart(), 2);
    EXPECT_EQ(svetlana_.getCape().getVersion(), 3);
    EXPECT_EQ(svetlana_.getHair().getVersion(), 2);
}

TEST_F(CSvetlanaSetupTest, WithNudityOffSheWearsMore) {
    game_parts_.getGame().nudity_flag = 0;
    givenCharacterModel("svetlanax.dfm", kBones, kParts);
    svetlana_.setup();
    EXPECT_EQ(svetlana_.getModel().getModelName(), "svetlanax.dfm");
}

TEST_F(CSvetlanaSetupTest, AModelWithoutHerBladesIsFatal) {
    givenCharacterModel("svetlana.dfm", kBones, kParts, "rblade02");
    EXPECT_THAT([this] { svetlana_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find part rblade02 in model svetlana.dfm")));
}

} // namespace
} // namespace nocturne::core
