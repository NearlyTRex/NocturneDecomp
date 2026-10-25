#include "engine/gameclock.h"
#include "engine/keys/inputcodetype.h"
#include "shape/edittool/picklist.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>

namespace nocturne::shape {
namespace {

using engine::EInputCodeType;

// APPLE, BANANA, BLUEBERRY and CHERRY in a window of one column, rows 3 pixels apart from y 63.
class CPickListInputTest : public CPickListFixture {
protected:
    CPickListInputTest() {
        list_.add("APPLE");
        list_.add("BANANA");
        list_.add("BLUEBERRY");
        list_.add("CHERRY");
    }

    void open(int selected_index) {
        list_.initializeDialog("", selected_index, 0);
    }

    // Runs a frame, which must leave the list open.
    void frame() {
        EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    }

    // What Return answers: the selection, or kStillOpen when it can't be picked.
    int confirm() {
        press(EInputCodeType::DIK_RETURN);
        frame();
        return list_.handleDialogInput();
    }

    void clickRow(int row) {
        clickAt(clip().left + 1, clip().top + (row * kRowHeight));
        frame();
        mouseAt(clip().left + 1, clip().top + (row * kRowHeight), false);
    }
};

TEST_F(CPickListInputTest, EscapeCancels) {
    open(0);
    press(EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kCancelled);
}

TEST_F(CPickListInputTest, ControlAndCCopiesTheListToTheClipboard) {
    open(0);
    press(EInputCodeType::DIK_LCONTROL);
    press(EInputCodeType::DIK_C);
    EXPECT_CALL(clipboard_,
                setClipboardText(std::string_view("APPLE\nBANANA\nBLUEBERRY\nCHERRY\n")));
    frame();
}

TEST_F(CPickListInputTest, TypingSelectsTheFirstAtOrAfterIt) {
    open(0);
    type("b");
    frame();
    type("l");
    frame();
    EXPECT_EQ(confirm(), 2);
}

TEST_F(CPickListInputTest, ASearchBeforeTheSelectionStartsFromTheTop) {
    open(3);
    type("b");
    frame();
    EXPECT_EQ(confirm(), 1);
}

TEST_F(CPickListInputTest, BackspaceStartsTheSearchAgain) {
    open(0);
    type("c\ba");
    frame();
    EXPECT_EQ(confirm(), 0);
}

TEST_F(CPickListInputTest, OtherCharactersDontSearch) {
    open(2);
    type("-");
    frame();
    EXPECT_EQ(confirm(), 2);
}

// Without the reset, "BA" would find BANANA.
TEST_F(CPickListInputTest, MovingStartsTheSearchAgain) {
    open(0);
    type("b");
    frame();
    press(EInputCodeType::DIK_NUMPAD2);
    frame();
    type("a");
    frame();
    EXPECT_EQ(confirm(), 0);
}

// The original then read the string past the last.
TEST_F(CPickListInputTest, ASearchPastTheEndStartsAgainOnTheNextKey) {
    open(0);
    type("zz");
    frame();
    EXPECT_EQ(confirm(), 3);
}

// Ninety-nine ones come before the string of a hundred ending in 0, which the hundredth would
// pass.
TEST_F(CPickListInputTest, TheSearchHoldsNinetyNineCharacters) {
    list_.clear();
    list_.add(std::string(99, '1') + "0");
    list_.add(std::string(100, '1'));
    open(0);
    type(std::string(100, '1'));
    frame();
    EXPECT_EQ(confirm(), 0);
}

TEST_F(CPickListInputTest, UpAndDownMoveARow) {
    open(1);
    press(EInputCodeType::DIK_NUMPAD2);
    frame();
    press(EInputCodeType::DIK_NUMPAD2);
    frame();
    press(EInputCodeType::DIK_NUMPAD8);
    frame();
    EXPECT_EQ(confirm(), 2);
}

TEST_F(CPickListInputTest, HomeGoesToTheFirst) {
    open(3);
    press(EInputCodeType::DIK_NUMPAD7);
    frame();
    EXPECT_EQ(confirm(), 0);
}

TEST_F(CPickListInputTest, EndGoesToTheLast) {
    open(0);
    press(EInputCodeType::DIK_NUMPAD1);
    frame();
    EXPECT_EQ(confirm(), 3);
}

// "yn" in either case picks the first or the second at once.
TEST_F(CPickListInputTest, AHotkeyPicksItsItem) {
    list_.setHotkeys("yN");
    open(0);
    type("n");
    frame();
    EXPECT_EQ(list_.handleDialogInput(), 1);
}

TEST_F(CPickListInputTest, WithHotkeysTypingDoesntSearch) {
    list_.setHotkeys("yn");
    open(0);
    type("bx");
    frame();
    EXPECT_EQ(confirm(), 0);
}

// The third hotkey has no item.
TEST_F(CPickListInputTest, AHotkeyPastTheListPicksNothing) {
    list_.clear();
    list_.add("A");
    list_.add("B");
    list_.setHotkeys("yna");
    open(0);
    type("a");
    frame();
    EXPECT_EQ(confirm(), 0);
}

TEST_F(CPickListInputTest, ADisabledItemsHotkeyPassesToTheNextWithTheSameKey) {
    list_.setHotkeys("aab");
    list_.enableItem(0, false);
    open(3);
    type("a");
    frame();
    EXPECT_EQ(list_.handleDialogInput(), 1);
}

TEST_F(CPickListInputTest, ADisabledItemsOnlyHotkeySelectsItWithoutPicking) {
    list_.setHotkeys("ab");
    list_.enableItem(0, false);
    open(3);
    type("a");
    frame();
    press(EInputCodeType::DIK_NUMPAD2);
    frame();
    EXPECT_EQ(confirm(), 1);
}

TEST_F(CPickListInputTest, AClickSelects) {
    open(0);
    clickRow(2);
    EXPECT_EQ(confirm(), 2);
}

TEST_F(CPickListInputTest, TwoQuickClicksOnAnItemPickIt) {
    open(0);
    clickRow(2);
    time_ += (engine::IGameClock::kTicksPerSecond / 4) - 1;
    clickRow(2);
    EXPECT_EQ(list_.handleDialogInput(), 2);
}

TEST_F(CPickListInputTest, TwoClicksAQuarterOfASecondApartDont) {
    open(0);
    clickRow(2);
    time_ += engine::IGameClock::kTicksPerSecond / 4;
    clickRow(2);
    frame();
}

TEST_F(CPickListInputTest, TwoClicksInTheSameTickDont) {
    open(0);
    time_ = 5;
    clickRow(2);
    clickRow(2);
    frame();
}

TEST_F(CPickListInputTest, TwoQuickClicksOnDifferentItemsDont) {
    open(0);
    clickRow(1);
    ++time_;
    clickRow(2);
    frame();
}

TEST_F(CPickListInputTest, AMissBetweenTwoClicksBreaksTheDoubleClick) {
    open(0);
    clickRow(2);
    ++time_;
    clickRow(4);
    ++time_;
    clickRow(2);
    frame();
}

TEST_F(CPickListInputTest, TheClockWrappingBetweenTwoClicksStillPicks) {
    open(0);
    time_ = 0x7fffffff;
    clickRow(2);
    time_ = static_cast<int>(0x80000000U);
    clickRow(2);
    EXPECT_EQ(list_.handleDialogInput(), 2);
}

// A double click doesn't ask; the frame after drops the pick.
TEST_F(CPickListInputTest, ADoubleClickOnADisabledItemDoesntPick) {
    list_.enableItem(2, false);
    open(0);
    clickRow(2);
    ++time_;
    clickRow(2);
    frame();
    frame();
}

TEST_F(CPickListInputTest, ThePointerIsHeldInsideTheList) {
    open(0);
    mouseAt(0, 200, false);
    frame();
    EXPECT_EQ(mouse_x_, clip().left);
    EXPECT_EQ(mouse_y_, clip().bottom);
}

} // namespace
} // namespace nocturne::shape
