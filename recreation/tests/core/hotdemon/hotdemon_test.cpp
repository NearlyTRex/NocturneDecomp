#include "core/hotdemon/hotdemon.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHotDemon, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CHotDemon>);
}

TEST(CHotDemon, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHotDemon>);
}

TEST(CHotDemon, IsConcrete) {
    static_assert(!std::is_abstract_v<CHotDemon>);
}

TEST(CHotDemon, Constructors) {
    static_assert(std::is_constructible_v<CHotDemon>);
}

TEST(CHotDemon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHotDemon::setup), void (CHotDemon::*)()>);
    static_assert(std::is_same_v<decltype(&CHotDemon::process), void (CHotDemon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHotDemon::getCollisionType),
                                 ECollisionType (CHotDemon::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CHotDemon::getTargetPoints), int (CHotDemon::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CHotDemon::getActorType), CDemonActorType *(CHotDemon::*)()>);
    static_assert(std::is_same_v<decltype(&CHotDemon::archive), void (CHotDemon::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHotDemon::processDamage), void (CHotDemon::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CHotDemon::getDeathState), EDeathState (CHotDemon::*)()>);
}

} // namespace
} // namespace nocturne::core
