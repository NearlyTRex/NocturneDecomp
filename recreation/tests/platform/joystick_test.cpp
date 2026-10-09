#include "platform/joystick.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IJoystick, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IJoystick>);
    static_assert(std::has_virtual_destructor_v<IJoystick>);
}

TEST(IJoystick, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IJoystick::getCaps),
                                 std::optional<SJoystickCaps> (IJoystick::*)()>);
    static_assert(
        std::is_same_v<decltype(&IJoystick::readState), bool (IJoystick::*)(SJoystickState &)>);
}

TEST(SJoystickCaps, DefaultsToNoButtonsAndNoHat) {
    const SJoystickCaps caps;
    EXPECT_EQ(caps.button_count, 0);
    EXPECT_FALSE(caps.has_pov);
}

TEST(SJoystickState, DefaultsToZeroedAxesAndACentredHat) {
    const SJoystickState state;
    EXPECT_EQ(state.x, 0U);
    EXPECT_EQ(state.y, 0U);
    EXPECT_EQ(state.z, 0U);
    EXPECT_EQ(state.r, 0U);
    EXPECT_EQ(state.buttons, 0U);
    EXPECT_FALSE(state.pov.has_value());
}

} // namespace
} // namespace nocturne::platform
