#include "common/error/fatalerror.h"
#include "core/actor/demonactor.h"
#include "core/event/eventlist.h"
#include "tests/mocks/core/scriptfixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The actors Mob and Lever1, both in the set.
class CEventListActorVarTest : public CScriptFixture {
protected:
    CEventListActorVarTest() {
        addActor("Mob", kScriptCharacterType);
        addActor("Lever1", kScriptDoorType);
        putActorsInSet();
    }

    [[nodiscard]] CDemonActor *actor(std::string_view name) const {
        return mission_.findActorByName(name);
    }
};

TEST_F(CEventListActorVarTest, AVariableIsUnsetUntilItNamesAnActor) {
    EXPECT_EQ(events_.getActorByVarName("@who"), nullptr);
    events_.setActorVariable("@who", nullptr);
    EXPECT_EQ(events_.getActorByVarName("@who"), nullptr);
    events_.setActorVariable("@who", actor("Mob"));
    EXPECT_EQ(events_.getActorByVarName("@WHO"), actor("Mob"));
}

TEST_F(CEventListActorVarTest, SettingAVariableAgainRenamesItsActor) {
    events_.setActorVariable("@who", actor("Mob"));
    events_.setActorVariable("@WHO", actor("Lever1"));
    EXPECT_EQ(events_.getActorByVarName("@who"), actor("Lever1"));
}

// The actor is kept by name, so another of that name in the set is the one found.
TEST_F(CEventListActorVarTest, TheActorIsFoundByItsNameAmongTheSets) {
    events_.setActorVariable("@who", actor("Mob"));
    actor("Mob")->setActorName("Moved");
    EXPECT_EQ(events_.getActorByVarName("@who"), nullptr);
    actor("Lever1")->setActorName("MOB");
    EXPECT_EQ(events_.getActorByVarName("@who"), actor("MOB"));
}

TEST_F(CEventListActorVarTest, AnActorOutsideTheSetIsNamedByNoVariable) {
    events_.setActorVariable("@who", actor("Mob"));
    set_.setActors({});
    EXPECT_EQ(events_.getActorByVarName("@who"), nullptr);
}

TEST_F(CEventListActorVarTest, ANullActorClearsTheVariableAndKeepsTheOthers) {
    events_.setActorVariable("@first", actor("Mob"));
    events_.setActorVariable("@second", actor("Mob"));
    events_.setActorVariable("@third", actor("Lever1"));
    events_.setActorVariable("@Second", nullptr);
    EXPECT_EQ(events_.getActorByVarName("@second"), nullptr);
    EXPECT_EQ(events_.getActorByVarName("@first"), actor("Mob"));
    EXPECT_EQ(events_.getActorByVarName("@third"), actor("Lever1"));
}

TEST_F(CEventListActorVarTest, ResetForgetsEveryVariable) {
    events_.setActorVariable("@who", actor("Mob"));
    events_.reset();
    EXPECT_EQ(events_.getActorByVarName("@who"), nullptr);
}

TEST_F(CEventListActorVarTest, AnActorWithoutANameIsFatal) {
    CTestActor nameless(kScriptCharacterType);
    EXPECT_THAT(
        [&] { events_.setActorVariable("@who", &nameless); },
        ThrowsMessage<common::CFatalError>(
            StrEq("Tried to assign actor var @who an actor of type CTestCharacter with no name")));
}

// Setting one already set, or clearing one, doesn't count against the 25.
TEST_F(CEventListActorVarTest, A26thVariableIsFatal) {
    for (int i = 0; i < 25; ++i) {
        events_.setActorVariable(std::format("@v{}", i), actor("Mob"));
    }
    events_.setActorVariable("@v0", actor("Lever1"));
    events_.setActorVariable("@extra", nullptr);
    EXPECT_THAT(
        [&] { events_.setActorVariable("@extra", actor("Mob")); },
        ThrowsMessage<common::CFatalError>(
            StrEq("CEventList::setActorVariable - already too many actor variables.  Max is 25.")));
}

} // namespace
} // namespace nocturne::core
