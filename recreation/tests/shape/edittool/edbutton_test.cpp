#include "shape/edittool/edbutton.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CEdButton, IsConcrete) {
    static_assert(!std::is_abstract_v<CEdButton>);
}

TEST(CEdButton, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEdButton::calculateAndSetBounds),
                                 void (CEdButton::*)(int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CEdButton::setBoundsAndText),
                                 void (CEdButton::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CEdButton::paint), void (CEdButton::*)(int)>);
    static_assert(std::is_same_v<decltype(&CEdButton::wasClicked), int (CEdButton::*)()>);
}

} // namespace
} // namespace nocturne::shape
