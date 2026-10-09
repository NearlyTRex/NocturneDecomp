#include "core/crossbow/crossbow.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCrossbow, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CCrossbow>);
}

TEST(CCrossbow, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCrossbow>);
}

TEST(CCrossbow, IsConcrete) {
    static_assert(!std::is_abstract_v<CCrossbow>);
}

TEST(CCrossbow, Constructors) {
    static_assert(std::is_constructible_v<CCrossbow>);
}

TEST(CCrossbow, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCrossbow::process), void (CCrossbow::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCrossbow::renderOpaque), int (CCrossbow::*)()>);
    static_assert(std::is_same_v<decltype(&CCrossbow::renderTransparent), int (CCrossbow::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCrossbow::getActorType), CDemonActorType *(CCrossbow::*)()>);
    static_assert(std::is_same_v<decltype(&CCrossbow::getMuzzlePoint),
                                 common::CVector3f *(CCrossbow::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCrossbow::fire), int (CCrossbow::*)()>);
    static_assert(std::is_same_v<decltype(&CCrossbow::getDamage), float (CCrossbow::*)()>);
}

} // namespace
} // namespace nocturne::core
