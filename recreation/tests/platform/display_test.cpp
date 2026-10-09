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
        std::is_same_v<decltype(&IDisplay::getPixelFormat), SPixelFormat (IDisplay::*)()>);
    static_assert(std::is_same_v<decltype(&IDisplay::setPalette),
                                 void (IDisplay::*)(std::span<const std::uint8_t, 768>)>);
    static_assert(std::is_same_v<decltype(&IDisplay::present),
                                 void (IDisplay::*)(std::span<const std::byte>, int)>);
}

TEST(SPixelFormat, DefaultsToNoMasks) {
    const SPixelFormat format;
    EXPECT_EQ(format.red_mask, 0U);
    EXPECT_EQ(format.green_mask, 0U);
    EXPECT_EQ(format.blue_mask, 0U);
}

} // namespace
} // namespace nocturne::platform
