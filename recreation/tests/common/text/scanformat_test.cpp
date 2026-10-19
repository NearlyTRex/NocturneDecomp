#include "common/text/scanformat.h"
#include "common/text/textscanner.h"

#include <gtest/gtest.h>

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

} // namespace
} // namespace nocturne::common
