#include "core/smiley/smiley.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSmiley, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CSmiley>);
}

TEST(CSmiley, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSmiley>);
}

TEST(CSmiley, IsConcrete) {
    static_assert(!std::is_abstract_v<CSmiley>);
}

TEST(CSmiley, Constructors) {
    static_assert(std::is_constructible_v<CSmiley>);
}

TEST(CSmiley, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSmiley::setup), void (CSmiley::*)()>);
    static_assert(std::is_same_v<decltype(&CSmiley::process), void (CSmiley::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSmiley::getCollisionType),
                                 ECollisionType (CSmiley::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CSmiley::getTargetPoints), int (CSmiley::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CSmiley::getActorType), CDemonActorType *(CSmiley::*)()>);
    static_assert(std::is_same_v<decltype(&CSmiley::archive), void (CSmiley::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSmiley::processDamage), void (CSmiley::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CSmiley::attractActorToward),
                                 int (CSmiley::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSmiley::reset), void (CSmiley::*)()>);
}

} // namespace
} // namespace nocturne::core
