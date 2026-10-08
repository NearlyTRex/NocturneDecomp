#include "core/lightgun/lightgun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CLightGun>);
}

TEST(CLightGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLightGun>);
}

TEST(CLightGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightGun>);
}

TEST(CLightGun, Constructors) {
    static_assert(std::is_constructible_v<CLightGun>);
}

TEST(CLightGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightGun::process), void (CLightGun::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CLightGun::getActorType), CDemonActorType *(CLightGun::*)()>);
    static_assert(std::is_same_v<decltype(&CLightGun::fire), int (CLightGun::*)()>);
    static_assert(std::is_same_v<decltype(&CLightGun::getDamage), float (CLightGun::*)()>);
    static_assert(std::is_same_v<decltype(&CLightGun::renderAimBeam), void (CLightGun::*)()>);
}

} // namespace
} // namespace nocturne::core
