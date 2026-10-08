#include "core/svetlana/svetlana.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSvetlana, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CSvetlana>);
}

TEST(CSvetlana, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSvetlana>);
}

TEST(CSvetlana, IsConcrete) {
    static_assert(!std::is_abstract_v<CSvetlana>);
}

TEST(CSvetlana, Constructors) {
    static_assert(std::is_constructible_v<CSvetlana>);
}

TEST(CSvetlana, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSvetlana::setup), void (CSvetlana::*)()>);
    static_assert(std::is_same_v<decltype(&CSvetlana::process), void (CSvetlana::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::renderOpaque), int (CSvetlana::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::getActorType), CDemonActorType *(CSvetlana::*)()>);
    static_assert(std::is_same_v<decltype(&CSvetlana::archive), void (CSvetlana::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::getGrabbed), int (CSvetlana::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CSvetlana::processDamage), void (CSvetlana::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::drawWeapon), void (CSvetlana::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSvetlana::isWeaponDrawn), int (CSvetlana::*)()>);
}

} // namespace
} // namespace nocturne::core
