#include "common/text/windows1252.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

// The letters around escapes are past 'f', so they don't extend the escape.

TEST(Windows1252, AsciiPassesThrough) {
    EXPECT_EQ(utf8ToWindows1252("Nocturne 1999"), "Nocturne 1999");
}

TEST(Windows1252, Latin1CodePointsKeepTheirValue) {
    EXPECT_EQ(utf8ToWindows1252("\xc2\xa0"), "\xa0");       // U+00A0
    EXPECT_EQ(utf8ToWindows1252("caf\xc3\xa9"), "caf\xe9"); // U+00E9
    EXPECT_EQ(utf8ToWindows1252("\xc3\xbf"), "\xff");       // U+00FF
}

TEST(Windows1252, TheUpperControlRowHoldsPunctuationAndLetters) {
    EXPECT_EQ(utf8ToWindows1252("\xe2\x82\xac"), "\x80"); // U+20AC euro
    EXPECT_EQ(utf8ToWindows1252("\xe2\x80\x99"), "\x92"); // U+2019 right quote
    EXPECT_EQ(utf8ToWindows1252("\xc5\xb8"), "\x9f");     // U+0178 Y diaeresis
}

TEST(Windows1252, C1ControlsAreDropped) {
    EXPECT_EQ(utf8ToWindows1252("x\xc2\x80y\xc2\x81z"), "xyz");
}

TEST(Windows1252, UnencodableCodePointsAreDropped) {
    EXPECT_EQ(utf8ToWindows1252("x\xc4\x80y"), "xy");         // U+0100
    EXPECT_EQ(utf8ToWindows1252("x\xe2\x82\xadz"), "xz");     // U+20AD
    EXPECT_EQ(utf8ToWindows1252("x\xf0\x9f\x98\x80y"), "xy"); // U+1F600
}

TEST(Windows1252, TruncatedSequenceIsDropped) {
    EXPECT_EQ(utf8ToWindows1252("x\xc3y"), "xy");
    EXPECT_EQ(utf8ToWindows1252("x\xe2\x82y"), "xy");
    EXPECT_EQ(utf8ToWindows1252("x\xe2\x82"), "x");
}

TEST(Windows1252, OverlongEncodingIsDropped) {
    EXPECT_EQ(utf8ToWindows1252("x\xc1\xa1y"), "xy");         // 'a' in two bytes
    EXPECT_EQ(utf8ToWindows1252("x\xe0\x82\xacy"), "xy");     // U+00AC in three bytes
    EXPECT_EQ(utf8ToWindows1252("x\xf0\x82\x82\xacy"), "xy"); // U+20AC in four bytes
}

TEST(Windows1252, InvalidLeadAndStrayContinuationBytesAreDropped) {
    EXPECT_EQ(utf8ToWindows1252("x\xf8\x88y"), "xy");
    EXPECT_EQ(utf8ToWindows1252("x\x80\xbfy"), "xy");
}

TEST(Windows1252, EmptyTextGivesEmptyText) {
    EXPECT_EQ(utf8ToWindows1252(""), "");
    EXPECT_EQ(windows1252ToUtf8(""), "");
}

TEST(Windows1252, AsciiEncodesAsItself) {
    EXPECT_EQ(windows1252ToUtf8("Nocturne 1999"), "Nocturne 1999");
}

TEST(Windows1252, Latin1BytesEncodeInTwoBytes) {
    EXPECT_EQ(windows1252ToUtf8("caf\xe9"), "caf\xc3\xa9"); // U+00E9
    EXPECT_EQ(windows1252ToUtf8("\xa0"), "\xc2\xa0");       // U+00A0
    EXPECT_EQ(windows1252ToUtf8("\xff"), "\xc3\xbf");       // U+00FF
}

TEST(Windows1252, UpperControlRowEncodesItsCodePoints) {
    EXPECT_EQ(windows1252ToUtf8("\x99"), "\xe2\x84\xa2"); // U+2122 trade mark
    EXPECT_EQ(windows1252ToUtf8("\x80"), "\xe2\x82\xac"); // U+20AC euro
    EXPECT_EQ(windows1252ToUtf8("\x83"), "\xc6\x92");     // U+0192 f hook
}

TEST(Windows1252, UndefinedBytesAreDropped) {
    EXPECT_EQ(windows1252ToUtf8("x\x81y\x8dz\x8f\x90\x9d"), "xyz");
}

TEST(Windows1252, EveryDefinedByteRoundTrips) {
    for (int byte = 1; byte < 256; ++byte) {
        const std::string text(1, static_cast<char>(byte));
        const std::string encoded = windows1252ToUtf8(text);
        if (!encoded.empty()) {
            EXPECT_EQ(utf8ToWindows1252(encoded), text) << byte;
        }
    }
}

} // namespace
} // namespace nocturne::common
