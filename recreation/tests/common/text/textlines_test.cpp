#include "common/text/textlines.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::common {
namespace {

using Lines = std::vector<std::string_view>;

TEST(TextLines, PublicInterface) {
    static_assert(std::is_same_v<decltype(&splitTextLines), Lines (*)(std::string_view)>);
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

} // namespace
} // namespace nocturne::common
