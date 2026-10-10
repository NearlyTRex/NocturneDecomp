#include "core/scat/scat.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CScat, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CScat>);
}

TEST(CScat, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CScat>);
}

TEST(CScat, IsConcrete) {
    static_assert(!std::is_abstract_v<CScat>);
}

TEST(CScat, Constructors) {
    static_assert(std::is_constructible_v<CScat>);
}

TEST(CScat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CScat::setup), void (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::process), void (CScat::*)(float)>);
    static_assert(std::is_same_v<decltype(&CScat::renderOpaque), int (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::getActorType), CDemonActorType *(CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::archive), void (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::processDamage), void (CScat::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CScat::createDefaultWeapon), void (CScat::*)()>);
    static_assert(std::is_same_v<decltype(&CScat::drawWeapon), void (CScat::*)(int)>);
    static_assert(std::is_same_v<decltype(&CScat::isWeaponDrawn), int (CScat::*)()>);
}

} // namespace
} // namespace nocturne::core
