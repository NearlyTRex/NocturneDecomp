#include "core/dracbrid/draculabride.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDraculaBride, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CDraculaBride>);
}

TEST(CDraculaBride, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDraculaBride>);
}

TEST(CDraculaBride, IsConcrete) {
    static_assert(!std::is_abstract_v<CDraculaBride>);
}

TEST(CDraculaBride, Constructors) {
    static_assert(std::is_constructible_v<CDraculaBride>);
}

TEST(CDraculaBride, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDraculaBride::setup), void (CDraculaBride::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDraculaBride::process), void (CDraculaBride::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::renderOpaque), int (CDraculaBride::*)()>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::getCollisionType),
                                 ECollisionType (CDraculaBride::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::getTargetPoints),
                                 int (CDraculaBride::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::getActorType),
                                 CDemonActorType *(CDraculaBride::*)()>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::archive), void (CDraculaBride::*)()>);
    static_assert(std::is_same_v<decltype(&CDraculaBride::processDamage),
                                 void (CDraculaBride::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CDraculaBride::getDeathState), EDeathState (CDraculaBride::*)()>);
}

} // namespace
} // namespace nocturne::core
