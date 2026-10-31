#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/character.h"
#include "core/enemy/enemy.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CEnemy, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CEnemy>);
}

TEST(CEnemy, ItsRecordIsAVersionTenCharacterThatMissionsCantCreate) {
    EXPECT_EQ(CEnemy::kType.class_name, "CEnemy");
    EXPECT_EQ(CEnemy::kType.parent_type, &CCharacter::kType);
    EXPECT_EQ(CEnemy::kType.factory_func, nullptr);
    EXPECT_EQ(CEnemy::kType.latest_version, 10);
    EXPECT_EQ(CEnemy::kType.name_hash, hashClassName("CEnemy"));
}

TEST(CEnemy, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CEnemy>);
}

TEST(CEnemy, IsAbstract) {
    static_assert(std::is_abstract_v<CEnemy>);
}

TEST(CEnemy, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEnemy::setup), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::renderBackground), void (CEnemy::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CEnemy::getTargetPoints), int (CEnemy::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::archive), void (CEnemy::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CEnemy::releaseVictim), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::onVictimLost), void (CEnemy::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CEnemy::processDamage), void (CEnemy::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::getTargetPoint),
                                 common::CVector3f *(CEnemy::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::updateVictim), void (CEnemy::*)(float)>);
    static_assert(std::is_same_v<decltype(&CEnemy::testAttackRadius),
                                 int (CEnemy::*)(common::CVector3f *, float, SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CEnemy::testAttackLine),
                       int (CEnemy::*)(common::CVector3f *, common::CVector3f *, SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::canSeeTarget), int (CEnemy::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::setVictim), void (CEnemy::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::updatePatrol), int (CEnemy::*)(float)>);
}

constexpr CDemonActorType kTestEnemyType = makeActorType("CTestEnemy", &CEnemy::kType, nullptr, 1);

// The least an enemy class can be.
class CTestEnemy : public CEnemy {
public:
    explicit CTestEnemy(CActor &classes) : CEnemy(classes) {}
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kTestEnemyType;
    }
};

// The speed first, then the size along x, y and z, each from the classes' next random number.
TEST(CEnemy, AnEnemysSpeedAndSizeAreDrawnInTurn) {
    CTestClasses classes;
    CTestClasses same;
    classes.get().setRandomSeed(7);
    same.get().setRandomSeed(7);
    const CTestEnemy enemy(classes.get());
    EXPECT_EQ(enemy.getSpeed(), same.get().getRandomFloatFromRange(0.9F, 1.1F));
    EXPECT_EQ(enemy.getScale().x, same.get().getRandomInt(-0x1fff, 0x1fff) + 0x10000);
    EXPECT_EQ(enemy.getScale().y, same.get().getRandomInt(-0x1fff, 0x1fff) + 0x10000);
    EXPECT_EQ(enemy.getScale().z, same.get().getRandomInt(-0x1fff, 0x1fff) + 0x10000);
    EXPECT_GE(enemy.getSpeed(), 0.9F);
    EXPECT_LE(enemy.getSpeed(), 1.1F);
}

TEST(CEnemy, AnEnemyCanBeRandomizedAndGuardsAHundredUnitsWithNoVictim) {
    CTestClasses classes;
    const CTestEnemy enemy(classes.get());
    EXPECT_FALSE(enemy.hasLeftBloodPool());
    EXPECT_TRUE(enemy.isRandomizable());
    EXPECT_EQ(enemy.getScriptVictim(), nullptr);
    EXPECT_EQ(enemy.getPatrolNamePattern(), "");
    EXPECT_EQ(enemy.getGuardDistance(), 100.0F);
    EXPECT_EQ(enemy.getVictimHeight(), 6.0F);
    EXPECT_EQ(enemy.getVictim(), nullptr);
}

class CEnemyArchiveTest : public ::testing::Test {
protected:
    CEnemyArchiveTest() {
        hero_.setActorName("Stranger");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(enemy_, kTestEnemyType, 1, fields);
        archive.getClasses().setSavedVersion(CEnemy::kType, saved_version);
        archive.addActor(hero_);
        enemy_.archive(archive.get());
        EXPECT_EQ(enemy_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CTestEnemy enemy_{classes_.get()};
    CTestActor hero_{kTestBaseType};
};

// After CCharacter's fields, which at version 1 are the hit points.
TEST_F(CEnemyArchiveTest, AnEnemyIsReadWithItsPatrolAndVictims) {
    read(10, "\t60 // hitPoints\n\t1.05    // speed\n\t1    // poolMe\n\t0    // randomizeMe\n"
             "\t\"Stranger\"\t\t// scriptVictim\n\t\"WP_Hall*\"    // patrolNamePattern\n"
             "\t40    // guardDistance\n\t12    // victimHeight\n\t\"Stranger\"\t\t// victim\n");
    EXPECT_EQ(enemy_.getHitPoints(), 60.0F);
    EXPECT_EQ(enemy_.getSpeed(), 1.05F);
    EXPECT_TRUE(enemy_.hasLeftBloodPool());
    EXPECT_FALSE(enemy_.isRandomizable());
    EXPECT_EQ(enemy_.getScriptVictim(), &hero_);
    EXPECT_EQ(enemy_.getPatrolNamePattern(), "WP_Hall*");
    EXPECT_EQ(enemy_.getGuardDistance(), 40.0F);
    EXPECT_EQ(enemy_.getVictimHeight(), 12.0F);
    EXPECT_EQ(enemy_.getVictim(), &hero_);
}

TEST_F(CEnemyArchiveTest, AVersionFourEnemyHasOnlyItsSpeedAndBloodPool) {
    read(4, "60\n1.05\n0\n");
    EXPECT_EQ(enemy_.getSpeed(), 1.05F);
    EXPECT_TRUE(enemy_.isRandomizable());
    EXPECT_EQ(enemy_.getGuardDistance(), 100.0F);
}

// Before version 4 CCharacter's fields weren't saved: the speed, then the hit points.
TEST_F(CEnemyArchiveTest, AVersionThreeEnemyHasItsSpeedHitPointsAndBloodPool) {
    read(3, "1.05 // speed\n30 // hitPoints\n1 // poolMe\n");
    EXPECT_EQ(enemy_.getSpeed(), 1.05F);
    EXPECT_EQ(enemy_.getHitPoints(), 30.0F);
    EXPECT_TRUE(enemy_.hasLeftBloodPool());
}

TEST_F(CEnemyArchiveTest, AVersionOneEnemyHasOnlyCDemonActorsFields) {
    const float speed = enemy_.getSpeed();
    read(1, "");
    EXPECT_EQ(enemy_.getSpeed(), speed);
    EXPECT_EQ(enemy_.getHitPoints(), 100.0F);
}

TEST(CEnemy, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CTestEnemy enemy(classes.get());
    const NotPortedCalls calls = {
        {"renderBackground", [&] { enemy.renderBackground(0); }},
        {"getTargetPoints", [&] { static_cast<void>(enemy.getTargetPoints(nullptr)); }},
        {"releaseVictim", [&] { enemy.releaseVictim(); }},
        {"onVictimLost", [&] { enemy.onVictimLost(nullptr); }},
        {"processDamage", [&] { enemy.processDamage(nullptr); }},
        {"getTargetPoint", [&] { static_cast<void>(enemy.getTargetPoint(nullptr)); }},
        {"updateVictim", [&] { enemy.updateVictim(0.0F); }},
    };
    expectEachQuitsNotPorted("CEnemy", calls);
}

} // namespace
} // namespace nocturne::core
