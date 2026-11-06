#include "core/game/game.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/keychords.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::ElementsAre;
using ::testing::IsEmpty;

class CGameRestoreDefaultControls : public ::testing::Test {
protected:
    CGame &gameWith(EControlMode mode) {
        CGame &game = parts_.getGame();
        game.game_control = mode;
        game.restoreDefaultControls();
        return game;
    }

    ::testing::StrictMock<engine::MockGameClock> clock_;
    CGameParts parts_{clock_};
};

TEST_F(CGameRestoreDefaultControls, KeyboardBindsTheOriginalKeys) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Walk)),
                ElementsAre(EInputCodeType::DIK_UP));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Strafe)),
                ElementsAre(EInputCodeType::DIK_LMENU));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::NextAmmo)),
                ElementsAre(EInputCodeType::DIK_GRAVE));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_AUTO);
}

// The map is an action of its own, bound like every other.
TEST_F(CGameRestoreDefaultControls, TheMapHasItsOwnKey) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Map)),
                ElementsAre(EInputCodeType::DIK_M));
}

TEST_F(CGameRestoreDefaultControls, MouseModeMovesOntoWasdAndTheMouse) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Walk)),
                ElementsAre(EInputCodeType::DIK_W));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIM_LBUTTON));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Left)),
                ElementsAre(EInputCodeType::DIM_XAXIS));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::UseItem)),
                ElementsAre(EInputCodeType::DIK_RETURN));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_MANUAL);
}

TEST_F(CGameRestoreDefaultControls, GamepadModeBindsTheSticksAndButtons) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Walk)),
                ElementsAre(EInputCodeType::DIJ_UP));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::PAD_RTRIGGER));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Jump)),
                ElementsAre(EInputCodeType::PAD_A));
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Map)),
                ElementsAre(EInputCodeType::PAD_BACK));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_AUTO);
}

TEST_F(CGameRestoreDefaultControls, GamepadModeLeavesWeaponsOneToFourAndStrafeUnbound) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Strafe)), IsEmpty());
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Weapon1)), IsEmpty());
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Weapon4)), IsEmpty());
}

// A hotkey keeps its keys whatever the control type, both of them where it has two.
TEST_F(CGameRestoreDefaultControls, TheHotkeysAreTheKeyboardsInEveryMode) {
    for (const EControlMode mode :
         {EControlMode::CONTROL_MODE_KEYBOARD, EControlMode::CONTROL_MODE_MOUSE,
          EControlMode::CONTROL_MODE_GAMEPAD}) {
        const CGame &game = gameWith(mode);
        EXPECT_THAT(game.controls.getBindings(EGameAction::Mute),
                    ElementsAre(SKeyChord{.code = EInputCodeType::DIK_F5},
                                SKeyChord{.code = EInputCodeType::DIK_M, .control = true}));
        EXPECT_THAT(game.controls.getBindings(EGameAction::Console),
                    ElementsAre(SKeyChord{.code = EInputCodeType::DIK_TAB}));
    }
}

TEST_F(CGameRestoreDefaultControls, GamepadModeSeedsAnUncalibratedStick) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_EQ(game.x_center, 0x8000);
    EXPECT_EQ(game.y_center, 0x8000);
    EXPECT_EQ(game.x_stick_min, 0);
    EXPECT_EQ(game.y_stick_min, 0);
    EXPECT_EQ(game.x_stick_max, 0xffff);
    EXPECT_EQ(game.y_stick_max, 0xffff);
}

TEST_F(CGameRestoreDefaultControls, GamepadModeKeepsAnExistingCalibration) {
    CGame &game = parts_.getGame();
    game.x_center = 30000;
    game.x_stick_max = 60000;
    game.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
    game.restoreDefaultControls();
    EXPECT_EQ(game.x_center, 30000);
    EXPECT_EQ(game.x_stick_max, 60000);
}

TEST_F(CGameRestoreDefaultControls, KeyboardModeLeavesTheCalibrationAlone) {
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_EQ(game.x_center, 0);
}

TEST_F(CGameRestoreDefaultControls, ExtraBindingsAndMouseSettingsAreReset) {
    CGame &game = parts_.getGame();
    game.controls.setBindings(EGameAction::Fire,
                              chords({EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON}));
    game.invert_mouse_y_axis = 1;
    game.always_run = 1;
    game.x_mouse_sensitivity = 5;
    game.y_mouse_sensitivity = 6;
    game.restoreDefaultControls();
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Fire)),
                ElementsAre(EInputCodeType::DIK_SPACE));
    EXPECT_EQ(game.invert_mouse_y_axis, 0);
    EXPECT_EQ(game.always_run, 0);
    EXPECT_EQ(game.x_mouse_sensitivity, 0x10000);
    EXPECT_EQ(game.y_mouse_sensitivity, 0x10000);
}

} // namespace
} // namespace nocturne::core
