#include "common/error/fatalerror.h"
#include "core/game/aimmode.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/menu/controloptionspage.h"
#include "core/menu/menupage.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The lines' ids, in the order they are listed.
constexpr int kType = 0;
constexpr int kKeys = 1;
constexpr int kXSensitivity = 2;
constexpr int kYSensitivity = 3;
constexpr int kInvertY = 4;
constexpr int kCalibrate = 5;

TEST(CControlOptionsPage, PublicInterface) {
    static_assert(std::is_base_of_v<CMenuPage, CControlOptionsPage>);
    static_assert(std::is_final_v<CControlOptionsPage>);
    static_assert(std::is_constructible_v<CControlOptionsPage, CMenu &, const SMenuOwners &>);
}

class CControlOptionsPageTest : public CMenuFixture {
protected:
    [[nodiscard]] std::vector<std::string> texts() {
        std::vector<SMenuLine> lines;
        page_.build(lines);
        std::vector<std::string> result;
        result.reserve(lines.size());
        for (const SMenuLine &line : lines) {
            result.push_back(line.text);
        }
        return result;
    }

    void setControlMode(EControlMode mode) {
        game_.game_control = mode;
        game_.restoreDefaultControls();
    }

    CControlOptionsPage page_{menu_, menu_owners_};
};

TEST_F(CControlOptionsPageTest, TheTitleIsControlOptions) {
    EXPECT_EQ(page_.title(), std::optional<std::string>("Control Options"));
}

TEST_F(CControlOptionsPageTest, TheKeyboardHasItsTypeTheBindingsAndTheSensitivities) {
    game_.x_mouse_sensitivity = 0x18000;
    EXPECT_EQ(texts(), (std::vector<std::string>{"Control : Keyboard", "Customize Keys",
                                                 "X-axis sensitivity :  1.50",
                                                 "Y-axis sensitivity :  1.00"}));
}

TEST_F(CControlOptionsPageTest, TheMouseAddsItsInversion) {
    setControlMode(EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_EQ(texts().front(), "Control : Keyboard/Mouse");
    EXPECT_EQ(texts().back(), "Invert Y Axis : OFF");
    EXPECT_EQ(page_.choose(kInvertY, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(texts().back(), "Invert Y Axis : ON");
    EXPECT_EQ(page_.choose(kInvertY, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.invert_mouse_y_axis, 0);
}

TEST_F(CControlOptionsPageTest, TheGamepadAddsCalibrate) {
    setControlMode(EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_EQ(texts().front(), "Control : Gamepad");
    EXPECT_EQ(texts().back(), "Calibrate");
    EXPECT_THAT(
        [this] { static_cast<void>(page_.choose(kCalibrate, EMenuStep::On)); },
        ThrowsMessage<common::CFatalError>(StrEq("CMenu::calibrateGamepad is not ported yet")));
}

// Each type comes with its own defaults: the mouse aims by hand, the gamepad is calibrated.
TEST_F(CControlOptionsPageTest, TheTypeStepsEitherWayWithItsDefaults) {
    EXPECT_EQ(page_.choose(kType, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_MANUAL);
    EXPECT_EQ(page_.choose(kType, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_NE(game_.x_center, 0);
    EXPECT_EQ(page_.choose(kType, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_AUTO);
    EXPECT_EQ(page_.choose(kType, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_GAMEPAD);
}

// The slider's first frame steps it on, its second keeps it or cancels.
TEST_F(CControlOptionsPageTest, TheSensitivitiesOpenTheSlider) {
    on_frame_ = [this](int frame) {
        press(frame % 2 == 1 ? engine::EInputCodeType::DIK_RIGHT
                             : engine::EInputCodeType::DIK_RETURN);
    };
    EXPECT_EQ(page_.choose(kXSensitivity, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.x_mouse_sensitivity, 0x10000 + 700);
    on_frame_ = [this](int frame) {
        press(frame % 2 == 1 ? engine::EInputCodeType::DIK_RIGHT
                             : engine::EInputCodeType::DIK_ESCAPE);
    };
    EXPECT_EQ(page_.choose(kYSensitivity, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.y_mouse_sensitivity, 0x10000);
}

// The bindings' list is up from the second frame; the first clears the screen.
TEST_F(CControlOptionsPageTest, CustomizeKeysOpensTheBindings) {
    on_frame_ = [this](int /*frame*/) { press(engine::EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(page_.choose(kKeys, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(frames_, 2);
}

TEST_F(CControlOptionsPageTest, CancelLeaves) {
    EXPECT_EQ(page_.endFrame(), EMenuOutcome::Stay);
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page_.endFrame(), EMenuOutcome::Leave);
}

TEST_F(CControlOptionsPageTest, ClosingTheWindowLeaves) {
    ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    EXPECT_EQ(page_.endFrame(), EMenuOutcome::Leave);
}

// As an INI can leave it: a gamepad whose centre was saved as nothing.
TEST_F(CControlOptionsPageTest, LeavingWithAGamepadNobodyHasCentredCalibratesIt) {
    setControlMode(EControlMode::CONTROL_MODE_GAMEPAD);
    game_.x_center = 0;
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_THAT(
        [this] { static_cast<void>(page_.endFrame()); },
        ThrowsMessage<common::CFatalError>(StrEq("CMenu::calibrateGamepad is not ported yet")));
}

TEST_F(CControlOptionsPageTest, ACentredGamepadLeavesAsCancelled) {
    setControlMode(EControlMode::CONTROL_MODE_GAMEPAD);
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page_.endFrame(), EMenuOutcome::Leave);
}

} // namespace
} // namespace nocturne::core
