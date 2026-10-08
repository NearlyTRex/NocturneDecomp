#include "core/hero/hero.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHero, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CHero>);
}

TEST(CHero, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHero>);
}

TEST(CHero, IsAbstract) {
    static_assert(std::is_abstract_v<CHero>);
}

TEST(CHero, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHero::setup), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::canLookAt), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::testCylinderCollision),
                                 int (CHero::*)(SCollisionReturnInfo *, float)>);
    static_assert(std::is_same_v<decltype(&CHero::testLineIntersection),
                                 int (CHero::*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CHero::getPathMap), CPathMap *(CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::archive), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::kill), void (CHero::*)(int, CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CHero::isInvulnerable), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::isGrabbable), int (CHero::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHero::canBeGrabbed), int (CHero::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CHero::getGrabbed), int (CHero::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CHero::releaseFromGrab), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::createDefaultWeapon), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::drawWeapon), void (CHero::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHero::isWeaponDrawn), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::reset), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryInteract), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryTalkToNearbyCharacter), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryOpenNearbyDoor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryOpenDoor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryPullLever), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::executeLeverPull), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryPushNearbyBox), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::stopPushingBox), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryApproachNearbyActor), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::stopNearbyInteraction), void (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::tryUseSelectedItem), int (CHero::*)()>);
    static_assert(std::is_same_v<decltype(&CHero::executeObjectPickup), void (CHero::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CHero::addCarriedItemToInventory), void (CHero::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CHero::removeMatchingKeys), void (CHero::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CHero::setAiTask), void (CHero::*)(int)>);
    static_assert(std::is_same_v<decltype(&CHero::closestEnemy), CEnemy *(CHero::*)(float *)>);
}

} // namespace
} // namespace nocturne::core
