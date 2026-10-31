#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/charactr/character.h"
#include "tests/mocks/core/deformablemodelfixture.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

class CModelledCharacter : public CCharacter {
public:
    using CCharacter::CCharacter;

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }
};

// A character of the default test model, its size scale read as 2.
class CCharacterSetupTest : public CDeformableModelFixture {
protected:
    CCharacterSetupTest() {
        givenFile("data\\TEST.SKL",
                  "// v\n3\n// counts\n6,1\n// bones\n\"root\",-1\n\"one\",0\n\"two\",1\n"
                  "\"three\",2\n\"four\",3\n\"five\",0\n// angles\n1,0,0,0\n1,0,0,0\n1,0,0,0\n"
                  "1,0,0,0\n1,0,0,0\n1,0,0,0\n// roots\n0,0,0\n// canceled\n0,0,0\n"
                  "// motion list version\n2\n// states\n1\nS\n// motions\n1\n// m\n"
                  "\"stand\",30,0,0,1\n// exit\n1,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
                  "// transitions\n0\n// signals\n0\n// markers\n0\n// origins\n0,0,0\n"
                  "0,0,0\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n");
        givenModel("test.dfm", SDfmFile{});
        character_.setActorName("Mob");
        ON_CALL(actors_, loadActor)
            .WillByDefault([](common::CTextScanner &scanner, const CDemonActor &,
                              std::string_view) -> CDemonActor * {
                static_cast<void>(scanner.readLine());
                return nullptr;
            });
        const std::string text = "{ CCharacter \"Mob\"\n0,0,0,0\n0,0,0\n0\n40\n0\n\"\"\n"
                                 "\"(none)\"\n0\n{\n0\n}\n2\n} CCharacter \"Mob\"\n";
        classes_.setSavedVersion(CCharacter::kType, 5);
        common::CTextScanner scanner(text);
        character_.load(scanner,
                        {.actor_classes = classes_, .actors = actors_, .crt_random = crt_});
        character_.getModel().init("test.dfm");
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CActor classes_{game_parts_.getGame(), crt_, models_, keyframed_models_};
    ::testing::NiceMock<MockActorLookup> actors_;
    CModelledCharacter character_{classes_};
};

TEST_F(CCharacterSetupTest, TheModelIsFoundAtTheCharactersSize) {
    character_.setup();
    EXPECT_EQ(character_.getModel().getModelPtr(), &models_.getDeformableModel("test.dfm"));
    EXPECT_EQ(character_.getModel().getScaleFactor(), 2.0F);
}

TEST_F(CCharacterSetupTest, TheBoxIsTheOneThePosedBonesTakeUp) {
    character_.setup();
    const CBoundingBox3D expected = character_.getModel().computeBoundingBoxFromBones();
    CBoundingBox3D box;
    character_.getBoundingBox(&box);
    EXPECT_TRUE(box.min.equals(expected.min));
    EXPECT_TRUE(box.max.equals(expected.max));
    EXPECT_LT(box.min.y, box.max.y);
}

} // namespace
} // namespace nocturne::core
