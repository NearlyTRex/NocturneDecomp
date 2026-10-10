#include "core/flashlit/flashlight.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlashlight, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CFlashlight>);
}

TEST(CFlashlight, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlashlight>);
}

TEST(CFlashlight, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlashlight>);
}

TEST(CFlashlight, Constructors) {
    static_assert(std::is_constructible_v<CFlashlight>);
}

TEST(CFlashlight, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFlashlight::getActorType), CDemonActorType *(CFlashlight::*)()>);
    static_assert(std::is_same_v<decltype(&CFlashlight::fire), int (CFlashlight::*)()>);
    static_assert(std::is_same_v<decltype(&CFlashlight::getDamage), float (CFlashlight::*)()>);
}

} // namespace
} // namespace nocturne::core
