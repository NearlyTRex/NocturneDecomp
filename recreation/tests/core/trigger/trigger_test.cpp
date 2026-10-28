#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/trigger/trigger.h"
#include "core/trigger/triggercause.h"
#include "core/trigger/triggereventtype.h"
#include "core/trigger/triggershape.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <format>
#include <memory>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTrigger, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTrigger>);
}

TEST(CTrigger, ItsRecordIsAVersionElevenActorThatMissionsCanCreate) {
    EXPECT_EQ(CTrigger::kType.class_name, "CTrigger");
    EXPECT_EQ(CTrigger::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CTrigger::kType.latest_version, 11);
    EXPECT_EQ(CTrigger::kType.name_hash, hashClassName("CTrigger"));
    ASSERT_NE(CTrigger::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CTrigger::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CTrigger::kType);
}

TEST(CTrigger, ATriggerIsAHeroTriggerFiveByNineByFiveUntilToldOtherwise) {
    const CTrigger trigger;
    EXPECT_EQ(trigger.getTriggerSize().x, 5.0F);
    EXPECT_EQ(trigger.getTriggerSize().y, 9.0F);
    EXPECT_EQ(trigger.getTriggerSize().z, 5.0F);
    EXPECT_EQ(trigger.getTriggerShape(), ETriggerShape::kBox);
    EXPECT_EQ(trigger.getEventType(), ETriggerEventType::kMomentary);
    EXPECT_EQ(trigger.getOnEvent(), "");
    EXPECT_EQ(trigger.getOffEvent(), "");
    EXPECT_EQ(trigger.getTriggerState(), 0);
    EXPECT_EQ(trigger.getTriggerCause(), ETriggerCause::kHero);
    EXPECT_EQ(trigger.getActorTriggerName(), "nobody");
    EXPECT_EQ(trigger.getActorTriggerTypes(), "CDemonActor");
    EXPECT_FALSE(trigger.isPressurePlate());
    EXPECT_EQ(trigger.getLightMin(), 0.25F);
    EXPECT_EQ(trigger.getLightMax(), 1.0F);
    EXPECT_EQ(trigger.getLaserType(), 1);
    EXPECT_EQ(trigger.getHitPoints(), 100.0F);
    EXPECT_EQ(trigger.getTestRadius(), 99999.9F);
    EXPECT_TRUE(trigger.isAutoAimAtMe());
    EXPECT_EQ(trigger.getDamageActorWildcard(), "");
}

TEST(CTrigger, ItsBoxIsCentredAndReachesATenthPastItsFloorAndHeight) {
    CTrigger trigger;
    CBoundingBox3D box;
    EXPECT_EQ(trigger.getBoundingBox(&box), &box);
    EXPECT_EQ(box.min.x, -2.5F);
    EXPECT_EQ(box.min.y, -0.1F);
    EXPECT_EQ(box.min.z, -2.5F);
    EXPECT_EQ(box.max.x, 2.5F);
    EXPECT_EQ(box.max.y, 9.0F + 0.1F);
    EXPECT_EQ(box.max.z, 2.5F);
}

TEST(CTrigger, ATriggerIsReadWithAllItsFields) {
    CTrigger trigger;
    CTestFieldsArchive archive(
        trigger, CTrigger::kType, 11,
        "1 // triggerState\n2,3,4 // triggerSize\n1 // triggerType\n\"open\" // onName\n"
        "\"close\"\n1 // whoTriggers\n\"Door*\"\n\"CDoor\"\n0.5\n0.75\n2\n40\n1\n25\n0\n1\n"
        "\"Imp*\"\n");
    trigger.archive(archive.get());
    EXPECT_EQ(trigger.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(trigger.getTriggerState(), 1);
    EXPECT_EQ(trigger.getTriggerSize().z, 4.0F);
    EXPECT_EQ(trigger.getEventType(), ETriggerEventType::kOneShot);
    EXPECT_EQ(trigger.getOnEvent(), "open");
    EXPECT_EQ(trigger.getOffEvent(), "close");
    EXPECT_EQ(trigger.getTriggerCause(), ETriggerCause::kActor);
    EXPECT_EQ(trigger.getActorTriggerName(), "Door*");
    EXPECT_EQ(trigger.getActorTriggerTypes(), "CDoor");
    EXPECT_EQ(trigger.getLightMin(), 0.5F);
    EXPECT_EQ(trigger.getLightMax(), 0.75F);
    EXPECT_EQ(trigger.getLaserType(), 2);
    EXPECT_EQ(trigger.getHitPoints(), 40.0F);
    EXPECT_TRUE(trigger.isPressurePlate());
    EXPECT_EQ(trigger.getTestRadius(), 25.0F);
    EXPECT_FALSE(trigger.isAutoAimAtMe());
    EXPECT_EQ(trigger.getTriggerShape(), ETriggerShape::kCylinder);
    EXPECT_EQ(trigger.getDamageActorWildcard(), "Imp*");
    EXPECT_TRUE(archive.isFinished());
}

// The events, then version 7's fields with no test radius, here for the given cause.
std::string versionSevenFields(int cause) {
    return std::format("0\n2,3,4\n0\n\"\"\n\"\"\n{}\n\"\"\n\"\"\n0\n1\n1\n100\n0\n", cause);
}

// Before version 8 a hero or actor trigger works its test radius out from its box: here 2 by
// 3.2 by 4, whose diagonal of 5.5 and margin of 10 round up to 16.
TEST(CTrigger, AVersionSevenHeroOrActorTriggerWorksOutItsTestRadius) {
    for (const int cause : {0, 1}) {
        CTrigger trigger;
        CTestFieldsArchive archive(trigger, CTrigger::kType, 7, versionSevenFields(cause));
        trigger.archive(archive.get());
        EXPECT_EQ(trigger.getTestRadius(), 16.0F);
        EXPECT_TRUE(trigger.isAutoAimAtMe());
        EXPECT_EQ(trigger.getTriggerShape(), ETriggerShape::kBox);
        EXPECT_TRUE(archive.isFinished());
    }
}

TEST(CTrigger, AVersionSevenTriggerOfAnyOtherCauseKeepsItsTestRadius) {
    CTrigger trigger;
    CTestFieldsArchive archive(trigger, CTrigger::kType, 7, versionSevenFields(5));
    trigger.archive(archive.get());
    EXPECT_EQ(trigger.getTriggerCause(), ETriggerCause::kLaser);
    EXPECT_EQ(trigger.getTestRadius(), 99999.9F);
}

// Version 8 holds the radius, and 9 and 10 auto aim and the shape, without the wildcard.
TEST(CTrigger, VersionsEightToTenHoldTheFieldsUpToTheirOwn) {
    CTrigger eight;
    CTestFieldsArchive eight_archive(eight, CTrigger::kType, 8, versionSevenFields(0) + "30\n");
    eight.archive(eight_archive.get());
    EXPECT_EQ(eight.getTestRadius(), 30.0F);
    EXPECT_TRUE(eight_archive.isFinished());
    CTrigger ten;
    CTestFieldsArchive ten_archive(ten, CTrigger::kType, 10, versionSevenFields(0) + "30\n0\n1\n");
    ten.archive(ten_archive.get());
    EXPECT_FALSE(ten.isAutoAimAtMe());
    EXPECT_EQ(ten.getTriggerShape(), ETriggerShape::kCylinder);
    EXPECT_EQ(ten.getDamageActorWildcard(), "");
    EXPECT_TRUE(ten_archive.isFinished());
}

// Before version 7 each field came with its own version, and some only for the cause that
// reads them.
TEST(CTrigger, AnOlderTriggerHoldsTheFieldsOfItsVersionAndCause) {
    const std::string events = "0\n2,3,4\n0\n\"\"\n\"\"\n";
    CTrigger damage;
    CTestFieldsArchive six(damage, CTrigger::kType, 6, events + "7\n\"Me\"\n0.5\n0.75\n60\n1\n");
    damage.archive(six.get());
    EXPECT_EQ(damage.getTriggerCause(), ETriggerCause::kDamage);
    EXPECT_EQ(damage.getHitPoints(), 60.0F);
    EXPECT_TRUE(damage.isPressurePlate());
    EXPECT_EQ(damage.getTestRadius(), 99999.9F);
    EXPECT_TRUE(six.isFinished());
    CTrigger actor;
    CTestFieldsArchive five(actor, CTrigger::kType, 5, events + "1\n\"Me\"\n0.5\n0.75\n\"CImp\"\n");
    actor.archive(five.get());
    EXPECT_EQ(actor.getActorTriggerTypes(), "CImp");
    EXPECT_TRUE(five.isFinished());
    CTrigger laser;
    CTestFieldsArchive four(laser, CTrigger::kType, 4, events + "5\n\"Me\"\n0.5\n0.75\n3\n");
    laser.archive(four.get());
    EXPECT_EQ(laser.getLaserType(), 3);
    EXPECT_EQ(laser.getActorTriggerTypes(), "CDemonActor");
    EXPECT_TRUE(four.isFinished());
}

TEST(CTrigger, TheOldestTriggersHoldFewerFields) {
    const std::string events = "0\n2,3,4\n0\n\"\"\n\"\"\n";
    CTrigger light;
    CTestFieldsArchive four(light, CTrigger::kType, 4, events + "2\n\"Me\"\n0.5\n0.75\n");
    light.archive(four.get());
    EXPECT_EQ(light.getLaserType(), 1);
    EXPECT_TRUE(four.isFinished());
    CTrigger three;
    CTestFieldsArchive three_archive(three, CTrigger::kType, 3, events + "0\n\"Me\"\n0.5\n0.75\n");
    three.archive(three_archive.get());
    EXPECT_EQ(three.getLightMin(), 0.5F);
    EXPECT_TRUE(three_archive.isFinished());
    CTrigger two;
    CTestFieldsArchive two_archive(two, CTrigger::kType, 2, events + "1\n\"Me\"\n");
    two.archive(two_archive.get());
    EXPECT_EQ(two.getActorTriggerName(), "Me");
    EXPECT_EQ(two.getLightMin(), 0.25F);
    EXPECT_TRUE(two_archive.isFinished());
    CTrigger one;
    CTestFieldsArchive one_archive(one, CTrigger::kType, 1, events);
    one.archive(one_archive.get());
    EXPECT_EQ(one.getActorTriggerName(), "nobody");
    EXPECT_TRUE(one_archive.isFinished());
}

TEST(CTrigger, TheFunctionsNotPortedYetQuit) {
    CTrigger trigger;
    const NotPortedCalls calls = {
        {"setup", [&] { trigger.setup(); }},
        {"process", [&] { trigger.process(0.0F); }},
        {"renderTransparent", [&] { static_cast<void>(trigger.renderTransparent()); }},
        {"getCollisionType", [&] { static_cast<void>(trigger.getCollisionType(nullptr)); }},
        {"getTargetPoints", [&] { static_cast<void>(trigger.getTargetPoints(nullptr)); }},
        {"evaluateTriggerCondition",
         [&] { static_cast<void>(trigger.evaluateTriggerCondition(nullptr, nullptr)); }},
        {"processActionButton", [&] { static_cast<void>(trigger.processActionButton()); }},
        {"onLaserHit", [&] { trigger.onLaserHit(nullptr); }},
    };
    EXPECT_EQ(calls.size(), 8U);
    expectEachQuitsNotPorted("CTrigger", calls);
}

TEST(CTrigger, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTrigger>);
}

TEST(CTrigger, IsConcrete) {
    static_assert(!std::is_abstract_v<CTrigger>);
}

TEST(CTrigger, Constructors) {
    static_assert(std::is_constructible_v<CTrigger>);
}

TEST(CTrigger, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTrigger::setup), void (CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::process), void (CTrigger::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTrigger::renderTransparent), int (CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::getBoundingBox),
                                 CBoundingBox3D *(CTrigger::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::getCollisionType),
                                 ECollisionType (CTrigger::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::getTargetPoints),
                                 int (CTrigger::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::evaluateTriggerCondition),
                                 float (CTrigger::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::processActionButton), int (CTrigger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::onLaserHit), void (CTrigger::*)(SLaserInfo *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::getActorType),
                                 const CDemonActorType &(CTrigger::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::archive), void (CTrigger::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CTrigger::onProjectileHit), void (CTrigger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::acceptsDamageFrom), int (CTrigger::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::applyDamage), void (CTrigger::*)(float)>);
}

} // namespace
} // namespace nocturne::core
