#include "common/error/fatalerror.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/menu/menu.h"
#include "engine/keys/inputcodetype.h"
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

    [[nodiscard]] std::span<const EInputCodeType> bindings(EGameAction action) const {
        return game_.controls.getBindings(action);
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

TEST_F(CKeyBindingsTest, CancelLeavesTheBindingsAsTheyAre) {
    run({tap(EInputCodeType::DIK_ESCAPE)});
    EXPECT_THAT(bindings(EGameAction::Walk), ElementsAre(EInputCodeType::DIK_UP));
    EXPECT_EQ(frames_, 2);
}

TEST_F(CKeyBindingsTest, RestoreDefaultsPutsThemBackAndLeaves) {
    game_.controls.setBindings(EGameAction::Fire, {EInputCodeType::DIK_Q});
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
    game_.controls.setBindings(EGameAction::Backup, {EInputCodeType::DIK_Q});
    std::vector<EStep> steps = openForward();
    steps.push_back(tap(EInputCodeType::DIK_DOWN));
    bindQ(steps);
    leave(steps);
    run(std::move(steps));
    EXPECT_THAT(bindings(EGameAction::Backup), IsEmpty());
}

TEST_F(CKeyBindingsTest, ACodeTakenIsHeldInOneSlot) {
    game_.controls.setBindings(EGameAction::Walk, {EInputCodeType::DIK_UP, EInputCodeType::DIK_Q});
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
    game_.controls.setBindings(EGameAction::Fire, {EInputCodeType::DIM_LBUTTON});
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
    EXPECT_EQ(menu_.getKeyDisplayName(EInputCodeType::PAD_A), "(invalid key)");
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
