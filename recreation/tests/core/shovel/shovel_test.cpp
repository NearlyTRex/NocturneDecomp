#include "core/shovel/shovel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CShovel, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CShovel>);
}

TEST(CShovel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CShovel>);
}

TEST(CShovel, IsConcrete) {
    static_assert(!std::is_abstract_v<CShovel>);
}

TEST(CShovel, Constructors) {
    static_assert(std::is_constructible_v<CShovel>);
}

TEST(CShovel, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CShovel::getActorType), CDemonActorType *(CShovel::*)()>);
    static_assert(std::is_same_v<decltype(&CShovel::fire), int (CShovel::*)()>);
    static_assert(std::is_same_v<decltype(&CShovel::getDamage), float (CShovel::*)()>);
    static_assert(std::is_same_v<decltype(&CShovel::renderAimBeam), void (CShovel::*)()>);
}

} // namespace
} // namespace nocturne::core
