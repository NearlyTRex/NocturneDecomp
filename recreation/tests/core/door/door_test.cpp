#include "core/actor/demonactortype.h"
#include "core/actor/groundtype.h"
#include "core/door/door.h"
#include "core/door/doortype.h"
#include "core/event/rulelist.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

TEST(CDoor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CDoor>);
}

TEST(CDoor, ItsRecordIsVersion11UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CDoor::kType.class_name, "CDoor");
    EXPECT_EQ(CDoor::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CDoor::kType.latest_version, 11);
    EXPECT_EQ(CDoor::kType.name_hash, hashClassName("CDoor"));
    ASSERT_NE(CDoor::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CDoor::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CDoor::kType);
}

TEST(CDoor, ADoorIsAClosedChurchDoorThatSwingsFromItsRightOnTheDefaultEvents) {
    CDoor door;
    EXPECT_EQ(door.getModel().getModelName(), "churchd01.kfm");
    EXPECT_EQ(door.getDoorType(), EDoorType::kSwing);
    EXPECT_EQ(door.getDoorSide(), EDoorSide::kRight);
    EXPECT_EQ(door.getDoorState(), EDoorState::kClosed);
    EXPECT_EQ(door.getDoorSwing(), EDoorSwing::kClockwise);
    EXPECT_EQ(door.getOpenEvent(), "defaultDoorOpen");
    EXPECT_EQ(door.getCloseEvent(), "defaultDoorClose");
    EXPECT_EQ(door.getOpenSound(), "");
    EXPECT_EQ(door.getLockedSound(), "door-locked.wav");
    EXPECT_EQ(door.getKeyMask(), 0);
    EXPECT_EQ(door.getParam(), 0.0F);
    EXPECT_EQ(door.getMaxParam(), 1.0F);
    EXPECT_EQ(door.getOpenSpeed(), 1.0F);
    EXPECT_EQ(door.getCloseSpeed(), 1.0F);
    EXPECT_EQ(door.getGroundType(), EGroundType::kDefault);
    EXPECT_FALSE(door.isOneShot());
    EXPECT_THAT(door.getOpenRules().getRules(), IsEmpty());
    EXPECT_EQ(door.getBlockVirtualDirectorFlag(), 1);
    EXPECT_FALSE(door.isPlottedAsBoxInShadow());
    EXPECT_EQ(door.getAllowedSides(), EDoorOpenSides::kBoth);
    EXPECT_EQ(door.allowBulletHoles(), 1);
    EXPECT_EQ(door.getSwingRange(), 0.0F);
}

TEST(CDoor, TheSwingRangeIsSet) {
    CDoor door;
    door.setSwingRange(1.5F);
    EXPECT_EQ(door.getSwingRange(), 1.5F);
}

// The office door of HQ-ACT1.MSN, but with a rule, the other sides and a key.
constexpr std::string_view kLatestDoor = "\t\"OFFICEDOOR.KFM\"    // modelName\n"
                                         "\t2    // doorType\n"
                                         "\t0    // doorSide\n"
                                         "\t2    // doorState\n"
                                         "\t1    // doorSwing\n"
                                         "\t\"HQDoor0Open\"    // openEvent\n"
                                         "\t\"HQDoor0Close\"    // closeEvent\n"
                                         "\t\"door-open2.wav\"    // openSound\n"
                                         "\t\"shut.wav\"    // closeSound\n"
                                         "\t4    // keyMask\n"
                                         "\t33.9524,1,35.6566    // origPos\n"
                                         "\t0,0.0230573,0    // origOrient\n"
                                         "\t0.5    // param\n"
                                         "\t2    // maxParam\n"
                                         "\t3    // openSpeed\n"
                                         "\t4    // closeSpeed\n"
                                         "\t7    // groundType\n"
                                         "\t\"Opened\"    // eventToTriggerWhenOpen\n"
                                         "\t\"Closed\"    // eventToTriggerWhenClosed\n"
                                         "\t1    // oneShot\n"
                                         "\t{ // openRules\n"
                                         "\t\t1 // ruleCount\n"
                                         "\t\t\"@unlocked\" => \"OpenIt\"\n"
                                         "\t}\n"
                                         "\t0    // blockVirtualDirectorFlag\n"
                                         "\t1    // plotAsBoxInShadow\n"
                                         "\t1    // allowedSides\n"
                                         "\t0    // allowBulletHoles\n"
                                         "\t\"rattle.wav\"    // lockedSound\n";

TEST(CDoor, ADoorIsReadWithItsRulesAndLockedSound) {
    CDoor door;
    CTestFieldsArchive archive(door, CDoor::kType, 11, kLatestDoor);
    door.archive(archive.get());
    EXPECT_EQ(door.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(door.getModel().getModelName(), "OFFICEDOOR.KFM");
    EXPECT_EQ(door.getDoorType(), EDoorType::kSlide);
    EXPECT_EQ(door.getDoorSide(), EDoorSide::kLeft);
    EXPECT_EQ(door.getDoorState(), EDoorState::kOpen);
    EXPECT_EQ(door.getDoorSwing(), EDoorSwing::kCounterClockwise);
    EXPECT_EQ(door.getOpenEvent(), "HQDoor0Open");
    EXPECT_EQ(door.getCloseEvent(), "HQDoor0Close");
    EXPECT_EQ(door.getOpenSound(), "door-open2.wav");
    EXPECT_EQ(door.getCloseSound(), "shut.wav");
    EXPECT_EQ(door.getKeyMask(), 4);
    EXPECT_EQ(door.getOriginalPosition().y, 1.0F);
    EXPECT_EQ(door.getOriginalOrientation().y, 0.0230573F);
    EXPECT_EQ(door.getParam(), 0.5F);
    EXPECT_EQ(door.getMaxParam(), 2.0F);
    EXPECT_EQ(door.getOpenSpeed(), 3.0F);
    EXPECT_EQ(door.getCloseSpeed(), 4.0F);
    EXPECT_EQ(door.getGroundType(), EGroundType::kWood);
    EXPECT_EQ(door.getEventWhenOpen(), "Opened");
    EXPECT_EQ(door.getEventWhenClosed(), "Closed");
    EXPECT_TRUE(door.isOneShot());
    EXPECT_THAT(door.getOpenRules().getRules(),
                ElementsAre(SRule{.condition = "@unlocked", .event = "OpenIt"}));
    EXPECT_EQ(door.getBlockVirtualDirectorFlag(), 0);
    EXPECT_TRUE(door.isPlottedAsBoxInShadow());
    EXPECT_EQ(door.getAllowedSides(), EDoorOpenSides::kPositiveZ);
    EXPECT_EQ(door.allowBulletHoles(), 0);
    EXPECT_EQ(door.getLockedSound(), "rattle.wav");
    EXPECT_TRUE(archive.isFinished());
}

// The fields every version has, up to the speeds.
constexpr std::string_view kFirstDoor = "\"d.kfm\"\n1\n1\n0\n0\n\"o\"\n\"c\"\n\"\"\n\"\"\n0\n"
                                        "1,2,3\n0,0,0\n0\n1\n1\n1\n";

TEST(CDoor, AVersionOneDoorHasOnlyTheFieldsUpToItsSpeeds) {
    CDoor door;
    CTestFieldsArchive archive(door, CDoor::kType, 1, kFirstDoor);
    door.archive(archive.get());
    EXPECT_EQ(door.getOriginalPosition().z, 3.0F);
    EXPECT_EQ(door.getGroundType(), EGroundType::kDefault);
    EXPECT_EQ(door.getLockedSound(), "door-locked.wav");
    EXPECT_TRUE(archive.isFinished());
}

// Versions 5 and 6 held one event the script ran, which becomes a rule that always holds.
TEST(CDoor, AnOldDoorsScriptEventIsARuleThatAlwaysHolds) {
    CDoor door;
    CTestFieldsArchive archive(door, CDoor::kType, 6,
                               std::string(kFirstDoor) +
                                   "3\n\"\"\n\"\"\n0\n\"OpenVault\"\n0 // blockVirtualDirector\n");
    door.archive(archive.get());
    EXPECT_EQ(door.getGroundType(), EGroundType::kDirt);
    EXPECT_THAT(door.getOpenRules().getRules(),
                ElementsAre(SRule{.condition = "true", .event = "OpenVault"}));
    EXPECT_EQ(door.getBlockVirtualDirectorFlag(), 0);
    EXPECT_FALSE(door.isPlottedAsBoxInShadow());
    EXPECT_TRUE(archive.isFinished());
}

TEST(CDoor, AnOldDoorWithoutAScriptEventHasNoRules) {
    CDoor door;
    CTestFieldsArchive archive(door, CDoor::kType, 5,
                               std::string(kFirstDoor) + "0\n\"\"\n\"\"\n0\n\"\"\n");
    door.archive(archive.get());
    EXPECT_THAT(door.getOpenRules().getRules(), IsEmpty());
    EXPECT_EQ(door.getBlockVirtualDirectorFlag(), 1);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CDoor, TheFunctionsNotPortedYetQuit) {
    CDoor door;
    const NotPortedCalls calls = {
        {"setup", [&] { door.setup(); }},
        {"process", [&] { door.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(door.renderOpaque()); }},
        {"renderBackground", [&] { door.renderBackground(0); }},
        {"getBoundingBox", [&] { static_cast<void>(door.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(door.getCollisionType(nullptr)); }},
        {"updateCollisionData", [&] { door.updateCollisionData(); }},
    };
    expectEachQuitsNotPorted("CDoor", calls);
}

TEST(CDoor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDoor>);
}

TEST(CDoor, IsConcrete) {
    static_assert(!std::is_abstract_v<CDoor>);
}

TEST(CDoor, Constructors) {
    static_assert(std::is_constructible_v<CDoor>);
}

TEST(CDoor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDoor::setup), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::process), void (CDoor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDoor::renderOpaque), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::renderBackground), void (CDoor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDoor::getBoundingBox),
                                 CBoundingBox3D *(CDoor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getCollisionType),
                                 ECollisionType (CDoor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getGroundType), EGroundType (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::getBlockVirtualDirectorFlag), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::allowBulletHoles), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::updateCollisionData), void (CDoor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDoor::getActorType), const CDemonActorType &(CDoor::*)() const>);
    static_assert(std::is_same_v<decltype(&CDoor::archive), void (CDoor::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CDoor::onOpened), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::setSwingRange), void (CDoor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CDoor::getOpenStandPos),
                       common::CVector3f *(CDoor::*)(common::CVector3f *, common::CVector3f *,
                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getMoveType), int (CDoor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDoor::onLocked), std::uint32_t (CDoor::*)()>);
}

} // namespace
} // namespace nocturne::core
