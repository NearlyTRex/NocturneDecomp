#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"
#include "core/zombie/zombie.h"
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

TEST(CZombie, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CZombie>);
}

TEST(CZombie, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CZombie>);
}

TEST(CZombie, IsConcrete) {
    static_assert(!std::is_abstract_v<CZombie>);
}

TEST(CZombie, Constructors) {
    static_assert(std::is_constructible_v<CZombie, CActor &>);
}

TEST(CZombie, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CZombie::setup), void (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::process), void (CZombie::*)(float)>);
    static_assert(std::is_same_v<decltype(&CZombie::renderOpaque), int (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::renderTransparent), int (CZombie::*)()>);
    static_assert(
        std::is_same_v<decltype(&CZombie::getTargetPoints), int (CZombie::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CZombie::shouldIgnoreForTargeting), int (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::getActorType),
                                 const CDemonActorType &(CZombie::*)() const>);
    static_assert(std::is_same_v<decltype(&CZombie::archive), void (CZombie::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CZombie::isGrabbable), int (CZombie::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::canBeGrabbed), int (CZombie::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::getGrabbed), int (CZombie::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::processDamage), void (CZombie::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::canBeAttracted), int (CZombie::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CZombie::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CZombie::*)(int, common::CMatrix3x4f *)>);
}

TEST(CZombie, ItsRecordIsVersion11UnderCEnemyAndMissionsCanCreateOne) {
    EXPECT_EQ(CZombie::kType.class_name, "CZombie");
    EXPECT_EQ(CZombie::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CZombie::kType.latest_version, 11);
    ASSERT_NE(CZombie::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CZombie::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CZombie::kType);
}

// After CEnemy's draws, the reach, then the seed.
TEST(CZombie, AZombiesReachAndSeedAreDrawnAfterTheEnemys) {
    CTestClasses classes;
    CTestClasses same;
    classes.get().setRandomSeed(3);
    same.get().setRandomSeed(3);
    const CZombie zombie(classes.get());
    for (int i = 0; i < 4; ++i) {
        static_cast<void>(same.get().getRandomInt(0, 1));
    }
    EXPECT_EQ(zombie.getPickupRangeFactor(), same.get().getRandomFloatFromRange(0.3F, 1.0F));
    EXPECT_EQ(zombie.getPickupSeed(), same.get().getRandomInt(0, 0xff));
}

TEST(CZombie, AZombieRisesAlwaysAndChasesAtItsOwnPace) {
    CTestClasses classes;
    CZombie zombie(classes.get());
    EXPECT_EQ(zombie.getModel().getModelName(), "zombie1.dfm");
    EXPECT_EQ(zombie.getRiseFromGraveCondition(), "true");
    EXPECT_EQ(zombie.getGraveActor(), nullptr);
    EXPECT_FALSE(zombie.isMinerZombie());
    EXPECT_FALSE(zombie.alwaysChasesFast());
}

// A version 1 CCharacter's hit points, then a version 4 CEnemy's speed and blood pool.
class CZombieArchiveTest : public ::testing::Test {
protected:
    static constexpr std::string_view kEnemyFields = "100\n1.1\n0\n";

    CZombieArchiveTest() {
        grave_.setActorName("Grave1");
        carried_.setActorName("Brick");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(zombie_, CZombie::kType, saved_version,
                                   std::string(kEnemyFields) + std::string(fields));
        archive.getClasses().setSavedVersion(CEnemy::kType, 4);
        archive.addActor(grave_);
        archive.addActor(carried_);
        zombie_.archive(archive.get());
        EXPECT_EQ(zombie_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CZombie zombie_{classes_.get()};
    CTestActor grave_{kTestBaseType};
    CTestActor carried_{kTestBaseType};
};

// Zombie0 of HQ-ACT1.MSN, but in a grave, a miner and always chasing fast.
TEST_F(CZombieArchiveTest, AZombieIsReadWithItsModelPartsAndGrave) {
    read(11, "\t0.970925    // speed\n\t\"NEWZOMB3.DFM\"    // modelName\n\t{ // motion state\n"
             "\t\t\"dead1\",0 // current motion name, curFrameNumber\n\t}\n\t{ // partStatus\n"
             "\t\t2\n\t\t1 0 \n\t\t0 3 \n\t}\n\t\"@flag\"    // riseFromGraveCondition\n"
             "\t\"Grave1\"\t\t// graveActor\n\t1    // isMinerZombie\n\t1    // alwaysChaseFast\n");
    EXPECT_EQ(zombie_.getSpeed(), 0.970925F);
    EXPECT_EQ(zombie_.getModel().getModelName(), "NEWZOMB3.DFM");
    EXPECT_EQ(zombie_.getModel().getPartVisibility(1), EPartVisibility::kHidden);
    EXPECT_EQ(zombie_.getModel().getPartTextureSet(1), 3);
    EXPECT_EQ(zombie_.getRiseFromGraveCondition(), "@flag");
    EXPECT_EQ(zombie_.getGraveActor(), &grave_);
    EXPECT_TRUE(zombie_.isMinerZombie());
    EXPECT_TRUE(zombie_.alwaysChasesFast());
}

TEST_F(CZombieArchiveTest, AVersionOneZombieHasOnlyItsSpeedAndModel) {
    read(1, "0.5\n\"z.dfm\"\n");
    EXPECT_EQ(zombie_.getSpeed(), 0.5F);
    EXPECT_EQ(zombie_.getModel().getModelName(), "z.dfm");
    EXPECT_EQ(zombie_.getRiseFromGraveCondition(), "true");
}

// Versions 3 to 6 held what the right hand carries, 6 to 8 the cloth, and up to 10 the guard
// distance again.
TEST_F(CZombieArchiveTest, AVersionSixZombieCarriesInItsRightHandAndWearsCloth) {
    read(6, "1\n\"z.dfm\"\n30 // guardDistance\n{\n\"walk\",0\n}\n{\n0\n\n\n}\n"
            "\"Brick\" // carriedActor\n\"true\"\n\"(none)\"\n{\n1\n\"rags.cls\"\n}\n");
    EXPECT_EQ(zombie_.getGuardDistance(), 30.0F);
    EXPECT_EQ(zombie_.getCarriedActor(1), &carried_);
    EXPECT_EQ(zombie_.getClothList().getFilenames().size(), 1U);
    EXPECT_FALSE(zombie_.isMinerZombie());
}

TEST(CZombie, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CZombie zombie(classes.get());
    const NotPortedCalls calls = {
        {"process", [&] { zombie.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(zombie.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(zombie.renderTransparent()); }},
        {"getTargetPoints", [&] { static_cast<void>(zombie.getTargetPoints(nullptr)); }},
        {"shouldIgnoreForTargeting", [&] { static_cast<void>(zombie.shouldIgnoreForTargeting()); }},
        {"isGrabbable", [&] { static_cast<void>(zombie.isGrabbable(nullptr)); }},
        {"canBeGrabbed", [&] { static_cast<void>(zombie.canBeGrabbed(nullptr, 0)); }},
        {"getGrabbed", [&] { static_cast<void>(zombie.getGrabbed(nullptr, 0)); }},
        {"processDamage", [&] { zombie.processDamage(nullptr); }},
        {"canBeAttracted", [&] { static_cast<void>(zombie.canBeAttracted(nullptr)); }},
        {"getCarryObjToBodyXForm",
         [&] { static_cast<void>(zombie.getCarryObjToBodyXForm(0, nullptr)); }},
    };
    expectEachQuitsNotPorted("CZombie", calls);
}

} // namespace
} // namespace nocturne::core
