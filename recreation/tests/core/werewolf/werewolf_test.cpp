#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/werewolf/werewolf.h"
#include "core/werewolf/werewolftype.h"
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

TEST(CWerewolf, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CWerewolf>);
}

TEST(CWerewolf, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWerewolf>);
}

TEST(CWerewolf, IsConcrete) {
    static_assert(!std::is_abstract_v<CWerewolf>);
}

TEST(CWerewolf, Constructors) {
    static_assert(std::is_constructible_v<CWerewolf, CActor &>);
}

TEST(CWerewolf, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWerewolf::setup), void (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::process), void (CWerewolf::*)(float)>);
    static_assert(std::is_same_v<decltype(&CWerewolf::renderTransparent), int (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::getTargetPoints),
                                 int (CWerewolf::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWerewolf::getActorType),
                                 const CDemonActorType &(CWerewolf::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::archive), void (CWerewolf::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::processDamage), void (CWerewolf::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::getDeathState), EDeathState (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::setWalkTarget),
                                 void (CWerewolf::*)(CDemonActor *, float, float)>);
}

TEST(CWerewolf, ItsRecordIsVersion6UnderCEnemyAndMissionsCanCreateOne) {
    EXPECT_EQ(CWerewolf::kType.class_name, "CWerewolf");
    EXPECT_EQ(CWerewolf::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CWerewolf::kType.latest_version, 6);
    ASSERT_NE(CWerewolf::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CWerewolf::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CWerewolf::kType);
}

TEST(CWerewolf, AWerewolfIsATrainWolfWithItsEyesAlightOnAFiveUnitChain) {
    CTestClasses classes;
    CWerewolf werewolf(classes.get());
    EXPECT_EQ(werewolf.getModel().getModelName(), "wolfbrn.dfm");
    EXPECT_EQ(werewolf.getWerewolfType(), EWerewolfType::kTrain);
    EXPECT_TRUE(werewolf.areEyesLit());
    EXPECT_EQ(werewolf.getChainAnchor(), nullptr);
    EXPECT_EQ(werewolf.getChainLength(), 5.0F);
    EXPECT_EQ(werewolf.getPhase(), 0);
    EXPECT_EQ(werewolf.getPhaseTimer(), 10.0F);
    EXPECT_EQ(werewolf.getFirstAlpha(), nullptr);
    EXPECT_EQ(werewolf.getSecondAlpha(), nullptr);
}

// A version 1 CCharacter's hit points, then a version 4 CEnemy's speed and blood pool.
class CWerewolfArchiveTest : public ::testing::Test {
protected:
    CWerewolfArchiveTest() {
        post_.setActorName("Post");
        alpha_.setActorName("Alpha");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(werewolf_, CWerewolf::kType, saved_version,
                                   std::string("100\n1.1\n0\n") + std::string(fields));
        archive.getClasses().setSavedVersion(CEnemy::kType, 4);
        archive.addActor(post_);
        archive.addActor(alpha_);
        werewolf_.archive(archive.get());
        EXPECT_EQ(werewolf_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CWerewolf werewolf_{classes_.get()};
    CTestActor post_{kTestBaseType};
    CTestActor alpha_{kTestBaseType};
};

// Werewolf0 of HQ-ACT1.MSN, but chained, a forest alpha and in its fight.
TEST_F(CWerewolfArchiveTest, AWerewolfIsReadWithItsChainAndPack) {
    read(6, "\t1.03326    // speed\n\t\"wolfbrn.dfm\"    // modelName\n\t{ // motion state\n"
            "\t\t\"dead\",0 // current motion name, curFrameNumber\n\t}\n\t0    // lightUpEyes\n"
            "\t\"Post\"\t\t// chainAnchor\n\t8    // chainLength\n\t2    // type\n"
            "\t3    // phase\n\t4.5    // phaseTimer\n\t\"Alpha\"\t\t// alpha1\n"
            "\t\"(none)\"\t\t// alpha2\n");
    EXPECT_EQ(werewolf_.getSpeed(), 1.03326F);
    EXPECT_FALSE(werewolf_.areEyesLit());
    EXPECT_EQ(werewolf_.getChainAnchor(), &post_);
    EXPECT_EQ(werewolf_.getChainLength(), 8.0F);
    EXPECT_EQ(werewolf_.getWerewolfType(), EWerewolfType::kForest);
    EXPECT_EQ(werewolf_.getPhase(), 3);
    EXPECT_EQ(werewolf_.getPhaseTimer(), 4.5F);
    EXPECT_EQ(werewolf_.getFirstAlpha(), &alpha_);
    EXPECT_EQ(werewolf_.getSecondAlpha(), nullptr);
}

// Version 1 held the guard distance again, before the motion.
TEST_F(CWerewolfArchiveTest, AVersionOneWerewolfHasItsGuardDistanceAndMotion) {
    read(1, "1\n\"w.dfm\"\n25 // guardDistance\n{\n\"run\",0\n}\n");
    EXPECT_EQ(werewolf_.getGuardDistance(), 25.0F);
    EXPECT_TRUE(werewolf_.areEyesLit());
    EXPECT_EQ(werewolf_.getWerewolfType(), EWerewolfType::kTrain);
}

TEST(CWerewolf, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CWerewolf werewolf(classes.get());
    const NotPortedCalls calls = {
        {"setup", [&] { werewolf.setup(); }},
        {"process", [&] { werewolf.process(0.0F); }},
        {"renderTransparent", [&] { static_cast<void>(werewolf.renderTransparent()); }},
        {"getTargetPoints", [&] { static_cast<void>(werewolf.getTargetPoints(nullptr)); }},
        {"processDamage", [&] { werewolf.processDamage(nullptr); }},
        {"getDeathState", [&] { static_cast<void>(werewolf.getDeathState()); }},
        {"setWalkTarget", [&] { werewolf.setWalkTarget(nullptr, 0.0F, 0.0F); }},
    };
    expectEachQuitsNotPorted("CWerewolf", calls);
}

} // namespace
} // namespace nocturne::core
