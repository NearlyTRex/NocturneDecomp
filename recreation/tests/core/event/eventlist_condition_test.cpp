#include "common/random/watcomrandom.h"
#include "core/actor/demonactortype.h"
#include "core/event/eventlist.h"
#include "core/glass/glass.h"
#include "tests/mocks/core/scriptfixture.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <expected>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr CDemonActorType kGlassType = makeActorType("CTestGlass", &CGlass::kType, nullptr, 1);

// A hero Gabriel, a character Mob, a pane of glass Pane, and characters A and B, with no game
// hero for "$" unless the test adds one.
class CEventListConditionTest : public CScriptFixture {
protected:
    CEventListConditionTest() {
        addActor("Gabriel", kScriptHeroType);
        addActor("Mob", kScriptCharacterType);
        addActor("Pane", kGlassType);
        addActor("A", kScriptCharacterType);
        addActor("B", kScriptCharacterType);
    }

    void expectValid(std::string_view condition) {
        EXPECT_TRUE(events_.validateCondition(condition).has_value()) << condition;
    }

    void expectError(std::string_view condition, std::string_view message) {
        const CEventList::CheckResult result = events_.validateCondition(condition);
        ASSERT_FALSE(result.has_value()) << condition;
        EXPECT_EQ(result.error(), message) << condition;
    }

    static std::string wrongClass(const std::string &name, const std::string &type,
                                  const std::string &needed) {
        return std::format("Actor \"{}\" is of type {}, this command requires an actor of type {}.",
                           name, type, needed);
    }
};

TEST_F(CEventListConditionTest, NothingIsAValidCondition) {
    expectValid("");
    expectValid(std::string_view("\0garbage", 8));
}

TEST_F(CEventListConditionTest, FlagsJoinWithEitherOperatorSingleOrDoubled) {
    expectValid("TRUE");
    expectValid(" open_door-2 ");
    expectValid(".flag");
    expectValid("!flag");
    expectValid("(a | b) && !(c & d) || e");
}

TEST_F(CEventListConditionTest, ABrokenExpressionSaysWhy) {
    expectError("a &", "Unexpected end of string");
    expectError("!", "Unexpected end of string");
    expectError("(a", "Matching ')' is missing");
    expectError("(a |)", "Syntax error");
    expectError("a b", "Syntax error");
    expectError("#", "Syntax error");
    expectError("unknown(1)", "Invalid meta-function");
}

// A space between a name and its '(' makes it a flag, and the parentheses are left over.
TEST_F(CEventListConditionTest, AFunctionNameMustTouchItsParenthesis) {
    expectValid("ISDEAD(Mob)");
    expectError("isDead (Mob)", "Syntax error");
}

TEST_F(CEventListConditionTest, CmpComparesWithTheSixOperators) {
    expectValid("cmp(count < 3) && cmp(count <= 3) && cmp(3 == count) && cmp(a != b) && "
                "cmp(a >= 1) && cmp( a > 1 )");
    expectError("cmp(count ~ 3)", "Invalid relational operator in cmp statement");
    expectError("cmp(count)", "Error parsing cmp parameters.");
}

TEST_F(CEventListConditionTest, ExistsAsksWithoutFailing) {
    expectValid("exists(Mob) && exists(Nobody) && exists($) && exists(@who)");
    expectError("exists()", "Error parsing exists parameters.");
}

// An unset variable, or one whose actor is of another class, names no one for now.
TEST_F(CEventListConditionTest, AnActorVariableNamesItsActor) {
    expectValid("isDead(@who) && isBroken(@who)");
    putActorsInSet();
    events_.setActorVariable("@who", mission_.findActorByName("Mob"));
    expectValid("isDead(@WHO) && isBroken(@who)");
}

TEST_F(CEventListConditionTest, HasItemTakesAnyName) {
    expectValid("hasItem( key )");
    expectError("hasItem()", "Error parsing hasItem parameters.");
}

TEST_F(CEventListConditionTest, HasItemTypeTakesAHero) {
    expectValid("hasItemType( Gabriel , CGun ) && hasItemType($, CGun)");
    expectError("hasItemType(Mob, CGun)", wrongClass("Mob", "CTestCharacter", "CHero"));
    expectError("hasItemType(Gabriel)", "Error parsing hasItemType parameters.");
}

TEST_F(CEventListConditionTest, HasKeyMaskTakesOneKeysBit) {
    expectValid("hasKeyMask(4) && hasKeyMask(-2147483648)");
    expectError("hasKeyMask(0)", "hasKeyMask(0) always returns false!");
    expectError("hasKeyMask(6)", "mask value must be a power of 2.\n(To test for multiple keys, "
                                 "use multiple hasKeyMask() tests)");
    expectError("hasKeyMask(key)", "Error parsing hasKeyMask parameters.");
}

TEST_F(CEventListConditionTest, IsBrokenTakesGlass) {
    expectValid("isBroken( Pane )");
    expectError("isBroken(Mob)", wrongClass("Mob", "CTestCharacter", "CGlass"));
    expectError("isBroken( )", "Must specify actor name");
    expectError("isBroken()", "Error parsing isBroken parameters.");
}

TEST_F(CEventListConditionTest, IsCurrentCameraTakesAnyName) {
    expectValid("isCurrentCamera(cam1)");
    expectError("isCurrentCamera()", "Error parsing icCurrentCamera parameters.");
}

TEST_F(CEventListConditionTest, TheFunctionsOfACharacterTakeACharacter) {
    expectValid("isDead(Mob) && isTalking(Mob) && isVictim(Gabriel) && reachedDest(Mob)");
    expectError("isDead(Pane)", wrongClass("Pane", "CTestGlass", "CCharacter"));
    expectError("isTalking(Nobody)", "Actor \"Nobody\" does not exist.");
    expectError("isDead()", "Error parsing isDead parameters.");
    expectError("isTalking()", "Error parsing isTalking parameters.");
    expectError("isVictim()", "Error parsing isVictim parameters.");
    expectError("reachedDest()", "Error parsing reachedDest parameters.");
}

TEST_F(CEventListConditionTest, TheFunctionsOfAHeroTakeAHero) {
    expectValid("isWeaponDrawn(Gabriel) && isWearingGasMask(Gabriel)");
    expectError("isWeaponDrawn(Mob)", wrongClass("Mob", "CTestCharacter", "CHero"));
    expectError("isWearingGasMask(Mob)", wrongClass("Mob", "CTestCharacter", "CHero"));
    expectError("isWeaponDrawn()", "Error parsing isWeaponDrawn parameters.");
    expectError("isWearingGasMask()", "Error parsing isWearingGasMask parameters.");
}

// Without a hero, "$" names no one for now; with one, it is checked.
TEST_F(CEventListConditionTest, TheDollarSignIsTheHero) {
    expectValid("isDead($) && isWeaponDrawn($)");
    addHero();
    expectValid("isWeaponDrawn($)");
    expectError("isBroken($)", wrongClass("$", "CGabriella", "CGlass"));
}

TEST_F(CEventListConditionTest, TheSettingsTakeNothing) {
    expectValid("isFadeFinished( ) && isNudityEnabled()");
    expectError("isFadeFinished(1)", "Error parsing isFadeFinished function.");
    expectError("isNudityEnabled(1)", "Error parsing isNudityEnabled().");
}

TEST_F(CEventListConditionTest, IsInRangeTakesTwoPlacesAndADistance) {
    expectValid("isInRange({1, 2, 3}, Mob, 5) && isInRange( Mob , { 0,0,0 } , 2.5 )");
    expectError("isInRange()", "Error parsing vector location");
    expectError("isInRange(Nobody, Mob, 1)", "Actor \"Nobody\" does not exist.");
    expectError("isInRange(Mob Mob, 1)", "Error parsing isInRange parameters.");
    expectError("isInRange(Mob, Nobody, 1)", "Actor \"Nobody\" does not exist.");
    expectError("isInRange(Mob, Mob)", "Error parsing isInRange parameters.");
}

TEST_F(CEventListConditionTest, IsOfTypeTakesAnActorAndAClass) {
    expectValid("isOfType( Mob , CNPC )");
    expectError("isOfType(Nobody, CNPC)", "Actor \"Nobody\" does not exist.");
    expectError("isOfType(Mob)", "Error parsing isOfType parameters.");
}

TEST_F(CEventListConditionTest, IsFacingTakesTwoActorsAndAnAngleUpTo180) {
    expectValid("isFacing(Mob, Gabriel) && isFacing( Mob , Pane,90 ) && isFacing(Mob, A,0 )");
    expectError("isFacing(Mob, Gabriel,180.5)", "isFacing() angle must be in range 0..180.");
    expectError("isFacing(Mob, Gabriel,-1)", "isFacing() angle must be in range 0..180.");
    expectError("isFacing(Mob, Gabriel,wide)", "Error parsing isFacing parameters.");
    expectError("isFacing(Mob, Gabriel", "Error parsing isFacing parameters.");
    expectError("isFacing(Nobody, Gabriel)", "Actor \"Nobody\" does not exist.");
    expectError("isFacing(Mob, Nobody)", "Actor \"Nobody\" does not exist.");
    expectError("isFacing(Mob)", "Error parsing isFacing parameters.");
}

// "(A,B" is one character short of what the original's scan had to take.
TEST_F(CEventListConditionTest, IsFacingFailsOneLetterNamesWithoutASpace) {
    expectValid("isFacing(A, B)");
    expectError("isFacing(A,B)", "Error parsing isFacing parameters.");
}

TEST_F(CEventListConditionTest, IsLightOnTakesASpotlightOfTheSet) {
    givenSet({.lights = "2\n" + lightText("omni", 1) + lightText("Beam", 0)});
    expectValid("isLightOn(beam)");
    expectError("isLightOn(omni)", "Spotlight omni doesn't exist.");
    expectError("isLightOn()", "Error parsing isLightOn parameters.");
}

TEST_F(CEventListConditionTest, IsSfxActiveTakesAnyName) {
    expectValid("isSfxActive(bell)");
    expectError("isSfxActive()", "Error parsing isSfxActive parameters.");
}

// The check evaluates the condition, so the chance is drawn from the C library's generator.
TEST_F(CEventListConditionTest, RandBoolDrawsItsChanceWhileChecking) {
    expectValid("randBool(0.5)");
    common::CWatcomRandom fresh;
    static_cast<void>(fresh.rand());
    EXPECT_EQ(crt_random_.rand(), fresh.rand());
    expectError("randBool()", "Error parsing randBool parameters.");
}

} // namespace
} // namespace nocturne::core
