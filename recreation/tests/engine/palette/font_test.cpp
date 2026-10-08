#include "engine/palette/font.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CFont, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFont>);
}

TEST(CFont, IsAbstract) {
    static_assert(std::is_abstract_v<CFont>);
}

TEST(CFont, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFont::drawText), int (CFont::*)(char *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CFont::getStringWidth), int (CFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CFont::getStringHeight), int (CFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CFont::getLineSpacing), int (CFont::*)()>);
}

} // namespace
} // namespace nocturne::engine
