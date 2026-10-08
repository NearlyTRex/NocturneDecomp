#include "core/moloch/moloch.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMoloch, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CMoloch>);
}

TEST(CMoloch, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMoloch>);
}

TEST(CMoloch, IsConcrete) {
    static_assert(!std::is_abstract_v<CMoloch>);
}

TEST(CMoloch, Constructors) {
    static_assert(std::is_constructible_v<CMoloch>);
}

TEST(CMoloch, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMoloch::setup), void (CMoloch::*)()>);
    static_assert(std::is_same_v<decltype(&CMoloch::process), void (CMoloch::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMoloch::renderOpaque), int (CMoloch::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMoloch::getActorType), CDemonActorType *(CMoloch::*)()>);
    static_assert(std::is_same_v<decltype(&CMoloch::archive), void (CMoloch::*)()>);
    static_assert(std::is_same_v<decltype(&CMoloch::drawWeapon), void (CMoloch::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMoloch::isWeaponDrawn), int (CMoloch::*)()>);
}

} // namespace
} // namespace nocturne::core
