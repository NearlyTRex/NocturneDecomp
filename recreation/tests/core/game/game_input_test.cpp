#include "common/text/textscanner.h"
#include "core/charactr/deathstate.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/playerinput.h"
#include "core/set/demonset.h"
#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "platform/gamepad.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testhero.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <memory>

namespace nocturne::core {
namespace {

using ::testing::Return;

// The game clock's ticks in a 65536th of a second.
constexpr int kTicksPerUnit = 18;
// Frames of a 1024th, a 32nd and a quarter of a second, the last the longest a frame is.
constexpr int kShortFrame = 64;
constexpr int kFrame = 2048;
constexpr int kLongFrame = 0x4000;
constexpr float kShortFrameTime = 1.0F / 1024.0F;

// A hero on a 640x480 screen with the cursor at its centre, the keys at their keyboard defaults.
class CGameInputTest : public CMissionFixture {
protected:
    CGameInputTest() {
        ON_CALL(game_parts_.getScreen(), getWindowWidth()).WillByDefault(Return(640));
        ON_CALL(game_parts_.getScreen(), getWindowHeight()).WillByDefault(Return(480));
        ON_CALL(game_parts_.getRawInput(), getMouseX()).WillByDefault([this] { return mouse_x_; });
        ON_CALL(game_parts_.getRawInput(), getMouseY()).WillByDefault([this] { return mouse_y_; });
        makeTheHero();
    }

    void makeTheHero() {
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setLocation({.position = {}, .area_id = 0});
        mission_.addActorToList(std::move(placeholder));
        auto hero = std::make_unique<CTestHero>(actor_);
        hero_ = hero.get();
        EXPECT_TRUE(mission_.createHeros(std::move(hero)));
        game_.resetInputAndCenterCursor(session_);
    }

    void hold(EGameAction action, bool held = true) {
        game_parts_.hold(game_.controls.getBindings(action).front(), held);
    }

    // A frame of the given time, in 65536ths of a second, read by the controls.
    void frame(int units) {
        time_ += units * kTicksPerUnit;
        game_.updateDT();
        game_.playerControls(session_);
    }

    [[nodiscard]] SPlayerInput &input() const {
        return hero_->getPlayerInput();
    }

    // A set of one camera, shown, so the camera the mouse was measured under is cut away from.
    void cutToACamera() {
        givenFile("models\\one.set",
                  SSetFile{.cameras = "1\n" + cameraText("cam"), .pvs = "1\n\t0\n"}.text());
        givenFile("data\\pier.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                            {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        set_.load("one.set");
        session_.camera.init(kHeight);
        set_.setCameraView(0);
    }

    CTestHero *hero_ = nullptr;
    int mouse_x_ = 320;
    int mouse_y_ = 240;
};

TEST_F(CGameInputTest, ResettingForgetsTheControlsAndCentresTheCursor) {
    input() = {.action_state = {.walk = true}, .strafe_speed = 1.0F, .turn_speed = 0.5F};
    EXPECT_CALL(game_parts_.getRawInput(), setCursorPosition(320, 240));
    game_.resetInputAndCenterCursor(session_);
    EXPECT_FALSE(input().action_state.walk);
    EXPECT_EQ(input().strafe_speed, 0.0F);
    EXPECT_EQ(input().turn_speed, 0.0F);
}

// Full strafe takes a hundredth of a second; less, it is that much of the way.
TEST_F(CGameInputTest, TheStrafeKeysStrafeFullyInAHundredthOfASecond) {
    hold(EGameAction::StrafeLeft);
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().strafe_speed, -(kShortFrameTime / 0.01F));
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, -1.0F);
    hold(EGameAction::StrafeLeft, false);
    hold(EGameAction::StrafeRight);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 1.0F);
}

// The strafe starts from nothing each frame.
TEST_F(CGameInputTest, WithNoStrafeKeyThereIsNoStrafe) {
    input().strafe_speed = 0.5F;
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 0.0F);
}

// The left strafe wins over the right.
TEST_F(CGameInputTest, BothStrafeKeysStrafeLeft) {
    hold(EGameAction::StrafeLeft);
    hold(EGameAction::StrafeRight);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, -1.0F);
}

// With Strafe held the turn keys strafe, and the turn settles.
TEST_F(CGameInputTest, StrafeMakesTheTurnKeysStrafe) {
    hold(EGameAction::Strafe);
    hold(EGameAction::Left);
    input().turn_speed = 0.2F;
    frame(kLongFrame);
    EXPECT_EQ(input().strafe_speed, -1.0F);
    EXPECT_EQ(input().turn_speed, 0.0F);
    hold(EGameAction::Left, false);
    hold(EGameAction::Right);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 1.0F);
    hold(EGameAction::Right, false);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 0.0F);
}

// Each frame turns by a quarter of the frame's time over 0.3 of the sensitivity, to a quarter.
TEST_F(CGameInputTest, TheTurnKeysTurnByTheSensitivityToAQuarter) {
    hold(EGameAction::Left);
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().turn_speed, -(kShortFrameTime * 0.25F) / 0.3F);
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().turn_speed, -0.25F);
    hold(EGameAction::Left, false);
    hold(EGameAction::Right);
    input().turn_speed = 0.0F;
    game_.x_mouse_sensitivity = 0x20000;
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().turn_speed, (kShortFrameTime * 0.25F) / 0.6F);
    frame(kLongFrame);
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().turn_speed, 0.25F);
}

// Released, a turn settles back by a quarter of the frame's time over a twentieth, either way.
TEST_F(CGameInputTest, AReleasedTurnSettlesToNothing) {
    input().turn_speed = 0.2F;
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().turn_speed, 0.2F - ((kShortFrameTime * 0.25F) / 0.05F));
    input().turn_speed = -0.2F;
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().turn_speed, -0.2F + ((kShortFrameTime * 0.25F) / 0.05F));
    input().turn_speed = 0.001F;
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 0.0F);
    input().turn_speed = -0.001F;
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 0.0F);
}

// Point up looks up, negatively, by 0.2 of the sensitivity; released, the look settles in a
// tenth.
TEST_F(CGameInputTest, ThePointKeysLookAndSettleBack) {
    hold(EGameAction::PointUp);
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().look_up_down_speed, -(kShortFrameTime * 0.25F) / 0.2F);
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().look_up_down_speed, -0.25F);
    hold(EGameAction::PointUp, false);
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().look_up_down_speed, -0.25F + ((kShortFrameTime * 0.25F) / 0.1F));
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().look_up_down_speed, 0.0F);
    hold(EGameAction::PointDown);
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().look_up_down_speed, 0.25F);
    hold(EGameAction::PointDown, false);
    frame(kShortFrame);
    EXPECT_FLOAT_EQ(input().look_up_down_speed, 0.25F - ((kShortFrameTime * 0.25F) / 0.1F));
    frame(kLongFrame);
    frame(kLongFrame);
    EXPECT_EQ(input().look_up_down_speed, 0.0F);
}

// Always run makes the run key walk.
TEST_F(CGameInputTest, RunFollowsItsKeyTheOtherWayRoundWithAlwaysRun) {
    hold(EGameAction::Run);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
    game_.always_run = 1;
    frame(kFrame);
    EXPECT_FALSE(input().action_state.run);
    hold(EGameAction::Run, false);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
}

// Walk, back up and fire change only when their key does, so they hold while it is held.
TEST_F(CGameInputTest, WalkBackUpAndFireHoldWhileTheirKeysAre) {
    hold(EGameAction::Walk);
    hold(EGameAction::Backup);
    hold(EGameAction::Fire);
    frame(kFrame);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.walk);
    EXPECT_TRUE(input().action_state.backup);
    EXPECT_TRUE(input().action_state.fire);
    hold(EGameAction::Walk, false);
    hold(EGameAction::Backup, false);
    hold(EGameAction::Fire, false);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.walk);
    EXPECT_FALSE(input().action_state.backup);
    EXPECT_FALSE(input().action_state.fire);
}

// Their state from elsewhere stands while their keys stay as they were.
TEST_F(CGameInputTest, AnUnchangedKeyLeavesWalkBackUpAndFireAlone) {
    input().action_state = {.walk = true, .backup = true, .fire = true};
    frame(kFrame);
    EXPECT_TRUE(input().action_state.walk);
    EXPECT_TRUE(input().action_state.backup);
    EXPECT_TRUE(input().action_state.fire);
}

TEST_F(CGameInputTest, AHeroNotAliveDoesntFire) {
    hold(EGameAction::Fire);
    hero_->death_state = EDeathState::DEATH_STATE_DYING;
    frame(kFrame);
    EXPECT_FALSE(input().action_state.fire);
    input().action_state.fire = true;
    frame(kFrame);
    EXPECT_FALSE(input().action_state.fire);
}

// Use, light, draw and jump are set for the frame their key goes down, and only then.
TEST_F(CGameInputTest, UseLightDrawAndJumpAreSetOnlyAsTheirKeysGoDown) {
    hold(EGameAction::UseItem);
    hold(EGameAction::Light);
    hold(EGameAction::Draw);
    hold(EGameAction::Jump);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.use_item);
    EXPECT_TRUE(input().action_state.light);
    EXPECT_TRUE(input().action_state.draw);
    EXPECT_TRUE(input().action_state.jump);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.use_item);
    EXPECT_FALSE(input().action_state.light);
    EXPECT_FALSE(input().action_state.draw);
    EXPECT_FALSE(input().action_state.jump);
    hold(EGameAction::Jump, false);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.jump);
}

// The input reset forgets what was held, so a key still down counts as pressed again.
TEST_F(CGameInputTest, AfterAResetAKeyStillDownIsPressedAgain) {
    hold(EGameAction::Jump);
    frame(kFrame);
    game_.resetInputAndCenterCursor(session_);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.jump);
}

// Any of an action's bindings holds it.
TEST_F(CGameInputTest, AnyBindingHoldsTheAction) {
    game_.controls.setBindings(EGameAction::Run,
                               {engine::EInputCodeType::DIK_Q, engine::EInputCodeType::DIK_W});
    game_parts_.hold(engine::EInputCodeType::DIK_W, true);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
}

// An HQ mission's script holsters any weapon drawn, so the draw and the flashlight are refused.
TEST_F(CGameInputTest, InAnHQMissionTheDrawAndTheLightAreRefused) {
    common::CTextScanner scanner("; mission\n7,4\n; name\nhq-act1\n; sets\n0\n; types\n0\n"
                                 "; actors\n0\n; carried\n0\n");
    mission_.readMissionFile(scanner, true);
    makeTheHero();
    hold(EGameAction::Draw);
    hold(EGameAction::Light);
    hold(EGameAction::Jump);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.draw);
    EXPECT_FALSE(input().action_state.light);
    EXPECT_TRUE(input().action_state.jump);
}

// A button pressed in play does its binding and doesn't also act on a menu opening under it.
TEST_F(CGameInputTest, AFrameOfPlayKeepsThePadOffTheMenus) {
    makeTheHero();
    engine::SGamepadInputParts &pad = game_parts_.getGamepad();
    ON_CALL(pad.gamepad, updateGamepad()).WillByDefault(Return(true));
    ON_CALL(pad.gamepad, getGamepadButton(platform::EGamepadButton::A)).WillByDefault(Return(true));
    frame(kFrame);
    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> codes{};
    pad.input.pump(codes, true);
    EXPECT_FALSE(pad.input.takeMenuAction(engine::EMenuAction::Confirm));
}

// The pad's defaults, and its sticks read once a frame by the pump, as the game's window has it.
class CGamePadTest : public CGameInputTest {
protected:
    CGamePadTest() {
        game_.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
        game_.restoreDefaultControls();
        engine::SGamepadInputParts &pad = game_parts_.getGamepad();
        ON_CALL(pad.gamepad, updateGamepad()).WillByDefault(Return(true));
        ON_CALL(pad.gamepad, getGamepadAxis).WillByDefault([this](platform::EGamepadAxis axis) {
            return axes_[static_cast<std::size_t>(axis)];
        });
    }

    // The sticks at these fractions of full deflection, the pump having read them.
    void sticksAt(float move_x, float move_y, float look_x, float look_y) {
        const auto raw = [](float fraction) {
            return static_cast<std::int16_t>(std::lround(fraction * 32767.0F));
        };
        axes_ = {raw(move_x), raw(move_y), raw(look_x), raw(look_y), 0, 0};
        std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> codes{};
        game_parts_.getGamepad().input.pump(codes, true);
    }

    std::array<std::int16_t, 6> axes_{};
};

// Fully over, the left stick strafes fully and the right turns and looks a quarter, the
// keyboard's top speed, at the default tuning and sensitivity.
TEST_F(CGamePadTest, TheSticksStrafeTurnAndLook) {
    sticksAt(1.0F, 0.0F, 1.0F, 0.0F);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 1.0F);
    EXPECT_FLOAT_EQ(input().turn_speed, 0.25F);
    sticksAt(0.0F, 0.0F, 0.0F, 1.0F);
    frame(kFrame);
    EXPECT_FLOAT_EQ(input().look_up_down_speed, 0.25F);
}

// The tuning's rates and the mouse sensitivities scale them; the look can be inverted.
TEST_F(CGamePadTest, TheTuningAndSensitivityScaleTheSticks) {
    engine::SGamepadTuning &tuning = game_parts_.getGamepad().input.tuning;
    tuning.turn_rate = 50;
    tuning.look_rate = 10;
    tuning.invert_look = true;
    game_.x_mouse_sensitivity = 0x20000;
    sticksAt(0.0F, 0.0F, -1.0F, 0.0F);
    frame(kFrame);
    EXPECT_FLOAT_EQ(input().turn_speed, -1.0F);
    sticksAt(0.0F, 0.0F, 0.0F, 1.0F);
    frame(kFrame);
    EXPECT_FLOAT_EQ(input().look_up_down_speed, -0.1F);
}

// A centred stick leaves the speeds to the bindings, as the d-pad drives them.
TEST_F(CGamePadTest, ACentredStickLeavesTheBindingsSpeeds) {
    hold(EGameAction::StrafeLeft);
    sticksAt(0.0F, 0.0F, 0.0F, 0.0F);
    input().turn_speed = 0.0F;
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, -1.0F);
    EXPECT_EQ(input().turn_speed, 0.0F);
}

// Pushed past four tenths the hero walks, past 0.65 runs; Run held picks the other.
TEST_F(CGamePadTest, HowFarTheStickIsPushedPicksWalkingOrRunning) {
    sticksAt(0.0F, -0.6F, 0.0F, 0.0F);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.run);
    sticksAt(0.0F, 1.0F, 0.0F, 0.0F);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
    hold(EGameAction::Run);
    frame(kFrame);
    EXPECT_FALSE(input().action_state.run);
    sticksAt(0.0F, 0.6F, 0.0F, 0.0F);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
}

// Barely pushed, the run is the binding's.
TEST_F(CGamePadTest, ALightPushLeavesTheRunToItsBinding) {
    hold(EGameAction::Run);
    sticksAt(0.0F, 0.3F, 0.0F, 0.0F);
    frame(kFrame);
    EXPECT_TRUE(input().action_state.run);
}

TEST_F(CGamePadTest, WithoutAPadOnlyTheBindingsMove) {
    sticksAt(1.0F, 0.0F, 0.0F, 0.0F);
    ON_CALL(game_parts_.getGamepad().gamepad, updateGamepad()).WillByDefault(Return(false));
    sticksAt(1.0F, 0.0F, 0.0F, 0.0F);
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 0.0F);
}

// The pad arrives normalised, so it needs no calibration of its own.
TEST_F(CGamePadTest, ResettingTheKeysSeedsAnUncalibratedPad) {
    game_.x_center = 0;
    game_.resetKeyState();
    EXPECT_EQ(game_.x_center, 0x8000);
    EXPECT_EQ(game_.y_stick_max, 0xffff);
}

class CGameMouseTest : public CGameInputTest {
protected:
    CGameMouseTest() {
        game_.game_control = EControlMode::CONTROL_MODE_MOUSE;
    }
};

// Half a screen right turns at 0.75 of the sensitivity, half up looks up at all of it; the cursor
// goes back to the centre.
TEST_F(CGameMouseTest, TheMouseTurnsAndLooksFromTheCentre) {
    mouse_x_ = 480;
    mouse_y_ = 120;
    EXPECT_CALL(game_parts_.getRawInput(), setCursorPosition(320, 240));
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 0.375F);
    EXPECT_EQ(input().look_up_down_speed, -0.5F);
}

TEST_F(CGameMouseTest, InvertingTheMouseLooksTheOtherWay) {
    game_.invert_mouse_y_axis = 1;
    mouse_y_ = 120;
    frame(kFrame);
    EXPECT_EQ(input().look_up_down_speed, 0.5F);
}

TEST_F(CGameMouseTest, TheMousesSpeedsAreHeldToOne) {
    mouse_x_ = 0;
    mouse_y_ = 480;
    game_.x_mouse_sensitivity = 0x40000;
    game_.y_mouse_sensitivity = 0x40000;
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, -1.0F);
    EXPECT_EQ(input().look_up_down_speed, 1.0F);
    mouse_x_ = 640;
    mouse_y_ = 0;
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 1.0F);
    EXPECT_EQ(input().look_up_down_speed, -1.0F);
}

// With Strafe held the mouse strafes.
TEST_F(CGameMouseTest, StrafeMakesTheMouseStrafe) {
    hold(EGameAction::Strafe);
    mouse_x_ = 480;
    frame(kFrame);
    EXPECT_EQ(input().strafe_speed, 0.375F);
    EXPECT_EQ(input().turn_speed, 0.0F);
}

// The faster of the keys and the mouse wins.
TEST_F(CGameMouseTest, KeysFasterThanTheMouseKeepTheirSpeed) {
    hold(EGameAction::StrafeLeft);
    hold(EGameAction::Strafe);
    hold(EGameAction::PointUp);
    mouse_x_ = 480;
    mouse_y_ = 250;
    input().look_up_down_speed = -0.2F;
    frame(kLongFrame);
    EXPECT_EQ(input().strafe_speed, -1.0F);
    EXPECT_EQ(input().look_up_down_speed, -0.25F);
}

// The mouse moved under the camera cut away from turns nothing that frame; the next it does.
TEST_F(CGameMouseTest, ACameraCutDropsTheFramesMouseLook) {
    cutToACamera();
    mouse_x_ = 480;
    EXPECT_CALL(game_parts_.getRawInput(), setCursorPosition(320, 240)).Times(2);
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 0.0F);
    frame(kFrame);
    EXPECT_EQ(input().turn_speed, 0.375F);
}

} // namespace
} // namespace nocturne::core
