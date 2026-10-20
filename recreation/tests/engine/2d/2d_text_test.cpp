#include "engine/2d/2d.h"
#include "tests/mocks/engine/twodtextfixture.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

using C2dTextTest = C2dTextFixture;

INSTANTIATE_TEST_SUITE_P(Depths, C2dTextTest, ::testing::Values(8, 16, 32));

TEST_P(C2dTextTest, ACharacterIsItsGlyphInInkOnIndexZeroWithTheColumnAfterCleared) {
    two_d_.drawText("A", 2, 1);
    EXPECT_EQ(picture(2, 1, 8, 11), ".......~\n"
                                    ".####..~\n"
                                    "#....#.~\n"
                                    "#....#.~\n"
                                    "######.~\n"
                                    "#....#.~\n"
                                    "#....#.~\n"
                                    "#....#.~\n"
                                    ".......~\n"
                                    ".......~\n"
                                    ".......~");
}

TEST_P(C2dTextTest, ACharacterThatDoesNotFitInsideTheClipIsNotDrawn) {
    two_d_.setupViewportAndClipping(2, 2, 20, 16);
    two_d_.drawText("A", 1, 2);
    two_d_.drawText("A", 2, 1);
    two_d_.drawText("A", 16, 2);
    two_d_.drawText("A", 2, 7);
    EXPECT_TRUE(isUntouched());
}

// The original clears that column although it lies outside the clip.
TEST_P(C2dTextTest, TheColumnAfterAGlyphEndingOnTheClipsRightEdgeIsLeftAlone) {
    two_d_.setupViewportAndClipping(0, 0, 7, kHeight - 1);
    two_d_.drawText("A", 2, 1);
    EXPECT_EQ(picture(2, 2, 8, 1), ".####.~~");
}

TEST_P(C2dTextTest, ADepthWithNoColourTableDrawsNothing) {
    screen_.setBitsPerPixel(24);
    two_d_.drawText("A", 2, 1);
    screen_.setBitsPerPixel(GetParam());
    EXPECT_TRUE(isUntouched());
}

TEST_P(C2dTextTest, ANewlineStartsTheNextLineElevenRowsDownWithWrapOnOrOff) {
    for (const bool wrap : {true, false}) {
        screen_.fill(drawn(kUntouched));
        two_d_.setTextWrapEnabled(wrap);
        two_d_.drawText("A\nA", 3, 0);
        EXPECT_EQ(picture(3, 4, 6, 1), "######");
        EXPECT_EQ(picture(3, 15, 6, 1), "######");
    }
}

TEST_P(C2dTextTest, ControlCharactersOtherThanANewlineAreSkipped) {
    two_d_.drawText("A\tA", 0, 0);
    EXPECT_EQ(picture(7, 4, 6, 1), "######");
}

TEST_P(C2dTextTest, WithWrapOnACharacterThatWouldCrossTheRightEdgeStartsTheNextLine) {
    two_d_.setupViewportAndClipping(0, 0, 11, kHeight - 1);
    two_d_.drawText("AB", 0, 0);
    EXPECT_FALSE(hasInk(7, 0, 11, 10));
    EXPECT_EQ(picture(0, 12, 6, 1), "#####.");
}

TEST_P(C2dTextTest, WithWrapOnACharacterEndingAtTheRightEdgeBreaksTheLine) {
    two_d_.setupViewportAndClipping(0, 0, 12, kHeight - 1);
    two_d_.drawText("ABA", 0, 0);
    EXPECT_EQ(picture(7, 1, 6, 1), "#####.");
    EXPECT_EQ(picture(0, 15, 6, 1), "######");
}

TEST_P(C2dTextTest, WithWrapOnAGlyphTooWideForAnEmptyLineIsDropped) {
    two_d_.setupViewportAndClipping(0, 0, 3, kHeight - 1);
    two_d_.drawText("A!", 0, 0);
    EXPECT_EQ(picture(0, 1, 2, 1), "#.");
}

TEST_P(C2dTextTest, WithWrapOnALineBreakPastTheBottomEndsTheText) {
    two_d_.setupViewportAndClipping(0, 0, 11, 10);
    two_d_.drawText("A\nA", 0, 0);
    two_d_.drawText("AB", 0, 0);
    two_d_.setupViewportAndClipping(0, 0, 12, 10);
    two_d_.drawText("ABA", 0, 0);
    EXPECT_FALSE(hasInk(0, 11, kWidth - 1, kHeight - 1));
}

TEST_P(C2dTextTest, OnlyWithWrapOffDoesACharacterOutsideTheClipStillTakeItsWidth) {
    two_d_.drawText("AB", -7, 0);
    EXPECT_TRUE(isUntouched());
    two_d_.setTextWrapEnabled(false);
    two_d_.drawText("AB", -7, 0);
    EXPECT_EQ(picture(0, 1, 6, 1), "#####.");
}

TEST_P(C2dTextTest, WithWrapOffTextRunsOnPastTheRightEdge) {
    two_d_.setupViewportAndClipping(0, 0, 11, kHeight - 1);
    two_d_.setTextWrapEnabled(false);
    two_d_.drawText("AB", 0, 0);
    EXPECT_TRUE(hasInk(0, 0, 5, 10));
    EXPECT_FALSE(hasInk(6, 0, kWidth - 1, kHeight - 1));
    EXPECT_FALSE(hasInk(0, 11, kWidth - 1, kHeight - 1));
}

TEST_P(C2dTextTest, WithWrapOffANewlinePastTheBottomEndsTheText) {
    two_d_.setupViewportAndClipping(0, 0, kWidth - 1, 10);
    two_d_.setTextWrapEnabled(false);
    two_d_.drawText("A\nA", 0, 0);
    EXPECT_TRUE(hasInk(0, 0, 5, 10));
    EXPECT_FALSE(hasInk(0, 11, kWidth - 1, kHeight - 1));
}

} // namespace
} // namespace nocturne::engine
