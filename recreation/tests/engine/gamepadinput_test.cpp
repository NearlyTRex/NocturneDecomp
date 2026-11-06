#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "platform/gamepad.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockgamepad.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <map>
#include <optional>
#include <set>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::engine {
namespace {

using platform::EGamepadAxis;
using platform::EGamepadButton;
using ::testing::NiceMock;
using ::testing::Return;

constexpr std::int16_t kFull = 32767;

TEST(CGamepadInput, Constructors) {
    static_assert(
        std::is_constructible_v<CGamepadInput, platform::IGamepad &, platform::IFileSystem &>);
}

TEST(CGamepadInput, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGamepadInput::pump),
                                 void (CGamepadInput::*)(
                                     std::span<std::uint8_t, IRawInput::kInputCodeCount>, bool)>);
    static_assert(std::is_same_v<decltype(&CGamepadInput::getAxes),
                                 const SGamepadAxes &(CGamepadInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGamepadInput::isPresent), bool (CGamepadInput::*)() const>);
}

TEST(CGamepadInput, ThePadsMappingsAreReadFromTheGamesDirectory) {
    NiceMock<platform::MockGamepad> gamepad;
    NiceMock<platform::MockFileSystem> file_system;
    ON_CALL(file_system, getFullPath(std::string_view("gamecontrollerdb.txt")))
        .WillByDefault(Return(std::optional<std::string>("/game/gamecontrollerdb.txt")));
    EXPECT_CALL(gamepad, addGamepadMappings(std::string_view("/game/gamecontrollerdb.txt")));
    const CGamepadInput input(gamepad, file_system);
}

TEST(CGamepadInput, APathThatCantBeMadeLoadsNoMappings) {
    NiceMock<platform::MockGamepad> gamepad;
    NiceMock<platform::MockFileSystem> file_system;
    EXPECT_CALL(gamepad, addGamepadMappings).Times(0);
    const CGamepadInput input(gamepad, file_system);
}

// A pad plugged in, with the buttons and axes the test sets, and the window focused.
class CGamepadInputTest : public ::testing::Test {
protected:
    CGamepadInputTest() {
        ON_CALL(gamepad_, updateGamepad()).WillByDefault([this] { return plugged_; });
        ON_CALL(gamepad_, getGamepadButton).WillByDefault([this](EGamepadButton button) {
            return held_.contains(button);
        });
        ON_CALL(gamepad_, getGamepadAxis).WillByDefault([this](EGamepadAxis axis) {
            const auto found = axes_.find(axis);
            return found == axes_.end() ? std::int16_t{0} : found->second;
        });
    }

    void pump(bool focused = true) {
        input_.pump(state_, focused);
    }

    [[nodiscard]] int state(EInputCodeType code) const {
        return state_.at(static_cast<std::size_t>(code));
    }

    void take(EInputCodeType code) {
        state_.at(static_cast<std::size_t>(code)) = 0;
    }

    static std::int16_t fraction(float value) {
        return static_cast<std::int16_t>(std::lround(value * kFull));
    }

    NiceMock<platform::MockGamepad> gamepad_;
    NiceMock<platform::MockFileSystem> file_system_;
    CGamepadInput input_{gamepad_, file_system_};
    std::array<std::uint8_t, IRawInput::kInputCodeCount> state_{};
    bool plugged_ = true;
    std::set<EGamepadButton> held_;
    std::map<EGamepadAxis, std::int16_t> axes_;
};

// Set as it goes down; a menu that takes it sees no more until the next press; cleared on
// release.
TEST_F(CGamepadInputTest, AButtonIsSetOnThePressAndClearedOnTheRelease) {
    held_ = {EGamepadButton::A, EGamepadButton::Misc6};
    pump();
    EXPECT_TRUE(input_.isPresent());
    EXPECT_EQ(state(EInputCodeType::PAD_A), 1);
    EXPECT_EQ(state(EInputCodeType::PAD_MISC6), 1);
    take(EInputCodeType::PAD_A);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_A), 0);
    EXPECT_EQ(state(EInputCodeType::PAD_MISC6), 1);
    held_.clear();
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_MISC6), 0);
    held_ = {EGamepadButton::A};
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_A), 1);
}

// Another copy of the game may have the focus; the pad then reads as released.
TEST_F(CGamepadInputTest, WithoutTheFocusThePadReadsAsReleased) {
    held_ = {EGamepadButton::B};
    axes_[EGamepadAxis::LeftX] = kFull;
    pump(false);
    EXPECT_EQ(state(EInputCodeType::PAD_B), 0);
    EXPECT_EQ(input_.getAxes().move_x, 0.0F);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_B), 1);
    EXPECT_EQ(input_.getAxes().move_x, 1.0F);
}

// Unplugged, every code clears; plugged in again, a button already down is a new press.
TEST_F(CGamepadInputTest, APadPluggedInAgainStartsAfresh) {
    held_ = {EGamepadButton::Y};
    pump();
    take(EInputCodeType::PAD_Y);
    plugged_ = false;
    state_.at(static_cast<std::size_t>(EInputCodeType::PAD_Y)) = 1;
    pump();
    EXPECT_FALSE(input_.isPresent());
    EXPECT_EQ(state(EInputCodeType::PAD_Y), 0);
    plugged_ = true;
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_Y), 1);
}

// Pressed past 0.35, it stays pressed until it falls below 0.2.
TEST_F(CGamepadInputTest, ATriggerIsAButtonWithHysteresis) {
    axes_[EGamepadAxis::RightTrigger] = fraction(0.3F);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RTRIGGER), 0);
    axes_[EGamepadAxis::RightTrigger] = fraction(0.4F);
    axes_[EGamepadAxis::LeftTrigger] = fraction(0.4F);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RTRIGGER), 1);
    EXPECT_EQ(state(EInputCodeType::PAD_LTRIGGER), 1);
    axes_[EGamepadAxis::RightTrigger] = fraction(0.25F);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RTRIGGER), 1);
    EXPECT_NEAR(input_.getAxes().right_trigger, 0.25F, 1e-4F);
    axes_[EGamepadAxis::RightTrigger] = fraction(0.15F);
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RTRIGGER), 0);
}

// Past four tenths after the deadzone, the right stick is its four codes and the left the
// original joystick's.
TEST_F(CGamepadInputTest, TheSticksAreDirectionsPastFourTenths) {
    axes_[EGamepadAxis::RightX] = -kFull;
    axes_[EGamepadAxis::RightY] = 0;
    axes_[EGamepadAxis::LeftY] = kFull;
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_LEFT), 1);
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_RIGHT), 0);
    EXPECT_EQ(state(EInputCodeType::DIJ_DOWN), 1);
    EXPECT_EQ(state(EInputCodeType::DIJ_UP), 0);
    axes_.clear();
    axes_[EGamepadAxis::RightX] = kFull;
    axes_[EGamepadAxis::RightY] = kFull;
    axes_[EGamepadAxis::LeftX] = -kFull;
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_LEFT), 0);
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_RIGHT), 1);
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_DOWN), 1);
    EXPECT_EQ(state(EInputCodeType::DIJ_LEFT), 1);
    EXPECT_EQ(state(EInputCodeType::DIJ_DOWN), 0);
    axes_.clear();
    axes_[EGamepadAxis::RightY] = -kFull;
    axes_[EGamepadAxis::LeftX] = kFull;
    pump();
    EXPECT_EQ(state(EInputCodeType::PAD_RSTICK_UP), 1);
    EXPECT_EQ(state(EInputCodeType::DIJ_RIGHT), 1);
    axes_.clear();
    axes_[EGamepadAxis::LeftY] = -kFull;
    pump();
    EXPECT_EQ(state(EInputCodeType::DIJ_UP), 1);
}

// Inside the deadzone a stick is centred; past it the rest of its travel is rescaled to 0..1.
TEST_F(CGamepadInputTest, TheDeadzoneIsRemovedAndTheRestRescaled) {
    axes_[EGamepadAxis::LeftX] = fraction(0.2F);
    pump();
    EXPECT_EQ(input_.getAxes().move_x, 0.0F);
    axes_[EGamepadAxis::LeftX] = fraction(0.6F);
    pump();
    EXPECT_NEAR(input_.getAxes().move_x, 0.5F, 1e-4F);
    input_.tuning.deadzone = 40;
    pump();
    EXPECT_NEAR(input_.getAxes().move_x, 1.0F / 3.0F, 1e-4F);
}

// A square gate's corner is full deflection along the diagonal, not on both axes; SDL's extra
// negative step is held to -1.
TEST_F(CGamepadInputTest, AStickStaysInsideTheUnitCircle) {
    axes_[EGamepadAxis::RightX] = kFull;
    axes_[EGamepadAxis::RightY] = kFull;
    pump();
    const SGamepadAxes &axes = input_.getAxes();
    EXPECT_NEAR(std::hypot(axes.look_x, axes.look_y), 1.0F, 1e-5F);
    axes_.clear();
    axes_[EGamepadAxis::LeftY] = -32768;
    pump();
    EXPECT_EQ(input_.getAxes().move_y, -1.0F);
}

} // namespace
} // namespace nocturne::engine
