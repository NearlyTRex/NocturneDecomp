#include "engine/alphabit/alphabitmap.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CAlphaBitmap, IsConcrete) {
    static_assert(!std::is_abstract_v<CAlphaBitmap>);
}

TEST(CAlphaBitmap, Constructors) {
    static_assert(std::is_constructible_v<CAlphaBitmap>);
}

TEST(CAlphaBitmap, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::free), void (CAlphaBitmap::*)()>);
    static_assert(
        std::is_same_v<decltype(&CAlphaBitmap::load), void (CAlphaBitmap::*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CAlphaBitmap::display), void (CAlphaBitmap::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::render),
                                 void (CAlphaBitmap::*)(int, int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::scale), void (CAlphaBitmap::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CAlphaBitmap::initPalette), void (CAlphaBitmap::*)()>);
}

} // namespace
} // namespace nocturne::engine
