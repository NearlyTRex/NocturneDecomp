#include "core/script/script_functions.h"

#include <gtest/gtest.h>

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

} // namespace
} // namespace nocturne::core
