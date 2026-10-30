#include "core/actor/demonactortype.h"
#include "core/actor/groundtype.h"
#include "core/box/box.h"
#include "core/boxactor/boxactor.h"
#include "core/boxactor/boxpickuptype.h"
#include "core/hero/hero.h"
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

TEST(CBoxActor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CBoxActor>);
}

TEST(CBoxActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBoxActor>);
}

TEST(CBoxActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CBoxActor>);
}

TEST(CBoxActor, Constructors) {
    static_assert(std::is_constructible_v<CBoxActor>);
}

TEST(CBoxActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBoxActor::setup), void (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::process), void (CBoxActor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::renderOpaque), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::renderTransparent), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getBoundingBox),
                                 CBoundingBox3D *(CBoxActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getCollisionType),
                                 ECollisionType (CBoxActor::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getGroundType), EGroundType (CBoxActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getBlockVirtualDirectorFlag), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::setPositionAndOrientation),
                                 void (CBoxActor::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::onPickup), void (CBoxActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getAllowedMeleeAttackTypes), int (CBoxActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::canPickup), int (CBoxActor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::pickup), void (CBoxActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::onDropped), void (CBoxActor::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getCarrier), CDemonActor *(CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getActorType),
                                 const CDemonActorType &(CBoxActor::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::archive), void (CBoxActor::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::resolveRayPush),
                                 void (CBoxActor::*)(common::CVector3f *, common::CVector3f *)>);
}

TEST(CBoxActor, ItsRecordIsVersion15UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CBoxActor::kType.class_name, "CBoxActor");
    EXPECT_EQ(CBoxActor::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBoxActor::kType.latest_version, 15);
    ASSERT_NE(CBoxActor::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CBoxActor::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CBoxActor::kType);
}

TEST(CBoxActor, ABoxActorIsAWeightlessQuestionMarkNobodyCanPickUp) {
    CBoxActor box;
    EXPECT_EQ(box.getModel().getModelName(), "question.kfm");
    EXPECT_EQ(box.getWeightInPounds(), 0.0F);
    EXPECT_EQ(box.getFps(), 20.0F);
    EXPECT_EQ(box.getRpm().y, 0.0F);
    EXPECT_EQ(box.getLoopWavName(), "");
    EXPECT_EQ(box.getPickupType(), EBoxPickupType::kCant);
    EXPECT_EQ(box.getCarrier(), nullptr);
    EXPECT_FALSE(box.canBePushed());
    EXPECT_EQ(box.getPushedBy(), nullptr);
    EXPECT_EQ(box.getGroundType(), EGroundType::kDefault);
    EXPECT_EQ(box.getPhysicsBox().getValidity(), -1);
    EXPECT_TRUE(box.isPlottedInShadow());
    EXPECT_TRUE(box.isCollisionEnabled());
    EXPECT_FALSE(box.isTransparent());
    EXPECT_FALSE(box.isDrawnWithoutNormals());
    EXPECT_EQ(box.getConstrainExtentsActor(), nullptr);
    EXPECT_EQ(box.getUseEvent(), "");
    EXPECT_EQ(box.getAllowedMeleeAttackTypes(), 0);
    EXPECT_EQ(box.getPushSound(), "");
    EXPECT_EQ(box.getBlockVirtualDirectorFlag(), 0);
}

TEST(CBoxActor, PickingItUpMakesTheCarrierItsOwn) {
    CBoxActor box;
    CTestActor carrier(kTestBaseType);
    box.pickup(&carrier);
    EXPECT_EQ(box.getCarrier(), &carrier);
}

class CBoxActorArchiveTest : public ::testing::Test {
protected:
    CBoxActorArchiveTest() {
        hero_.setActorName("Stranger");
        dummy_.setActorName("CRE");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(box_, CBoxActor::kType, saved_version, fields);
        archive.addActor(hero_);
        archive.addActor(dummy_);
        box_.archive(archive.get());
        EXPECT_EQ(box_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CBoxActor box_;
    CTestActor hero_{CHero::kType};
    CTestActor dummy_{kTestBaseType};
};

// CREDummy of HQ-ACT1.MSN, but heavy, carried, pushed, transparent and kept within another.
TEST_F(CBoxActorArchiveTest, ABoxActorIsReadWithItsBox) {
    read(15, "\t\"CRE.KFM\"    // modelName\n\t50    // weightInPounds\n\t10    // fps\n"
             "\t1,2,3    // rpm\n\t\"hum.wav\"    // loopWavName\n"
             "\t\"thud.wav\"    // collisionWavName\n\t4    // pickupType\n"
             "\t\"Stranger\"\t\t// carriedByActor\n\t1    // canBePushed\n"
             "\t\"Stranger\"\t\t// pushedByActor\n\t5    // groundType\n\t{ // simBox\n"
             "\t\tboxVersion\n\t\t1\n\t\tboxStateInfo\n\t\t1,2,3\n\t\t0,0,0\n\t\t4,5,6\n"
             "\t\t7\n\t\t0,0,0\n\t\t0,0,0\n\t\t1\n\t}\n\t0    // plotInShadowFlag\n"
             "\t0    // collisionFlag\n\t1    // isTransparent\n\t1    // dontUseNormals\n"
             "\t\"CRE\"\t\t// constrainExtentsActor\n\t\"Used\"    // useEvent\n"
             "\t6    // allowedMeleeAttackTypes\n\t\"scrape.wav\"    // pushSound\n"
             "\t1    // blockVirtualDirectorFlag\n");
    EXPECT_EQ(box_.getModel().getModelName(), "CRE.KFM");
    EXPECT_EQ(box_.getWeightInPounds(), 50.0F);
    EXPECT_EQ(box_.getFps(), 10.0F);
    EXPECT_EQ(box_.getRpm().z, 3.0F);
    EXPECT_EQ(box_.getLoopWavName(), "hum.wav");
    EXPECT_EQ(box_.getCollisionWavName(), "thud.wav");
    EXPECT_EQ(box_.getPickupType(), EBoxPickupType::kHeavy);
    EXPECT_EQ(box_.getCarrier(), &hero_);
    EXPECT_TRUE(box_.canBePushed());
    EXPECT_EQ(box_.getPushedBy(), &hero_);
    EXPECT_EQ(box_.getGroundType(), EGroundType::kMetal);
    EXPECT_EQ(box_.getPhysicsBox().getExtents().y, 5.0F);
    EXPECT_EQ(box_.getPhysicsBox().getValidity(), 1);
    EXPECT_FALSE(box_.isPlottedInShadow());
    EXPECT_FALSE(box_.isCollisionEnabled());
    EXPECT_TRUE(box_.isTransparent());
    EXPECT_TRUE(box_.isDrawnWithoutNormals());
    EXPECT_EQ(box_.getConstrainExtentsActor(), &dummy_);
    EXPECT_EQ(box_.getUseEvent(), "Used");
    EXPECT_EQ(box_.getAllowedMeleeAttackTypes(), 6);
    EXPECT_EQ(box_.getPushSound(), "scrape.wav");
    EXPECT_EQ(box_.getBlockVirtualDirectorFlag(), 1);
}

// The fields every version has, up to the colliding sound, then whether it can be carried.
constexpr std::string_view kFirstBox = "\"b.kfm\"\n0\n20\n0,0,0\n\"\"\n\"\"\n";

TEST_F(CBoxActorArchiveTest, AVersionOneBoxThatCanBeCarriedIsCarriedAndSetUpFromItsModel) {
    read(1, std::string(kFirstBox) + "1 // canBeCarried\n\"(none)\"\n");
    EXPECT_EQ(box_.getPickupType(), EBoxPickupType::kCarry);
    EXPECT_FALSE(box_.canBePushed());
    EXPECT_EQ(box_.getPhysicsBox().getValidity(), -1);
    EXPECT_TRUE(box_.isPlottedInShadow());
    EXPECT_TRUE(box_.isCollisionEnabled());
}

TEST_F(CBoxActorArchiveTest, AnOldBoxThatCantBeCarriedCant) {
    read(3, std::string(kFirstBox) + "0\n\"(none)\"\n0\n\"(none)\"\n2\n");
    EXPECT_EQ(box_.getPickupType(), EBoxPickupType::kCant);
    EXPECT_EQ(box_.getGroundType(), EGroundType::kConcrete);
}

// Version 9 alone named the box for the editor.
TEST_F(CBoxActorArchiveTest, AVersionNineBoxsNameIsPassedOver) {
    read(9, std::string(kFirstBox) +
                "2\n\"(none)\"\n0\n\"(none)\"\n0\n{\nv\n1\ns\n0,0,0\n0,0,0\n0,0,0\n0\n0,0,0\n"
                "0,0,0\n0\n}\n1\n1\n0\n0\n\"Crate\" // descriptiveName\n");
    EXPECT_EQ(box_.getPickupType(), EBoxPickupType::kInventory);
    EXPECT_EQ(box_.getPhysicsBox().getValidity(), 0);
    EXPECT_EQ(box_.getConstrainExtentsActor(), nullptr);
}

// Only a hero picks up what can't be carried; anyone picks up what can.
TEST_F(CBoxActorArchiveTest, AHeroPicksUpWhatOthersCantUnlessItIsCarried) {
    read(7, std::string(kFirstBox) +
                "1\n\"(none)\"\n0\n\"(none)\"\n0\n{\nv\n1\ns\n0,0,0\n0,0,0\n0,0,0\n0\n0,0,0\n"
                "0,0,0\n0\n}\n1\n1\n");
    EXPECT_EQ(box_.canPickup(&hero_), 1);
    EXPECT_EQ(box_.canPickup(&dummy_), 0);
    EXPECT_EQ(box_.canPickup(nullptr), 0);
    read(7, std::string(kFirstBox) +
                "3\n\"(none)\"\n0\n\"(none)\"\n0\n{\nv\n1\ns\n0,0,0\n0,0,0\n0,0,0\n0\n0,0,0\n"
                "0,0,0\n0\n}\n1\n1\n");
    EXPECT_EQ(box_.canPickup(&dummy_), 3);
}

TEST(CBoxActor, TheFunctionsNotPortedYetQuit) {
    CBoxActor box;
    const NotPortedCalls calls = {
        {"setup", [&] { box.setup(); }},
        {"process", [&] { box.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(box.renderOpaque()); }},
        {"renderTransparent", [&] { static_cast<void>(box.renderTransparent()); }},
        {"getBoundingBox", [&] { static_cast<void>(box.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(box.getCollisionType(nullptr)); }},
        {"setPositionAndOrientation", [&] { box.setPositionAndOrientation(nullptr, nullptr); }},
        {"onPickup", [&] { box.onPickup(nullptr); }},
        {"onDropped", [&] { box.onDropped(nullptr); }},
    };
    expectEachQuitsNotPorted("CBoxActor", calls);
}

} // namespace
} // namespace nocturne::core
