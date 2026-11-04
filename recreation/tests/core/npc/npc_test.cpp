#include "core/actor/demonactortype.h"
#include "core/npc/npc.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "tests/mocks/core/actorrenderfixture.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <format>
#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CNPC, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CNPC>);
}

TEST(CNPC, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CNPC>);
}

TEST(CNPC, IsConcrete) {
    static_assert(!std::is_abstract_v<CNPC>);
}

TEST(CNPC, Constructors) {
    static_assert(std::is_constructible_v<CNPC, CActor &>);
}

TEST(CNPC, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CNPC::setup), void (CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::process), void (CNPC::*)(float)>);
    static_assert(std::is_same_v<decltype(&CNPC::renderBackground),
                                 void (CNPC::*)(int, const SActorRenderOwners &)>);
    static_assert(std::is_same_v<decltype(&CNPC::getPathMap), CPathMap *(CNPC::*)()>);
    static_assert(
        std::is_same_v<decltype(&CNPC::getActorType), const CDemonActorType &(CNPC::*)() const>);
    static_assert(std::is_same_v<decltype(&CNPC::archive), void (CNPC::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CNPC::isInvulnerable), int (CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::processDamage), void (CNPC::*)(SDamageInfo *)>);
}

TEST(CNPC, ItsRecordIsVersion4UnderCCharacterAndMissionsCanCreateOne) {
    EXPECT_EQ(CNPC::kType.class_name, "CNPC");
    EXPECT_EQ(CNPC::kType.parent_type, &CCharacter::kType);
    EXPECT_EQ(CNPC::kType.latest_version, 4);
    ASSERT_NE(CNPC::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CNPC::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CNPC::kType);
}

TEST(CNPC, AnNPCIsAPriestNobodyCanShoot) {
    CTestClasses classes;
    CNPC npc(classes.get());
    EXPECT_EQ(npc.getModel().getModelName(), "priest.dfm");
    EXPECT_FALSE(npc.isShootable());
    EXPECT_EQ(npc.isInvulnerable(), 1);
    EXPECT_FALSE(npc.hasLeftBloodPool());
}

// CDemonActor's fields and the hit points of a version 1 CCharacter, then the NPC's own.
TEST(CNPC, AnNPCIsReadWithItsModelAndMotion) {
    CTestClasses classes;
    CNPC npc(classes.get());
    CTestFieldsArchive archive(npc, CNPC::kType, 4,
                               "75 // hitPoints\n\t\"MOBSTER4.DFM\"    // modelName\n"
                               "\t{ // motion state\n\t\t2,1.5\n\t}\n\t1    // shootMe\n");
    npc.archive(archive.get());
    EXPECT_EQ(npc.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(npc.getHitPoints(), 75.0F);
    EXPECT_EQ(npc.getModel().getModelName(), "MOBSTER4.DFM");
    EXPECT_TRUE(npc.isShootable());
    EXPECT_EQ(npc.isInvulnerable(), 0);
    EXPECT_TRUE(archive.isFinished());
}

// A version that no shipped file holds: the blood pool after shootMe.
TEST(CNPC, AVersionFiveNPCKnowsWhetherItHasLeftItsBloodPool) {
    CTestClasses classes;
    CNPC npc(classes.get());
    CTestFieldsArchive archive(npc, CNPC::kType, 5, "75\n\"p.dfm\"\n{\n0,0\n}\n0\n1 // poolMe\n");
    npc.archive(archive.get());
    EXPECT_TRUE(npc.hasLeftBloodPool());
    EXPECT_TRUE(archive.isFinished());
}

TEST(CNPC, AVersionTwoNPCHasOnlyCCharactersFields) {
    CTestClasses classes;
    CNPC npc(classes.get());
    CTestFieldsArchive archive(npc, CNPC::kType, 2, "55 // hitPoints\n");
    npc.archive(archive.get());
    EXPECT_EQ(npc.getHitPoints(), 55.0F);
    EXPECT_EQ(npc.getModel().getModelName(), "priest.dfm");
    EXPECT_FALSE(npc.isShootable());
    EXPECT_TRUE(archive.isFinished());
}

// Version 1 saved only CDemonActor's fields and the hit points, skipping the rest of
// CCharacter's.
TEST(CNPC, AVersionOneNPCHasOnlyItsHitPoints) {
    CTestClasses classes;
    CNPC npc(classes.get());
    CTestFieldsArchive archive(npc, CNPC::kType, 1, "40 // hitPoints\n");
    archive.getClasses().setSavedVersion(CCharacter::kType, 9);
    npc.archive(archive.get());
    EXPECT_EQ(npc.getHitPoints(), 40.0F);
    EXPECT_EQ(npc.getModel().getModelName(), "priest.dfm");
    EXPECT_TRUE(archive.isFinished());
}

TEST(CNPC, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CNPC npc(classes.get());
    const NotPortedCalls calls = {
        {"process", [&] { npc.process(0.0F); }},
        {"getPathMap", [&] { static_cast<void>(npc.getPathMap()); }},
        {"processDamage", [&] { npc.processDamage(nullptr); }},
    };
    expectEachQuitsNotPorted("CNPC", calls);
}

// An NPC from a version 5 file, in view, whose box is tested only once it is drawn.
class CNPCBackgroundTest : public CActorRenderFixture {
protected:
    void readNPC(bool left_blood_pool) {
        CTestFieldsArchive archive(
            npc_, CNPC::kType, 5,
            std::format("75\n\"p.dfm\"\n{{\n0,0\n}}\n0\n{} // poolMe\n", left_blood_pool ? 1 : 0));
        npc_.archive(archive.get());
        placeInView(npc_);
        markBoxUntested();
    }

    CTestClasses classes_;
    CNPC npc_{classes_.get()};
};

// From its first time in the layer on, the body it left is drawn into the backdrop.
TEST_F(CNPCBackgroundTest, ABodyLeftLyingIsDrawnFromItsLayerOn) {
    readNPC(true);
    npc_.renderBackground(0, render_owners_);
    EXPECT_FALSE(boxTested());
    npc_.renderBackground(1, render_owners_);
    EXPECT_TRUE(boxTested());
    markBoxUntested();
    npc_.renderBackground(0, render_owners_);
    EXPECT_TRUE(boxTested());
}

TEST_F(CNPCBackgroundTest, AnNPCThatLeftNoBodyIsLeftOut) {
    readNPC(false);
    npc_.renderBackground(1, render_owners_);
    EXPECT_FALSE(boxTested());
}

} // namespace
} // namespace nocturne::core
