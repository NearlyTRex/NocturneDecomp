#include "common/error/fatalerror.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/edscrollbar.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <climits>
#include <memory>
#include <type_traits>
#include <utility>

namespace nocturne::shape {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CEdScrollBar, IsConcrete) {
    static_assert(!std::is_abstract_v<CEdScrollBar>);
}

TEST(CEdScrollBar, Constructors) {
    static_assert(std::is_constructible_v<CEdScrollBar, CEdControls &>);
    static_assert(!std::is_copy_constructible_v<CEdScrollBar>);
}

TEST(CEdScrollBar, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEdScrollBar::setPosition),
                                 void (CEdScrollBar::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CEdScrollBar::render), void (CEdScrollBar::*)()>);
    static_assert(std::is_same_v<decltype(&CEdScrollBar::handleInput), void (CEdScrollBar::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEdScrollBar::setItemCount), void (CEdScrollBar::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CEdScrollBar::setPageSize), void (CEdScrollBar::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CEdScrollBar::getScrollPosition), int (CEdScrollBar::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CEdScrollBar::setScrollPosition), void (CEdScrollBar::*)(int)>);
}

// A bar ten wide and fifty tall at the top left, so its track runs from 9 to 41: a list of ten
// with two in view has a ten-long thumb, the bar's width, which moves 22 over the 8 positions.
class CEdScrollBarTest : public CEdControlsFixture {
protected:
    CEdScrollBarTest() {
        bar_.setPosition(0, 0, 9, 49);
        bar_.setItemCount(10);
        bar_.setPageSize(2);
    }

    // Presses at y on the bar and lets the bar take it.
    void pressAt(int y) {
        mouseAt(5, y, true);
        bar_.handleInput();
    }

    // The row the thumb's top edge is drawn on.
    [[nodiscard]] int thumbTop() {
        screen_.fill(kBackground);
        bar_.render();
        for (int y = 9; y < 41; ++y) {
            if (screen_.pixel(4, y) == kHighlight || screen_.pixel(4, y) == kShade) {
                return y;
            }
        }
        return -1;
    }

    CEdScrollBar bar_{controls_};
};

TEST_F(CEdScrollBarTest, TooSmallABarIsFatal) {
    const auto fatal = ThrowsMessage<common::CFatalError>(
        StrEq("CEdScrollBar::setPosition - invalid dimensions."));
    EXPECT_THAT([this] { bar_.setPosition(0, 0, 2, 40); }, fatal);
    EXPECT_THAT([this] { bar_.setPosition(0, 0, 40, 2); }, fatal);
    EXPECT_THAT([this] { bar_.setPosition(0, 0, 9, 14); }, fatal);
}

TEST_F(CEdScrollBarTest, ABarNeverPlacedCantSizeAThumb) {
    CEdScrollBar unplaced(controls_);
    unplaced.setItemCount(5);
    EXPECT_THAT([&unplaced] { unplaced.render(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CEdScrollBar::computeThumb - invalid dimensions")));
}

TEST_F(CEdScrollBarTest, TheThumbRunsTheTrackAsTheListScrolls) {
    EXPECT_EQ(thumbTop(), 9);
    bar_.setScrollPosition(4);
    EXPECT_EQ(thumbTop(), 20);
    bar_.setScrollPosition(8);
    EXPECT_EQ(thumbTop(), 31);
}

TEST_F(CEdScrollBarTest, AThumbNoShorterThanTheBarIsWideStillFitsTheTrack) {
    bar_.setItemCount(1000);
    bar_.setScrollPosition(998);
    EXPECT_EQ(thumbTop(), 31);
}

TEST_F(CEdScrollBarTest, AListAllInViewFillsTheTrack) {
    bar_.setItemCount(2);
    EXPECT_EQ(thumbTop(), 9);
    bar_.setItemCount(0);
    bar_.setPageSize(-1);
    EXPECT_EQ(thumbTop(), 9);
}

// Rendering doesn't clamp the position first; the thumb still stops at the track's end.
TEST_F(CEdScrollBarTest, APositionPastTheEndPutsTheThumbAtTheEnd) {
    bar_.setScrollPosition(50);
    EXPECT_EQ(thumbTop(), 31);
}

TEST_F(CEdScrollBarTest, ThePositionStaysWithinTheList) {
    bar_.setScrollPosition(50);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 8);
    bar_.setScrollPosition(-3);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
}

TEST_F(CEdScrollBarTest, APressOffTheBarOrWithoutTheButtonDoesNothing) {
    bar_.setScrollPosition(4);
    for (const auto [x, y] :
         {std::pair{-1, 5}, std::pair{5, -1}, std::pair{10, 5}, std::pair{5, 50}}) {
        mouseAt(x, y, true);
        bar_.handleInput();
    }
    mouseAt(5, 5, false);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 4);
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
}

TEST_F(CEdScrollBarTest, AnotherControlHoldingTheMouseKeepsIt) {
    const int other = 0;
    controls_.setActiveControl(&other);
    bar_.setScrollPosition(4);
    pressAt(5);
    EXPECT_EQ(bar_.getScrollPosition(), 4);
}

TEST_F(CEdScrollBarTest, TheArrowsStepALineAndRepeatWhileHeld) {
    bar_.setScrollPosition(4);
    pressAt(5);
    EXPECT_EQ(bar_.getScrollPosition(), 3);
    EXPECT_EQ(controls_.getActiveControl(), &bar_);
    time_ = 0x47fff;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 3);
    time_ = 0x48000;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 2);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 1);
    mouseAt(5, 5, false);
    bar_.handleInput();
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    pressAt(45);
    EXPECT_EQ(bar_.getScrollPosition(), 2);
    time_ += 0x48000;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 3);
}

TEST_F(CEdScrollBarTest, AClockRunningBackwardsCountsAsNoTime) {
    time_ = 1000;
    bar_.setScrollPosition(4);
    pressAt(5);
    time_ = 0;
    bar_.handleInput();
    time_ = 0x48000 - 1;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 3);
    time_ = 0x48000;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 2);
}

TEST_F(CEdScrollBarTest, TheTrackPagesTowardThePressUntilTheThumbReachesIt) {
    bar_.setScrollPosition(8);
    pressAt(12);
    EXPECT_EQ(bar_.getScrollPosition(), 6);
    time_ += 0x48000;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 4);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 2);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    EXPECT_EQ(buttons_, 0);
}

TEST_F(CEdScrollBarTest, TheTrackPagesForwardToo) {
    pressAt(38);
    EXPECT_EQ(bar_.getScrollPosition(), 2);
    time_ += 0x48000;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 4);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 6);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 8);
    time_ += 0x9999;
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 8);
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
}

TEST_F(CEdScrollBarTest, TheThumbDragsAndTheListFollowsInProportion) {
    pressAt(12);
    EXPECT_EQ(bar_.getScrollPosition(), 0);
    mouseAt(5, 23, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 4);
    mouseAt(5, 12, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
}

TEST_F(CEdScrollBarTest, ADraggedThumbStopsAtTheTracksEnds) {
    bar_.setScrollPosition(4);
    pressAt(25);
    mouseAt(5, 200, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 8);
    mouseAt(5, -200, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
}

TEST_F(CEdScrollBarTest, DraggingWithTheWholeListInViewKeepsItAtTheTop) {
    bar_.setItemCount(2);
    pressAt(20);
    mouseAt(5, 25, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
    mouseAt(5, 25, false);
    bar_.handleInput();
    bar_.setItemCount(0);
    bar_.setPageSize(-1);
    pressAt(20);
    mouseAt(5, 25, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 0);
}

// Across a bar fifty wide and ten tall the mouse's x moves the thumb.
TEST_F(CEdScrollBarTest, AWideBarRunsAcross) {
    bar_.setPosition(0, 0, 49, 9);
    mouseAt(12, 5, true);
    bar_.handleInput();
    mouseAt(23, 5, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 4);
    mouseAt(23, 5, false);
    bar_.handleInput();
    mouseAt(45, 5, true);
    bar_.handleInput();
    EXPECT_EQ(bar_.getScrollPosition(), 5);
}

TEST_F(CEdScrollBarTest, RendersTheTrackWithTheArrowsAndThumbRaised) {
    bar_.render();
    EXPECT_EQ(screen_.pixel(0, 25), kFace);
    EXPECT_EQ(screen_.pixel(5, 30), kMark);
    EXPECT_EQ(screen_.pixel(4, 1), kHighlight);
    EXPECT_EQ(screen_.pixel(4, 41), kHighlight);
    EXPECT_EQ(screen_.pixel(4, 9), kHighlight);
    EXPECT_EQ(screen_.pixel(4, 5), kMark);
}

TEST_F(CEdScrollBarTest, ThePressedPartRendersPressed) {
    bar_.setScrollPosition(4);
    pressAt(5);
    bar_.render();
    EXPECT_EQ(screen_.pixel(4, 1), kShade);
    EXPECT_EQ(screen_.pixel(4, 41), kHighlight);
    mouseAt(5, 5, false);
    bar_.handleInput();
    pressAt(45);
    bar_.render();
    EXPECT_EQ(screen_.pixel(4, 41), kShade);
    mouseAt(5, 45, false);
    bar_.handleInput();
    pressAt(22);
    bar_.render();
    EXPECT_EQ(screen_.pixel(4, thumbTop()), kShade);
}

TEST_F(CEdScrollBarTest, AWideBarRendersItsArrowsAtTheEnds) {
    bar_.setPosition(0, 0, 49, 9);
    bar_.render();
    EXPECT_EQ(screen_.pixel(1, 4), kHighlight);
    EXPECT_EQ(screen_.pixel(41, 4), kHighlight);
    EXPECT_EQ(screen_.pixel(9, 4), kHighlight);
    EXPECT_EQ(screen_.pixel(5, 4), kMark);
}

TEST_F(CEdScrollBarTest, AWideBarRendersItsPressedPartsPressed) {
    bar_.setPosition(0, 0, 49, 9);
    bar_.setScrollPosition(4);
    mouseAt(5, 5, true);
    bar_.handleInput();
    bar_.render();
    EXPECT_EQ(screen_.pixel(1, 4), kShade);
    mouseAt(5, 5, false);
    bar_.handleInput();
    mouseAt(45, 5, true);
    bar_.handleInput();
    bar_.render();
    EXPECT_EQ(screen_.pixel(41, 4), kShade);
    mouseAt(45, 5, false);
    bar_.handleInput();
    mouseAt(25, 5, true);
    bar_.handleInput();
    screen_.fill(kBackground);
    bar_.render();
    EXPECT_EQ(screen_.pixel(25, 1), kShade);
}

TEST_F(CEdScrollBarTest, ABarLetsGoOfTheMouseWhenItGoes) {
    auto held = std::make_unique<CEdScrollBar>(controls_);
    held->setPosition(20, 0, 29, 49);
    mouseAt(25, 5, true);
    held->handleInput();
    ASSERT_EQ(controls_.getActiveControl(), held.get());
    held.reset();
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    {
        const CEdScrollBar other(controls_);
    }
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
}

} // namespace
} // namespace nocturne::shape
