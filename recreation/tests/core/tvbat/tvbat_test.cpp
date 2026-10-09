#include "core/tvbat/tvbat.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTVBat, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CTVBat>);
}

TEST(CTVBat, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTVBat>);
}

TEST(CTVBat, IsConcrete) {
    static_assert(!std::is_abstract_v<CTVBat>);
}

TEST(CTVBat, Constructors) {
    static_assert(std::is_constructible_v<CTVBat>);
}

TEST(CTVBat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTVBat::setup), void (CTVBat::*)()>);
    static_assert(std::is_same_v<decltype(&CTVBat::process), void (CTVBat::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTVBat::renderOpaque), int (CTVBat::*)()>);
    static_assert(std::is_same_v<decltype(&CTVBat::getBoundingBox),
                                 CBoundingBox3D *(CTVBat::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTVBat::getCollisionType),
                                 ECollisionType (CTVBat::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CTVBat::getTargetPoints), int (CTVBat::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTVBat::getActorType), CDemonActorType *(CTVBat::*)()>);
    static_assert(std::is_same_v<decltype(&CTVBat::archive), void (CTVBat::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTVBat::processDamage), void (CTVBat::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CTVBat::getDeathState), EDeathState (CTVBat::*)()>);
    static_assert(std::is_same_v<decltype(&CTVBat::orderAttack), void (CTVBat::*)()>);
}

} // namespace
} // namespace nocturne::core
