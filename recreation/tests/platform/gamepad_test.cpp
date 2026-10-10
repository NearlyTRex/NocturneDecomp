#include "platform/gamepad.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IGamepad, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IGamepad>);
    static_assert(std::has_virtual_destructor_v<IGamepad>);
}

TEST(IGamepad, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IGamepad::updateGamepad), bool (IGamepad::*)()>);
    static_assert(
        std::is_same_v<decltype(&IGamepad::getGamepadButton), bool (IGamepad::*)(EGamepadButton)>);
    static_assert(std::is_same_v<decltype(&IGamepad::getGamepadAxis),
                                 std::int16_t (IGamepad::*)(EGamepadAxis)>);
    static_assert(
        std::is_same_v<decltype(&IGamepad::getGamepadType), EGamepadType (IGamepad::*)()>);
    static_assert(std::is_same_v<decltype(&IGamepad::addGamepadMappings),
                                 int (IGamepad::*)(std::string_view)>);
}

// The decomp's saved pad codes are 0x160 + these values, in SDL2's button order.
TEST(EGamepadButton, KeepsThePersistedCodeOrder) {
    static_assert(static_cast<int>(EGamepadButton::A) == 0);
    static_assert(static_cast<int>(EGamepadButton::Start) == 6);
    static_assert(static_cast<int>(EGamepadButton::DpadUp) == 11);
    static_assert(static_cast<int>(EGamepadButton::Misc1) == 15);
    static_assert(static_cast<int>(EGamepadButton::Touchpad) == 20);
    static_assert(static_cast<int>(EGamepadButton::Count) == 26);
}

} // namespace
} // namespace nocturne::platform
