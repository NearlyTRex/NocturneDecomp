#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "engine/keys/inputcodetype.h"
#include "shape/edittool/picklist.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string>

namespace nocturne::shape {
namespace {

using engine::EInputCodeType;
using ::testing::InSequence;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::uint32_t kInside = 0x000000;
constexpr std::uint32_t kEnabledText = 0xffffff;
constexpr std::uint32_t kDisabledText = 0xf8f8f8;
constexpr std::uint32_t kSelection = 0x020202;
constexpr std::uint32_t kConfirmed = 0xfafafa;
constexpr std::uint32_t kDivider = 0x070707;

class CPickListDialogTest : public CPickListFixture {
protected:
    // Double-clicks x, y and returns what the frame after answers.
    int pickAt(int x, int y) {
        clickAt(x, y);
        EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
        ++time_;
        clickAt(x, y);
        EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
        mouseAt(x, y, false);
        return list_.handleDialogInput();
    }

    // Return on the next frame, and what the frame after answers.
    int confirm() {
        press(EInputCodeType::DIK_RETURN);
        EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
        return list_.handleDialogInput();
    }

    void step(EInputCodeType code) {
        press(code);
        EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    }
};

TEST_F(CPickListDialogTest, WithoutAnEditorFontShowingIsFatal) {
    list_.add("A");
    editor_tools_.setEditorFont(nullptr);
    EXPECT_THAT(
        [this] { static_cast<void>(list_.displayChoicesAndWaitForInput("", 0)); },
        ThrowsMessage<common::CFatalError>(StrEq("gEdFont must be set by the application.")));
}

TEST_F(CPickListDialogTest, AnEmptyListIsCancelledWithoutAWindow) {
    EXPECT_CALL(raw_input_, setInputKeyMask).Times(0);
    EXPECT_EQ(list_.displayChoicesAndWaitForInput("", 0), CPickList::kCancelled);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
    EXPECT_EQ(screen_.swaps, 0);
}

// Return confirms on the first frame, which is drawn so, and the second answers. The keys are read
// under the narrow mask, and the mask, the pointer and the screen are put back after.
TEST_F(CPickListDialogTest, ReturnPicksTheSelectionAndEverythingIsPutBack) {
    list_.add("A");
    list_.add("B");
    list_.add("C");
    mouseAt(5, 6, false);
    press(EInputCodeType::DIK_RETURN);
    {
        const InSequence order;
        EXPECT_CALL(raw_input_, setInputKeyMask(0x7f));
        EXPECT_CALL(raw_input_, clearInput());
        EXPECT_CALL(raw_input_, clearInput());
        EXPECT_CALL(raw_input_, setInputKeyMask(0x1ff));
    }
    EXPECT_EQ(list_.displayChoicesAndWaitForInput("", 1), 1);
    EXPECT_EQ(screen_.swaps, 2);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
    EXPECT_EQ(screen_.pixel(90, 70), kBackground);
    EXPECT_EQ(mouse_x_, 5);
    EXPECT_EQ(mouse_y_, 6);
}

TEST_F(CPickListDialogTest, EscapeCancels) {
    list_.add("A");
    press(EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(list_.displayChoicesAndWaitForInput("", 0), CPickList::kCancelled);
    EXPECT_EQ(screen_.swaps, 1);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

TEST_F(CPickListDialogTest, AClosedWindowCancels) {
    list_.add("A");
    EXPECT_CALL(raw_input_, getInputDisabled()).WillOnce(Return(false)).WillOnce(Return(true));
    EXPECT_EQ(list_.displayChoicesAndWaitForInput("", 0), CPickList::kCancelled);
    EXPECT_EQ(screen_.swaps, 2);
}

TEST_F(CPickListDialogTest, APickOnTheFrameTheWindowClosesStands) {
    list_.add("A");
    list_.add("B");
    press(EInputCodeType::DIK_RETURN);
    EXPECT_CALL(raw_input_, getInputDisabled()).WillOnce(Return(false));
    EXPECT_EQ(list_.displayChoicesAndWaitForInput("", 1), 1);
}

// Three 4-pixel strings: a 20-pixel column with its padding, three rows, and the window's 8 and
// 6 pixels, centred with a pixel's margin; the inside then holds five rows of one 28-pixel column.
TEST_F(CPickListDialogTest, AShortListIsOneColumnInASnugWindow) {
    list_.add("A");
    list_.add("B");
    list_.add("C");
    list_.initializeDialog("", 0, 0);
    const engine::SClipRect inside = clip();
    EXPECT_EQ(inside.left, 82);
    EXPECT_EQ(inside.top, 64);
    EXPECT_EQ(inside.right, 109);
    EXPECT_EQ(inside.bottom, 79);
    list_.renderDialog();
    EXPECT_EQ(screen_.pixel(82, 64), kSelection);
    EXPECT_EQ(screen_.pixel(109, 66), kSelection);
    EXPECT_EQ(screen_.pixel(82, 67), kInside);
}

TEST_F(CPickListDialogTest, AClickBelowTheLastItemOrPastTheRowsMisses) {
    list_.add("A");
    list_.add("B");
    list_.add("C");
    list_.initializeDialog("", 0, 0);
    EXPECT_EQ(pickAt(90, 73), CPickList::kStillOpen);
    EXPECT_EQ(pickAt(90, 79), CPickList::kStillOpen);
    EXPECT_EQ(pickAt(90, 70), 2);
}

// "!!" is 5 pixels and "!" 2, and a field is followed by a fortieth of the screen, 4 pixels.
TEST_F(CPickListDialogTest, EachFieldStartsWhereTheWidestBeforeItEnds) {
    list_.add("!\t!");
    list_.add("!!\t!");
    list_.initializeDialog("", 0, 0);
    ASSERT_EQ(clip().left, 78);
    ASSERT_EQ(clip().top, 66);
    list_.renderDialog();
    EXPECT_EQ(screen_.pixel(86, 66), kEnabledText);
    EXPECT_EQ(screen_.pixel(93, 66), kSelection);
    EXPECT_EQ(screen_.pixel(95, 66), kEnabledText);
    EXPECT_EQ(screen_.pixel(89, 69), kEnabledText);
    EXPECT_EQ(screen_.pixel(95, 69), kEnabledText);
}

TEST_F(CPickListDialogTest, ADisabledItemIsDrawnDimmed) {
    list_.add("!\t!");
    list_.add("!!\t!");
    list_.enableItem(1, false);
    list_.initializeDialog("", 0, 0);
    list_.renderDialog();
    EXPECT_EQ(screen_.pixel(86, 66), kEnabledText);
    EXPECT_EQ(screen_.pixel(86, 69), kDisabledText);
}

TEST_F(CPickListDialogTest, APickedItemIsDrawnPickedBeforeItAnswers) {
    list_.add("!\t!");
    list_.add("!!\t!");
    list_.initializeDialog("", 0, 0);
    press(EInputCodeType::DIK_RETURN);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    list_.renderDialog();
    EXPECT_EQ(screen_.pixel(100, 68), kConfirmed);
}

// A tab at the end starts no field, so no gap is added after the first.
TEST_F(CPickListDialogTest, ATrailingTabAddsNoField) {
    list_.add("A\t");
    list_.add("B");
    list_.initializeDialog("", 0, 0);
    EXPECT_EQ(clip().left, 82);
}

TEST_F(CPickListDialogTest, TenFieldsFitAndElevenAreFatal) {
    list_.add("1\t2\t3\t4\t5\t6\t7\t8\t9\t10");
    list_.initializeDialog("", 0, 0);
    editor_tools_.restoreWindowAndCleanup();
    list_.add("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11");
    EXPECT_THAT([this] { list_.initializeDialog("", 0, 0); },
                ThrowsMessage<common::CFatalError>(StrEq("Too many picklist columns!")));
}

// A hundred fit three columns of 45 rows on the screen; the window is then 68 pixels wide and,
// clipped to the screen, holds 47 rows of three 22-pixel columns.
class CPickListColumnsTest : public CPickListDialogTest {
protected:
    CPickListColumnsTest() {
        addCopies(100, "A");
        list_.initializeDialog("", 0, 0);
    }
};

TEST_F(CPickListColumnsTest, AWideListSpreadsAcrossColumns) {
    const engine::SClipRect inside = clip();
    EXPECT_EQ(inside.left, 62);
    EXPECT_EQ(inside.top, 1);
    EXPECT_EQ(inside.right, 129);
    EXPECT_EQ(inside.bottom, 142);
    EXPECT_EQ(pickAt(106, 4), 95);
}

TEST_F(CPickListColumnsTest, ALineDividesEachColumnFromTheOneBefore) {
    list_.renderDialog();
    EXPECT_EQ(screen_.pixel(84, 1), kDivider);
    EXPECT_EQ(screen_.pixel(84, 142), kDivider);
    EXPECT_EQ(screen_.pixel(106, 70), kDivider);
    EXPECT_EQ(screen_.pixel(83, 70), kInside);
}

TEST_F(CPickListColumnsTest, RightAndLeftMoveAColumn) {
    step(EInputCodeType::DIK_NUMPAD6);
    step(EInputCodeType::DIK_NUMPAD6);
    step(EInputCodeType::DIK_NUMPAD4);
    EXPECT_EQ(confirm(), 47);
}

// Sixty would take two columns; forced into one they need a scroll bar down the right, 4 pixels
// wide, and the column holds 47 of them.
class CPickListVerticalTest : public CPickListDialogTest {
protected:
    CPickListVerticalTest() {
        addCopies(60, "A");
        list_.setForcedColumnCount(true);
        list_.initializeDialog("", 0, 0);
    }
};

TEST_F(CPickListVerticalTest, AForcedColumnScrollsDownTheRight) {
    const engine::SClipRect inside = clip();
    EXPECT_EQ(inside.left, 80);
    EXPECT_EQ(inside.right, 111);
    list_.renderDialog();
    // The track's border, below the thumb.
    EXPECT_EQ(screen_.pixel(108, 130), kFace);
    EXPECT_EQ(screen_.pixel(107, 70), kInside);
}

// The last row stays at the bottom: the view stops at 13, the sixtieth less 47.
TEST_F(CPickListVerticalTest, TheViewStopsWithTheLastRowAtTheBottom) {
    step(EInputCodeType::DIK_NUMPAD1);
    EXPECT_EQ(pickAt(81, 1), 13);
}

// Page up from the end takes the selection to 12 and the view to before the start, which comes
// back a page to 13 and then a row at a time to the selection.
TEST_F(CPickListVerticalTest, TheViewFollowsTheSelectionARowAtATime) {
    step(EInputCodeType::DIK_NUMPAD1);
    step(EInputCodeType::DIK_NUMPAD9);
    EXPECT_EQ(pickAt(81, 1), 12);
}

TEST_F(CPickListVerticalTest, TheBarsDownArrowPushesTheSelectionDownWithTheView) {
    clickAt(109, 141);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    mouseAt(109, 141, false);
    EXPECT_EQ(confirm(), 1);
}

TEST_F(CPickListVerticalTest, TheBarsUpArrowPullsTheSelectionUpWithTheView) {
    step(EInputCodeType::DIK_NUMPAD1);
    clickAt(109, 2);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    mouseAt(109, 2, false);
    EXPECT_EQ(confirm(), 58);
}

TEST_F(CPickListVerticalTest, AClickOnTheBarSelectsNothing) {
    EXPECT_EQ(pickAt(109, 70), CPickList::kStillOpen);
    EXPECT_EQ(confirm(), 0);
}

// Four hundred overflow eight columns of 45; the bar takes 4 pixels along the bottom, leaving 46
// rows of eight 21-pixel columns, 368 in view.
class CPickListHorizontalTest : public CPickListDialogTest {
protected:
    CPickListHorizontalTest() {
        addCopies(400, "A");
        list_.initializeDialog("", 0, 0);
    }
};

TEST_F(CPickListHorizontalTest, AnOverflowingSpreadScrollsAlongTheBottom) {
    const engine::SClipRect inside = clip();
    EXPECT_EQ(inside.left, 12);
    EXPECT_EQ(inside.bottom, 142);
    list_.renderDialog();
    // The track's border, past the thumb.
    EXPECT_EQ(screen_.pixel(170, 139), kFace);
    EXPECT_EQ(screen_.pixel(170, 137), kInside);
    EXPECT_EQ(pickAt(33, 1), 46);
}

TEST_F(CPickListHorizontalTest, TheViewFollowsTheSelectionForwardAColumnAtATime) {
    step(EInputCodeType::DIK_NUMPAD1);
    EXPECT_EQ(pickAt(13, 1), 46);
}

TEST_F(CPickListHorizontalTest, TheViewFollowsTheSelectionBackAColumnAtATime) {
    step(EInputCodeType::DIK_NUMPAD1);
    step(EInputCodeType::DIK_NUMPAD7);
    EXPECT_EQ(pickAt(13, 1), 0);
}

// The second page down puts the view at 736, which comes back a column at a time to 368; the
// bar then holds it to the last eight of the nine columns, from 46.
TEST_F(CPickListHorizontalTest, PagingPastTheEndKeepsTheViewOnTheList) {
    step(EInputCodeType::DIK_NUMPAD3);
    step(EInputCodeType::DIK_NUMPAD3);
    EXPECT_EQ(pickAt(13, 1), 46);
}

TEST_F(CPickListHorizontalTest, PagingBeforeTheStartKeepsTheViewAtTheTop) {
    step(EInputCodeType::DIK_NUMPAD3);
    step(EInputCodeType::DIK_NUMPAD9);
    step(EInputCodeType::DIK_NUMPAD9);
    EXPECT_EQ(pickAt(13, 1), 0);
}

TEST_F(CPickListHorizontalTest, TheScrollBarMovesTheViewAColumnAtATime) {
    clickAt(178, 141);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    mouseAt(178, 141, false);
    EXPECT_EQ(confirm(), 46);
}

} // namespace
} // namespace nocturne::shape
