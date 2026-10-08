#include "core/haystack/haystack.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHaystack, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CHaystack>);
}

TEST(CHaystack, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHaystack>);
}

TEST(CHaystack, IsConcrete) {
    static_assert(!std::is_abstract_v<CHaystack>);
}

TEST(CHaystack, Constructors) {
    static_assert(std::is_constructible_v<CHaystack>);
}

TEST(CHaystack, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHaystack::setup), void (CHaystack::*)()>);
    static_assert(std::is_same_v<decltype(&CHaystack::process), void (CHaystack::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHaystack::renderOpaque), int (CHaystack::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHaystack::getActorType), CDemonActorType *(CHaystack::*)()>);
    static_assert(std::is_same_v<decltype(&CHaystack::archive), void (CHaystack::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHaystack::processDamage), void (CHaystack::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CHaystack::drawWeapon), void (CHaystack::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHaystack::isWeaponDrawn), int (CHaystack::*)()>);
}

} // namespace
} // namespace nocturne::core
