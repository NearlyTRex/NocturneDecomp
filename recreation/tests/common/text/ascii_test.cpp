#include "common/text/ascii.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Ascii, FoldsOnlyAsciiCapitals) {
    EXPECT_EQ(foldAscii('A'), 'a');
    EXPECT_EQ(foldAscii('Z'), 'z');
    EXPECT_EQ(foldAscii('a'), 'a');
    EXPECT_EQ(foldAscii('@'), '@');
    EXPECT_EQ(foldAscii('['), '[');
    // Windows-1252's capital E acute stays as it is.
    EXPECT_EQ(foldAscii('\xC9'), '\xC9');
}

TEST(Ascii, EqualityIgnoresAsciiCase) {
    EXPECT_TRUE(equalsIgnoringAsciiCase("ACT1.POD", "act1.pod"));
    EXPECT_FALSE(equalsIgnoringAsciiCase("ACT1.POD", "act2.pod"));
    EXPECT_FALSE(equalsIgnoringAsciiCase("ACT1", "ACT1.POD"));
}

TEST(Ascii, CompareOrdersLikeStricmp) {
    EXPECT_EQ(compareIgnoringAsciiCase("Door.WAV", "door.wav"), 0);
    EXPECT_LT(compareIgnoringAsciiCase("ACT1", "act2"), 0);
    EXPECT_GT(compareIgnoringAsciiCase("b", "A"), 0);
    // Folded to lower case, '_' (0x5f) sorts before the letters.
    EXPECT_LT(compareIgnoringAsciiCase("_X", "a"), 0);
    // A prefix sorts first; bytes past 0x7f compare as unsigned.
    EXPECT_LT(compareIgnoringAsciiCase("ACT", "act1"), 0);
    EXPECT_GT(compareIgnoringAsciiCase("act1", "ACT"), 0);
    EXPECT_GT(compareIgnoringAsciiCase("\xE9", "z"), 0);
}

} // namespace
} // namespace nocturne::common
