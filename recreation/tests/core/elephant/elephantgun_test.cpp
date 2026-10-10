#include "core/elephant/elephantgun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CElephantGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CElephantGun>);
}

TEST(CElephantGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CElephantGun>);
}

TEST(CElephantGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CElephantGun>);
}

TEST(CElephantGun, Constructors) {
    static_assert(std::is_constructible_v<CElephantGun>);
}

TEST(CElephantGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CElephantGun::process), void (CElephantGun::*)(float)>);
    static_assert(std::is_same_v<decltype(&CElephantGun::getActorType),
                                 CDemonActorType *(CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::onFired), void (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::fire), int (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::getDamage), float (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::renderAimBeam), void (CElephantGun::*)()>);
}

} // namespace
} // namespace nocturne::core
