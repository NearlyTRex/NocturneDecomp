#include "common/error/fatalerror.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/menu/menu.h"
#include "engine/keys/inputcodetype.h"
#include "platform/gamepad.h"
#include "tests/mocks/core/keychords.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <functional>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Return;

using EStep = std::function<void()>;

// The keyboard's defaults; one step a frame, each as the frame is shown.
class CKeyBindingsTest : public CMenuFixture {
protected:
    CKeyBindingsTest() {
        game_.restoreDefaultControls();
    }

    void run(std::vector<EStep> steps) {
        on_frame_ = [steps = std::move(steps)](int frame) {
            if (std::cmp_less_equal(frame, steps.size())) {
                const EStep &step = steps[static_cast<std::size_t>(frame) - 1];
                if (step) {
                    step();
                }
            }
        };
        menu_.configureCustomKeyBindings();
    }

    [[nodiscard]] EStep tap(EInputCodeType code) {
        return [this, code] { press(code); };
    }

    [[nodiscard]] EStep release(EInputCodeType code) {
        return [this, code] { keyboard_[static_cast<std::size_t>(code)] = 0; };
    }

    [[nodiscard]] std::vector<EInputCodeType> bindings(EGameAction action) const {
        return codesOf(game_.controls.getBindings(action));
    }

    // The first frame clears the screen; Forward is picked on the fourth, and its own list reads
    // the fourth frame's press.
    [[nodiscard]] std::vector<EStep> openForward() {
        return {tap(EInputCodeType::DIK_DOWN), tap(EInputCodeType::DIK_RETURN), {}};
    }

    // Picks the sub-list's line, then binds Q to it and lets Q go; the sub-list reads the press
    // after these.
    void bindQ(std::vector<EStep> &steps) {
        steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                                   {},
                                   {},
                                   tap(EInputCodeType::DIK_Q),
                                   {},
                                   release(EInputCodeType::DIK_Q)});
    }

    // Leaves the sub-list and then the main one.
    void leave(std::vector<EStep> &steps) {
        steps.insert(steps.end(),
                     {tap(EInputCodeType::DIK_ESCAPE), tap(EInputCodeType::DIK_ESCAPE)});
    }
};

// A screen that never leaves, even with Escape held, as a capture that takes Escape as a binding
// wouldn't, ends the test's process, rather than printing a failure a frame for as long as it
// runs.
using CMenuFixtureDeathTest = CKeyBindingsTest;

TEST_F(CMenuFixtureDeathTest, AScreenThatNeverLeavesEndsTheTest) {
    GTEST_FLAG_SET(death_test_style, "threadsafe");
    EXPECT_DEATH(
        {
            press(EInputCodeType::DIK_ESCAPE);
            while (true) {
                screen_.swapBuffers();
            }
        },
        "runaway loop: the menu didn't leave after 20 frames");
}

TEST_F(CKeyBindingsTest, CancelLeavesTheBindingsAsTheyAre) {
    run({tap(EInputCodeType::DIK_ESCAPE)});
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
    EXPECT_EQ(frames_, 2);
}

TEST_F(CKeyBindingsTest, RestoreDefaultsPutsThemBackAndLeaves) {
    game_.controls.setBindings(EGameAction::Fire, chords({EInputCodeType::DIK_Q}));
    run({tap(EInputCodeType::DIK_RETURN)});
    EXPECT_THAT(bindings(EGameAction::Fire), ElementsAre(EInputCodeType::DIK_SPACE));
    EXPECT_EQ(frames_, 3);
}

TEST_F(CKeyBindingsTest, PickingACodeRebindsIt) {
    std::vector<EStep> steps = openForward();
    bindQ(steps);
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
    EXPECT_EQ(frames_, 13);
}

TEST_F(CKeyBindingsTest, AddBindingAddsOneAfterTheRest) {
    std::vector<EStep> steps = openForward();
    steps.push_back(tap(EInputCodeType::DIK_DOWN));
    bindQ(steps);
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk),
                ElementsAre(EInputCodeType::DIK_UP, EInputCodeType::DIK_Q));
}

// Back's default is the down arrow.
TEST_F(CKeyBindingsTest, ACodeTakenIsGivenUpByTheActionHoldingIt) {
    game_.controls.setBindings(EGameAction::Backup, chords({EInputCodeType::DIK_Q}));
    std::vector<EStep> steps = openForward();
    steps.push_back(tap(EInputCodeType::DIK_DOWN));
    bindQ(steps);
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Backup), IsEmpty());
}

TEST_F(CKeyBindingsTest, ACodeTakenIsHeldInOneSlot) {
    game_.controls.setBindings(EGameAction::Walk,
                               chords({EInputCodeType::DIK_UP, EInputCodeType::DIK_Q}));
    std::vector<EStep> steps = openForward();
    bindQ(steps);
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
}

TEST_F(CKeyBindingsTest, DeleteRemovesTheCodeAndStaysInTheList) {
    std::vector<EStep> steps = openForward();
    steps.push_back(tap(EInputCodeType::DIK_DELETE));
    steps.emplace_back();
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), IsEmpty());
}

TEST_F(CKeyBindingsTest, DeleteOnAddBindingDoesNothing) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_DOWN), tap(EInputCodeType::DIK_DELETE), {}});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
}

// Two held at once are no answer; the one left down is.
TEST_F(CKeyBindingsTest, OneCodeAloneIsTaken) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               {},
                               [this] {
                                   press(EInputCodeType::DIK_Q);
                                   press(EInputCodeType::DIK_C);
                               },
                               {},
                               release(EInputCodeType::DIK_C),
                               {},
                               release(EInputCodeType::DIK_Q)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
}

// A key still down from before is waited out, and Escape then backs out.
TEST_F(CKeyBindingsTest, EscapeWhileAKeyIsHeldBacksOut) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               tap(EInputCodeType::DIK_Q),
                               tap(EInputCodeType::DIK_ESCAPE),
                               release(EInputCodeType::DIK_Q)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
}

TEST_F(CKeyBindingsTest, AKeyLetGoIsWaitedFor) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               tap(EInputCodeType::DIK_C),
                               {},
                               release(EInputCodeType::DIK_C),
                               tap(EInputCodeType::DIK_Q),
                               {},
                               release(EInputCodeType::DIK_Q)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
}

// The modifiers held as the key goes down are its chord's.
TEST_F(CKeyBindingsTest, AKeyWithAModifierHeldIsTakenAsAChord) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               {},
                               tap(EInputCodeType::DIK_RCONTROL),
                               tap(EInputCodeType::DIK_Q),
                               release(EInputCodeType::DIK_Q),
                               release(EInputCodeType::DIK_RCONTROL)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(game_.controls.getBindings(EGameAction::Walk),
                ElementsAre(SKeyChord{.code = EInputCodeType::DIK_Q, .control = true}));
}

// Frames with nothing pressed are waited through.
TEST_F(CKeyBindingsTest, NothingPressedIsWaitedThrough) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               {},
                               {},
                               {},
                               tap(EInputCodeType::DIK_Q),
                               {},
                               release(EInputCodeType::DIK_Q)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
}

// Let go with no key pressed, a modifier is bound by itself.
TEST_F(CKeyBindingsTest, AModifierPressedAloneIsTakenAsItIsLetGo) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(), {tap(EInputCodeType::DIK_RETURN),
                               {},
                               {},
                               tap(EInputCodeType::DIK_LSHIFT),
                               {},
                               release(EInputCodeType::DIK_LSHIFT)});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(game_.controls.getBindings(EGameAction::Walk),
                ElementsAre(SKeyChord{.code = EInputCodeType::DIK_LSHIFT}));
}

// Two modifiers held together with no key make no chord; the first held alone is bound.
TEST_F(CKeyBindingsTest, TheFirstModifierAloneIsKeptWhenTwoAreLetGo) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(),
                 {tap(EInputCodeType::DIK_RETURN),
                  {},
                  {},
                  tap(EInputCodeType::DIK_LMENU),
                  {},
                  tap(EInputCodeType::DIK_LSHIFT),
                  [this] {
                      keyboard_.at(static_cast<std::size_t>(EInputCodeType::DIK_LMENU)) = 0;
                      keyboard_.at(static_cast<std::size_t>(EInputCodeType::DIK_LSHIFT)) = 0;
                  }});
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(game_.controls.getBindings(EGameAction::Walk),
                ElementsAre(SKeyChord{.code = EInputCodeType::DIK_LMENU}));
}

TEST_F(CKeyBindingsTest, ClosingTheWindowWhileWaitingForACodeLeaves) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(),
                 {tap(EInputCodeType::DIK_RETURN), {}, {}, [this] {
                      ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
                  }});
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
}

TEST_F(CKeyBindingsTest, ClosingTheWindowWhileAKeyIsHeldLeaves) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(),
                 {tap(EInputCodeType::DIK_RETURN), {}, tap(EInputCodeType::DIK_Q), [this] {
                      ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
                  }});
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
}

// The code is kept: it was pressed before the window closed.
TEST_F(CKeyBindingsTest, ClosingTheWindowBeforeTheCodeIsLetGoKeepsIt) {
    std::vector<EStep> steps = openForward();
    steps.insert(steps.end(),
                 {tap(EInputCodeType::DIK_RETURN), {}, {}, tap(EInputCodeType::DIK_Q), {}, [this] {
                      ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
                  }});
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_Q));
}

TEST_F(CKeyBindingsTest, LeavingWithACodeTheTypeLacksRestoresTheDefaults) {
    game_.controls.setBindings(EGameAction::Fire, chords({EInputCodeType::DIM_LBUTTON}));
    run({tap(EInputCodeType::DIK_ESCAPE)});
    EXPECT_THAT(bindings(EGameAction::Fire), ElementsAre(EInputCodeType::DIK_SPACE));
}

// Run reads Walk under always run, and an unbound action reads (none).
TEST_F(CKeyBindingsTest, TheListIsDrawn) {
    game_.always_run = 1;
    game_.controls.setBindings(EGameAction::Strafe, {});
    bool drawn = false;
    run({[&] {},
         [&] {
             drawn = anythingDrawn();
             press(EInputCodeType::DIK_ESCAPE);
         }});
    EXPECT_TRUE(drawn);
}

TEST_F(CKeyBindingsTest, AGamepadNobodyHasCentredIsCalibratedFirst) {
    game_.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
    EXPECT_THAT([this] { menu_.configureCustomKeyBindings(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CMenu::calibrateGamepad is not ported yet")));
}

TEST_F(CKeyBindingsTest, ACentredGamepadOpensTheList) {
    game_.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
    game_.restoreDefaultControls();
    run({tap(EInputCodeType::DIK_ESCAPE)});
    EXPECT_EQ(frames_, 2);
}

class CKeyDisplayNameTest : public CMenuFixture {};

TEST_F(CKeyDisplayNameTest, TheMouseAndTheJoystickAreNamedForWhatTheyAre) {
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::INPUT_NONE), "(none)");
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::DIM_LBUTTON), "Mouse B1");
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::DIJ_BUTTON10), "Button 10");
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::DIJ_UP), "Left Stick Forward");
}

TEST_F(CKeyDisplayNameTest, KeysAreNamedByTheirNames) {
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::DIK_SPACE), "Space");
}

TEST_F(CKeyDisplayNameTest, AChordNamesItsModifiersFirst) {
    EXPECT_EQ(menu_.getChordDisplayName({.code = EInputCodeType::DIK_SPACE}), "Space");
    EXPECT_EQ(menu_.getChordDisplayName(
                  {.code = EInputCodeType::DIK_SPACE, .control = true, .alt = true, .shift = true}),
              "Ctrl+Alt+Shift+Space");
}

// As the pad plugged in labels them.
TEST_F(CKeyDisplayNameTest, ThePadsOwnCodesAreNamedForThePad) {
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::PAD_A), "A");
    ON_CALL(game_parts_.getGamepad().gamepad, getGamepadType())
        .WillByDefault(Return(platform::EGamepadType::PS4));
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::PAD_A), "Cross");
}

struct SModeCase {
    EControlMode mode;
    EInputCodeType code;
    bool valid;
};

class CKeyCodeValidForModeTest : public CMenuFixture,
                                 public ::testing::WithParamInterface<SModeCase> {};

TEST_P(CKeyCodeValidForModeTest, ATypeTakesTheCodesOfItsDevices) {
    game_.game_control = GetParam().mode;
    EXPECT_EQ(menu_.isKeyCodeValidForMode(GetParam().code), GetParam().valid);
}

constexpr EControlMode kKeyboard = EControlMode::CONTROL_MODE_KEYBOARD;
constexpr EControlMode kMouse = EControlMode::CONTROL_MODE_MOUSE;
constexpr EControlMode kGamepad = EControlMode::CONTROL_MODE_GAMEPAD;

INSTANTIATE_TEST_SUITE_P(EveryType, CKeyCodeValidForModeTest,
                         ::testing::Values(SModeCase{kKeyboard, EInputCodeType::DIK_SPACE, true},
                                           SModeCase{kKeyboard, EInputCodeType::PAD_A, true},
                                           SModeCase{kKeyboard, EInputCodeType::INPUT_NONE, true},
                                           SModeCase{kKeyboard, EInputCodeType::DIM_LBUTTON, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIM_RBUTTON, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIM_MBUTTON, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIM_XAXIS, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIM_YAXIS, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIJ_BUTTON1, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIJ_BUTTON10,
                                                     false},
                                           SModeCase{kKeyboard, EInputCodeType::DIJ_LEFT, false},
                                           SModeCase{kKeyboard, EInputCodeType::DIJ_DOWN, false},
                                           SModeCase{kMouse, EInputCodeType::DIM_LBUTTON, true},
                                           SModeCase{kMouse, EInputCodeType::DIM_YAXIS, true},
                                           SModeCase{kMouse, EInputCodeType::DIJ_BUTTON1, false},
                                           SModeCase{kMouse, EInputCodeType::DIJ_UP, false},
                                           SModeCase{kGamepad, EInputCodeType::DIJ_BUTTON1, true},
                                           SModeCase{kGamepad, EInputCodeType::DIJ_RIGHT, true},
                                           SModeCase{kGamepad, EInputCodeType::DIK_SPACE, true},
                                           SModeCase{kGamepad, EInputCodeType::DIM_RBUTTON, false},
                                           SModeCase{kGamepad, EInputCodeType::DIM_XAXIS, false}));

} // namespace
} // namespace nocturne::core
