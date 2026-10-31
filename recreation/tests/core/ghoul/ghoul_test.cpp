#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/ghoul/ghoul.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGhoul, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CGhoul>);
}

TEST(CGhoul, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGhoul>);
}

TEST(CGhoul, IsConcrete) {
    static_assert(!std::is_abstract_v<CGhoul>);
}

TEST(CGhoul, Constructors) {
    static_assert(std::is_constructible_v<CGhoul, CActor &>);
}

TEST(CGhoul, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGhoul::setup), void (CGhoul::*)()>);
    static_assert(std::is_same_v<decltype(&CGhoul::process), void (CGhoul::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGhoul::renderBackground), void (CGhoul::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::getTargetPoints), int (CGhoul::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGhoul::getActorType),
                                 const CDemonActorType &(CGhoul::*)() const>);
    static_assert(std::is_same_v<decltype(&CGhoul::archive), void (CGhoul::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::processDamage), void (CGhoul::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::canBeAttracted), int (CGhoul::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGhoul::getTargetPoint),
                                 common::CVector3f *(CGhoul::*)(common::CVector3f *)>);
}

TEST(CGhoul, ItsRecordIsVersion7UnderCEnemyAndMissionsCanCreateOne) {
    EXPECT_EQ(CGhoul::kType.class_name, "CGhoul");
    EXPECT_EQ(CGhoul::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CGhoul::kType.latest_version, 7);
    ASSERT_NE(CGhoul::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CGhoul::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CGhoul::kType);
}

// After CEnemy's draws, the burp, the spasm and the lives, the timers chopped to 16.16.
TEST(CGhoul, AGhoulsTimersAndLivesAreDrawnAfterTheEnemys) {
    CTestClasses classes;
    CTestClasses same;
    classes.get().setRandomSeed(5);
    same.get().setRandomSeed(5);
    const CGhoul ghoul(classes.get());
    for (int i = 0; i < 4; ++i) {
        static_cast<void>(same.get().getRandomInt(0, 1));
    }
    const float burp = same.get().getRandomFloatFromRange(20.0F, 35.0F);
    const float spasm = same.get().getRandomFloatFromRange(4.0F, 10.0F);
    EXPECT_EQ(ghoul.getBurpTimer(), static_cast<int>(static_cast<double>(burp) * 65536.0));
    EXPECT_EQ(ghoul.getSpasmTimer(), static_cast<int>(static_cast<double>(spasm) * 65536.0));
    EXPECT_EQ(ghoul.getLivesLeft(), same.get().getRandomInt(1, 3));
    EXPECT_GE(ghoul.getBurpTimer(), 20 * 0x10000);
    EXPECT_LE(ghoul.getLivesLeft(), 3);
}

TEST(CGhoul, AGhoulSpasmsTwiceAndTakesTenSecondsToRise) {
    CTestClasses classes;
    CGhoul ghoul(classes.get());
    EXPECT_EQ(ghoul.getModel().getModelName(), "guul.dfm");
    EXPECT_EQ(ghoul.getSpasmCount(), 2);
    EXPECT_EQ(ghoul.getAriseTimer(), 10 * 0x10000);
}

// A version 1 CCharacter's hit points, then a version 4 CEnemy's speed and blood pool.
class CGhoulArchiveTest : public ::testing::Test {
protected:
    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(ghoul_, CGhoul::kType, saved_version,
                                   std::string("100\n1.1\n0\n") + std::string(fields));
        archive.getClasses().setSavedVersion(CEnemy::kType, 4);
        ghoul_.archive(archive.get());
        EXPECT_EQ(ghoul_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CGhoul ghoul_{classes_.get()};
};

// The lives come twice; the second is the one kept.
TEST_F(CGhoulArchiveTest, AGhoulIsReadWithItsPartsLivesAndRise) {
    read(7, "\t\"GUUL.DFM\"    // modelName\n\t3    // livesLeft\n\t{ // motion state\n"
            "\t\t\"sleep\",0 // current motion name, curFrameNumber\n\t}\n\t{ // partStatus\n"
            "\t\t1\n\t\t0 \n\t\t2 \n\t}\n\t5    // spasmCount\n\t2    // livesLeft\n"
            "\t327680    // ariseTimer\n");
    EXPECT_EQ(ghoul_.getModel().getModelName(), "GUUL.DFM");
    EXPECT_EQ(ghoul_.getModel().getPartVisibility(0), EPartVisibility::kHidden);
    EXPECT_EQ(ghoul_.getSpasmCount(), 5);
    EXPECT_EQ(ghoul_.getLivesLeft(), 2);
    EXPECT_EQ(ghoul_.getAriseTimer(), 5 * 0x10000);
}

// Before version 4 the speed came again, and from 2 to 6 the guard distance.
TEST_F(CGhoulArchiveTest, AVersionThreeGhoulHasItsSpeedGuardDistanceAndLives) {
    read(3, "0.75 // speed\n\"g.dfm\"\n20 // guardDistance\n1 // livesLeft\n");
    EXPECT_EQ(ghoul_.getSpeed(), 0.75F);
    EXPECT_EQ(ghoul_.getGuardDistance(), 20.0F);
    EXPECT_EQ(ghoul_.getLivesLeft(), 1);
}

TEST_F(CGhoulArchiveTest, AVersionOneGhoulHasItsSpeedAndModel) {
    const int lives = ghoul_.getLivesLeft();
    read(1, "0.75\n\"g.dfm\"\n");
    EXPECT_EQ(ghoul_.getModel().getModelName(), "g.dfm");
    EXPECT_EQ(ghoul_.getLivesLeft(), lives);
}

TEST(CGhoul, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CGhoul ghoul(classes.get());
    const NotPortedCalls calls = {
        {"process", [&] { ghoul.process(0.0F); }},
        {"renderBackground", [&] { ghoul.renderBackground(0); }},
        {"getTargetPoints", [&] { static_cast<void>(ghoul.getTargetPoints(nullptr)); }},
        {"processDamage", [&] { ghoul.processDamage(nullptr); }},
        {"canBeAttracted", [&] { static_cast<void>(ghoul.canBeAttracted(nullptr)); }},
        {"getTargetPoint", [&] { static_cast<void>(ghoul.getTargetPoint(nullptr)); }},
    };
    expectEachQuitsNotPorted("CGhoul", calls);
}

} // namespace
} // namespace nocturne::core
