#include "core/armour/armour.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CArmour, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CArmour>);
}

TEST(CArmour, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CArmour>);
}

TEST(CArmour, IsConcrete) {
    static_assert(!std::is_abstract_v<CArmour>);
}

TEST(CArmour, Constructors) {
    static_assert(std::is_constructible_v<CArmour>);
}

TEST(CArmour, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CArmour::setup), void (CArmour::*)()>);
    static_assert(std::is_same_v<decltype(&CArmour::process), void (CArmour::*)(float)>);
    static_assert(std::is_same_v<decltype(&CArmour::getCollisionType),
                                 ECollisionType (CArmour::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CArmour::getTargetPoints), int (CArmour::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CArmour::getActorType), CDemonActorType *(CArmour::*)()>);
    static_assert(std::is_same_v<decltype(&CArmour::archive), void (CArmour::*)()>);
    static_assert(
        std::is_same_v<decltype(&CArmour::processDamage), void (CArmour::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
