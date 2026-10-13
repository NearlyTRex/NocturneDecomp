#include "common/error/fatalerror.h"
#include "engine/alphabit/alphabitmap.h"
#include "tests/mocks/engine/alphabitmapfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CAlphaBitmap, IsConcrete) {
    static_assert(!std::is_abstract_v<CAlphaBitmap>);
}

TEST(CAlphaBitmap, Constructors) {
    static_assert(
        std::is_constructible_v<CAlphaBitmap, const CDosIo &, IScreenDevice &, CSpecial &>);
}

TEST(CAlphaBitmap, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::free), void (CAlphaBitmap::*)()>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::load),
                                 void (CAlphaBitmap::*)(std::string_view, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CAlphaBitmap::display), void (CAlphaBitmap::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::render),
                                 void (CAlphaBitmap::*)(int, int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::scale), void (CAlphaBitmap::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::initPalette), void (CAlphaBitmap::*)()>);
}

using CAlphaBitmapTest = CAlphaBitmapFixture;

class CAlphaBitmap16Test : public CAlphaBitmapFixture {
protected:
    CAlphaBitmap16Test() : CAlphaBitmapFixture(16) {}
};

TEST_F(CAlphaBitmapTest, ThePaletteTakesTheScreensChannelPositions) {
    screen_.getColorChannels().red.bit_position = 0;
    screen_.getColorChannels().blue.bit_position = 16;
    givenImage("pic", "\x01");
    bitmap_.load("pic", 1, 1);
    bitmap_.initPalette();
    EXPECT_EQ(screen_.getHardwarePalette32()[1], 0x030201U);
}

TEST_F(CAlphaBitmap16Test, BelowThirtyTwoBitsThePaletteIsEightEightEight) {
    screen_.getColorChannels().red.bit_position = 0;
    givenImage("pic", "\x01");
    bitmap_.load("pic", 1, 1);
    bitmap_.initPalette();
    EXPECT_EQ(screen_.getHardwarePalette32()[1], 0x010203U);
}

TEST_F(CAlphaBitmapTest, AShortPaletteLeavesTheMissingColoursBlack) {
    givenFile("art\\pic.raw", "\x01");
    givenFile("art\\pic.act", std::string("\x09\x09\x09\x07", 4));
    bitmap_.load("pic", 1, 1);
    bitmap_.initPalette();
    EXPECT_EQ(screen_.getHardwarePalette32()[0], 0x090909U);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], 0x070000U);
    EXPECT_EQ(screen_.getHardwarePalette32()[2], 0U);
}

TEST_F(CAlphaBitmapTest, WithoutAnOpacityFileOnlyBlackIsTransparent) {
    screen_.fill(0x00abcdef);
    givenImage("pic", std::string("\x00\x01", 2));
    bitmap_.load("pic", 2, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), 0x00abcdefU);
    EXPECT_EQ(screen_.pixel(1, 0), 0x010203U);
}

TEST_F(CAlphaBitmapTest, AnOpacityFileSetsEachPixelsOpacity) {
    screen_.fill(0);
    givenImage("pic", "\x01\x01");
    givenFile("art\\pic.opa", std::string("\x00\xff", 2));
    bitmap_.load("pic", 2, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), 0U);
    EXPECT_EQ(screen_.pixel(1, 0), 0x010203U);
}

TEST_F(CAlphaBitmapTest, ShortFilesLeaveTheRestOfTheImageZero) {
    screen_.fill(0x00abcdef);
    givenImage("pic", "\x01");
    givenFile("art\\pic.opa", std::string("\xff", 1));
    bitmap_.load("pic", 2, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), 0x010203U);
    EXPECT_EQ(screen_.pixel(1, 0), 0x00abcdefU);
}

TEST_F(CAlphaBitmapTest, AMissingImageIsFatal) {
    EXPECT_THAT(
        [this] { bitmap_.load("gone", 1, 1); },
        ThrowsMessage<common::CFatalError>(StrEq("CAlphaBitmap::load - Can't open gone.raw")));
}

TEST_F(CAlphaBitmapTest, AMissingPaletteIsFatal) {
    givenFile("art\\pic.raw", "\x01");
    EXPECT_THAT(
        [this] { bitmap_.load("pic", 1, 1); },
        ThrowsMessage<common::CFatalError>(StrEq("CAlphaBitmap::load - Can't open pic.act")));
}

TEST_F(CAlphaBitmapTest, AFreedImageDrawsNothingAndHasABlackPalette) {
    screen_.fill(0x00abcdef);
    givenImage("pic", "\x01");
    bitmap_.load("pic", 1, 1);
    bitmap_.free();
    bitmap_.display(0, 0, kFullAlpha);
    bitmap_.initPalette();
    EXPECT_EQ(screen_.pixel(0, 0), 0x00abcdefU);
    EXPECT_EQ(screen_.getHardwarePalette32()[1], 0U);
}

TEST_F(CAlphaBitmapTest, ScalingKeepsEveryNthPixelOfEveryNthRowWithItsOpacity) {
    screen_.fill(0);
    givenImage("pic", "\x01\x02\x03\x04\x05\x06\x07\x08");
    givenFile("art\\pic.opa", std::string("\xff\xff\x00\xff\xff\xff\xff\xff", 8));
    bitmap_.load("pic", 4, 2);
    bitmap_.scale(2, 2);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), 0x010203U);
    EXPECT_EQ(screen_.pixel(1, 0), 0U);
    EXPECT_EQ(screen_.pixel(2, 0), 0U);
    EXPECT_EQ(screen_.pixel(0, 1), 0U);
}

TEST_F(CAlphaBitmapTest, AFactorBelowOneLeavesTheImageAlone) {
    screen_.fill(0);
    givenImage("pic", "\x01\x02");
    bitmap_.load("pic", 2, 1);
    bitmap_.scale(0, 1);
    bitmap_.scale(1, 0);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(1, 0), 0x020406U);
}

TEST_F(CAlphaBitmapTest, LoadingAgainReplacesTheImage) {
    screen_.fill(0);
    givenImage("first", "\x01\x01");
    givenImage("second", "\x02");
    bitmap_.load("first", 2, 1);
    bitmap_.load("second", 1, 1);
    bitmap_.display(0, 0, kFullAlpha);
    EXPECT_EQ(screen_.pixel(0, 0), 0x020406U);
    EXPECT_EQ(screen_.pixel(1, 0), 0U);
}

} // namespace
} // namespace nocturne::engine
