#include "common/error/fatalerror.h"
#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <cstdio>
#include <functional>
#include <optional>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CDemonActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonActor>);
}

TEST(CDemonActor, IsAbstract) {
    static_assert(std::is_abstract_v<CDemonActor>);
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
    static_assert(std::is_same_v<decltype(&CDemonActor::getActorType),
                                 const CDemonActorType &(CDemonActor::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::archive), void (CDemonActor::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::setupRenderState), void (CDemonActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonActor::restoreRenderState), void (CDemonActor::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getActorClassName),
                                 std::string_view (CDemonActor::*)() const>);
    static_assert(std::is_same_v<decltype(&CDemonActor::getActorName),
                                 const std::string &(CDemonActor::*)() const>);
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
    static_assert(std::is_same_v<decltype(&CDemonActor::save), void (CDemonActor::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CDemonActor::load),
                                 void (CDemonActor::*)(common::CTextScanner &)>);
}

TEST(CDemonActor, ItsRecordIsAnAbstractBaseClass) {
    EXPECT_EQ(CDemonActor::kType.class_name, "CDemonActor");
    EXPECT_EQ(CDemonActor::kType.parent_type, nullptr);
    EXPECT_EQ(CDemonActor::kType.factory_func, nullptr);
    EXPECT_EQ(CDemonActor::kType.latest_version, 7);
    EXPECT_EQ(CDemonActor::kType.name_hash, hashClassName("CDemonActor"));
}

TEST(CDemonActor, AnActorStartsWithNoName) {
    const CTestActor actor(kTestLeafType);
    EXPECT_EQ(actor.getActorName(), "");
    EXPECT_EQ(actor.getActorClassName(), "CTestLeaf");
}

// The class's fields come between the tags, read by archive().
TEST(CDemonActor, LoadingReadsTheNameFromTheStartTagAndTheFieldsBetween) {
    CTestActor actor(kTestLeafType);
    std::optional<int> field;
    actor.onArchive([&](CActorArchive &archive) { field = archive.getScanner().scanInteger(); });
    common::CTextScanner scanner(" { ctestleaf \"Door 1\"\n  42\n } CTestLeaf \"DOOR 1\"\nnext");
    actor.load(scanner);
    EXPECT_EQ(actor.getActorName(), "Door 1");
    EXPECT_EQ(field, 42);
    EXPECT_EQ(scanner.scanWord(), "next");
}

TEST(CDemonActor, AStartTagForAnotherClassIsFatal) {
    CTestActor actor(kTestLeafType);
    common::CTextScanner scanner("{ CTestOther \"a\"\n} CTestOther \"a\"\n");
    EXPECT_THAT([&] { actor.load(scanner); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Start of actor file tag mismatch for class CTestLeaf")));
}

TEST(CDemonActor, AMissingStartTagIsFatal) {
    CTestActor actor(kTestLeafType);
    common::CTextScanner scanner("CTestLeaf \"a\"\n");
    EXPECT_THROW(actor.load(scanner), common::CFatalError);
}

TEST(CDemonActor, ATagWithoutANameLeavesTheActorUnnamed) {
    CTestActor actor(kTestLeafType);
    common::CTextScanner scanner("{ CTestLeaf\n} CTestLeaf \"\"");
    actor.load(scanner);
    EXPECT_EQ(actor.getActorName(), "");
}

// fscanf's %[^"] fails on nothing, so the read stops at the closing quote, where the end tag is
// then looked for.
TEST(CDemonActor, AnEmptyQuotedNameIsFatal) {
    CTestActor actor(kTestLeafType);
    common::CTextScanner scanner("{ CTestLeaf \"\"\n} CTestLeaf \"\"");
    EXPECT_THAT([&] { actor.load(scanner); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("End of actor file tag mismatch for class CTestLeaf name \"\"")));
}

TEST(CDemonActor, AnEndTagForAnotherClassOrActorIsFatal) {
    for (const std::string_view end : {"} CTestOther \"a\"", "} CTestLeaf \"b\"", "CTestLeaf"}) {
        CTestActor actor(kTestLeafType);
        const std::string text = "{ CTestLeaf \"a\"\n" + std::string(end);
        common::CTextScanner scanner(text);
        EXPECT_THAT([&] { actor.load(scanner); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("End of actor file tag mismatch for class CTestLeaf name \"a\"")));
    }
}

// Each quits, naming itself, until its function is ported.
TEST(CDemonActor, TheFunctionsNotPortedYetQuit) {
    CTestActor actor(kTestLeafType);
    common::CTextScanner scanner("");
    CActorArchive archive(scanner);
    const std::vector<std::pair<std::string_view, std::function<void()>>> calls = {
        {"setup", [&] { actor.setup(); }},
        {"process", [&] { actor.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(actor.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(actor.renderTransparent()); }},
        {"renderBackground", [&] { actor.renderBackground(0); }},
        {"getBoundingBox", [&] { static_cast<void>(actor.getBoundingBox(nullptr)); }},
        {"processFootstep", [&] { static_cast<void>(actor.processFootstep(0.0F)); }},
        {"processFootstepAtOffset",
         [&] { static_cast<void>(actor.processFootstepAtOffset(nullptr, 0.0F)); }},
        {"handleFootstep",
         [&] { static_cast<void>(actor.handleFootstep(nullptr, EGroundType{}, 0.0F)); }},
        {"playSound", [&] { static_cast<void>(actor.playSound(nullptr)); }},
        {"playAmbientSound", [&] { static_cast<void>(actor.playAmbientSound(nullptr)); }},
        {"playSoundWithDelay", [&] { static_cast<void>(actor.playSoundWithDelay(nullptr, 0.0F)); }},
        {"playAmbientSoundWithDelay",
         [&] { static_cast<void>(actor.playAmbientSoundWithDelay(nullptr, 0.0F)); }},
        {"getCollisionType", [&] { static_cast<void>(actor.getCollisionType(nullptr)); }},
        {"cylinderGroundCheck",
         [&] { static_cast<void>(actor.cylinderGroundCheck(0.0F, nullptr)); }},
        {"getGroundType", [&] { static_cast<void>(actor.getGroundType()); }},
        {"getBlockVirtualDirectorFlag",
         [&] { static_cast<void>(actor.getBlockVirtualDirectorFlag()); }},
        {"allowBulletHoles", [&] { static_cast<void>(actor.allowBulletHoles()); }},
        {"updateCollisionData", [&] { actor.updateCollisionData(); }},
        {"getTargetPoints", [&] { static_cast<void>(actor.getTargetPoints(nullptr)); }},
        {"renderTargetPoints", [&] { actor.renderTargetPoints(); }},
        {"canLookAt", [&] { static_cast<void>(actor.canLookAt()); }},
        {"evaluateTriggerCondition",
         [&] { static_cast<void>(actor.evaluateTriggerCondition(nullptr, nullptr)); }},
        {"processActionButton", [&] { static_cast<void>(actor.processActionButton()); }},
        {"setPositionAndOrientation", [&] { actor.setPositionAndOrientation(nullptr, nullptr); }},
        {"onPickup", [&] { actor.onPickup(nullptr); }},
        {"shouldIgnoreForTargeting", [&] { static_cast<void>(actor.shouldIgnoreForTargeting()); }},
        {"getAllowedMeleeAttackTypes",
         [&] { static_cast<void>(actor.getAllowedMeleeAttackTypes()); }},
        {"processMeleeHit", [&] { static_cast<void>(actor.processMeleeHit(0)); }},
        {"fillAttackDamageInfo", [&] { actor.fillAttackDamageInfo(0, nullptr, nullptr); }},
        {"playAttackHitEffects", [&] { actor.playAttackHitEffects(0, nullptr, nullptr); }},
        {"canPickup", [&] { static_cast<void>(actor.canPickup(nullptr)); }},
        {"pickup", [&] { actor.pickup(nullptr); }},
        {"onDropped", [&] { actor.onDropped(nullptr); }},
        {"drop", [&] { actor.drop(nullptr, nullptr); }},
        {"getCarrier", [&] { static_cast<void>(actor.getCarrier()); }},
        {"getInteractionInfo", [&] { actor.getInteractionInfo(nullptr); }},
        {"startInteraction", [&] { static_cast<void>(actor.startInteraction(nullptr)); }},
        {"updateInteraction",
         [&] { static_cast<void>(actor.updateInteraction(nullptr, nullptr)); }},
        {"stopInteraction", [&] { actor.stopInteraction(nullptr); }},
        {"spawnFlies", [&] { actor.spawnFlies(0, 0.0F); }},
        {"testCylinderCollision",
         [&] { static_cast<void>(actor.testCylinderCollision(nullptr, 0.0F)); }},
        {"testLineIntersection",
         [&] { static_cast<void>(actor.testLineIntersection(nullptr, nullptr, nullptr)); }},
        {"onLaserHit", [&] { actor.onLaserHit(nullptr); }},
        {"customRayIntersect",
         [&] { static_cast<void>(actor.customRayIntersect(nullptr, nullptr, nullptr)); }},
        {"customIntersectCylinderXZ", [&] { actor.customIntersectCylinderXZ(nullptr); }},
        {"customGetFloorHeight",
         [&] { static_cast<void>(actor.customGetFloorHeight(nullptr, 0.0F, nullptr)); }},
        {"getPathMap", [&] { static_cast<void>(actor.getPathMap()); }},
        {"calculateChecksum", [&] { actor.calculateChecksum(nullptr); }},
        {"archive", [&] { actor.CDemonActor::archive(archive); }},
    };
    EXPECT_EQ(calls.size(), 50U);
    for (const auto &[name, call] : calls) {
        EXPECT_THAT(call, ThrowsMessage<common::CFatalError>(
                              StrEq("CDemonActor::" + std::string(name) + " is not ported yet")));
    }
}

} // namespace
} // namespace nocturne::core
