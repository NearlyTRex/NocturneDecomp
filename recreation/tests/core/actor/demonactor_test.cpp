#include "core/actor/demonactor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonActor>);
}

TEST(CDemonActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonActor>);
}

TEST(CDemonActor, Constructors) {
    static_assert(std::is_constructible_v<CDemonActor>);
}

TEST(CDemonActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonActor::setup), void (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::process), void (CDemonActor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::renderOpaque), int (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::renderTransparent), int (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::renderBackground), void (CDemonActor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getBoundingBox),
                                 CBoundingBox3D *(CDemonActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::processFootstep),
                                 std::uint32_t (CDemonActor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::processFootstepAtOffset),
                                 std::uint32_t (CDemonActor::*)(common::CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::handleFootstep),
                       std::uint32_t (CDemonActor::*)(common::CVector3f *, EGroundType, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::playSound), std::uint32_t (CDemonActor::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::playAmbientSound),
                                 std::uint32_t (CDemonActor::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::playSoundWithDelay),
                                 std::uint32_t (CDemonActor::*)(char *, float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::playAmbientSoundWithDelay),
                                 std::uint32_t (CDemonActor::*)(char *, float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getCollisionType),
                                 ECollisionType (CDemonActor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::cylinderGroundCheck),
                                 float (CDemonActor::*)(float, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getGroundType), EGroundType (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getBlockVirtualDirectorFlag),
                                 int (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::allowBulletHoles), int (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::updateCollisionData), void (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getTargetPoints),
                                 int (CDemonActor::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::renderTargetPoints), void (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::canLookAt), int (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::evaluateTriggerCondition),
                                 float (CDemonActor::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::processActionButton), int (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::setPositionAndOrientation),
                                 void (CDemonActor::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::onPickup), void (CDemonActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::shouldIgnoreForTargeting), int (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getAllowedMeleeAttackTypes), int (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::processMeleeHit), int (CDemonActor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::fillAttackDamageInfo),
                                 void (CDemonActor::*)(int, SDamageInfo *, CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::playAttackHitEffects),
                                 void (CDemonActor::*)(int, SDamageInfo *, CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::canPickup), int (CDemonActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::pickup), void (CDemonActor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::onDropped),
                                 void (CDemonActor::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::drop),
                                 void (CDemonActor::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getCarrier), CDemonActor *(CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getInteractionInfo),
                                 void (CDemonActor::*)(SInteractionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::startInteraction),
                                 int (CDemonActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::updateInteraction),
                       int (CDemonActor::*)(common::UOrientationVector *, SPlayerInput *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::stopInteraction),
                                 void (CDemonActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::spawnFlies), void (CDemonActor::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::testCylinderCollision),
                                 int (CDemonActor::*)(SCollisionReturnInfo *, float)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::testLineIntersection),
                                 int (CDemonActor::*)(common::CVector3f *, common::CVector3f *,
                                                      common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::onLaserHit), void (CDemonActor::*)(SLaserInfo *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::customRayIntersect),
                                 float (CDemonActor::*)(common::CVector3f *, common::CVector3f *,
                                                        common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::customIntersectCylinderXZ),
                                 void (CDemonActor::*)(SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::customGetFloorHeight),
                                 int (CDemonActor::*)(common::CVector3f *, float, float *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getPathMap), CPathMap *(CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::calculateChecksum),
                                 void (CDemonActor::*)(std::uint32_t *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getActorType), CDemonActorType *(CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::archive), void (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::setupRenderState), void (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::restoreRenderState), void (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getActorClassName), char *(CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::updateOrientationMatrix), void (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::transformVector),
                                 common::CVector3f *(CDemonActor::*)(common::CVector3f *,
                                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::inverseTransformVector),
                                 common::CVector3f *(CDemonActor::*)(common::CVector3f *,
                                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::localToWorldPoint),
                                 common::CVector3f *(CDemonActor::*)(common::CVector3f *,
                                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::worldToLocalPoint),
                                 common::CVector3f *(CDemonActor::*)(common::CVector3f *,
                                                                     common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::getWorldBoundingBox),
                       CBoundingBox3D *(CDemonActor::*)(CBoundingBox3D *, SCollisionInfo *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::rayIntersect),
                                 float (CDemonActor::*)(common::CVector3f *, common::CVector3f *,
                                                        SActorRayHit *, SCollisionInfo *, int,
                                                        CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::doCheckForInvalidPointers),
                                 void (CDemonActor::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::save), void (CDemonActor::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::load), void (CDemonActor::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
