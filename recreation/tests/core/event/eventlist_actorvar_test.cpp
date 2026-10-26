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

constexpr std::string_view kNotPorted = "CDemonMission::buildActiveSetActorList is not ported yet";

// The actors Mob and Lever1. A variable that names an actor is looked up among the set's actors,
// which aren't ported yet, so whether a variable is set shows as that lookup being reached.
class CEventListActorVarTest : public CScriptFixture {
protected:
    CEventListActorVarTest() {
        addActor("Mob", kScriptCharacterType);
        addActor("Lever1", kScriptDoorType);
    }

    [[nodiscard]] const CDemonActor *actor(std::string_view name) const {
        return mission_.findActorByName(name);
    }

    void expectSet(std::string_view variable) {
        EXPECT_THAT([&] { return events_.getActorByVarName(variable); },
                    ThrowsMessage<common::CFatalError>(StrEq(kNotPorted)))
            << variable;
    }

    void expectUnset(std::string_view variable) {
        EXPECT_EQ(events_.getActorByVarName(variable), nullptr) << variable;
    }
};

TEST_F(CEventListActorVarTest, AVariableIsUnsetUntilItNamesAnActor) {
    expectUnset("@who");
    events_.setActorVariable("@who", nullptr);
    expectUnset("@who");
    events_.setActorVariable("@who", actor("Mob"));
    expectSet("@WHO");
}

TEST_F(CEventListActorVarTest, SettingAVariableAgainRenamesItsActor) {
    events_.setActorVariable("@who", actor("Mob"));
    events_.setActorVariable("@WHO", actor("Lever1"));
    expectSet("@who");
}

TEST_F(CEventListActorVarTest, ANullActorClearsTheVariableAndKeepsTheOthers) {
    events_.setActorVariable("@first", actor("Mob"));
    events_.setActorVariable("@second", actor("Mob"));
    events_.setActorVariable("@third", actor("Mob"));
    events_.setActorVariable("@Second", nullptr);
    expectUnset("@second");
    expectSet("@first");
    expectSet("@third");
}

TEST_F(CEventListActorVarTest, ResetForgetsEveryVariable) {
    events_.setActorVariable("@who", actor("Mob"));
    events_.reset();
    expectUnset("@who");
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
