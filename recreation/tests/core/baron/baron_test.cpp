#include "core/baron/baron.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBaron, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CBaron>);
}

TEST(CBaron, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBaron>);
}

TEST(CBaron, IsConcrete) {
    static_assert(!std::is_abstract_v<CBaron>);
}

TEST(CBaron, Constructors) {
    static_assert(std::is_constructible_v<CBaron>);
}

TEST(CBaron, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBaron::setup), void (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::process), void (CBaron::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBaron::renderOpaque), int (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::renderTransparent), int (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::getCollisionType),
                                 ECollisionType (CBaron::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBaron::getActorType), CDemonActorType *(CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::archive), void (CBaron::*)()>);
    static_assert(std::is_same_v<decltype(&CBaron::isGrabbable), int (CBaron::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBaron::processDamage), void (CBaron::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBaron::drawWeapon), void (CBaron::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBaron::isWeaponDrawn), int (CBaron::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBaron::attachToOwner), void (CBaron::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBaron::detachFromOwner), void (CBaron::*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
