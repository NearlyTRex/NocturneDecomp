#include "engine/keys/inputcodetype.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gtest/gtest.h>

#include <initializer_list>
#include <optional>

namespace nocturne::shape {
namespace {

using engine::EInputCodeType;

// The prompt's long yes is 62 characters and its long no 35; every character is 4 pixels wide.
constexpr int kLongYesWidth = 62 * 4;
constexpr int kLongNoWidth = 35 * 4;

// The yes-or-no prompt on a screen that wide, the width inside its window taken as it opens.
class CConfirmDialogTest : public CPickListFixture {
protected:
    explicit CConfirmDialogTest(int width = kWidth) : CPickListFixture(width, kHeight) {
        for (int c = ' '; c <= '~'; ++c) {
            font_.setCharWidth(c, kCharWidth);
        }
    }

    bool confirm(std::initializer_list<EInputCodeType> keys) {
        pressInTurn(keys);
        const auto press_keys = screen_.on_swap;
        screen_.on_swap = [this, press_keys] {
            if (!inside_width_) {
                inside_width_ = clip().right - clip().left + 1;
            }
            press_keys();
        };
        return CEditorTools::showDestructiveActionConfirmDialog(pick_list_owners_, messages_,
                                                                "Quit");
    }

    support::CNewMsg messages_{dosio_};
    SPickListOwners pick_list_owners_{.controls = controls_,
                                      .keys = keys_,
                                      .menu_input = menu_input_,
                                      .three_d = three_d_,
                                      .screen = screen_};
    std::optional<int> inside_width_;
};

class CWideConfirmDialogTest : public CConfirmDialogTest {
protected:
    CWideConfirmDialogTest() : CConfirmDialogTest(kLongYesWidth + 64) {}
};

class CNarrowConfirmDialogTest : public CConfirmDialogTest {
protected:
    CNarrowConfirmDialogTest() : CConfirmDialogTest(kLongNoWidth - 4) {}
};

TEST_F(CConfirmDialogTest, TheYesIsFirst) {
    EXPECT_TRUE(confirm({EInputCodeType::DIK_RETURN}));
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

TEST_F(CConfirmDialogTest, TheNoIsSecond) {
    EXPECT_FALSE(confirm({EInputCodeType::DIK_DOWN, EInputCodeType::DIK_RETURN}));
}

TEST_F(CConfirmDialogTest, CancellingIsANo) {
    EXPECT_FALSE(confirm({EInputCodeType::DIK_ESCAPE}));
}

TEST_F(CConfirmDialogTest, YAndNPickTheirAnswers) {
    type("y");
    EXPECT_TRUE(confirm({}));
    type("n");
    EXPECT_FALSE(confirm({}));
}

// Either answer fits the screen whole when it can.
TEST_F(CWideConfirmDialogTest, AWideScreenShowsBothAnswersWhole) {
    EXPECT_TRUE(confirm({EInputCodeType::DIK_RETURN}));
    EXPECT_GE(inside_width_.value_or(0), kLongYesWidth);
}

// The yes is shortened where it doesn't fit, and the no kept.
TEST_F(CConfirmDialogTest, AnAnswerTooWideForTheScreenIsShortened) {
    EXPECT_TRUE(confirm({EInputCodeType::DIK_RETURN}));
    EXPECT_LT(inside_width_.value_or(kWidth), kLongYesWidth);
    EXPECT_GE(inside_width_.value_or(0), kLongNoWidth);
}

TEST_F(CNarrowConfirmDialogTest, ANarrowScreenShortensBoth) {
    EXPECT_TRUE(confirm({EInputCodeType::DIK_RETURN}));
    EXPECT_LT(inside_width_.value_or(kWidth), kLongNoWidth);
}

} // namespace
} // namespace nocturne::shape
