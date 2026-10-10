#include "engine/keys/keys.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CKeys, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CKeys>);
}

TEST(CKeys, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeys>);
}

TEST(CKeys, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeys::getKeyState), int (CKeys::*)(EInputCodeType)>);
    static_assert(
        std::is_same_v<decltype(&CKeys::getAndClearKeyState), int (CKeys::*)(EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CKeys::getInputKey), int (CKeys::*)()>);
    static_assert(std::is_same_v<decltype(&CKeys::getUppercasedInputKey), int (CKeys::*)()>);
    static_assert(
        std::is_same_v<decltype(&CKeys::setKeyAsPressed), void (CKeys::*)(EInputCodeType)>);
    static_assert(
        std::is_same_v<decltype(&CKeys::clearKeyPressState), void (CKeys::*)(EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CKeys::toggleInputMask), void (CKeys::*)(int)>);
}

} // namespace
} // namespace nocturne::engine
