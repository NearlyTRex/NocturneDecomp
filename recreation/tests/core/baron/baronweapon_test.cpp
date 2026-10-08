#include "core/baron/baronweapon.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBaronWeapon, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CBaronWeapon>);
}

TEST(CBaronWeapon, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBaronWeapon>);
}

TEST(CBaronWeapon, IsConcrete) {
    static_assert(!std::is_abstract_v<CBaronWeapon>);
}

TEST(CBaronWeapon, Constructors) {
    static_assert(std::is_constructible_v<CBaronWeapon>);
}

TEST(CBaronWeapon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBaronWeapon::setup), void (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::process), void (CBaronWeapon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::renderOpaque), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::getActorType),
                                 CDemonActorType *(CBaronWeapon::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBaronWeapon::setWeaponState), void (CBaronWeapon::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::fire), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::isReadyToFire), int (CBaronWeapon::*)()>);
    static_assert(std::is_same_v<decltype(&CBaronWeapon::renderAimBeam), void (CBaronWeapon::*)()>);
}

} // namespace
} // namespace nocturne::core
