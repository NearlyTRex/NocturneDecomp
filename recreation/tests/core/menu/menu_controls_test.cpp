#include "common/error/fatalerror.h"
#include "core/menu/menu.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::Return;

constexpr int kOne = 0x10000;
constexpr int kLeast = 0x4000;
constexpr int kMost = 0x40000;
constexpr int kStep = 700;

// One press a frame, the first as the first frame is shown.
class CAdjustMouseSensitivityTest : public CMenuFixture {
protected:
    void pressEachFrame(std::vector<EInputCodeType> presses) {
        frames_ = 0;
        on_frame_ = [this, presses = std::move(presses)](int frame) {
            if (std::cmp_less_equal(frame, presses.size())) {
                press(presses[static_cast<std::size_t>(frame) - 1]);
            }
        };
    }

    [[nodiscard]] int adjust(int sensitivity) {
        menu_.adjustMouseSensitivity(sensitivity, "Adjust");
        return sensitivity;
    }
};

TEST_F(CAdjustMouseSensitivityTest, ConfirmKeepsWhatTheArrowsSet) {
    pressEachFrame({EInputCodeType::DIK_RIGHT, EInputCodeType::DIK_RIGHT, EInputCodeType::DIK_LEFT,
                    EInputCodeType::DIK_RETURN});
    EXPECT_EQ(adjust(kOne), kOne + kStep);
    EXPECT_EQ(frames_, 4);
}

TEST_F(CAdjustMouseSensitivityTest, CancelLeavesTheSettingAsItWas) {
    pressEachFrame({EInputCodeType::DIK_RIGHT, EInputCodeType::DIK_ESCAPE});
    EXPECT_EQ(adjust(kOne), kOne);
}

TEST_F(CAdjustMouseSensitivityTest, ClosingTheWindowCancels) {
    on_frame_ = [this](int /*frame*/) {
        press(EInputCodeType::DIK_RIGHT);
        ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    };
    EXPECT_EQ(adjust(kOne), kOne);
    EXPECT_EQ(frames_, 1);
}

// A setting from an INI is brought onto the bar even when it is cancelled.
TEST_F(CAdjustMouseSensitivityTest, ASettingOffTheBarIsBroughtOntoIt) {
    pressEachFrame({EInputCodeType::DIK_ESCAPE});
    EXPECT_EQ(adjust(0), kLeast);
    pressEachFrame({EInputCodeType::DIK_ESCAPE});
    EXPECT_EQ(adjust(kMost * 2), kMost);
}

TEST_F(CAdjustMouseSensitivityTest, TheArrowsStopAtTheEnds) {
    pressEachFrame({EInputCodeType::DIK_LEFT, EInputCodeType::DIK_RETURN});
    EXPECT_EQ(adjust(kLeast), kLeast);
    pressEachFrame({EInputCodeType::DIK_RIGHT, EInputCodeType::DIK_RETURN});
    EXPECT_EQ(adjust(kMost), kMost);
}

// The pointer is left where it is, so the setting follows it only once it moves; a click keeps
// it.
TEST_F(CAdjustMouseSensitivityTest, TheSettingFollowsThePointerOnceItMoves) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth / 2));
    on_frame_ = [this](int frame) {
        if (frame == 2) {
            ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
        } else if (frame == 3) {
            press(EInputCodeType::DIM_LBUTTON);
        }
    };
    EXPECT_EQ(adjust(kOne), kMost);
    EXPECT_EQ(frames_, 3);
}

// The window it was drawn in is put away once it closes.
TEST_F(CAdjustMouseSensitivityTest, TheSliderIsDrawn) {
    bool drawn = false;
    on_frame_ = [&](int /*frame*/) {
        drawn = anythingDrawn();
        press(EInputCodeType::DIK_ESCAPE);
    };
    static_cast<void>(adjust(kOne));
    EXPECT_TRUE(drawn);
}

// Control Options from Options, the fourth line.
class CConfigureCustomKeysTest : public CAdjustMouseSensitivityTest {
protected:
    CConfigureCustomKeysTest() {
        menu_.getMoon().init();
    }
};

// The page reads its first press a frame after it is chosen; Down there keeps the two Escapes
// from being read as one.
TEST_F(CConfigureCustomKeysTest, CancelGoesBackToOptions) {
    pressEachFrame({EInputCodeType::DIK_DOWN, EInputCodeType::DIK_DOWN, EInputCodeType::DIK_DOWN,
                    EInputCodeType::DIK_RETURN, EInputCodeType::DIK_DOWN,
                    EInputCodeType::DIK_ESCAPE, EInputCodeType::DIK_ESCAPE});
    menu_.showOptionsScreen(0);
    EXPECT_EQ(frames_, 7);
}

// A new control type takes the bindings screen next.
TEST_F(CConfigureCustomKeysTest, ANewTypeQuitsUntilTheBindingsArePorted) {
    pressEachFrame({EInputCodeType::DIK_DOWN, EInputCodeType::DIK_DOWN, EInputCodeType::DIK_DOWN,
                    EInputCodeType::DIK_RETURN, EInputCodeType::DIK_RETURN,
                    EInputCodeType::DIK_ESCAPE});
    EXPECT_THAT([this] { menu_.showOptionsScreen(0); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CMenu::configureCustomKeyBindings is not ported yet")));
}

} // namespace
} // namespace nocturne::core
