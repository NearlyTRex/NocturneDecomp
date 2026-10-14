#include "core/game/game.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::ElementsAre;
using ::testing::IsEmpty;

CGame gameWith(EControlMode mode) {
    CGame game;
    game.game_control = mode;
    game.restoreDefaultControls();
    return game;
}

TEST(CGameRestoreDefaultControls, KeyboardBindsTheOriginalKeys) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(game.controls.getBindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Strafe),
                ElementsAre(EInputCodeType::DIK_LMENU));
    EXPECT_THAT(game.controls.getBindings(EGameAction::NextAmmo),
                ElementsAre(EInputCodeType::DIK_GRAVE));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_AUTO);
}

// The map is an action of its own, bound like every other.
TEST(CGameRestoreDefaultControls, TheMapHasItsOwnKey) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(game.controls.getBindings(EGameAction::Map), ElementsAre(EInputCodeType::DIK_M));
}

TEST(CGameRestoreDefaultControls, MouseModeMovesOntoWasdAndTheMouse) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_THAT(game.controls.getBindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_W));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIM_LBUTTON));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Left),
                ElementsAre(EInputCodeType::DIM_XAXIS));
    EXPECT_THAT(game.controls.getBindings(EGameAction::UseItem),
                ElementsAre(EInputCodeType::DIK_RETURN));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_MANUAL);
}

TEST(CGameRestoreDefaultControls, GamepadModeBindsTheSticksAndButtons) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_THAT(game.controls.getBindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIJ_UP));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::PAD_RTRIGGER));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Jump), ElementsAre(EInputCodeType::PAD_A));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Map), ElementsAre(EInputCodeType::PAD_BACK));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_AUTO);
}

TEST(CGameRestoreDefaultControls, GamepadModeLeavesWeaponsOneToFourAndStrafeUnbound) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_THAT(game.controls.getBindings(EGameAction::Strafe), IsEmpty());
    EXPECT_THAT(game.controls.getBindings(EGameAction::Weapon1), IsEmpty());
    EXPECT_THAT(game.controls.getBindings(EGameAction::Weapon4), IsEmpty());
}

TEST(CGameRestoreDefaultControls, GamepadModeSeedsAnUncalibratedStick) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_EQ(game.x_center, 0x8000);
    EXPECT_EQ(game.y_center, 0x8000);
    EXPECT_EQ(game.x_stick_min, 0);
    EXPECT_EQ(game.y_stick_min, 0);
    EXPECT_EQ(game.x_stick_max, 0xffff);
    EXPECT_EQ(game.y_stick_max, 0xffff);
}

TEST(CGameRestoreDefaultControls, GamepadModeKeepsAnExistingCalibration) {
    CGame game;
    game.x_center = 30000;
    game.x_stick_max = 60000;
    game.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
    game.restoreDefaultControls();
    EXPECT_EQ(game.x_center, 30000);
    EXPECT_EQ(game.x_stick_max, 60000);
}

TEST(CGameRestoreDefaultControls, KeyboardModeLeavesTheCalibrationAlone) {
    const CGame game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_EQ(game.x_center, 0);
}

TEST(CGameRestoreDefaultControls, ExtraBindingsAndMouseSettingsAreReset) {
    CGame game;
    game.controls.setBindings(EGameAction::Fire,
                              {EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON});
    game.invert_mouse_y_axis = 1;
    game.always_run = 1;
    game.x_mouse_sensitivity = 5;
    game.y_mouse_sensitivity = 6;
    game.restoreDefaultControls();
    EXPECT_THAT(game.controls.getBindings(EGameAction::Fire),
                ElementsAre(EInputCodeType::DIK_SPACE));
    EXPECT_EQ(game.invert_mouse_y_axis, 0);
    EXPECT_EQ(game.always_run, 0);
    EXPECT_EQ(game.x_mouse_sensitivity, 0x10000);
    EXPECT_EQ(game.y_mouse_sensitivity, 0x10000);
}

} // namespace
} // namespace nocturne::core
