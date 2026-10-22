#include "engine/2d/2d.h"
#include "tests/mocks/engine/twodtextfixture.h"

#include <gtest/gtest.h>

namespace nocturne::engine {
namespace {

using C2dFontTest = C2dTextFixture;

INSTANTIATE_TEST_SUITE_P(Depths, C2dFontTest, ::testing::Values(8, 16, 32));

TEST_P(C2dFontTest, TheFontStartsWithASpaceFourColumnsWide) {
    two_d_.drawText(" !", 0, 0);
    EXPECT_FALSE(hasInk(0, 0, 4, 10));
    EXPECT_EQ(picture(5, 0, 1, 11), ".\n#\n#\n#\n#\n#\n.\n#\n.\n.\n.");
}

TEST_P(C2dFontTest, TheFontEndsWithYDiaeresis) {
    two_d_.drawText("\xff", 0, 0);
    EXPECT_EQ(picture(0, 0, 6, 11), "......\n"
                                    "......\n"
                                    "......\n"
                                    "......\n"
                                    ".#.#..\n"
                                    "......\n"
                                    "#...#.\n"
                                    "#...#.\n"
                                    "#...#.\n"
                                    "#...#.\n"
                                    ".####.");
}

TEST_P(C2dFontTest, TheWidestGlyphIsThreeQuartersAtTwelveColumns) {
    two_d_.drawText("\xbe", 0, 0);
    EXPECT_EQ(picture(0, 4, 14, 1), "###....#.....~");
}

} // namespace
} // namespace nocturne::engine
