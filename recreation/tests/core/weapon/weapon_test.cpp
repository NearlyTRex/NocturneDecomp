#include "core/weapon/weapon.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWeapon, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CWeapon>);
}

TEST(CWeapon, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWeapon>);
}

TEST(CWeapon, IsConcrete) {
    static_assert(!std::is_abstract_v<CWeapon>);
}

TEST(CWeapon, Constructors) {
    static_assert(std::is_constructible_v<CWeapon>);
}

TEST(CWeapon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWeapon::setup), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::process), void (CWeapon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CWeapon::renderOpaque), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::getBoundingBox),
                                 CBoundingBox3D *(CWeapon::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::getCollisionType),
                                 ECollisionType (CWeapon::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::onPickup), void (CWeapon::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::canPickup), int (CWeapon::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::pickup), void (CWeapon::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::onDropped), void (CWeapon::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::getCarrier), CDemonActor *(CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::archive), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::onFired), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::setWeaponState), void (CWeapon::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CWeapon::getMuzzlePoint), CVector3f *(CWeapon::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWeapon::fire), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::isReadyToFire), int (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::getDamage), float (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::renderAimBeam), void (CWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CWeapon::updateLighting), void (CWeapon::*)()>);
}

} // namespace
} // namespace nocturne::core
