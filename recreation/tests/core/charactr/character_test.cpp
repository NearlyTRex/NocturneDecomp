#include "core/charactr/character.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCharacter, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CCharacter>);
}

TEST(CCharacter, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCharacter>);
}

TEST(CCharacter, IsConcrete) {
    static_assert(!std::is_abstract_v<CCharacter>);
}

TEST(CCharacter, Constructors) {
    static_assert(std::is_constructible_v<CCharacter>);
}

TEST(CCharacter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCharacter::setup), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::renderOpaque), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::renderTransparent), int (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::renderBackground), void (CCharacter::*)(int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::getBoundingBox),
                                 CBoundingBox3D *(CCharacter::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::getCollisionType),
                                 ECollisionType (CCharacter::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::canLookAt), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::setPositionAndOrientation),
                                 void (CCharacter::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::drop),
                                 void (CCharacter::*)(CDemonActor *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::spawnFlies), void (CCharacter::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::calculateChecksum),
                                 void (CCharacter::*)(std::uint32_t *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::archive), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::applyDamage), void (CCharacter::*)(int, float)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::kill), void (CCharacter::*)(int, CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isInvulnerable), int (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::isGrabbable), int (CCharacter::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::canBeGrabbed),
                                 int (CCharacter::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getGrabbed), int (CCharacter::*)(CDemonActor *, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::releaseFromGrab), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getGrabber), CDemonActor *(CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::releaseVictim), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::onVictimLost), void (CCharacter::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::checkCylinderCollisionWorld),
                                 int (CCharacter::*)(CVector3f *, float, SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::testDamageLine),
                       int (CCharacter::*)(CVector3f *, CVector3f *, SDamageInfo *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processDamage), void (CCharacter::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getDeathState), EDeathState (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::attractActorToward),
                                 int (CCharacter::*)(CDemonActor *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::canBeAttracted), int (CCharacter::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getPartDominantBone), int (CCharacter::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::setDoorTarget), void (CCharacter::*)(CDoor *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::clearDoorTarget), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::hasDoorTarget), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::dropCarriedObject),
                                 void (CCharacter::*)(int, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::getCarryObjToBodyXForm),
                                 CMatrix3x4f *(CCharacter::*)(int, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setWalkTarget),
                                 void (CCharacter::*)(CDemonActor *, float, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setWalkTargetImmediate),
                                 void (CCharacter::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::setWalkTimeout), void (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isWalkComplete), int (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::walkToPoint),
                       int (CCharacter::*)(CVector3f *, CPathMap *, CVector3f *, float, float)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::turnTowardPoint), void (CCharacter::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::moveAndCollide), void (CCharacter::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isOnGround), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::preProcess), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processCharacter), int (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::renderCharacter), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::renderAttachedModels), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::igniteBone),
                                 void (CCharacter::*)(CVector3f *, int, int, float, int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processDamageDecals), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::spawnGoreAtBone),
                                 void (CCharacter::*)(int, int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::spawnBloodAtBone),
                                 void (CCharacter::*)(int, int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::shatter), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::dismember),
                                 void (CCharacter::*)(CVector3f *, float, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::detachBodyPart),
                                 void (CCharacter::*)(int, CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::dismemberPartInternal),
                                 void (CCharacter::*)(CBodyPart *, int, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::followActor),
                                 void (CCharacter::*)(CDemonActor *, float, float, int *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processWalking), int (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::pickupObjectNow),
                                 void (CCharacter::*)(int, CDemonActor *, float)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::dropAllCarriedObjects), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::updateCarriedObjects), void (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isCarryingAnything), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::initGesture), int (CCharacter::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::computeBoundingBox), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::findSomethingToLookAt),
                                 void (CCharacter::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setLookAtTarget),
                                 void (CCharacter::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setOrientation),
                                 void (CCharacter::*)(UOrientationVector *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::applyGestureLookAt), void (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::updateWanderToWaypoint),
                                 int (CCharacter::*)(float, char *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::advanceLayerAction),
                                 int (CCharacter::*)(float *, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::addLayerAction),
                                 void (CCharacter::*)(int, int, char *, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::getLayerActionBlendWeight),
                                 float (CCharacter::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::chooseNextLayerAction), void (CCharacter::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processSmoking), void (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::processMotion), int (CCharacter::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::moveOutOfHeroWay), int (CCharacter::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::playSoundWithCooldown), void (CCharacter::*)(char *)>);
}

} // namespace
} // namespace nocturne::core
