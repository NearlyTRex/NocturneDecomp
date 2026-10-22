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

TEST(Ascii, RaisesOnlyAsciiSmallLetters) {
    EXPECT_EQ(upperAscii('a'), 'A');
    EXPECT_EQ(upperAscii('z'), 'Z');
    EXPECT_EQ(upperAscii('A'), 'A');
    EXPECT_EQ(upperAscii('`'), '`');
    EXPECT_EQ(upperAscii('{'), '{');
    EXPECT_EQ(upperAscii('\xE9'), '\xE9');
    EXPECT_EQ(toUpperAscii("menu1.pth\xE9"), "MENU1.PTH\xE9");
}

// Every edge of the three ranges, and a Windows-1252 letter.
TEST(Ascii, AlnumIsOnlyAsciiLettersAndDigits) {
    EXPECT_TRUE(isAsciiAlnum('A'));
    EXPECT_TRUE(isAsciiAlnum('Z'));
    EXPECT_TRUE(isAsciiAlnum('a'));
    EXPECT_TRUE(isAsciiAlnum('z'));
    EXPECT_TRUE(isAsciiAlnum('0'));
    EXPECT_TRUE(isAsciiAlnum('9'));
    EXPECT_FALSE(isAsciiAlnum('@'));
    EXPECT_FALSE(isAsciiAlnum('['));
    EXPECT_FALSE(isAsciiAlnum('`'));
    EXPECT_FALSE(isAsciiAlnum('{'));
    EXPECT_FALSE(isAsciiAlnum('/'));
    EXPECT_FALSE(isAsciiAlnum(':'));
    EXPECT_FALSE(isAsciiAlnum('\b'));
    EXPECT_FALSE(isAsciiAlnum('\xE9'));
}

TEST(Ascii, EqualityIgnoresAsciiCase) {
    EXPECT_TRUE(equalsIgnoringAsciiCase("ACT1.POD", "act1.pod"));
    EXPECT_FALSE(equalsIgnoringAsciiCase("ACT1.POD", "act2.pod"));
    EXPECT_FALSE(equalsIgnoringAsciiCase("ACT1", "ACT1.POD"));
}

TEST(Ascii, APrefixMatchIgnoresAsciiCaseAndNeedsTheWholePrefix) {
    EXPECT_TRUE(startsWithIgnoringAsciiCase("NDUNGEON.GEO", "ndun"));
    EXPECT_TRUE(startsWithIgnoringAsciiCase("ndun", "NDUN"));
    EXPECT_FALSE(startsWithIgnoringAsciiCase("ndu", "ndun"));
    EXPECT_FALSE(startsWithIgnoringAsciiCase("mauso", "ndun"));
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
