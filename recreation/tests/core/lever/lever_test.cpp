#include "core/actor/collisiontype.h"
#include "core/actor/demonactortype.h"
#include "core/event/rulelist.h"
#include "core/lever/lever.h"
#include "core/lever/levertype.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

TEST(CLever, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CLever>);
}

TEST(CLever, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLever>);
}

TEST(CLever, IsConcrete) {
    static_assert(!std::is_abstract_v<CLever>);
}

TEST(CLever, Constructors) {
    static_assert(std::is_constructible_v<CLever>);
}

TEST(CLever, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLever::setup), void (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::process), void (CLever::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLever::renderOpaque), int (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::getBoundingBox),
                                 CBoundingBox3D *(CLever::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CLever::getCollisionType),
                                 ECollisionType (CLever::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CLever::getActorType),
                                 const CDemonActorType &(CLever::*)() const>);
    static_assert(std::is_same_v<decltype(&CLever::archive), void (CLever::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CLever::setState), void (CLever::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLever::activate), void (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::getHandlePosition),
                                 common::CVector3f *(CLever::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CLever::isAccessibleFrom), int (CLever::*)(common::CVector3f *)>);
}

TEST(CLever, ItsRecordIsVersion8UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CLever::kType.class_name, "CLever");
    EXPECT_EQ(CLever::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CLever::kType.latest_version, 8);
    ASSERT_NE(CLever::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CLever::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CLever::kType);
}

TEST(CLever, ALeverIsAMomentaryGroundLeverPulledFromEitherSide) {
    CLever lever;
    EXPECT_EQ(lever.getModel().getModelName(), "glever.kfm");
    EXPECT_EQ(lever.getLeverType(), ELeverType::kGround);
    EXPECT_EQ(lever.getOnEvent(), "");
    EXPECT_EQ(lever.getOffEvent(), "");
    EXPECT_EQ(lever.getSound(), "");
    EXPECT_EQ(lever.getParam(), 0.0F);
    EXPECT_TRUE(lever.isMomentary());
    EXPECT_EQ(lever.getLinkedLever(), nullptr);
    EXPECT_EQ(lever.getEndVertexIndex(), 23);
    EXPECT_FALSE(lever.isMoving());
    EXPECT_EQ(lever.getMoveToPct(), 0.0F);
    EXPECT_THAT(lever.getRules().getRules(), IsEmpty());
    EXPECT_EQ(lever.getAllowedSides(), ELeverOpenSides::kBoth);
    EXPECT_EQ(lever.getCollisionType(nullptr), ECollisionType::kMesh);
}

class CLeverArchiveTest : public ::testing::Test {
protected:
    CLeverArchiveTest() {
        other_.setActorName("Lever2");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(lever_, CLever::kType, saved_version, fields);
        archive.addActor(other_);
        lever_.archive(archive.get());
        EXPECT_EQ(lever_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CLever lever_;
    CTestActor other_{kTestBaseType};
};

TEST_F(CLeverArchiveTest, ALeverIsReadWithTheLeverItMovesAndItsRules) {
    read(8, "\t\"WLEVER.KFM\"    // modelName\n\t1    // leverType\n\t\"On\"    // onEvent\n"
            "\t\"Off\"    // offEvent\n\t\"clunk.wav\"    // sound\n\t1    // param\n"
            "\t0    // momentaryFlag\n\t\"Lever2\"\t\t// linkedLever\n\t7    // endVertexIndex\n"
            "\t1    // moving\n\t0.5    // moveToPct\n\t{ // rules\n\t\t1 // ruleCount\n"
            "\t\t\"true\" => \"Pulled\"\n\t}\n\t0    // allowedSides\n\t0    // enableCollision\n");
    EXPECT_EQ(lever_.getModel().getModelName(), "WLEVER.KFM");
    EXPECT_EQ(lever_.getLeverType(), ELeverType::kWall);
    EXPECT_EQ(lever_.getOnEvent(), "On");
    EXPECT_EQ(lever_.getOffEvent(), "Off");
    EXPECT_EQ(lever_.getSound(), "clunk.wav");
    EXPECT_EQ(lever_.getParam(), 1.0F);
    EXPECT_FALSE(lever_.isMomentary());
    EXPECT_EQ(lever_.getLinkedLever(), &other_);
    EXPECT_EQ(lever_.getEndVertexIndex(), 7);
    EXPECT_TRUE(lever_.isMoving());
    EXPECT_EQ(lever_.getMoveToPct(), 0.5F);
    EXPECT_THAT(lever_.getRules().getRules(),
                ElementsAre(SRule{.condition = "true", .event = "Pulled"}));
    EXPECT_EQ(lever_.getAllowedSides(), ELeverOpenSides::kPositiveZ);
    EXPECT_EQ(lever_.getCollisionType(nullptr), ECollisionType::kNone);
}

TEST_F(CLeverArchiveTest, AVersionOneLeverHasOnlyItsModelEventsSoundAndPosition) {
    read(1, "\"g.kfm\"\n0\n\"On\"\n\"Off\"\n\"\"\n0.25\n");
    EXPECT_EQ(lever_.getParam(), 0.25F);
    EXPECT_TRUE(lever_.isMomentary());
    EXPECT_EQ(lever_.getEndVertexIndex(), 23);
    EXPECT_EQ(lever_.getAllowedSides(), ELeverOpenSides::kBoth);
}

TEST(CLever, TheFunctionsNotPortedYetQuit) {
    CLever lever;
    const NotPortedCalls calls = {
        {"setup", [&] { lever.setup(); }},
        {"process", [&] { lever.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(lever.renderOpaque()); }},
        {"getBoundingBox", [&] { static_cast<void>(lever.getBoundingBox(nullptr)); }},
    };
    expectEachQuitsNotPorted("CLever", calls);
}

} // namespace
} // namespace nocturne::core
