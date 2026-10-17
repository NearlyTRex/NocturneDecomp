#include "core/menuinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
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

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::Return;

TEST(CMenuInput, PublicInterface) {
    static_assert(std::is_constructible_v<CMenuInput, engine::CKeys &>);
    static_assert(
        std::is_same_v<decltype(&CMenuInput::takeMenuAction), bool (CMenuInput::*)(EMenuAction)>);
}

class CMenuInputTest : public ::testing::Test {
protected:
    CMenuInputTest() {
        ON_CALL(raw_input_, getKeyboardState())
            .WillByDefault(
                Return(std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_)));
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    [[nodiscard]] bool held(EInputCodeType code) const {
        return keyboard_[static_cast<std::size_t>(code)] != 0;
    }

    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> keyboard_{};
    ::testing::NiceMock<engine::MockRawInput> raw_input_;
    ::testing::NiceMock<engine::MockScreenDevice> screen_;
    engine::CKeys keys_{raw_input_, screen_};
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

TEST_F(CMenuInputTest, TheArrowsOwnCodesDriveThemUnderTheWideMask) {
    press(EInputCodeType::DIK_UP);
    press(EInputCodeType::DIK_RIGHT);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Right));
}

TEST_F(CMenuInputTest, ThePadDrivesThemWhateverTheControlMode) {
    press(EInputCodeType::PAD_DPAD_DOWN);
    press(EInputCodeType::DIJ_LEFT);
    press(EInputCodeType::PAD_A);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Left));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
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

} // namespace
} // namespace nocturne::core
