#include "common/error/fatalerror.h"
#include "common/text/textscanner.h"
#include "core/actor/demonactor.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A mission naming the sets first.set and second.set, both on disk, and actors the test adds in
// whichever set it says.
class CDemonMissionSetTest : public CMissionFixture {
protected:
    CDemonMissionSetTest() {
        common::CTextScanner scanner("; mission\n7,4\n; name\nTest\n; sets\n2\nfirst.set\n"
                                     "second.set\n; types\n0\n; actors\n0\n; carried\n0\n");
        mission_.readMissionFile(scanner, true);
        givenFile("models\\first.set", SSetFile{}.text());
        givenFile("models\\second.set", SSetFile{}.text());
    }

    CTestActor &addActor(std::string_view name, int area_id) {
        auto actor = std::make_unique<CTestActor>(kTestBaseType);
        CTestActor &added = *actor;
        actor->setActorName(name);
        actor->setLocation({.position = {}, .area_id = area_id});
        mission_.addActorToList(std::move(actor));
        return added;
    }

    // Loads the set, answering the prompt each set's missing geometry shows.
    void loadSet(int set_index) {
        type("x");
        mission_.loadSet(set_index);
    }

    [[nodiscard]] std::vector<std::string> setActorNames() const {
        std::vector<std::string> names;
        for (const CDemonActor *actor : set_.getActors()) {
            names.push_back(actor->getActorName());
        }
        return names;
    }
};

TEST_F(CDemonMissionSetTest, AMissionKeepsItsSetNamesWithNoneLoaded) {
    EXPECT_THAT(mission_.getSetNames(), ElementsAre("first.set", "second.set"));
    EXPECT_EQ(mission_.getCurrentSetIndex(), -1);
}

TEST_F(CDemonMissionSetTest, LoadingASetGivesItTheActorsInIt) {
    addActor("a", 1);
    addActor("b", 0);
    addActor("c", 1);
    loadSet(1);
    EXPECT_EQ(mission_.getCurrentSetIndex(), 1);
    EXPECT_EQ(set_.getGeometryFilename(), "pier.geo");
    EXPECT_THAT(setActorNames(), ElementsAre("a", "c"));
}

// Every actor is set up with the first set, and each in the set has its collision data updated.
TEST_F(CDemonMissionSetTest, TheFirstSetLoadedSetsEveryActorUp) {
    const CTestActor &in_set = addActor("a", 0);
    const CTestActor &elsewhere = addActor("b", 1);
    loadSet(0);
    EXPECT_EQ(in_set.getSetupCount(), 1);
    EXPECT_EQ(elsewhere.getSetupCount(), 1);
    EXPECT_EQ(in_set.getCollisionUpdates(), 1);
    EXPECT_EQ(elsewhere.getCollisionUpdates(), 0);
    loadSet(1);
    EXPECT_EQ(in_set.getSetupCount(), 1);
    EXPECT_EQ(elsewhere.getCollisionUpdates(), 1);
    EXPECT_THAT(setActorNames(), ElementsAre("b"));
}

TEST_F(CDemonMissionSetTest, TheSetLoadedAlreadyIsLeftAsItIs) {
    const CTestActor &actor = addActor("a", 0);
    loadSet(0);
    mission_.loadSet(0);
    EXPECT_EQ(actor.getCollisionUpdates(), 1);
}

// Taking the actors away forgets they were set up, and leaves the set none.
TEST_F(CDemonMissionSetTest, RemovingTheActorsEmptiesTheSetAndSetsTheNextOnesUp) {
    addActor("a", 0);
    loadSet(0);
    mission_.removeAllActors();
    EXPECT_TRUE(set_.getActors().empty());
    const CTestActor &next = addActor("b", 1);
    loadSet(1);
    EXPECT_EQ(next.getSetupCount(), 1);
}

TEST_F(CDemonMissionSetTest, ResettingForgetsTheActorsWereSetUp) {
    loadSet(0);
    mission_.reset();
    const CTestActor &next = addActor("b", 1);
    loadSet(1);
    EXPECT_EQ(next.getSetupCount(), 1);
}

TEST_F(CDemonMissionSetTest, ReadingAMissionReplacesTheSetsAndForgetsTheOneLoaded) {
    loadSet(0);
    common::CTextScanner scanner("; mission\n7,4\n; name\nNext\n; sets\n1\nother.set\n");
    mission_.readMissionFile(scanner, true);
    EXPECT_THAT(mission_.getSetNames(), ElementsAre("other.set"));
    EXPECT_EQ(mission_.getCurrentSetIndex(), -1);
}

TEST_F(CDemonMissionSetTest, ASetTheMissionDoesntNameIsFatal) {
    EXPECT_THAT([this] { mission_.loadSet(2); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CDemonMission::loadSet - the mission has no set 2")));
    EXPECT_THAT([this] { mission_.loadSet(-2); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CDemonMission::loadSet - the mission has no set -2")));
}

TEST_F(CDemonMissionSetTest, MoreThanTwoThousandActorsInASetIsFatal) {
    for (int i = 0; i < 2001; ++i) {
        addActor("a", 0);
    }
    type("x");
    EXPECT_THAT([this] { mission_.loadSet(0); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CDemonMission::buildSetActorList - Too many actors in current set!")));
}

// One step before the actors, then one each time the first quarter, half and three quarters are
// set up: with eight, after the second, fourth and sixth.
TEST_F(CDemonMissionSetTest, SettingUpShowsTheLoadingScreensProgress) {
    std::vector<CTestActor *> actors;
    actors.reserve(8);
    for (int i = 0; i < 8; ++i) {
        actors.push_back(&addActor("a", 0));
    }
    std::vector<int> set_up_at_step;
    EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Setting up actors"), false))
        .Times(4)
        .WillRepeatedly([&] {
            int set_up = 0;
            for (const CTestActor *actor : actors) {
                set_up += actor->getSetupCount();
            }
            set_up_at_step.push_back(set_up);
        });
    mission_.prepareAllActors();
    EXPECT_THAT(set_up_at_step, ElementsAre(0, 2, 4, 6));
}

// Two actors' half and three quarters both fall on the first.
TEST_F(CDemonMissionSetTest, AShortListMovesTheLoadingScreenOnTwiceAtOnce) {
    addActor("a", 0);
    addActor("b", 0);
    EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Setting up actors"), false)).Times(3);
    mission_.prepareAllActors();
}

} // namespace
} // namespace nocturne::core
