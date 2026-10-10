#include "platform/display.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IDisplay, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IDisplay>);
    static_assert(std::has_virtual_destructor_v<IDisplay>);
}

TEST(IDisplay, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IDisplay::setDisplayMode), bool (IDisplay::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::getPixelFormat), common::SPixelFormat (IDisplay::*)()>);
    static_assert(std::is_same_v<decltype(&IDisplay::setPalette),
                                 void (IDisplay::*)(std::span<const std::uint8_t, 768>)>);
    static_assert(std::is_same_v<decltype(&IDisplay::present),
                                 void (IDisplay::*)(std::span<const std::byte>, int)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::setWindowMode), void (IDisplay::*)(EWindowMode)>);
    static_assert(std::is_same_v<decltype(&IDisplay::setWindowSize), void (IDisplay::*)(int, int)>);
}

TEST(EWindowMode, KeepsThePersistedValues) {
    static_assert(static_cast<int>(EWindowMode::Windowed) == 0);
    static_assert(static_cast<int>(EWindowMode::Fullscreen) == 1);
    static_assert(static_cast<int>(EWindowMode::Borderless) == 2);
}

} // namespace
} // namespace nocturne::platform
