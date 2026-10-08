#include "core/battery/battery.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBattery, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBattery>);
}

TEST(CBattery, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBattery>);
}

TEST(CBattery, IsConcrete) {
    static_assert(!std::is_abstract_v<CBattery>);
}

TEST(CBattery, Constructors) {
    static_assert(std::is_constructible_v<CBattery>);
}

TEST(CBattery, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBattery::setup), void (CBattery::*)()>);
    static_assert(std::is_same_v<decltype(&CBattery::process), void (CBattery::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBattery::renderOpaque), int (CBattery::*)()>);
    static_assert(std::is_same_v<decltype(&CBattery::getBoundingBox),
                                 CBoundingBox3D *(CBattery::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBattery::getCollisionType),
                                 ECollisionType (CBattery::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBattery::canPickup), int (CBattery::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBattery::pickup), void (CBattery::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBattery::onDropped), void (CBattery::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBattery::getCarrier), CDemonActor *(CBattery::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBattery::getActorType), CDemonActorType *(CBattery::*)()>);
    static_assert(std::is_same_v<decltype(&CBattery::archive), void (CBattery::*)()>);
}

} // namespace
} // namespace nocturne::core
