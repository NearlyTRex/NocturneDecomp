#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
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
    static_assert(std::is_constructible_v<CMenuInput, CKeys &>);
    static_assert(
        std::is_same_v<decltype(&CMenuInput::takeMenuAction), bool (CMenuInput::*)(EMenuAction)>);
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

    std::array<std::uint8_t, IRawInput::kInputCodeCount> keyboard_{};
    ::testing::NiceMock<MockRawInput> raw_input_;
    ::testing::NiceMock<MockScreenDevice> screen_;
    CKeys keys_{raw_input_, screen_};
    CMenuInput input_{keys_};
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

TEST_F(CMenuInputTest, ThePadDrivesThemWhateverTheControlMode) {
    press(EInputCodeType::PAD_DPAD_DOWN);
    press(EInputCodeType::DIJ_LEFT);
    press(EInputCodeType::PAD_A);
    press(EInputCodeType::PAD_B);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Left));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Cancel));
}

TEST_F(CMenuInputTest, StartCancelsToo) {
    press(EInputCodeType::PAD_START);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Cancel));
}

TEST_F(CMenuInputTest, TakingAnActionTakesEveryInputBoundToIt) {
    press(EInputCodeType::DIK_NUMPAD8);
    press(EInputCodeType::PAD_DPAD_UP);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_FALSE(held(EInputCodeType::DIK_NUMPAD8));
    EXPECT_FALSE(held(EInputCodeType::PAD_DPAD_UP));
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

} // namespace
} // namespace nocturne::engine
