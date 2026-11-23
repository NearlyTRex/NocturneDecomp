#include "common/error/fatalerror.h"
#include "core/game/game.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/keychords.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <memory>
#include <string_view>
#include <vector>

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

// BW's own actions take the keys its games gave them; Nocturne leaves them unbound.
TEST_F(CGameRestoreDefaultControls, BlairWitchsOwnActionsTakeItsKeys) {
    EXPECT_THAT(codesOf(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)
                            .controls.getBindings(EGameAction::Compass)),
                IsEmpty());
    parts_.getContent().controls = engine::getShippedGameContent("blairwitch1").controls;
    const CGame &bw1 = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(codesOf(bw1.controls.getBindings(EGameAction::Compass)),
                ElementsAre(EInputCodeType::DIK_C));
    EXPECT_THAT(codesOf(bw1.controls.getBindings(EGameAction::Sps)),
                ElementsAre(EInputCodeType::DIK_S));
    parts_.getContent().controls = engine::getShippedGameContent("blairwitch3").controls;
    EXPECT_THAT(
        codesOf(
            gameWith(EControlMode::CONTROL_MODE_MOUSE).controls.getBindings(EGameAction::Action)),
        ElementsAre(EInputCodeType::DIM_RBUTTON));
    EXPECT_THAT(
        codesOf(
            gameWith(EControlMode::CONTROL_MODE_GAMEPAD).controls.getBindings(EGameAction::Jump)),
        IsEmpty());
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

engine::SControlMode &modeOf(engine::SGameContent &content, std::string_view id) {
    std::vector<engine::SControlMode> &modes = common::required(content.controls).modes;
    return *std::ranges::find(modes, id, &engine::SControlMode::id);
}

// A game's defaults are its own; an action its mode doesn't list starts unbound, and the hotkeys
// keep theirs.
TEST_F(CGameRestoreDefaultControls, AModesDefaultsAndAimAreTheGamesOwn) {
    engine::SControlMode &keyboard = modeOf(parts_.getContent(), "keyboard");
    keyboard.defaults = {{.action = "walk", .codes = {0x11, 0x148}}};
    keyboard.manual_aim = true;
    const CGame &game = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Walk)),
                ElementsAre(EInputCodeType::DIK_W, EInputCodeType::DIK_UP));
    EXPECT_THAT(game.controls.getBindings(EGameAction::Fire), IsEmpty());
    EXPECT_THAT(codesOf(game.controls.getBindings(EGameAction::Mute)),
                ElementsAre(EInputCodeType::DIK_F5, EInputCodeType::DIK_M));
    EXPECT_EQ(game.aim_mode, EAimMode::AIM_MODE_MANUAL);
}

// Every mode BW1's manifest lists is one this build reads, with actions it has.
TEST_F(CGameRestoreDefaultControls, BlairWitchOnesControlsAreOnesThisBuildReads) {
    parts_.getContent().controls = engine::getShippedGameContent("blairwitch1").controls;
    const CGame &mouse = gameWith(EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_THAT(codesOf(mouse.controls.getBindings(EGameAction::Run)),
                ElementsAre(EInputCodeType::DIK_RSHIFT));
    EXPECT_EQ(mouse.aim_mode, EAimMode::AIM_MODE_AUTO);
    const CGame &keyboard = gameWith(EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_THAT(codesOf(keyboard.controls.getBindings(EGameAction::Jump)),
                ElementsAre(EInputCodeType::DIK_SPACE));
    EXPECT_THAT(codesOf(keyboard.controls.getBindings(EGameAction::Weapon4)),
                ElementsAre(EInputCodeType::DIK_5));
    static_cast<void>(gameWith(EControlMode::CONTROL_MODE_GAMEPAD));
}

// Startup makes the game before it loads the packages, and restores the controls once it has.
TEST_F(CGameRestoreDefaultControls, AGameMadeBeforeThePackagesAreLoadedBindsNothingYet) {
    const engine::SGameContent before_loading;
    const std::unique_ptr<CGame> game = parts_.makeGame(before_loading);
    EXPECT_THAT(game->controls.getBindings(EGameAction::Walk), IsEmpty());
}

TEST_F(CGameRestoreDefaultControls, NoControlsIsFatal) {
    parts_.getContent().controls.reset();
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the controls")));
}

TEST_F(CGameRestoreDefaultControls, AModeTheGameDoesntOfferIsFatal) {
    std::erase_if(common::required(parts_.getContent().controls).modes,
                  [](const engine::SControlMode &mode) { return mode.id == "gamepad"; });
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_GAMEPAD)); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the gamepad control mode")));
}

TEST_F(CGameRestoreDefaultControls, AModeThisBuildDoesntReadIsFatal) {
    modeOf(parts_.getContent(), "gamepad").id = "point_and_click";
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "The control mode point_and_click isn't one this build reads")));
}

TEST_F(CGameRestoreDefaultControls, ADefaultForAnUnknownActionOrAHotkeyIsFatal) {
    engine::SControlMode &keyboard = modeOf(parts_.getContent(), "keyboard");
    keyboard.defaults = {{.action = "levitate", .codes = {0x2f}}};
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "The keyboard control mode's defaults: levitate isn't an action")));
    keyboard.defaults = {{.action = "mute", .codes = {0x3f}}};
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "The keyboard control mode's defaults: mute is a hotkey, the same in every "
                    "game")));
}

TEST_F(CGameRestoreDefaultControls, ABindingsRowForAnUnknownActionIsFatal) {
    common::required(parts_.getContent().controls)
        .bindings.push_back({.action = "levitate", .label = "Levitate"});
    EXPECT_THAT([this] { static_cast<void>(gameWith(EControlMode::CONTROL_MODE_KEYBOARD)); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("A bindings page row: levitate isn't an action")));
}

} // namespace
} // namespace nocturne::core
