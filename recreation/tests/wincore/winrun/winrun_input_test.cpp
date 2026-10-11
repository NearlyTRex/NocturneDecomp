#include "platform/window.h"
#include "tests/mocks/platform/mockwindow.h"
#include "wincore/winrun/winrun.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <deque>
#include <utility>

namespace nocturne::wincore {
namespace {

using platform::EMouseButton;
using platform::EWindowEventType;
using platform::SWindowEvent;
using ::testing::NiceMock;

constexpr std::uint16_t kSpace = 0x39;
constexpr std::uint16_t kLeftArrow = 0x14b;

// A window whose events are queued by the test and delivered by the next pump.
class CWinRunInputTest : public ::testing::Test {
protected:
    CWinRunInputTest() {
        ON_CALL(window_, pollEvent).WillByDefault([this](SWindowEvent &event) {
            if (events_.empty()) {
                return false;
            }
            event = events_.front();
            events_.pop_front();
            return true;
        });
    }

    void pump(std::initializer_list<SWindowEvent> events) {
        events_.assign(events.begin(), events.end());
        winrun_.processWindowMessages();
    }

    static SWindowEvent key(EWindowEventType type, std::uint16_t scancode) {
        return {.type = type, .scancode = scancode};
    }

    static SWindowEvent button(EWindowEventType type, EMouseButton which, int x, int y) {
        return {.type = type, .x = x, .y = y, .button = which};
    }

    [[nodiscard]] int state(std::size_t code) {
        return winrun_.getKeyboardState()[code];
    }

    std::deque<SWindowEvent> events_;
    NiceMock<platform::MockWindow> window_;
    CWinRun winrun_{window_};
};

TEST_F(CWinRunInputTest, AHeldKeyStaysDownUntilAPumpAfterItsRelease) {
    pump({key(EWindowEventType::KeyDown, kSpace)});
    EXPECT_EQ(state(kSpace), 1);
    pump({key(EWindowEventType::KeyUp, kSpace)});
    EXPECT_EQ(state(kSpace), 1);
    pump({});
    EXPECT_EQ(state(kSpace), 0);
}

TEST_F(CWinRunInputTest, APressReleasedWithinOnePumpIsStillSeenOnce) {
    pump({key(EWindowEventType::KeyDown, kSpace), key(EWindowEventType::KeyUp, kSpace)});
    EXPECT_EQ(state(kSpace), 1);
    pump({});
    EXPECT_EQ(state(kSpace), 0);
}

TEST_F(CWinRunInputTest, TheNarrowMaskFoldsExtendedKeysOntoTheirTwins) {
    pump({key(EWindowEventType::KeyDown, kLeftArrow)});
    EXPECT_EQ(state(0x4b), 1);
    EXPECT_EQ(state(kLeftArrow), 0);
    winrun_.setInputKeyMask(0x1ff);
    EXPECT_EQ(winrun_.getInputKeyMask(), 0x1ff);
    pump({key(EWindowEventType::KeyDown, kLeftArrow)});
    EXPECT_EQ(state(kLeftArrow), 1);
}

TEST_F(CWinRunInputTest, TypedCharactersQueueAndNulsDont) {
    pump({{.type = EWindowEventType::Character, .character = 0}});
    EXPECT_EQ(winrun_.wasKeyPressed(), 0);
    pump({{.type = EWindowEventType::Character, .character = 'a'}});
    EXPECT_EQ(winrun_.wasKeyPressed(), 1);
    winrun_.clearKeypresses();
    EXPECT_EQ(winrun_.wasKeyPressed(), 0);
}

// Twenty characters fill all twenty slots, so the oldest goes and the queue still holds some.
TEST_F(CWinRunInputTest, AFullQueueDropsTheOldestRatherThanLookingEmpty) {
    for (int i = 0; i < 20; ++i) {
        winrun_.enqueueInput('a' + i);
    }
    EXPECT_EQ(winrun_.wasKeyPressed(), 1);
}

TEST_F(CWinRunInputTest, TheMouseIsTrackedWithItsButtonsAsFlagsAndCodes) {
    pump({{.type = EWindowEventType::MouseMove, .x = 10, .y = 20}});
    EXPECT_EQ(winrun_.getMouseX(), 10);
    EXPECT_EQ(winrun_.getMouseY(), 20);
    pump({button(EWindowEventType::MouseButtonDown, EMouseButton::Left, 1, 2),
          button(EWindowEventType::MouseButtonDown, EMouseButton::Right, 3, 4),
          button(EWindowEventType::MouseButtonDown, EMouseButton::Middle, 5, 6)});
    EXPECT_EQ(winrun_.getMouseButtonFlags(), 7);
    EXPECT_EQ(winrun_.getMouseX(), 5);
    EXPECT_EQ(state(0x200), 1);
    EXPECT_EQ(state(0x201), 1);
    EXPECT_EQ(state(0x20c), 1);
    pump({button(EWindowEventType::MouseButtonUp, EMouseButton::Right, 7, 8)});
    EXPECT_EQ(winrun_.getMouseButtonFlags(), 5);
    EXPECT_EQ(winrun_.getMouseY(), 8);
    pump({});
    EXPECT_EQ(state(0x201), 0);
    EXPECT_EQ(state(0x200), 1);
    winrun_.clearMouseClicks();
    EXPECT_EQ(winrun_.getMouseButtonFlags(), 0);
}

TEST_F(CWinRunInputTest, WheelNotchesAddUpUntilTaken) {
    pump({{.type = EWindowEventType::MouseWheel, .wheel_delta = 240},
          {.type = EWindowEventType::MouseWheel, .wheel_delta = -120}});
    EXPECT_EQ(winrun_.takeMouseWheelNotches(), 1);
    EXPECT_EQ(winrun_.takeMouseWheelNotches(), 0);
}

TEST_F(CWinRunInputTest, ClosingTheWindowDisablesInput) {
    EXPECT_FALSE(winrun_.getInputDisabled());
    pump({{.type = EWindowEventType::Quit}});
    EXPECT_TRUE(winrun_.getInputDisabled());
}

TEST_F(CWinRunInputTest, TheFirstActivationKeepsTheInput) {
    pump({key(EWindowEventType::KeyDown, kSpace), {.type = EWindowEventType::Activate}});
    EXPECT_EQ(state(kSpace), 1);
    EXPECT_FALSE(winrun_.getFocusRegained());
}

TEST_F(CWinRunInputTest, RegainingFocusDropsTheInputAndFlagsTheReturn) {
    pump({{.type = EWindowEventType::Activate}, {.type = EWindowEventType::Deactivate}});
    pump({key(EWindowEventType::KeyDown, kSpace),
          button(EWindowEventType::MouseButtonDown, EMouseButton::Left, 0, 0),
          {.type = EWindowEventType::Character, .character = 'a'},
          {.type = EWindowEventType::Activate}});
    EXPECT_EQ(state(kSpace), 0);
    EXPECT_EQ(winrun_.getMouseButtonFlags(), 0);
    EXPECT_EQ(winrun_.wasKeyPressed(), 0);
    EXPECT_TRUE(winrun_.getFocusRegained());
    winrun_.setFocusRegained(false);
    EXPECT_FALSE(winrun_.getFocusRegained());
}

TEST_F(CWinRunInputTest, LosingFocusClearsTheReturnFlagAndARepeatChangesNothing) {
    pump({{.type = EWindowEventType::Activate},
          {.type = EWindowEventType::Deactivate},
          {.type = EWindowEventType::Activate}});
    ASSERT_TRUE(winrun_.getFocusRegained());
    pump({{.type = EWindowEventType::Activate}});
    EXPECT_TRUE(winrun_.getFocusRegained());
    pump({{.type = EWindowEventType::Deactivate}});
    EXPECT_FALSE(winrun_.getFocusRegained());
}

} // namespace
} // namespace nocturne::wincore
