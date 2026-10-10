#include "core/tommygun/tommygun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTommyGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CTommyGun>);
}

TEST(CTommyGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTommyGun>);
}

TEST(CTommyGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CTommyGun>);
}

TEST(CTommyGun, Constructors) {
    static_assert(std::is_constructible_v<CTommyGun>);
}

TEST(CTommyGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTommyGun::process), void (CTommyGun::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CTommyGun::getActorType), CDemonActorType *(CTommyGun::*)()>);
    static_assert(std::is_same_v<decltype(&CTommyGun::setWeaponState), void (CTommyGun::*)(int)>);
    static_assert(std::is_same_v<decltype(&CTommyGun::fire), int (CTommyGun::*)()>);
    static_assert(std::is_same_v<decltype(&CTommyGun::getDamage), float (CTommyGun::*)()>);
}

} // namespace
} // namespace nocturne::core
