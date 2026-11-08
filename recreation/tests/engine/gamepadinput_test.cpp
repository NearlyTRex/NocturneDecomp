#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/menuinput.h"
#include "platform/gamepad.h"
#include "tests/mocks/platform/mockclock.h"
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
#include <vector>

namespace nocturne::engine {
namespace {

using platform::EGamepadAxis;
using platform::EGamepadButton;
using ::testing::NiceMock;
using ::testing::Return;

constexpr std::int16_t kFull = 32767;

TEST(CGamepadInput, Constructors) {
    static_assert(std::is_constructible_v<CGamepadInput, platform::IGamepad &,
                                          platform::IFileSystem &, platform::IClock &>);
}

TEST(CGamepadInput, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGamepadInput::pump),
                                 void (CGamepadInput::*)(
                                     std::span<std::uint8_t, IRawInput::kInputCodeCount>, bool)>);
    static_assert(std::is_same_v<decltype(&CGamepadInput::getAxes),
                                 const SGamepadAxes &(CGamepadInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGamepadInput::isPresent), bool (CGamepadInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGamepadInput::noteGameplayFrame), void (CGamepadInput::*)()>);
    static_assert(std::is_same_v<decltype(&CGamepadInput::takeMenuAction),
                                 bool (CGamepadInput::*)(EMenuAction)>);
    static_assert(std::is_same_v<decltype(&CGamepadInput::withdrawMenuAction),
                                 void (CGamepadInput::*)(EMenuAction)>);
    static_assert(
        std::is_same_v<decltype(&CGamepadInput::clearMenuActions), void (CGamepadInput::*)()>);
    static_assert(std::is_same_v<decltype(&CGamepadInput::getTypedCharacters),
                                 std::span<const int> (CGamepadInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGamepadInput::getCodeName),
                       std::optional<std::string_view> (CGamepadInput::*)(EInputCodeType) const>);
}

TEST(CGamepadInput, ThePadsMappingsAreReadFromTheGamesDirectory) {
    NiceMock<platform::MockGamepad> gamepad;
    NiceMock<platform::MockFileSystem> file_system;
    NiceMock<platform::MockClock> clock;
    ON_CALL(file_system, getFullPath(std::string_view("gamecontrollerdb.txt")))
        .WillByDefault(Return(std::optional<std::string>("/game/gamecontrollerdb.txt")));
    EXPECT_CALL(gamepad, addGamepadMappings(std::string_view("/game/gamecontrollerdb.txt")));
    const CGamepadInput input(gamepad, file_system, clock);
}

TEST(CGamepadInput, APathThatCantBeMadeLoadsNoMappings) {
    NiceMock<platform::MockGamepad> gamepad;
    NiceMock<platform::MockFileSystem> file_system;
    NiceMock<platform::MockClock> clock;
    EXPECT_CALL(gamepad, addGamepadMappings).Times(0);
    const CGamepadInput input(gamepad, file_system, clock);
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
        ON_CALL(gamepad_, getGamepadType()).WillByDefault([this] { return type_; });
        ON_CALL(clock_, getCounter()).WillByDefault([this] { return now_ms_; });
        ON_CALL(clock_, getCounterFrequency()).WillByDefault(Return(kMillisecondsPerSecond));
    }

    // A pump that many milliseconds on.
    void pumpAfter(std::uint64_t milliseconds) {
        now_ms_ += milliseconds;
        pump();
    }

    [[nodiscard]] std::vector<int> typed() const {
        const std::span<const int> characters = input_.getTypedCharacters();
        return {characters.begin(), characters.end()};
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

    static constexpr std::uint64_t kMillisecondsPerSecond = 1000;

    NiceMock<platform::MockGamepad> gamepad_;
    NiceMock<platform::MockFileSystem> file_system_;
    NiceMock<platform::MockClock> clock_;
    CGamepadInput input_{gamepad_, file_system_, clock_};
    std::array<std::uint8_t, IRawInput::kInputCodeCount> state_{};
    bool plugged_ = true;
    platform::EGamepadType type_ = platform::EGamepadType::Unknown;
    std::uint64_t now_ms_ = 0;
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

// The d-pad moves; so does the left stick, the d-pad let go.
TEST_F(CGamepadInputTest, TheDpadAndTheLeftStickMoveThroughMenus) {
    held_ = {EGamepadButton::DpadUp, EGamepadButton::DpadDown, EGamepadButton::DpadLeft,
             EGamepadButton::DpadRight};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Left));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Right));
    held_.clear();
    pump();
    axes_[EGamepadAxis::LeftX] = fraction(-0.7F);
    axes_[EGamepadAxis::LeftY] = fraction(-0.7F);
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Left));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Right));
    axes_[EGamepadAxis::LeftX] = fraction(0.7F);
    axes_[EGamepadAxis::LeftY] = fraction(0.7F);
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Right));
}

// Pressed as it goes down, again 400 ms on, then every 110 ms while held.
TEST_F(CGamepadInputTest, AHeldDirectionRepeats) {
    held_ = {EGamepadButton::DpadDown};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    pumpAfter(399);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Down));
    pumpAfter(1);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
    pumpAfter(109);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Down));
    pumpAfter(1);
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Down));
}

// A confirms, B or Start cancels and X deletes, once a press however long it is held.
TEST_F(CGamepadInputTest, TheFaceButtonsPressOncePerPress) {
    held_ = {EGamepadButton::A, EGamepadButton::X};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Delete));
    pumpAfter(1000);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Delete));
    held_ = {EGamepadButton::B};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Cancel));
    held_ = {EGamepadButton::Start};
    pump();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Cancel));
    held_.clear();
    pump();
    held_ = {EGamepadButton::Start};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Cancel));
}

// A press nobody took is gone once the button is let go, so it doesn't wait for the next screen.
TEST_F(CGamepadInputTest, AReleaseTakesBackAPressNobodyTook) {
    held_ = {EGamepadButton::A, EGamepadButton::DpadUp};
    pump();
    held_.clear();
    pump();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Up));
}

TEST_F(CGamepadInputTest, AWithdrawnOrClearedPressIsGone) {
    held_ = {EGamepadButton::B, EGamepadButton::A};
    pump();
    input_.withdrawMenuAction(EMenuAction::Cancel);
    input_.withdrawMenuAction(EMenuAction::Home);
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Cancel));
    input_.clearMenuActions();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
}

// The pad makes no press of the menus' other actions.
TEST_F(CGamepadInputTest, OnlyItsOwnActionsAreTaken) {
    held_ = {EGamepadButton::Back, EGamepadButton::Guide};
    pump();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Home));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Copy));
}

// For three pumps after a frame of play nothing presses, and a button pressed then needs pressing
// again.
TEST_F(CGamepadInputTest, AFrameOfPlayKeepsThePadOffTheMenus) {
    input_.noteGameplayFrame();
    held_ = {EGamepadButton::A, EGamepadButton::DpadUp};
    pump();
    pump();
    pump();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Up));
    EXPECT_TRUE(typed().empty());
    EXPECT_EQ(state(EInputCodeType::PAD_A), 1);
    pump();
    EXPECT_FALSE(input_.takeMenuAction(EMenuAction::Confirm));
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Up));
    held_.clear();
    pump();
    held_ = {EGamepadButton::A};
    pump();
    EXPECT_TRUE(input_.takeMenuAction(EMenuAction::Confirm));
}

// For the screens that wait for any key; the directions and delete type nothing, and the next
// pump forgets what was typed.
TEST_F(CGamepadInputTest, ConfirmAndCancelTypeReturnAndEscape) {
    held_ = {EGamepadButton::A, EGamepadButton::B, EGamepadButton::X, EGamepadButton::DpadUp};
    pump();
    EXPECT_EQ(typed(), (std::vector<int>{0x0d, 0x1b}));
    pump();
    EXPECT_TRUE(typed().empty());
}

TEST_F(CGamepadInputTest, ButtonsAreNamedAsThePadLabelsThem) {
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_A), "A");
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_LTRIGGER), "LT");
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_RSTICK_DOWN), "Right Stick Down");
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_MISC6), "Button");
    type_ = platform::EGamepadType::PS5;
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_A), "Cross");
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_RTRIGGER), "R2");
    type_ = platform::EGamepadType::SwitchPro;
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_A), "B");
    EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_LTRIGGER), "ZL");
}

TEST_F(CGamepadInputTest, EachPadTypeHasItsFamilysLabels) {
    using platform::EGamepadType;
    const std::map<EGamepadType, std::string_view> expected{
        {EGamepadType::Unknown, "A"},    {EGamepadType::Standard, "A"},
        {EGamepadType::Xbox360, "A"},    {EGamepadType::XboxOne, "A"},
        {EGamepadType::PS3, "Cross"},    {EGamepadType::PS4, "Cross"},
        {EGamepadType::PS5, "Cross"},    {EGamepadType::SwitchPro, "B"},
        {EGamepadType::JoyConLeft, "B"}, {EGamepadType::JoyConRight, "B"},
        {EGamepadType::JoyConPair, "B"}, {EGamepadType::GameCube, "A"},
    };
    for (const auto &[type, name] : expected) {
        type_ = type;
        EXPECT_EQ(input_.getCodeName(EInputCodeType::PAD_A), name);
    }
}

// The keyboard's, the mouse's and the left stick's codes are named elsewhere.
TEST_F(CGamepadInputTest, CodesNotThePadsOwnHaveNoName) {
    EXPECT_EQ(input_.getCodeName(EInputCodeType::DIK_A), std::nullopt);
    EXPECT_EQ(input_.getCodeName(EInputCodeType::DIJ_UP), std::nullopt);
}

} // namespace
} // namespace nocturne::engine
