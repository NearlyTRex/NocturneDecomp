#include "shape/edittool/edscrollbar.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CEdScrollBar, IsConcrete) {
    static_assert(!std::is_abstract_v<CEdScrollBar>);
}

TEST(CEdScrollBar, Constructors) {
    static_assert(std::is_constructible_v<CEdScrollBar>);
}

TEST(CEdScrollBar, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEdScrollBar::setPosition),
                                 void (CEdScrollBar::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CEdScrollBar::render), void (CEdScrollBar::*)()>);
    static_assert(std::is_same_v<decltype(&CEdScrollBar::handleInput), void (CEdScrollBar::*)()>);
}

} // namespace
} // namespace nocturne::shape
