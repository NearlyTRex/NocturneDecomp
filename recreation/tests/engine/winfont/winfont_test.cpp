#include "engine/winfont/winfont.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CWinFont, DerivesFromCFont) {
    static_assert(std::is_base_of_v<CFont, CWinFont>);
}

TEST(CWinFont, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWinFont>);
}

TEST(CWinFont, IsConcrete) {
    static_assert(!std::is_abstract_v<CWinFont>);
}

TEST(CWinFont, Constructors) {
    static_assert(std::is_constructible_v<CWinFont, char *, int, int, int>);
}

TEST(CWinFont, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWinFont::drawText),
                                 int (CWinFont::*)(char *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CWinFont::getStringWidth), int (CWinFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CWinFont::getStringHeight), int (CWinFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CWinFont::getLineSpacing), int (CWinFont::*)()>);
}

} // namespace
} // namespace nocturne::engine
