#include "engine/font/font.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CFontColors, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFontColors::getDefaultTextColor), int (CFontColors::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CFontColors::setDefaultTextColor), void (CFontColors::*)(int)>);
}

TEST(CFontColors, TheDefaultTextColourStartsBlackAndCanBeSet) {
    CFontColors colors;
    EXPECT_EQ(colors.getDefaultTextColor(), 0);
    colors.setDefaultTextColor(0xf800);
    EXPECT_EQ(colors.getDefaultTextColor(), 0xf800);
}

} // namespace
} // namespace nocturne::engine
