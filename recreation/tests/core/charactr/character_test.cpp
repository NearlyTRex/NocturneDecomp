#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/character.h"
#include "tests/mocks/core/notportedcalls.h"

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

TEST(CCharacter, IsAbstract) {
    static_assert(std::is_abstract_v<CCharacter>);
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
                                 void (CCharacter::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::drop),
                                 void (CCharacter::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::spawnFlies), void (CCharacter::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::calculateChecksum),
                                 void (CCharacter::*)(std::uint32_t *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::archive), void (CCharacter::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::applyDamage), void (CCharacter::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::kill),
                                 void (CCharacter::*)(int, common::CVector3f *, float)>);
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
                                 int (CCharacter::*)(common::CVector3f *, float, SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::testDamageLine),
                                 int (CCharacter::*)(common::CVector3f *, common::CVector3f *,
                                                     SDamageInfo *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processDamage), void (CCharacter::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getDeathState), EDeathState (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::attractActorToward),
                                 int (CCharacter::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::canBeAttracted),
                                 int (CCharacter::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::getPartDominantBone), int (CCharacter::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::setDoorTarget), void (CCharacter::*)(CDoor *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::clearDoorTarget), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::hasDoorTarget), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::dropCarriedObject),
                                 void (CCharacter::*)(int, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CCharacter::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setWalkTarget),
                                 void (CCharacter::*)(CDemonActor *, float, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::setWalkTargetImmediate),
                                 void (CCharacter::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::setWalkTimeout), void (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isWalkComplete), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::walkToPoint),
                                 int (CCharacter::*)(common::CVector3f *, CPathMap *,
                                                     common::CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::turnTowardPoint),
                                 void (CCharacter::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::moveAndCollide),
                                 void (CCharacter::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCharacter::isOnGround), int (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::preProcess), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processCharacter), int (CCharacter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::renderCharacter), void (CCharacter::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::renderAttachedModels), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::igniteBone),
                                 void (CCharacter::*)(common::CVector3f *, int, int, float, int)>);
    static_assert(
        std::is_same_v<decltype(&CCharacter::processDamageDecals), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::spawnGoreAtBone),
                                 void (CCharacter::*)(int, int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::spawnBloodAtBone),
                                 void (CCharacter::*)(int, int, float)>);
    static_assert(std::is_same_v<decltype(&CCharacter::shatter), void (CCharacter::*)()>);
    static_assert(std::is_same_v<decltype(&CCharacter::dismember),
                                 void (CCharacter::*)(common::CVector3f *, float, int)>);
    static_assert(std::is_same_v<decltype(&CCharacter::detachBodyPart),
                                 void (CCharacter::*)(int, common::CVector3f *, int)>);
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
                                 void (CCharacter::*)(common::UOrientationVector *)>);
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

// A character of no class but its own, so its calls reach CCharacter's.
class CTestCharacter : public CCharacter {
public:
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kType;
    }
};

TEST(CCharacter, ItsRecordIsAVersionSixActorThatMissionsCantCreate) {
    EXPECT_EQ(CCharacter::kType.class_name, "CCharacter");
    EXPECT_EQ(CCharacter::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CCharacter::kType.factory_func, nullptr);
    EXPECT_EQ(CCharacter::kType.latest_version, 6);
    EXPECT_EQ(CCharacter::kType.name_hash, hashClassName("CCharacter"));
}

TEST(CCharacter, TheFunctionsNotPortedYetQuit) {
    CTestCharacter character;
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const NotPortedCalls calls = {
        {"setup", [&] { character.setup(); }},
        {"renderOpaque", [&] { static_cast<void>(character.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(character.renderTransparent()); }},
        {"renderBackground", [&] { character.renderBackground(0); }},
        {"getBoundingBox", [&] { static_cast<void>(character.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(character.getCollisionType(nullptr)); }},
        {"canLookAt", [&] { static_cast<void>(character.canLookAt()); }},
        {"setPositionAndOrientation",
         [&] { character.setPositionAndOrientation(nullptr, nullptr); }},
        {"drop", [&] { character.drop(nullptr, nullptr); }},
        {"spawnFlies", [&] { character.spawnFlies(0, 0.0F); }},
        {"calculateChecksum", [&] { character.calculateChecksum(nullptr); }},
        {"archive", [&] { character.archive(archive); }},
        {"applyDamage", [&] { character.applyDamage(0, 0.0F); }},
        {"kill", [&] { character.kill(0, nullptr, 0.0F); }},
        {"isInvulnerable", [&] { static_cast<void>(character.isInvulnerable()); }},
        {"isGrabbable", [&] { static_cast<void>(character.isGrabbable(nullptr)); }},
        {"canBeGrabbed", [&] { static_cast<void>(character.canBeGrabbed(nullptr, 0)); }},
        {"getGrabbed", [&] { static_cast<void>(character.getGrabbed(nullptr, 0)); }},
        {"releaseFromGrab", [&] { character.releaseFromGrab(); }},
        {"getGrabber", [&] { static_cast<void>(character.getGrabber()); }},
        {"releaseVictim", [&] { character.releaseVictim(); }},
        {"onVictimLost", [&] { character.onVictimLost(nullptr); }},
        {"checkCylinderCollisionWorld",
         [&] { static_cast<void>(character.checkCylinderCollisionWorld(nullptr, 0.0F, nullptr)); }},
        {"testDamageLine",
         [&] { static_cast<void>(character.testDamageLine(nullptr, nullptr, nullptr, nullptr)); }},
        {"processDamage", [&] { character.processDamage(nullptr); }},
        {"getDeathState", [&] { static_cast<void>(character.getDeathState()); }},
        {"attractActorToward",
         [&] { static_cast<void>(character.attractActorToward(nullptr, nullptr)); }},
        {"canBeAttracted", [&] { static_cast<void>(character.canBeAttracted(nullptr)); }},
        {"getPartDominantBone", [&] { static_cast<void>(character.getPartDominantBone(0)); }},
        {"setDoorTarget", [&] { character.setDoorTarget(nullptr); }},
        {"clearDoorTarget", [&] { character.clearDoorTarget(); }},
        {"hasDoorTarget", [&] { static_cast<void>(character.hasDoorTarget()); }},
        {"dropCarriedObject", [&] { character.dropCarriedObject(0, nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(character.getCarryObjToBodyXForm(0, nullptr)); }},
        {"setWalkTarget", [&] { character.setWalkTarget(nullptr, 0.0F, 0.0F); }},
        {"setWalkTargetImmediate", [&] { character.setWalkTargetImmediate(nullptr); }},
        {"setWalkTimeout", [&] { character.setWalkTimeout(0.0F); }},
        {"isWalkComplete", [&] { static_cast<void>(character.isWalkComplete()); }},
    };
    EXPECT_EQ(calls.size(), 38U);
    expectEachQuitsNotPorted("CCharacter", calls);
}

} // namespace
} // namespace nocturne::core
