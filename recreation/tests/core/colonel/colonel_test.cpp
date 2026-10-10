#include "core/colonel/colonel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CColonel, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CColonel>);
}

TEST(CColonel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CColonel>);
}

TEST(CColonel, IsConcrete) {
    static_assert(!std::is_abstract_v<CColonel>);
}

TEST(CColonel, Constructors) {
    static_assert(std::is_constructible_v<CColonel>);
}

TEST(CColonel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CColonel::setup), void (CColonel::*)()>);
    static_assert(std::is_same_v<decltype(&CColonel::process), void (CColonel::*)(float)>);
    static_assert(std::is_same_v<decltype(&CColonel::renderOpaque), int (CColonel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CColonel::getActorType), CDemonActorType *(CColonel::*)()>);
    static_assert(std::is_same_v<decltype(&CColonel::archive), void (CColonel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CColonel::processDamage), void (CColonel::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CColonel::drawWeapon), void (CColonel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CColonel::isWeaponDrawn), int (CColonel::*)()>);
}

} // namespace
} // namespace nocturne::core
