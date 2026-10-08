#include "core/turret/turret.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTurret, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CTurret>);
}

TEST(CTurret, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTurret>);
}

TEST(CTurret, IsConcrete) {
    static_assert(!std::is_abstract_v<CTurret>);
}

TEST(CTurret, Constructors) {
    static_assert(std::is_constructible_v<CTurret>);
}

TEST(CTurret, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTurret::setup), void (CTurret::*)()>);
    static_assert(std::is_same_v<decltype(&CTurret::process), void (CTurret::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTurret::renderOpaque), int (CTurret::*)()>);
    static_assert(std::is_same_v<decltype(&CTurret::getBoundingBox),
                                 CBoundingBox3D *(CTurret::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTurret::canPickup), int (CTurret::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTurret::getInteractionInfo),
                                 void (CTurret::*)(SInteractionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CTurret::startInteraction), int (CTurret::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTurret::updateInteraction),
                                 int (CTurret::*)(UOrientationVector *, SPlayerInput *)>);
    static_assert(
        std::is_same_v<decltype(&CTurret::stopInteraction), void (CTurret::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CTurret::getActorType), CDemonActorType *(CTurret::*)()>);
    static_assert(std::is_same_v<decltype(&CTurret::archive), void (CTurret::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTurret::getMuzzlePoint), CVector3f *(CTurret::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTurret::fire), int (CTurret::*)()>);
    static_assert(std::is_same_v<decltype(&CTurret::getDamage), float (CTurret::*)()>);
}

} // namespace
} // namespace nocturne::core
