#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/dlight/demonlight.h"
#include "core/event/eventlist.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <format>
#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::InSequence;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

const CDemonActorType kStartHeroType = makeActorType("CTestStartHero", &CHero::kType, nullptr, 1);

// A hero from the last mission, which counts how often it is set up.
class CTestStartHero : public CHero {
public:
    using CHero::CHero;

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kStartHeroType;
    }

    void setup() override {
        ++setups;
    }

    void updateCollisionData() override {}

    void drawWeapon(int /*drawn*/) override {}

    int isWeaponDrawn() override {
        return 0;
    }

    void setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                   common::CVector3f * /*new_orientation*/) override {}

    void setWalkTarget(CDemonActor * /*target*/, float /*min_distance*/,
                       float /*max_distance*/) override {}

    int setups = 0;
};

// The mission Test, whose sets are first.set and second.set, the second with the camera cam, and
// whose door and place for the first hero are in that second set. Prompts are answered at once.
class CDemonMissionStartTest : public CMissionFixture {
protected:
    CDemonMissionStartTest() {
        common::CTextScanner scanner("; mission\n7,4\n; name\nTest\n; sets\n2\nfirst.set\n"
                                     "second.set\n; types\n0\n; actors\n0\n; carried\n0\n");
        mission_.readMissionFile(scanner, true);
        givenFile("models\\first.set", SSetFile{}.text());
        givenFile("models\\second.set",
                  SSetFile{.cameras = "1\n" + cameraText("cam"), .pvs = "0\n"}.text());
        ON_CALL(raw_input_, getNextKeypress(_)).WillByDefault(Return('x'));
        auto door = std::make_unique<CTestActor>(kTestBaseType);
        door->setActorName("Door");
        door->setLocation({.position = {}, .area_id = 1});
        door_ = door.get();
        mission_.addActorToList(std::move(door));
    }

    // The hero, at the place for the first hero in the second set.
    void addHero() {
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setIndex(0);
        placeholder->setLocation({.position = {}, .area_id = 1});
        mission_.addActorToList(std::move(placeholder));
        auto hero = std::make_unique<CTestStartHero>(actor_);
        hero_ = hero.get();
        ASSERT_TRUE(mission_.createHeros(std::move(hero)));
    }

    CTestActor *door_ = nullptr;
    CTestStartHero *hero_ = nullptr;
};

// The actors are set up, then the hero's set loads and the script's initSection runs.
TEST_F(CDemonMissionStartTest, StartingSetsUpTheActorsLoadsTheHerosSetAndRunsTheScript) {
    addHero();
    givenFile("world\\Test.scr", ":initSection\nsetCameraGroup(cam, 3)\n:initSectionEnd\n");
    EXPECT_CALL(set_parts_.loading_screen, update(_, false)).Times(::testing::AnyNumber());
    {
        const InSequence order;
        EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Setting up actors"), false))
            .Times(::testing::AtLeast(1));
        EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Loading script"), false));
    }
    EXPECT_TRUE(mission_.startMission());
    EXPECT_EQ(door_->getSetupCount(), 1);
    EXPECT_EQ(hero_->setups, 1);
    EXPECT_EQ(mission_.getCurrentSetIndex(), 1);
    ASSERT_EQ(set_.getCameras().size(), 1U);
    EXPECT_EQ(set_.getCameras()[0].getCameraGroup(), 3);
}

// The last mission's actor variables are forgotten.
TEST_F(CDemonMissionStartTest, StartingForgetsTheEventsActorVariables) {
    addHero();
    events_.setActorVariable("@door", door_);
    EXPECT_TRUE(mission_.startMission());
    EXPECT_EQ(events_.getActorByVarName("@door"), nullptr);
}

TEST_F(CDemonMissionStartTest, AMissionWithNoHeroesCantStart) {
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    EXPECT_FALSE(mission_.startMission());
    EXPECT_EQ(door_->getSetupCount(), 0);
}

// createHeros found no place for the hero it was asked for.
TEST_F(CDemonMissionStartTest, AMissionWhoseHeroWasntMadeCantStart) {
    EXPECT_FALSE(mission_.createHeros(nullptr));
    EXPECT_FALSE(mission_.startMission());
    EXPECT_EQ(door_->getSetupCount(), 0);
}

// A script that isn't text doesn't load, and nothing in it runs.
TEST_F(CDemonMissionStartTest, AScriptThatWontLoadStopsTheStart) {
    addHero();
    givenFile("world\\Test.scr", std::string("\0\x01\x02", 3));
    EXPECT_FALSE(mission_.startMission());
    EXPECT_EQ(mission_.getCurrentSetIndex(), 1);
}

// A saved game's script was checked when it was first started.
TEST_F(CDemonMissionStartTest, WhileAGameLoadsTheScriptIsntCheckedAgain) {
    addHero();
    givenFile("world\\Test.scr", "noSuchCommand\n");
    game_.is_loading = true;
    EXPECT_TRUE(mission_.startMission());
    game_.is_loading = false;
    EXPECT_THAT([this] { static_cast<void>(mission_.startMission()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Test.scr failed syntax check on line 1: Unknown command on line 1: "
                          "noSuchCommand")));
}

// An actor in the second set read as a version 6 CDemonActor: created by the chance given once the
// event given holds.
class CDemonMissionRunTest : public CDemonMissionStartTest {
protected:
    CDemonMissionRunTest() {
        ON_CALL(game_parts_.getScreen(), getWindowHeight()).WillByDefault(Return(480));
        ON_CALL(game_parts_.getScreen(), getBitsPerPixel()).WillByDefault(Return(32));
    }

    CTestActor &addCreatedLater(std::string_view name, std::string_view chance,
                                std::string_view event) {
        auto actor = std::make_unique<CTestActor>(kTestBaseType);
        actor->onArchive(
            [&placed = *actor](CActorArchive &archive) { placed.CDemonActor::archive(archive); });
        actor_.setSavedVersion(CDemonActor::kType, 6);
        const std::string text =
            std::format("{{ CTestBase \"{0}\"\n1,0,0,0\n0,0,0\n90\n0\n{1}\n\"{2}\"\n"
                        "}} CTestBase \"{0}\"\n",
                        name, chance, event);
        common::CTextScanner scanner(text);
        actor->load(scanner,
                    {.actor_classes = actor_, .actors = mission_, .crt_random = crt_random_});
        CTestActor &added = *actor;
        mission_.addActorToList(std::move(actor));
        return added;
    }

    // Runs the mission, which stops where the play loop would start.
    void run() {
        EXPECT_THAT([this] { mission_.run(game_, session_); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("CGame::runGameSession's play loop is not ported yet")));
    }
};

// The hero's set is the one played, holding the actors created by now, and the session begins. The
// door's creation is the default: always, with no event.
TEST_F(CDemonMissionRunTest, RunningPlaysTheHerosSetWithTheActorsCreated) {
    addHero();
    const CTestActor &always = addCreatedLater("Always", "1", "none");
    const CTestActor &never = addCreatedLater("Never", "0", "");
    const CTestActor &later = addCreatedLater("Later", "1", "noSuchFlag");
    const CTestActor &now = addCreatedLater("Now", "1", "true");
    auto elsewhere = std::make_unique<CTestActor>(kTestBaseType);
    elsewhere->setLocation({.position = {}, .area_id = 0});
    const CTestActor &other_set = *elsewhere;
    mission_.addActorToList(std::move(elsewhere));
    mission_.setMissionName("Next");
    run();
    EXPECT_EQ(mission_.getCurrentSetIndex(), 1);
    EXPECT_EQ(mission_.getPendingMissionName(), "");
    EXPECT_EQ(always.getLifecycleState(), EActorLifecycleState::kCreated);
    EXPECT_EQ(never.getLifecycleState(), EActorLifecycleState::kDestroyed);
    EXPECT_EQ(later.getLifecycleState(), EActorLifecycleState::kNotCreated);
    EXPECT_EQ(now.getLifecycleState(), EActorLifecycleState::kCreated);
    EXPECT_EQ(other_set.getLifecycleState(), EActorLifecycleState::kNotCreated);
    const std::span<CDemonActor *const> in_set = set_.getActors();
    EXPECT_NE(std::ranges::find(in_set, &always), in_set.end());
    EXPECT_NE(std::ranges::find(in_set, &now), in_set.end());
    EXPECT_EQ(std::ranges::find(in_set, &other_set), in_set.end());
    EXPECT_EQ(std::ranges::find(in_set, &never), in_set.end());
    EXPECT_EQ(std::ranges::find(in_set, &later), in_set.end());
    EXPECT_NE(std::ranges::find(in_set, door_), in_set.end());
    EXPECT_EQ(set_parts_.flashlight->getCameraName(), "Flashlight");
}

// An actor created already stays in the set; one destroyed stays out.
TEST_F(CDemonMissionRunTest, AnActorsCreationIsDecidedOnce) {
    addHero();
    door_->setLifecycleState(EActorLifecycleState::kCreated);
    CTestActor &gone = addCreatedLater("Gone", "1", "none");
    gone.setLifecycleState(EActorLifecycleState::kDestroyed);
    run();
    EXPECT_NE(std::ranges::find(set_.getActors(), door_), set_.getActors().end());
    EXPECT_EQ(gone.getLifecycleState(), EActorLifecycleState::kDestroyed);
}

TEST_F(CDemonMissionRunTest, RunningWithoutAHeroIsFatal) {
    EXPECT_THAT([this] { mission_.run(game_, session_); },
                ThrowsMessage<common::CFatalError>(StrEq("CDemonMission::run - hero list empty")));
    EXPECT_FALSE(mission_.createHeros(nullptr));
    EXPECT_THAT([this] { mission_.run(game_, session_); },
                ThrowsMessage<common::CFatalError>(StrEq("CDemonMission::run - no gLocalHero")));
}

TEST_F(CDemonMissionRunTest, MoreThanTwoThousandActorsCreatedInTheSetIsFatal) {
    addHero();
    mission_.loadSet(1);
    for (int i = 0; i < 2000; ++i) {
        auto actor = std::make_unique<CTestActor>(kTestBaseType);
        actor->setLocation({.position = {}, .area_id = 1});
        actor->setLifecycleState(EActorLifecycleState::kCreated);
        mission_.addActorToList(std::move(actor));
    }
    door_->setLifecycleState(EActorLifecycleState::kCreated);
    EXPECT_THAT([this] { mission_.run(game_, session_); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "CDemonMission::buildActiveSetActorList - Too many actors in current set!")));
}

TEST_F(CDemonMissionStartTest, TheScriptIsTheMissionsNameAsAScr) {
    givenFile("world\\Test.scr", "wait(1)\n");
    EXPECT_TRUE(mission_.loadScript(false));
    givenFile("world\\Test.scr", std::string("\0", 1));
    EXPECT_FALSE(mission_.loadScript(true));
}

} // namespace
} // namespace nocturne::core
