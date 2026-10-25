#include "core/script/script_functions.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <expected>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreScriptFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&trimLine), std::string (*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&trimString), std::string_view (*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&skipWhitespace), std::string_view (*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&parseArgument), std::expected<std::string, std::string> (*)(
                                                     std::string_view &, std::size_t)>);
    static_assert(std::is_same_v<decltype(&validateActorVariableName),
                                 std::expected<void, std::string> (*)(std::string_view)>);
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

} // namespace
} // namespace nocturne::core
