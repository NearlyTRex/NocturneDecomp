#include "core/ammo/ammo.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CAmmo, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CAmmo>);
}

TEST(CAmmo, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CAmmo>);
}

TEST(CAmmo, IsConcrete) {
    static_assert(!std::is_abstract_v<CAmmo>);
}

TEST(CAmmo, Constructors) {
    static_assert(std::is_constructible_v<CAmmo>);
}

TEST(CAmmo, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAmmo::setup), void (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::process), void (CAmmo::*)(float)>);
    static_assert(std::is_same_v<decltype(&CAmmo::renderOpaque), int (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::getBoundingBox),
                                 CBoundingBox3D *(CAmmo::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::getCollisionType),
                                 ECollisionType (CAmmo::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::canPickup), int (CAmmo::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::getActorType), CDemonActorType *(CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::archive), void (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::setWeaponClass), void (CAmmo::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setAmmoCount), void (CAmmo::*)(int)>);
}

} // namespace
} // namespace nocturne::core
