#include "core/batman/batman.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBatman, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBatman>);
}

TEST(CBatman, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBatman>);
}

TEST(CBatman, IsConcrete) {
    static_assert(!std::is_abstract_v<CBatman>);
}

TEST(CBatman, Constructors) {
    static_assert(std::is_constructible_v<CBatman>);
}

TEST(CBatman, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBatman::setup), void (CBatman::*)()>);
    static_assert(std::is_same_v<decltype(&CBatman::process), void (CBatman::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBatman::renderOpaque), int (CBatman::*)()>);
    static_assert(std::is_same_v<decltype(&CBatman::getCollisionType),
                                 ECollisionType (CBatman::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBatman::getTargetPoints), int (CBatman::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CBatman::getActorType), CDemonActorType *(CBatman::*)()>);
    static_assert(std::is_same_v<decltype(&CBatman::archive), void (CBatman::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBatman::processDamage), void (CBatman::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
