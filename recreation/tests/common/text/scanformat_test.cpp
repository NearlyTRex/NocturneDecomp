#include "common/text/scanformat.h"
#include "common/text/textscanner.h"

#include <gtest/gtest.h>

#include <optional>
#include <string>

namespace nocturne::common {
namespace {

TEST(ScanFormat, FillsEachFieldInTurn) {
    CTextScanner scanner("12,-1.5,word rest of line\nnext");
    int number = 0;
    float decimal = 0.0F;
    std::string word;
    std::string rest;
    EXPECT_EQ(scanFormat(scanner, "%d,%f,%s %[^\n]\n", number, decimal, word, rest), 4);
    EXPECT_EQ(number, 12);
    EXPECT_FLOAT_EQ(decimal, -1.5F);
    EXPECT_EQ(word, "word");
    EXPECT_EQ(rest, "rest of line");
    EXPECT_EQ(scanner.readLine(), "next");
}

TEST(ScanFormat, WhitespaceInTheFormatSkipsAnyRunIncludingNone) {
    CTextScanner scanner("1\n\n\t2");
    int first = 0;
    int second = 0;
    EXPECT_EQ(scanFormat(scanner, "%d\t%d", first, second), 2);
    EXPECT_EQ(second, 2);
}

TEST(ScanFormat, AMismatchedCharacterStopsTheScan) {
    CTextScanner scanner("1;2");
    int first = 0;
    int second = 7;
    EXPECT_EQ(scanFormat(scanner, "%d,%d", first, second), 1);
    EXPECT_EQ(first, 1);
    EXPECT_EQ(second, 7);
    EXPECT_TRUE(scanner.expect(';'));
}

TEST(ScanFormat, AFailedNumberLeavesItsFieldAndTheRest) {
    CTextScanner scanner("x");
    int number = 7;
    float decimal = 2.0F;
    EXPECT_EQ(scanFormat(scanner, "%d", number), 0);
    EXPECT_EQ(scanFormat(scanner, "%f", decimal), 0);
    EXPECT_EQ(number, 7);
    EXPECT_FLOAT_EQ(decimal, 2.0F);
}

TEST(ScanFormat, AWordFailsAtTheEnd) {
    CTextScanner scanner("  \n");
    std::string word = "kept";
    EXPECT_EQ(scanFormat(scanner, "%s", word), 0);
    EXPECT_EQ(word, "kept");
}

TEST(ScanFormat, AnEmptySetMatchFails) {
    CTextScanner scanner("\nname");
    std::string name = "kept";
    EXPECT_EQ(scanFormat(scanner, "%[^\n]", name), 0);
    EXPECT_EQ(name, "kept");
}

TEST(ScanFormat, ASetStopsAtAnyOfItsCharacters) {
    CTextScanner scanner("arm\tleg),head");
    std::string first;
    std::string second;
    EXPECT_EQ(scanFormat(scanner, "%[^ \t),]%[^ \t),]", first, second), 1);
    EXPECT_EQ(first, "arm");
    EXPECT_EQ(scanFormat(scanner, " %[^ \t),]", second), 1);
    EXPECT_EQ(second, "leg");
}

TEST(ScanPrefix, GivesTheLengthTheWholeFormatTook) {
    std::string actor;
    std::string door;
    EXPECT_EQ(scanPrefix("(Gabriela, door1) rest", "(%[^,], %[^)])", actor, door), 17U);
    EXPECT_EQ(actor, "Gabriela");
    EXPECT_EQ(door, "door1");
}

TEST(ScanPrefix, TrailingWhitespaceInTheFormatCountsTheWhitespaceItTakes) {
    float seconds = 0.0F;
    EXPECT_EQ(scanPrefix("2.5  )", "%f )", seconds), 6U);
    EXPECT_FLOAT_EQ(seconds, 2.5F);
}

TEST(ScanPrefix, AFormatWithoutFieldsMatchesItsLiterals) {
    EXPECT_EQ(scanPrefix(" ( ) x", " ( )"), 4U);
    EXPECT_EQ(scanPrefix("(x)", " ( )"), std::nullopt);
}

TEST(ScanPrefix, AnyFailedPartGivesNothingButKeepsTheFieldsBeforeIt) {
    std::string actor;
    std::string door = "kept";
    EXPECT_EQ(scanPrefix("(Gabriela, door1", "(%[^,], %[^)])", actor, door), std::nullopt);
    EXPECT_EQ(actor, "Gabriela");
    EXPECT_EQ(door, "door1");
    int count = 7;
    EXPECT_EQ(scanPrefix("(x)", "(%d)", count), std::nullopt);
    EXPECT_EQ(count, 7);
}

} // namespace
} // namespace nocturne::common
