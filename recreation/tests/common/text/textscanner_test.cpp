#include "common/text/textscanner.h"

#include <gtest/gtest.h>

#include <optional>
#include <string_view>

namespace nocturne::common {
namespace {

TEST(CTextScanner, EmptyTextIsAtTheEnd) {
    const CTextScanner scanner("");
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, SkipWhitespaceStopsAtTheFirstOtherCharacter) {
    CTextScanner scanner(" \t\r\n x");
    scanner.skipWhitespace();
    EXPECT_TRUE(scanner.expect('x'));
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, SkipWhitespaceRunsToTheEndWhenNothingElseIsLeft) {
    CTextScanner scanner("  \n");
    scanner.skipWhitespace();
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, SkipLineTakesTheNewlineWithIt) {
    CTextScanner scanner("comment\r\nx");
    scanner.skipLine();
    EXPECT_TRUE(scanner.expect('x'));
}

TEST(CTextScanner, SkipLineOnTheLastLineRunsToTheEnd) {
    CTextScanner scanner("no newline");
    scanner.skipLine();
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, ReadLineReturnsTheLineWithoutItsNewline) {
    CTextScanner scanner(" two words\r\nnext");
    EXPECT_EQ(scanner.readLine(), " two words\r");
    EXPECT_EQ(scanner.readLine(), "next");
    EXPECT_TRUE(scanner.atEnd());
    EXPECT_EQ(scanner.readLine(), "");
}

TEST(CTextScanner, ExpectFailsOnAnotherCharacterOrTheEnd) {
    CTextScanner scanner("a");
    EXPECT_FALSE(scanner.expect('b'));
    EXPECT_TRUE(scanner.expect('a'));
    EXPECT_FALSE(scanner.expect('a'));
}

TEST(CTextScanner, ScanIntegerSkipsWhitespaceAndStopsAfterTheDigits) {
    CTextScanner scanner("  -12,");
    EXPECT_EQ(scanner.scanInteger(), -12);
    EXPECT_TRUE(scanner.expect(','));
}

TEST(CTextScanner, AFailedIntegerLeavesTheScannerAfterTheWhitespace) {
    CTextScanner scanner("  x");
    EXPECT_EQ(scanner.scanInteger(), std::nullopt);
    EXPECT_TRUE(scanner.expect('x'));
}

TEST(CTextScanner, ScanFloatSkipsWhitespaceAndStopsAfterTheNumber) {
    CTextScanner scanner(" 2.5,");
    EXPECT_EQ(scanner.scanFloat(), 2.5F);
    EXPECT_TRUE(scanner.expect(','));
}

TEST(CTextScanner, AFailedFloatLeavesTheScannerAfterTheWhitespace) {
    CTextScanner scanner("  x");
    EXPECT_EQ(scanner.scanFloat(), std::nullopt);
    EXPECT_TRUE(scanner.expect('x'));
}

TEST(CTextScanner, ScanWordReadsWhitespaceSeparatedWords) {
    CTextScanner scanner(" ACT1.POD\r\n ACT2.POD");
    EXPECT_EQ(scanner.scanWord(), "ACT1.POD");
    EXPECT_EQ(scanner.scanWord(), "ACT2.POD");
    EXPECT_EQ(scanner.scanWord(), "");
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, ScanUntilStopsAtTheDelimiterWithoutTakingIt) {
    CTextScanner scanner("Arial\"");
    EXPECT_EQ(scanner.scanUntil('"'), "Arial");
    EXPECT_TRUE(scanner.expect('"'));
}

TEST(CTextScanner, ScanUntilWithoutTheDelimiterTakesTheRest) {
    CTextScanner scanner("Arial");
    EXPECT_EQ(scanner.scanUntil('"'), "Arial");
    EXPECT_TRUE(scanner.atEnd());
}

TEST(CTextScanner, ScanUntilFailsOnAnEmptyMatch) {
    CTextScanner at_delimiter("\"");
    EXPECT_EQ(at_delimiter.scanUntil('"'), std::nullopt);
    EXPECT_TRUE(at_delimiter.expect('"'));
    CTextScanner at_end("");
    EXPECT_EQ(at_end.scanUntil('"'), std::nullopt);
}

TEST(CTextScanner, ScanUntilAnyStopsAtTheFirstOfItsDelimiters) {
    CTextScanner scanner("head),arm");
    EXPECT_EQ(scanner.scanUntilAny(",)"), "head");
    EXPECT_TRUE(scanner.expect(')'));
    EXPECT_EQ(scanner.scanUntilAny(",)"), std::nullopt);
}

TEST(CTextScanner, ThePositionCountsWhatHasBeenRead) {
    CTextScanner scanner("  12 x");
    EXPECT_EQ(scanner.getPosition(), 0U);
    EXPECT_EQ(scanner.scanInteger(), 12);
    EXPECT_EQ(scanner.getPosition(), 4U);
}

} // namespace
} // namespace nocturne::common
