#include "core/actor/demonactor.h"
#include "core/npc/npc.h"
#include "core/set/demonset.h"
#include "core/trigger/trigger.h"
#include "core/waypoint/waypoint.h"
#include "core/zombie/zombie.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

// A trigger of the cause given, read as version 11, asking auto-aim to turn to it or not.
void readTrigger(CTrigger &trigger, int cause, bool auto_aim_at_me) {
    CTestFieldsArchive archive(
        trigger, CTrigger::kType, 11,
        std::format("0\n1,1,1\n0\n\"\"\n\"\"\n{}\n\"\"\n\"\"\n0\n0\n0\n0\n0\n0\n{}\n0\n\"\"\n",
                    cause, auto_aim_at_me ? 1 : 0));
    trigger.archive(archive.get());
}

class CDemonSetActorsTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    CTestClasses classes_;
};

TEST_F(CDemonSetActorsTest, ActorsAreSortedByWhatTheyAreAndWhetherTheyAreDrawn) {
    CTestActor plain{kTestBaseType};
    CTestActor hidden{kTestBaseType};
    hidden.setRenderable(false);
    CTestActor see_through{kTestBaseType};
    see_through.setRenderable(false);
    see_through.setTransparent(true);
    CNPC npc{classes_.get()};
    CZombie zombie{classes_.get()};
    CWayPoint waypoint;
    CTrigger aimed_at;
    readTrigger(aimed_at, 4, true);
    CTrigger not_aimed_at;
    readTrigger(not_aimed_at, 4, false);
    CTrigger laser;
    readTrigger(laser, 5, true);
    set_.setActors({&plain, &hidden, &see_through, &npc, &zombie, &waypoint, &aimed_at,
                    &not_aimed_at, &laser});
    set_.buildActorTypeLists();
    EXPECT_THAT(set_.getRenderableActors(),
                ElementsAre(&plain, &see_through, &npc, &zombie, &waypoint, &aimed_at,
                            &not_aimed_at, &laser));
    EXPECT_THAT(set_.getCharacters(), ElementsAre(&npc, &zombie));
    EXPECT_THAT(set_.getEnemies(), ElementsAre(&zombie));
    EXPECT_THAT(set_.getWaypoints(), ElementsAre(&waypoint));
    EXPECT_THAT(set_.getThreats(), ElementsAre(&zombie, &aimed_at));
}

TEST_F(CDemonSetActorsTest, SortingAgainStartsTheListsOver) {
    CZombie zombie{classes_.get()};
    CWayPoint waypoint;
    set_.setActors({&zombie, &waypoint});
    set_.buildActorTypeLists();
    set_.setActors({});
    set_.buildActorTypeLists();
    EXPECT_THAT(set_.getRenderableActors(), IsEmpty());
    EXPECT_THAT(set_.getCharacters(), IsEmpty());
    EXPECT_THAT(set_.getEnemies(), IsEmpty());
    EXPECT_THAT(set_.getWaypoints(), IsEmpty());
    EXPECT_THAT(set_.getThreats(), IsEmpty());
}

TEST_F(CDemonSetActorsTest, OnlyActorsWhoseCollisionIsntDisabledCollide) {
    CTestActor solid{kTestBaseType};
    CTestActor ghost{kTestBaseType};
    ghost.setCollisionDisabled(true);
    CTestActor other{kTestBaseType};
    set_.setActors({&solid, &ghost, &other});
    set_.buildCollidableActorList();
    EXPECT_THAT(set_.getCollidableActors(), ElementsAre(&solid, &other));
    set_.setActors({&ghost});
    set_.buildCollidableActorList();
    EXPECT_THAT(set_.getCollidableActors(), IsEmpty());
}

} // namespace
} // namespace nocturne::core
