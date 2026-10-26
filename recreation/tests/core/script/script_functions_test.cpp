#include "core/game/gameaction.h"
#include "core/script/script_functions.h"
#include "tests/mocks/core/scriptfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <expected>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

namespace nocturne::core {
namespace {

TEST(CoreScriptFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&trimLine), std::string (*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&trimString), std::string_view (*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&skipWhitespace), std::string_view (*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&parseArgument), std::expected<std::string, std::string> (*)(
                                                     std::string_view &, std::size_t)>);
    static_assert(std::is_same_v<decltype(&validateActorVariableName),
                                 std::expected<void, std::string> (*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&getActor), std::expected<CDemonActor *, SActorLookupError> (*)(
                                                std::string_view, const CDemonActorType &,
                                                const CDemonMission &, const CEventList &)>);
}

TEST(CoreScriptFunctions, EachButtonNamesItsAction) {
    EXPECT_EQ(getActionState("WALK"), EGameAction::Walk);
    EXPECT_EQ(getActionState("backup"), EGameAction::Backup);
    EXPECT_EQ(getActionState("run"), EGameAction::Run);
    EXPECT_EQ(getActionState("fire"), EGameAction::Fire);
    EXPECT_EQ(getActionState("useitem"), EGameAction::UseItem);
    EXPECT_EQ(getActionState("light"), EGameAction::Light);
    EXPECT_EQ(getActionState("draw"), EGameAction::Draw);
    EXPECT_EQ(getActionState("jump"), EGameAction::Jump);
    EXPECT_FALSE(getActionState("strafe").has_value());
}

TEST(CoreScriptFunctions, TrimLineDropsTheCommentAndTheWhitespaceAroundTheCommand) {
    EXPECT_EQ(trimLine(" \t wait(2) \t// two seconds\r"), "wait(2)");
}

TEST(CoreScriptFunctions, TrimLineKeepsASingleSlash) {
    EXPECT_EQ(trimLine("setCounter(a, 4 / 2)"), "setCounter(a, 4 / 2)");
}

TEST(CoreScriptFunctions, TrimLineOfACommentOrWhitespaceIsEmpty) {
    EXPECT_EQ(trimLine("  // only a comment"), "");
    EXPECT_EQ(trimLine(" \t\r"), "");
    EXPECT_EQ(trimLine(""), "");
}

TEST(CoreScriptFunctions, TrimStringTrimsBothEnds) {
    EXPECT_EQ(trimString("\v Gabriela \f\r\n"), "Gabriela");
    EXPECT_EQ(trimString("a b"), "a b");
    EXPECT_EQ(trimString(" \n "), "");
}

TEST(CoreScriptFunctions, SkipWhitespaceStopsAtTheFirstOtherCharacter) {
    EXPECT_EQ(skipWhitespace(" \t(1, 2) "), "(1, 2) ");
    EXPECT_EQ(skipWhitespace("  "), "");
}

TEST(CoreScriptFunctions, ParseArgumentTakesTheTrimmedParenthesesAndTheWhitespaceAfter) {
    std::string_view cursor = "  ( flagOn(a) and (b) )  rest";
    EXPECT_EQ(parseArgument(cursor, 100), "flagOn(a) and (b)");
    EXPECT_EQ(cursor, "rest");
}

TEST(CoreScriptFunctions, ParseArgumentNeedsAnOpeningParenthesis) {
    std::string_view cursor = "  name)";
    EXPECT_EQ(parseArgument(cursor, 100), std::unexpected(std::string("No opening parenthesis")));
    EXPECT_EQ(cursor, "name)");
}

TEST(CoreScriptFunctions, ParseArgumentNeedsTheMatchingClosingParenthesis) {
    std::string_view cursor = "(a(b)";
    EXPECT_EQ(parseArgument(cursor, 100),
              std::unexpected(std::string("Can't find closing parenthesis")));
}

TEST(CoreScriptFunctions, ParseArgumentMustBeShorterThanItsLimit) {
    std::string_view fits = "(abc)";
    EXPECT_EQ(parseArgument(fits, 4), "abc");
    std::string_view too_long = "(abcd)";
    EXPECT_EQ(parseArgument(too_long, 4), std::unexpected(std::string("Argument too long")));
}

TEST(CoreScriptFunctions, AnActorVariableIsAnAtSignAndAName) {
    EXPECT_TRUE(validateActorVariableName("@door_2"));
    EXPECT_TRUE(validateActorVariableName("@" + std::string(29, 'a')));
    EXPECT_EQ(validateActorVariableName("door"),
              std::unexpected(std::string("Actor variable name must begin with '@'")));
    EXPECT_EQ(validateActorVariableName("@" + std::string(30, 'a')),
              std::unexpected(
                  std::format("Actor variable name \"@{}\" is too long", std::string(30, 'a'))));
    EXPECT_EQ(validateActorVariableName("@"),
              std::unexpected(std::string("Actor variable name \"@\" is not valid")));
    EXPECT_EQ(validateActorVariableName("@a-b"),
              std::unexpected(std::string("Actor variable name \"@a-b\" is not valid")));
}

using CoreScriptGetActor = CScriptFixture;

std::unexpected<SActorLookupError> lookupError(std::string message, bool by_variable = false) {
    return std::unexpected(
        SActorLookupError{.message = std::move(message), .by_variable = by_variable});
}

TEST_F(CoreScriptGetActor, AnActorIsFoundByItsNameInAnyCase) {
    addActor("Door1", kScriptDoorType);
    const auto actor = getActor("DOOR1", CDoor::kType, mission_, events_);
    ASSERT_TRUE(actor);
    EXPECT_EQ(*actor, mission_.findActorByName("Door1"));
}

TEST_F(CoreScriptGetActor, ANameMustBeGiven) {
    EXPECT_EQ(getActor("", CDemonActor::kType, mission_, events_),
              lookupError("Must specify actor name"));
}

TEST_F(CoreScriptGetActor, AMissingActorIsNamed) {
    EXPECT_EQ(getActor("Nobody", CDemonActor::kType, mission_, events_),
              lookupError("Actor \"Nobody\" does not exist."));
}

TEST_F(CoreScriptGetActor, TheActorMustBeOfTheCommandsClass) {
    addActor("Door1", kScriptDoorType);
    EXPECT_EQ(getActor("Door1", CCharacter::kType, mission_, events_),
              lookupError("Actor \"Door1\" is of type CTestDoor, this command requires an actor "
                          "of type CCharacter."));
}

TEST_F(CoreScriptGetActor, TheDollarSignIsTheFirstHero) {
    addHero();
    const auto actor = getActor("$", CHero::kType, mission_, events_);
    ASSERT_TRUE(actor);
    EXPECT_EQ(*actor, mission_.getHero(0));
    EXPECT_EQ(getActor("$", CDoor::kType, mission_, events_),
              lookupError(std::format("Actor \"$\" is of type {}, this command requires an actor "
                                      "of type CDoor.",
                                      mission_.getHero(0)->getActorClassName())));
}

// The original counts a missing hero as a variable naming nothing, which a command passes over.
TEST_F(CoreScriptGetActor, WithoutAHeroTheDollarSignNamesNothing) {
    EXPECT_EQ(getActor("$", CHero::kType, mission_, events_),
              lookupError("Hero doesn't exist!!?!", true));
}

TEST_F(CoreScriptGetActor, AVariableNameMustBeValid) {
    EXPECT_EQ(getActor("@a-b", CDemonActor::kType, mission_, events_),
              lookupError("Actor variable name \"@a-b\" is not valid"));
}

TEST_F(CoreScriptGetActor, AnUnsetVariableNamesNothing) {
    EXPECT_EQ(
        getActor("@door", CDemonActor::kType, mission_, events_),
        lookupError("Actor variable @door not defined, or doesn't reference an existing actor",
                    true));
}

// The set's actors, which a variable is looked up among, aren't ported yet.
// An actor of another class counts as missing through the variable.
TEST_F(CoreScriptGetActor, ASetVariableNamesItsActorInTheSet) {
    addActor("Door1", kScriptDoorType);
    putActorsInSet();
    events_.setActorVariable("@door", mission_.findActorByName("Door1"));
    EXPECT_EQ(getActor("@DOOR", CDoor::kType, mission_, events_),
              mission_.findActorByName("Door1"));
    EXPECT_EQ(getActor("@door", CCharacter::kType, mission_, events_),
              lookupError("Actor \"@door\" is of type CTestDoor, this command requires an actor "
                          "of type CCharacter.",
                          true));
}

} // namespace
} // namespace nocturne::core
