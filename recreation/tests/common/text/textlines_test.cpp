#include "common/text/textlines.h"

#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::common {
namespace {

using Lines = std::vector<std::string_view>;

TEST(TextLines, PublicInterface) {
    static_assert(std::is_same_v<decltype(&splitTextLines), Lines (*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&toTextMode), std::string (*)(std::string_view)>);
}

TEST(TextLines, EachLineLosesItsNewline) {
    EXPECT_EQ(splitTextLines("one\ntwo\n"), (Lines{"one", "two"}));
}

TEST(TextLines, ACrlfLosesItsCarriageReturnToo) {
    EXPECT_EQ(splitTextLines("one\r\ntwo\r\n"), (Lines{"one", "two"}));
}

TEST(TextLines, AFinalLineWithoutANewlineIsKeptWhole) {
    EXPECT_EQ(splitTextLines("one\ntwo"), (Lines{"one", "two"}));
}

TEST(TextLines, BlankLinesAreKept) {
    EXPECT_EQ(splitTextLines("\n\r\nend\n"), (Lines{"", "", "end"}));
}

TEST(TextLines, NoTextHasNoLines) {
    EXPECT_TRUE(splitTextLines("").empty());
}

// A carriage return not before a newline stays, as text mode keeps it.
TEST(TextMode, EachCrlfBecomesANewline) {
    EXPECT_EQ(toTextMode("one\r\ntwo\n\r\n"), "one\ntwo\n\n");
    EXPECT_EQ(toTextMode("a\rb\r"), "a\rb\r");
    EXPECT_EQ(toTextMode(""), "");
}

} // namespace
} // namespace nocturne::common
