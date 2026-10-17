#include "common/error/fatalerror.h"
#include "shape/edittool/edcontrols.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string_view>
#include <type_traits>

namespace nocturne::shape {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CEdControls, PublicInterface) {
    static_assert(std::is_constructible_v<CEdControls, const SEdControlsOwners &>);
    static_assert(std::is_same_v<decltype(&CEdControls::draw3DBorder),
                                 void (CEdControls::*)(int, int, int, int, bool)>);
    static_assert(std::is_same_v<decltype(&CEdControls::draw3DInsetBorder),
                                 void (CEdControls::*)(int, int, int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CEdControls::calculateGridWidth), int (CEdControls::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CEdControls::calculateGridHeight), int (CEdControls::*)() const>);
    static_assert(std::is_same_v<decltype(&CEdControls::calculateButtonWidth),
                                 int (CEdControls::*)(std::optional<std::string_view>)>);
    static_assert(std::is_same_v<decltype(&CEdControls::calculateButtonHeight),
                                 int (CEdControls::*)(std::optional<std::string_view>)>);
}

using CEdControlsTest = CEdControlsFixture;

TEST_F(CEdControlsTest, NothingHoldsTheMouseAtFirst) {
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    const int control = 0;
    controls_.setActiveControl(&control);
    EXPECT_EQ(controls_.getActiveControl(), &control);
}

TEST_F(CEdControlsTest, ARaisedBoxIsLitTopAndLeftAndShadedBottomAndRight) {
    controls_.draw3DBorder(10, 20, 15, 24, false);
    EXPECT_EQ(screen_.pixel(10, 20), kHighlight);
    EXPECT_EQ(screen_.pixel(13, 20), kHighlight);
    EXPECT_EQ(screen_.pixel(10, 22), kHighlight);
    // The shaded edges go on last, so they take the far corners.
    EXPECT_EQ(screen_.pixel(14, 20), kShade);
    EXPECT_EQ(screen_.pixel(10, 23), kShade);
    EXPECT_EQ(screen_.pixel(11, 23), kShade);
    EXPECT_EQ(screen_.pixel(14, 22), kShade);
    EXPECT_EQ(screen_.pixel(12, 21), kFace);
    EXPECT_EQ(screen_.pixel(15, 21), kBackground);
    EXPECT_EQ(screen_.pixel(12, 24), kBackground);
}

TEST_F(CEdControlsTest, APressedBoxSwapsItsEdges) {
    controls_.draw3DBorder(10, 20, 15, 24, true);
    EXPECT_EQ(screen_.pixel(12, 20), kShade);
    EXPECT_EQ(screen_.pixel(12, 23), kHighlight);
    EXPECT_EQ(screen_.pixel(12, 21), kFace);
}

// A 9-by-9 box makes a three-row arrowhead centred on column 4.
TEST_F(CEdControlsTest, AnUpArrowWidensDownFromItsTip) {
    controls_.draw3DInsetBorder(0, 0, 9, 9, 0, 0);
    EXPECT_EQ(screen_.pixel(4, 4), kMark);
    EXPECT_EQ(screen_.pixel(3, 4), kBackground);
    EXPECT_EQ(screen_.pixel(3, 5), kMark);
    EXPECT_EQ(screen_.pixel(6, 6), kMark);
    EXPECT_EQ(screen_.pixel(4, 7), kBackground);
}

TEST_F(CEdControlsTest, ADownArrowWidensUpFromItsTipAndAPressNudgesIt) {
    controls_.draw3DInsetBorder(0, 0, 9, 9, 1, 1);
    EXPECT_EQ(screen_.pixel(5, 5), kMark);
    EXPECT_EQ(screen_.pixel(4, 5), kBackground);
    EXPECT_EQ(screen_.pixel(3, 3), kMark);
    EXPECT_EQ(screen_.pixel(5, 6), kBackground);
}

TEST_F(CEdControlsTest, ALeftArrowWidensRightFromItsTip) {
    controls_.draw3DInsetBorder(0, 0, 9, 9, 0, 2);
    EXPECT_EQ(screen_.pixel(4, 4), kMark);
    EXPECT_EQ(screen_.pixel(4, 3), kBackground);
    EXPECT_EQ(screen_.pixel(6, 2), kMark);
}

TEST_F(CEdControlsTest, ARightArrowWidensLeftFromItsTip) {
    controls_.draw3DInsetBorder(0, 0, 9, 9, 0, 3);
    EXPECT_EQ(screen_.pixel(4, 4), kMark);
    EXPECT_EQ(screen_.pixel(4, 5), kBackground);
    EXPECT_EQ(screen_.pixel(2, 6), kMark);
}

// 128 / 48 is 2, and 96 * 2 / 128 * 4 / 3 is 1.
TEST_F(CEdControlsTest, TheGridIsAFortyEighthOfTheScreenAcross) {
    EXPECT_EQ(controls_.calculateGridWidth(), 2);
    EXPECT_EQ(controls_.calculateGridHeight(), 1);
}

// The glyph is two wide with a pixel's spacing, and the margin is 96 / 80.
TEST_F(CEdControlsTest, AButtonIsAsWideAsItsTextAndAsTallWithAMargin) {
    EXPECT_EQ(controls_.calculateButtonWidth("!!"), font_.getTextWidth("!!"));
    EXPECT_EQ(controls_.calculateButtonWidth(std::nullopt), 0);
    EXPECT_EQ(controls_.calculateButtonHeight("!"), 1 + font_.getTextHeight("!"));
    EXPECT_EQ(controls_.calculateButtonHeight(std::nullopt), 1 + font_.getMaxCharHeight());
}

TEST_F(CEdControlsTest, SizingAButtonWithoutAnEditorFontIsFatal) {
    editor_tools_.setEditorFont(nullptr);
    const auto fatal =
        ThrowsMessage<common::CFatalError>(StrEq("gEdFont must be set by the application."));
    EXPECT_THAT([this] { (void)controls_.calculateButtonWidth("!"); }, fatal);
    EXPECT_THAT([this] { (void)controls_.calculateButtonHeight("!"); }, fatal);
}

} // namespace
} // namespace nocturne::shape
