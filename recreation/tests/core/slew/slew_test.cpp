#include "common/math/vector3f.h"
#include "core/slew/slew.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "tests/mocks/common/vector3fequal.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cmath>
#include <cstdint>
#include <initializer_list>
#include <span>
#include <type_traits>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

TEST(CSlew, IsConcrete) {
    static_assert(!std::is_abstract_v<CSlew>);
}

TEST(CSlew, PublicInterface) {
    static_assert(
        std::is_constructible_v<CSlew, const common::CVector3f &, const common::CVector3f &>);
    static_assert(
        std::is_same_v<decltype(&CSlew::processInput), void (CSlew::*)(engine::CKeys &, float)>);
    static_assert(
        std::is_same_v<decltype(&CSlew::getPosition), const common::CVector3f &(CSlew::*)() const>);
    static_assert(std::is_same_v<decltype(&CSlew::getOrientation),
                                 const common::CVector3f &(CSlew::*)() const>);
}

// The keys held, through the keyboard state CKeys reads.
class CSlewTest : public ::testing::Test {
protected:
    CSlewTest() {
        ON_CALL(raw_input_, getKeyboardState()).WillByDefault([this] {
            return std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_);
        });
        ON_CALL(raw_input_, getInputKeyMask()).WillByDefault(::testing::Return(0x1ff));
    }

    void hold(std::initializer_list<EInputCodeType> codes) {
        keyboard_.fill(0);
        for (const EInputCodeType code : codes) {
            keyboard_[static_cast<std::size_t>(code)] = 1;
        }
    }

    // One frame of a slew from start, at a time of a quarter second.
    [[nodiscard]] CSlew steer(std::initializer_list<EInputCodeType> codes,
                              const common::CVector3f &position = {},
                              const common::CVector3f &orientation = {}) {
        hold(codes);
        CSlew slew(position, orientation);
        slew.processInput(keys_, kQuarterSecond);
        return slew;
    }

    static constexpr float kQuarterSecond = 0.25F;
    // A quarter second's turn and move at the original's pi.
    static constexpr float kTurn = static_cast<float>(0.25 * 3.1415926535);
    static constexpr float kMove = 2.0F;

    ::testing::NiceMock<engine::MockRawInput> raw_input_;
    ::testing::NiceMock<engine::MockScreenDevice> screen_;
    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> keyboard_{};
    engine::CKeys keys_{raw_input_, screen_};
};

TEST_F(CSlewTest, NoKeysLeaveThePlaceAndTurn) {
    const common::CVector3f place{.x = 1.0F, .y = 2.0F, .z = 3.0F};
    const common::CVector3f turn{.x = 0.1F, .y = 0.2F, .z = 0.3F};
    const CSlew slew = steer({}, place, turn);
    EXPECT_TRUE(common::isSameVector(slew.getPosition(), place));
    EXPECT_TRUE(common::isSameVector(slew.getOrientation(), turn));
}

// 1 and 3 turn the heading, F5 and F8 pitch, 7 and 9 roll, by pi radians a second.
TEST_F(CSlewTest, TheTurnKeysTurnAtPiASecond) {
    EXPECT_EQ(steer({EInputCodeType::DIK_NUMPAD1}).getOrientation().y, -kTurn);
    EXPECT_EQ(steer({EInputCodeType::DIK_NUMPAD3}).getOrientation().y, kTurn);
    EXPECT_EQ(steer({EInputCodeType::DIK_F5}).getOrientation().x, -kTurn);
    EXPECT_EQ(steer({EInputCodeType::DIK_F8}).getOrientation().x, kTurn);
    EXPECT_EQ(steer({EInputCodeType::DIK_NUMPAD7}).getOrientation().z, -kTurn);
    EXPECT_EQ(steer({EInputCodeType::DIK_NUMPAD9}).getOrientation().z, kTurn);
    const CSlew both = steer({EInputCodeType::DIK_NUMPAD1, EInputCodeType::DIK_NUMPAD3});
    EXPECT_EQ(both.getOrientation().y, 0.0F);
}

// Q rises and A falls by 8 units a second.
TEST_F(CSlewTest, QAndAMoveUpAndDown) {
    EXPECT_EQ(steer({EInputCodeType::DIK_Q}).getPosition().y, kMove);
    EXPECT_EQ(steer({EInputCodeType::DIK_A}).getPosition().y, -kMove);
}

// 8 goes along the heading, 2 back, 4 and 6 a quarter turn to either side.
TEST_F(CSlewTest, TheKeypadMovesAlongTheHeading) {
    const common::CVector3f facing_x{.y = 1.5707963F};
    const CSlew forward = steer({EInputCodeType::DIK_NUMPAD8}, {}, facing_x);
    EXPECT_NEAR(forward.getPosition().x, kMove, 1e-6F);
    EXPECT_NEAR(forward.getPosition().z, 0.0F, 1e-6F);
    EXPECT_EQ(forward.getPosition().y, 0.0F);
    const CSlew back = steer({EInputCodeType::DIK_NUMPAD2}, {}, facing_x);
    EXPECT_NEAR(back.getPosition().x, -kMove, 1e-6F);
    const CSlew left = steer({EInputCodeType::DIK_NUMPAD4}, {}, facing_x);
    EXPECT_NEAR(left.getPosition().x, 0.0F, 1e-6F);
    EXPECT_NEAR(left.getPosition().z, kMove, 1e-6F);
    const CSlew right = steer({EInputCodeType::DIK_NUMPAD6}, {}, facing_x);
    EXPECT_NEAR(right.getPosition().z, -kMove, 1e-6F);
    EXPECT_TRUE(common::isSameVector(right.getOrientation(), facing_x));
}

// Alt slows to a twentieth and outranks Shift, which speeds tenfold.
TEST_F(CSlewTest, AltSlowsAndShiftSpeeds) {
    EXPECT_EQ(steer({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_Q}).getPosition().y,
              static_cast<float>(0.25F * 0.05) * 8.0F);
    EXPECT_EQ(steer({EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_Q}).getPosition().y, 20.0F);
    EXPECT_EQ(steer({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_Q})
                  .getPosition()
                  .y,
              static_cast<float>(0.25F * 0.05) * 8.0F);
}

// 5 levels every angle, after the frame's other turns.
TEST_F(CSlewTest, FiveLevelsTheTurn) {
    const CSlew level = steer({EInputCodeType::DIK_NUMPAD5, EInputCodeType::DIK_NUMPAD3},
                              {.x = 1.0F}, {.x = 0.5F, .y = 0.5F, .z = 0.5F});
    EXPECT_TRUE(common::isSameVector(level.getOrientation(), {}));
    EXPECT_EQ(level.getPosition().x, 1.0F);
}

} // namespace
} // namespace nocturne::core
