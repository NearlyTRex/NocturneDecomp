#include "core/gun/gun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CGun>);
}

TEST(CGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGun>);
}

TEST(CGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CGun>);
}

TEST(CGun, Constructors) {
    static_assert(std::is_constructible_v<CGun>);
}

TEST(CGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGun::getActorType), CDemonActorType *(CGun::*)()>);
    static_assert(std::is_same_v<decltype(&CGun::fire), int (CGun::*)()>);
    static_assert(std::is_same_v<decltype(&CGun::getDamage), float (CGun::*)()>);
}

} // namespace
} // namespace nocturne::core
