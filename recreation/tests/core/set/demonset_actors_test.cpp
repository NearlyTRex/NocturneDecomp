#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/game/game.h"
#include "core/npc/npc.h"
#include "core/platfrm/platform.h"
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
#include <numbers>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

// A trigger of the cause given, read as version 11, asking auto-aim to turn to it or not, raising
// the event given as it goes on.
void readTrigger(CTrigger &trigger, int cause, bool auto_aim_at_me,
                 std::string_view on_event = {}) {
    CTestFieldsArchive archive(
        trigger, CTrigger::kType, 11,
        std::format("0\n1,1,1\n0\n\"{}\"\n\"\"\n{}\n\"\"\n\"\"\n0\n0\n0\n0\n0\n0\n{}\n0\n\"\"\n",
                    on_event, cause, auto_aim_at_me ? 1 : 0));
    trigger.archive(archive.get());
}

class CDemonSetActorsTest : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
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

// An actor that notes its name in the order it is processed, by the frame's time.
class CDemonSetProcessTest : public CDemonSetActorsTest {
protected:
    CDemonSetProcessTest() {
        set_parts_.classes.getGame().slamDT(kFrame);
    }

    void watch(CTestActor &actor, std::string_view name) {
        actor.setActorName(name);
        actor.onProcess([this, &actor](float delta_time) {
            processed_.push_back(actor.getActorName());
            EXPECT_EQ(delta_time, kFrame);
        });
    }

    static constexpr float kFrame = 0.25F;
    std::vector<std::string> processed_;
};

// Lowest order first, those of one order as the set lists them, an actor whose processing is off
// left out.
TEST_F(CDemonSetProcessTest, ActorsProcessByTheirOrder) {
    CTestActor late{kTestBaseType};
    watch(late, "late");
    late.setProcessOrder(150);
    CTestActor first{kTestBaseType};
    watch(first, "first");
    CTestActor early{kTestBaseType};
    watch(early, "early");
    early.setProcessOrder(50);
    CTestActor off{kTestBaseType};
    watch(off, "off");
    off.setProcessDisabled(true);
    CTestActor second{kTestBaseType};
    watch(second, "second");
    set_.setActors({&late, &first, &early, &off, &second});
    set_.processActors();
    EXPECT_THAT(processed_, ElementsAre("early", "first", "second", "late"));
}

// The first pass's order is processed; one below it, or at or past the last, never is.
TEST_F(CDemonSetProcessTest, OrdersOutsideThePassesAreNeverProcessed) {
    CTestActor lowest{kTestBaseType};
    watch(lowest, "lowest");
    lowest.setProcessOrder(-999999);
    CTestActor below{kTestBaseType};
    watch(below, "below");
    below.setProcessOrder(-1000000);
    CTestActor last{kTestBaseType};
    watch(last, "last");
    last.setProcessOrder(999999);
    set_.setActors({&last, &below, &lowest});
    set_.processActors();
    EXPECT_THAT(processed_, ElementsAre("lowest"));
}

// A frame without time processes nothing, and lists nothing to collide.
TEST_F(CDemonSetProcessTest, AFrameWithoutTimeProcessesNothing) {
    CTestActor actor{kTestBaseType};
    watch(actor, "actor");
    set_.setActors({&actor});
    set_parts_.classes.getGame().slamDT(0.0F);
    set_.processActors();
    EXPECT_THAT(processed_, IsEmpty());
    EXPECT_THAT(set_.getCollidableActors(), IsEmpty());
    set_parts_.classes.getGame().slamDT(kFrame);
    set_.processActors();
    EXPECT_THAT(set_.getCollidableActors(), ElementsAre(&actor));
}

// An actor that turns has its angles brought within pi; one that doesn't keeps them as they are.
TEST_F(CDemonSetProcessTest, AnActorThatTurnsHasItsAnglesNormalised) {
    constexpr float kTurned = 7.0F;
    constexpr float kUnnormalised = 4.0F;
    CTestActor turning{kTestBaseType};
    turning.onProcess([&turning](float /*delta_time*/) {
        turning.setOrientation({.x = kTurned, .y = kTurned, .z = kTurned});
    });
    CTestActor still{kTestBaseType};
    still.setOrientation({.x = kUnnormalised, .y = kUnnormalised, .z = kUnnormalised});
    still.onProcess([](float /*delta_time*/) {});
    set_.setActors({&turning, &still});
    set_.processActors();
    const float normalised = kTurned - static_cast<float>(2.0 * std::numbers::pi);
    EXPECT_NEAR(turning.getOrientation().x, normalised, 1e-5F);
    EXPECT_NEAR(turning.getOrientation().y, normalised, 1e-5F);
    EXPECT_NEAR(turning.getOrientation().z, normalised, 1e-5F);
    EXPECT_EQ(still.getOrientation().x, kUnnormalised);
}

// A turn of one angle alone is a turn.
TEST_F(CDemonSetProcessTest, ATurnOfAnyAngleIsATurn) {
    constexpr float kTurned = 7.0F;
    for (float common::CVector3f::*const axis :
         {&common::CVector3f::x, &common::CVector3f::y, &common::CVector3f::z}) {
        CTestActor turning{kTestBaseType};
        turning.onProcess([&turning, axis](float /*delta_time*/) {
            common::CVector3f orientation{};
            orientation.*axis = kTurned;
            turning.setOrientation(orientation);
        });
        set_.setActors({&turning});
        set_.processActors();
        EXPECT_LT(turning.getOrientation().*axis, kTurned);
    }
}

// A platform goes before the actors it carries, a trigger after the actors it watches, and a
// trigger with neither event isn't processed.
TEST_F(CDemonSetProcessTest, PlatformsAndTriggersHaveTheirOwnOrders) {
    EXPECT_EQ(CTestActor{kTestBaseType}.getProcessOrder(), CDemonActor::kDefaultProcessOrder);
    EXPECT_EQ(CPlatform{classes_.get()}.getProcessOrder(), 50);
    CTrigger trigger;
    EXPECT_EQ(trigger.getProcessOrder(), 150);
    EXPECT_FALSE(trigger.isProcessDisabled());
    trigger.setup();
    EXPECT_TRUE(trigger.isProcessDisabled());
    CTrigger raising;
    readTrigger(raising, 4, false, "doorOpen");
    raising.setup();
    EXPECT_FALSE(raising.isProcessDisabled());
}

} // namespace
} // namespace nocturne::core
