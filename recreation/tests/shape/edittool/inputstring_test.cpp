#include "shape/edittool/inputstring.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CInputString, IsConcrete) {
    static_assert(!std::is_abstract_v<CInputString>);
}

TEST(CInputString, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CInputString::init), void (CInputString::*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CInputString::setSelectionToCursor), void (CInputString::*)()>);
    static_assert(
        std::is_same_v<decltype(&CInputString::insertChar), void (CInputString::*)(char, int)>);
    static_assert(
        std::is_same_v<decltype(&CInputString::deleteSelection), void (CInputString::*)()>);
    static_assert(std::is_same_v<decltype(&CInputString::backspace), void (CInputString::*)()>);
    static_assert(
        std::is_same_v<decltype(&CInputString::handleKeyboardInput), void (CInputString::*)()>);
    static_assert(std::is_same_v<decltype(&CInputString::draw), void (CInputString::*)(int, int)>);
}

} // namespace
} // namespace nocturne::shape
