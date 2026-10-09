#include "core/icepick/icepick.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CIcePick, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CIcePick>);
}

TEST(CIcePick, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CIcePick>);
}

TEST(CIcePick, IsConcrete) {
    static_assert(!std::is_abstract_v<CIcePick>);
}

TEST(CIcePick, Constructors) {
    static_assert(std::is_constructible_v<CIcePick>);
}

TEST(CIcePick, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CIcePick::setup), void (CIcePick::*)()>);
    static_assert(std::is_same_v<decltype(&CIcePick::process), void (CIcePick::*)(float)>);
    static_assert(std::is_same_v<decltype(&CIcePick::renderOpaque), int (CIcePick::*)()>);
    static_assert(
        std::is_same_v<decltype(&CIcePick::getActorType), CDemonActorType *(CIcePick::*)()>);
    static_assert(std::is_same_v<decltype(&CIcePick::archive), void (CIcePick::*)()>);
    static_assert(
        std::is_same_v<decltype(&CIcePick::processDamage), void (CIcePick::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CIcePick::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CIcePick::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CIcePick::drawWeapon), void (CIcePick::*)(int)>);
    static_assert(std::is_same_v<decltype(&CIcePick::isWeaponDrawn), int (CIcePick::*)()>);
}

} // namespace
} // namespace nocturne::core
