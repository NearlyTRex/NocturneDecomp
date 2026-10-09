#include "platform/window.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IWindow, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IWindow>);
    static_assert(std::has_virtual_destructor_v<IWindow>);
}

TEST(IWindow, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IWindow::pollEvent), bool (IWindow::*)(SWindowEvent &)>);
    static_assert(std::is_same_v<decltype(&IWindow::warpMouse), void (IWindow::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&IWindow::getScancodeName),
                                 std::string (IWindow::*)(std::uint16_t)>);
    static_assert(
        std::is_same_v<decltype(&IWindow::showMessageBox), void (IWindow::*)(std::string_view)>);
}

TEST(SWindowEvent, DefaultsToAnEmptyQuit) {
    const SWindowEvent event;
    EXPECT_EQ(event.type, EWindowEventType::Quit);
    EXPECT_EQ(event.scancode, 0);
    EXPECT_EQ(event.character, 0);
    EXPECT_EQ(event.x, 0);
    EXPECT_EQ(event.y, 0);
    EXPECT_EQ(event.button, EMouseButton::Left);
}

} // namespace
} // namespace nocturne::platform
