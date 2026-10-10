#include "platform/osfont.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IOsFont, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IOsFont>);
    static_assert(std::has_virtual_destructor_v<IOsFont>);
}

TEST(IOsFont, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IOsFont::measureText),
                                 common::SExtent (IOsFont::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&IOsFont::renderText), STextMask (IOsFont::*)(std::string_view)>);
}

TEST(STextMask, DefaultsToEmpty) {
    const STextMask mask;
    EXPECT_EQ(mask.size, common::SExtent{});
    EXPECT_TRUE(mask.coverage.empty());
}

} // namespace
} // namespace nocturne::platform
