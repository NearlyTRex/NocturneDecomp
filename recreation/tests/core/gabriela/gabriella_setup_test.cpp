#include "common/error/fatalerror.h"
#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/gabriela/gabriella.h"
#include "tests/mocks/core/deformablemodelfixture.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The bones Gabriella's setup looks for, in skeleton order, with a root first.
constexpr std::array<std::string_view, 18> kBones = {"Bip01",
                                                     "Bip01 Spine",
                                                     "Bip01 Spine2",
                                                     "Bip01 head",
                                                     "Bip01 L Clavicle",
                                                     "Bip01 R Clavicle",
                                                     "Bip01 L UpperArm",
                                                     "Bip01 R UpperArm",
                                                     "Bip01 L ForeArm",
                                                     "Bip01 R ForeArm",
                                                     "Bip01 L Hand",
                                                     "Bip01 R Hand",
                                                     "Bip01 L Thigh",
                                                     "Bip01 R Thigh",
                                                     "Bip01 L Calf",
                                                     "Bip01 R Calf",
                                                     "Bip01 L Foot",
                                                     "Bip01 R Foot"};

// A one-frame skeleton of the bones, each on the root, and the motions stand, then the three
// she plays herself; leaving out the bone or motion named.
std::string gabriellaSkeleton(std::string_view missing = "") {
    std::string bones;
    std::string angles;
    std::string origins;
    int count = 0;
    for (const std::string_view bone : kBones) {
        if (bone == missing) {
            continue;
        }
        bones += std::format("\"{}\",{}\n", bone, count == 0 ? -1 : 0);
        angles += "1,0,0,0\n";
        origins += "0,0,0\n";
        ++count;
    }
    std::string motions;
    int motion_count = 0;
    for (const std::string_view motion : {"stand", "gab draw", "gab shoot", "gab crossbow shoot"}) {
        if (motion == missing) {
            continue;
        }
        motions +=
            std::format("// m\n\"{}\",30,0,0,1\n// exit\n1,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
                        "// transitions\n0\n// signals\n0\n// markers\n0\n",
                        motion);
        ++motion_count;
    }
    return std::format("// v\n3\n// counts\n{},1\n// bones\n{}// angles\n{}// roots\n0,0,0\n"
                       "// canceled\n0,0,0\n// motion list version\n2\n// states\n1\nS\n"
                       "// motions\n{}\n{}// origins\n{}",
                       count, bones, angles, motion_count, motions, origins);
}

class CGabriellaSetupTest : public CDeformableModelFixture {
protected:
    // Her model on the skeleton, missing what's named.
    void givenGabriella(std::string_view missing = "") {
        const std::string skeleton = gabriellaSkeleton(missing);
        givenFile("data\\GABS.SKL", skeleton);
        const int bones = missing.starts_with("Bip01") ? 17 : 18;
        std::string origins;
        std::string bone_parts;
        for (int i = 0; i < bones; ++i) {
            origins += "0,0,0\n";
            bone_parts += "0\n";
        }
        givenModel("gabriela.dfm", {.counts = std::format("1,1,1,{},1\n", bones),
                                    .lods = "1,0,0,100,0\n",
                                    .skeleton = "GABS.SKL\n",
                                    .parts = "\"All\", 0, 0\n0,0\n",
                                    .vertices = "1\n0,1,0,0,0\n",
                                    .tris = "",
                                    .caps = "",
                                    .textures = "SKIN.RAW\n",
                                    .origins = origins,
                                    .scale = "1,1,1\n",
                                    .bias = "0,0,0\n",
                                    .bone_parts = bone_parts});
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_parts_.getGame(), crt_, models_};
    CGabriella gabriella_{classes_};
};

TEST_F(CGabriellaSetupTest, SheFindsTheBonesAndMotionsSheNeeds) {
    givenGabriella();
    gabriella_.setActorName("Gabriella");
    gabriella_.setup();
    const SGabriellaParts &parts = gabriella_.getParts();
    EXPECT_EQ(parts.spine, 1);
    EXPECT_EQ(parts.spine2, 2);
    EXPECT_EQ(parts.head, 3);
    EXPECT_EQ(parts.left_clavicle, 4);
    EXPECT_EQ(parts.right_clavicle, 5);
    EXPECT_EQ(parts.left_upper_arm, 6);
    EXPECT_EQ(parts.right_upper_arm, 7);
    EXPECT_EQ(parts.left_forearm, 8);
    EXPECT_EQ(parts.right_forearm, 9);
    EXPECT_EQ(parts.left_hand, 10);
    EXPECT_EQ(parts.right_hand, 11);
    EXPECT_EQ(parts.left_thigh, 12);
    EXPECT_EQ(parts.right_thigh, 13);
    EXPECT_EQ(parts.left_calf, 14);
    EXPECT_EQ(parts.right_calf, 15);
    EXPECT_EQ(parts.left_foot, 16);
    EXPECT_EQ(parts.right_foot, 17);
    EXPECT_EQ(parts.draw_motion, 1);
    EXPECT_EQ(parts.shoot_motion, 2);
    EXPECT_EQ(parts.crossbow_shoot_motion, 3);
    EXPECT_EQ(gabriella_.getModel().getModelPtr(), &models_.getDeformableModel("gabriela.dfm"));
    EXPECT_EQ(gabriella_.getPushedObject(), nullptr);
    EXPECT_EQ(gabriella_.getLeverToPull(), nullptr);
    EXPECT_EQ(gabriella_.getLadderToClimb(), nullptr);
    EXPECT_EQ(gabriella_.getDescriptiveName(), "Gabriella");
}

TEST_F(CGabriellaSetupTest, ASkeletonWithoutOneOfHerBonesIsFatal) {
    givenGabriella("Bip01 Spine");
    EXPECT_THAT([this] { gabriella_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 Spine in skeleton GABS.SKL!")));
}

TEST_F(CGabriellaSetupTest, ASkeletonWithoutOneOfHerMotionsIsFatal) {
    givenGabriella("gab shoot");
    EXPECT_THAT([this] { gabriella_.setup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find motion \"gab shoot\" in motion list")));
}

} // namespace
} // namespace nocturne::core
