#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/mobster/mobster.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMobster, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CMobster>);
}

TEST(CMobster, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMobster>);
}

TEST(CMobster, IsConcrete) {
    static_assert(!std::is_abstract_v<CMobster>);
}

TEST(CMobster, Constructors) {
    static_assert(std::is_constructible_v<CMobster, CActor &>);
}

TEST(CMobster, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMobster::setup), void (CMobster::*)()>);
    static_assert(std::is_same_v<decltype(&CMobster::process), void (CMobster::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMobster::getCollisionType),
                                 ECollisionType (CMobster::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getTargetPoints),
                                 int (CMobster::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getActorType),
                                 const CDemonActorType &(CMobster::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CMobster::archive), void (CMobster::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CMobster::processDamage), void (CMobster::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CMobster::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CMobster::reset), void (CMobster::*)()>);
}

TEST(CMobster, ItsRecordIsVersion7UnderCEnemyAndMissionsCanCreateOne) {
    EXPECT_EQ(CMobster::kType.class_name, "CMobster");
    EXPECT_EQ(CMobster::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CMobster::kType.latest_version, 7);
    ASSERT_NE(CMobster::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CMobster::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CMobster::kType);
}

// After CEnemy's draws, the idle counter, then the voice.
TEST(CMobster, AMobstersIdleCounterAndVoiceAreDrawnAfterTheEnemys) {
    CTestClasses classes;
    CTestClasses same;
    classes.get().setRandomSeed(11);
    same.get().setRandomSeed(11);
    const CMobster mobster(classes.get());
    for (int i = 0; i < 4; ++i) {
        static_cast<void>(same.get().getRandomInt(0, 1));
    }
    EXPECT_EQ(mobster.getIdleCounter(), same.get().getRandomInt(0, 0xff));
    EXPECT_EQ(mobster.getVoice(), same.get().getRandomInt('b', 'e'));
    EXPECT_GE(mobster.getVoice(), 'b');
    EXPECT_LE(mobster.getVoice(), 'e');
}

TEST(CMobster, AMobsterReachesFortyUnitsUpOrDownWithNoPostOrCar) {
    CTestClasses classes;
    CMobster mobster(classes.get());
    EXPECT_EQ(mobster.getModel().getModelName(), "mobster1.dfm");
    EXPECT_EQ(mobster.getVictimHeight(), 40.0F);
    EXPECT_EQ(mobster.getPostMode(), 0);
    EXPECT_EQ(mobster.getPost(), nullptr);
    EXPECT_EQ(mobster.getVehicle(), nullptr);
    EXPECT_EQ(mobster.getSideOfCar(), 0);
    EXPECT_FALSE(mobster.isHoldingPosition());
    EXPECT_EQ(mobster.getHoldPositionCondition(), "none");
}

// A version 1 CCharacter's hit points, then a version 4 CEnemy's speed and blood pool.
class CMobsterArchiveTest : public ::testing::Test {
protected:
    CMobsterArchiveTest() {
        post_.setActorName("Post");
        car_.setActorName("Car");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(mobster_, CMobster::kType, saved_version,
                                   std::string("100\n1.1\n0\n") + std::string(fields));
        archive.getClasses().setSavedVersion(CEnemy::kType, 4);
        archive.addActor(post_);
        archive.addActor(car_);
        mobster_.archive(archive.get());
        EXPECT_EQ(mobster_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CMobster mobster_{classes_.get()};
    CTestActor post_{kTestBaseType};
    CTestActor car_{kTestBaseType};
};

// HeroDummy of HQ-ACT1.MSN, but at its post, in a car and holding its place.
TEST_F(CMobsterArchiveTest, AMobsterIsReadWithItsPostCarAndHold) {
    read(7, "\t1.09231    // speed\n\t\"mobster1.dfm\"    // modelName\n\t{ // motion state\n"
            "\t\t\"stand\",0 // current motion name, curFrameNumber\n\t}\n\t1    // postMode\n"
            "\t\"Post\"\t\t// ourPost\n\t\"Car\"\t\t// vehicle\n\t1    // sideOfCar\n"
            "\t1    // holdPosFlag\n\t\"@ambush\"    // holdPosCond\n");
    EXPECT_EQ(mobster_.getSpeed(), 1.09231F);
    EXPECT_EQ(mobster_.getPostMode(), 1);
    EXPECT_EQ(mobster_.getPost(), &post_);
    EXPECT_EQ(mobster_.getVehicle(), &car_);
    EXPECT_EQ(mobster_.getSideOfCar(), 1);
    EXPECT_TRUE(mobster_.isHoldingPosition());
    EXPECT_EQ(mobster_.getHoldPositionCondition(), "@ambush");
}

// Version 2 alone held the cloth, and up to 3 the guard distance again.
TEST_F(CMobsterArchiveTest, AVersionTwoMobsterHasItsGuardDistanceAndCloth) {
    read(2, "1\n\"m.dfm\"\n45\n{\n\"stand\",0\n}\n{\n1\n\"coat.cls\"\n}\n");
    EXPECT_EQ(mobster_.getGuardDistance(), 45.0F);
    EXPECT_EQ(mobster_.getClothList().getFilenames().size(), 1U);
    EXPECT_EQ(mobster_.getPost(), nullptr);
}

TEST(CMobster, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CMobster mobster(classes.get());
    const NotPortedCalls calls = {
        {"setup", [&] { mobster.setup(); }},
        {"process", [&] { mobster.process(0.0F); }},
        {"getCollisionType", [&] { static_cast<void>(mobster.getCollisionType(nullptr)); }},
        {"getTargetPoints", [&] { static_cast<void>(mobster.getTargetPoints(nullptr)); }},
        {"processDamage", [&] { mobster.processDamage(nullptr); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(mobster.getCarryObjToBodyXForm(0, nullptr)); }},
        {"reset", [&] { mobster.reset(); }},
    };
    expectEachQuitsNotPorted("CMobster", calls);
}

} // namespace
} // namespace nocturne::core
