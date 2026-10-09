#include "core/stranger/stranger.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CStranger, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CStranger>);
}

TEST(CStranger, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CStranger>);
}

TEST(CStranger, IsConcrete) {
    static_assert(!std::is_abstract_v<CStranger>);
}

TEST(CStranger, Constructors) {
    static_assert(std::is_constructible_v<CStranger>);
}

TEST(CStranger, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CStranger::setup), void (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::process), void (CStranger::*)(float)>);
    static_assert(std::is_same_v<decltype(&CStranger::renderOpaque), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::renderTransparent), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::setPositionAndOrientation),
                                 void (CStranger::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::drop),
                                 void (CStranger::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::getActorType), CDemonActorType *(CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::archive), void (CStranger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CStranger::getGrabbed), int (CStranger::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::processDamage), void (CStranger::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CStranger::getDeathState), EDeathState (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::dropCarriedObject),
                                 void (CStranger::*)(int, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CStranger::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CStranger::drawWeapon), void (CStranger::*)(int)>);
    static_assert(std::is_same_v<decltype(&CStranger::isWeaponDrawn), int (CStranger::*)()>);
    static_assert(std::is_same_v<decltype(&CStranger::reset), void (CStranger::*)()>);
}

} // namespace
} // namespace nocturne::core
