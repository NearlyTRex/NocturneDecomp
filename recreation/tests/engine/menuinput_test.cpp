#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "platform/gamepad.h"
#include "tests/mocks/engine/gamepadinputparts.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::Return;

TEST(CMenuInput, PublicInterface) {
    static_assert(std::is_constructible_v<CMenuInput, CKeys &, CGamepadInput &>);
    static_assert(
        std::is_same_v<decltype(&CMenuInput::takeMenuAction), bool (CMenuInput::*)(EMenuAction)>);
    static_assert(std::is_same_v<decltype(&CMenuInput::isModifierHeld),
                                 bool (CMenuInput::*)(EMenuModifier) const>);
}

class CMenuInputTest : public ::testing::Test {
protected:
    CMenuInputTest() {
        ON_CALL(raw_input_, getKeyboardState())
            .WillByDefault(Return(std::span<std::uint8_t, IRawInput::kInputCodeCount>(keyboard_)));
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    [[nodiscard]] bool held(EInputCodeType code) const {
        return keyboard_[static_cast<std::size_t>(code)] != 0;
    }

    // Pressed on the next pump, the pad plugged in.
    void hold(platform::EGamepadButton button) {
        ON_CALL(pad_.gamepad, updateGamepad()).WillByDefault(Return(true));
        ON_CALL(pad_.gamepad, getGamepadButton(button)).WillByDefault(Return(true));
    }

    void pump() {
        pad_.input.pump(keyboard_, true);
    }

    std::array<std::uint8_t, IRawInput::kInputCodeCount> keyboard_{};
    ::testing::NiceMock<MockRawInput> raw_input_;
    ::testing::NiceMock<MockScreenDevice> screen_;
    CKeys keys_{raw_input_, screen_};
    SGamepadInputParts pad_;
    CMenuInput input_{keys_, pad_.input};
};

TEST_F(CMenuInputTest, NothingPressedTakesNothing) {
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
}

// The numpad codes are the keys the original's menus read; arrows fold onto them under the
// default key mask.
TEST_F(CMenuInputTest, TheOriginalsMenuKeysDriveTheActions) {
    press(EInputCodeType::DIK_NUMPAD8);
    press(EInputCodeType::DIK_NUMPAD2);
    press(EInputCodeType::DIK_NUMPAD4);
    press(EInputCodeType::DIK_NUMPAD6);
    press(EInputCodeType::DIK_RETURN);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Left));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Right));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
}

TEST_F(CMenuInputTest, TheOriginalsPickListKeysDriveTheirActions) {
    press(EInputCodeType::DIK_ESCAPE);
    press(EInputCodeType::DIK_NUMPAD7);
    press(EInputCodeType::DIK_NUMPAD1);
    press(EInputCodeType::DIK_NUMPAD9);
    press(EInputCodeType::DIK_NUMPAD3);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Cancel));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Home));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::End));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::PageUp));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::PageDown));
}

TEST_F(CMenuInputTest, TheArrowsOwnCodesDriveThemUnderTheWideMask) {
    press(EInputCodeType::DIK_UP);
    press(EInputCodeType::DIK_RIGHT);
    press(EInputCodeType::DIK_HOME);
    press(EInputCodeType::DIK_NEXT);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Right));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Home));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::PageDown));
}

TEST_F(CMenuInputTest, ThePadsPressesDriveThemWhateverTheControlMode) {
    hold(platform::EGamepadButton::DpadDown);
    hold(platform::EGamepadButton::A);
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
}

// The pad's codes alone are play's, not the menus'.
TEST_F(CMenuInputTest, ThePadsCodesDontDriveThem) {
    press(EInputCodeType::PAD_A);
    press(EInputCodeType::DIJ_LEFT);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Left));
}

// Delete folds onto the keypad's point under the default mask.
TEST_F(CMenuInputTest, DeleteIsDeleteOrThePadsX) {
    press(EInputCodeType::DIK_DECIMAL);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Delete));
    press(EInputCodeType::DIK_DELETE);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Delete));
    hold(platform::EGamepadButton::X);
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Delete));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Delete));
}

TEST_F(CMenuInputTest, TakingAnActionTakesEveryInputBoundToIt) {
    hold(platform::EGamepadButton::DpadUp);
    pump();
    press(EInputCodeType::DIK_NUMPAD8);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_FALSE(held(EInputCodeType::DIK_NUMPAD8));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Up));
}

TEST_F(CMenuInputTest, AnActionLeavesTheOthersInputsAlone) {
    press(EInputCodeType::DIK_RETURN);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(held(EInputCodeType::DIK_RETURN));
}

TEST_F(CMenuInputTest, CopyWithoutAControlKeyLeavesItsKeysPressed) {
    press(EInputCodeType::DIK_C);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Copy));
    EXPECT_TRUE(held(EInputCodeType::DIK_C));
}

// Insert folds onto numpad 0 under the default mask.
TEST_F(CMenuInputTest, CopyIsInsertOrCWhileAControlKeyIsHeld) {
    press(EInputCodeType::DIK_LCONTROL);
    press(EInputCodeType::DIK_NUMPAD0);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Copy));
    EXPECT_TRUE(held(EInputCodeType::DIK_LCONTROL));
    press(EInputCodeType::DIK_C);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Copy));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Copy));
}

TEST_F(CMenuInputTest, TheRightControlKeyCopiesUnderTheWideMask) {
    press(EInputCodeType::DIK_RCONTROL);
    press(EInputCodeType::DIK_INSERT);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Copy));
}

TEST_F(CMenuInputTest, MutingIsMOnlyWhileAControlKeyIsHeld) {
    press(EInputCodeType::DIK_M);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::ToggleMute));
    EXPECT_TRUE(held(EInputCodeType::DIK_M));
    press(EInputCodeType::DIK_LCONTROL);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::ToggleMute));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::ToggleMute));
}

// Holding is asked about, so it takes nothing.
TEST_F(CMenuInputTest, EitherControlKeyHeldIsTheControlModifier) {
    EXPECT_FALSE(input_.isModifierHeld(EMenuModifier::Control));
    press(EInputCodeType::DIK_RCONTROL);
    EXPECT_TRUE(input_.isModifierHeld(EMenuModifier::Control));
    EXPECT_TRUE(input_.isModifierHeld(EMenuModifier::Control));
    EXPECT_FALSE(input_.isModifierHeld(EMenuModifier::Shift));
}

TEST_F(CMenuInputTest, OnlyTheLeftShiftKeyIsTheShiftModifier) {
    press(EInputCodeType::DIK_RSHIFT);
    EXPECT_FALSE(input_.isModifierHeld(EMenuModifier::Shift));
    press(EInputCodeType::DIK_LSHIFT);
    EXPECT_TRUE(input_.isModifierHeld(EMenuModifier::Shift));
    EXPECT_FALSE(input_.isModifierHeld(EMenuModifier::Control));
}

} // namespace
} // namespace nocturne::engine
