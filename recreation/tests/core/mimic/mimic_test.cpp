#include "core/mimic/mimic.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMimic, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CMimic>);
}

TEST(CMimic, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMimic>);
}

TEST(CMimic, IsConcrete) {
    static_assert(!std::is_abstract_v<CMimic>);
}

TEST(CMimic, Constructors) {
    static_assert(std::is_constructible_v<CMimic>);
}

TEST(CMimic, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMimic::setup), void (CMimic::*)()>);
    static_assert(std::is_same_v<decltype(&CMimic::process), void (CMimic::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMimic::renderOpaque), int (CMimic::*)()>);
    static_assert(std::is_same_v<decltype(&CMimic::renderTransparent), int (CMimic::*)()>);
    static_assert(std::is_same_v<decltype(&CMimic::renderBackground), void (CMimic::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMimic::getCollisionType),
                                 ECollisionType (CMimic::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMimic::getActorType), CDemonActorType *(CMimic::*)()>);
    static_assert(std::is_same_v<decltype(&CMimic::archive), void (CMimic::*)()>);
    static_assert(std::is_same_v<decltype(&CMimic::getDeathState), EDeathState (CMimic::*)()>);
}

} // namespace
} // namespace nocturne::core
