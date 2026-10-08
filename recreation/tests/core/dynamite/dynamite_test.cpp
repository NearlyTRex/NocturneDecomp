#include "core/dynamite/dynamite.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDynamite, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CDynamite>);
}

TEST(CDynamite, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDynamite>);
}

TEST(CDynamite, IsConcrete) {
    static_assert(!std::is_abstract_v<CDynamite>);
}

TEST(CDynamite, Constructors) {
    static_assert(std::is_constructible_v<CDynamite>);
}

TEST(CDynamite, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDynamite::process), void (CDynamite::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CDynamite::getActorType), CDemonActorType *(CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::fire), int (CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::getDamage), float (CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::renderAimBeam), void (CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::lightFuse), void (CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::isFuseLit), int (CDynamite::*)()>);
    static_assert(std::is_same_v<decltype(&CDynamite::isFuseBurnedOut), int (CDynamite::*)()>);
}

} // namespace
} // namespace nocturne::core
