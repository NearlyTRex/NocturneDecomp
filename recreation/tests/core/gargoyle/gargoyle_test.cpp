#include "core/gargoyle/gargoyle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGargoyle, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CGargoyle>);
}

TEST(CGargoyle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGargoyle>);
}

TEST(CGargoyle, IsConcrete) {
    static_assert(!std::is_abstract_v<CGargoyle>);
}

TEST(CGargoyle, Constructors) {
    static_assert(std::is_constructible_v<CGargoyle>);
}

TEST(CGargoyle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGargoyle::setup), void (CGargoyle::*)()>);
    static_assert(std::is_same_v<decltype(&CGargoyle::process), void (CGargoyle::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGargoyle::renderOpaque), int (CGargoyle::*)()>);
    static_assert(std::is_same_v<decltype(&CGargoyle::getCollisionType),
                                 ECollisionType (CGargoyle::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CGargoyle::getTargetPoints), int (CGargoyle::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CGargoyle::getActorType), CDemonActorType *(CGargoyle::*)()>);
    static_assert(std::is_same_v<decltype(&CGargoyle::archive), void (CGargoyle::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGargoyle::processDamage), void (CGargoyle::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
