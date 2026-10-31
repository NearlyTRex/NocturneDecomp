#include "common/error/fatalerror.h"
#include "common/math/quaternion4f.h"
#include "core/actor/demonactortype.h"
#include "core/actor/groundtype.h"
#include "core/platfrm/platform.h"
#include "core/platfrm/platformstate.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CPlatform, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CPlatform>);
}

TEST(CPlatform, ItsRecordIsVersion11UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CPlatform::kType.class_name, "CPlatform");
    EXPECT_EQ(CPlatform::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CPlatform::kType.latest_version, 11);
    EXPECT_EQ(CPlatform::kType.name_hash, hashClassName("CPlatform"));
    ASSERT_NE(CPlatform::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CPlatform::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CPlatform::kType);
}

constexpr common::CQuaternion4f kNoTurn{.w = 1.0F};

TEST(CPlatform, APlatformIsASliderAtItsStartWithBothEndsAtTheOriginUnturned) {
    CTestClasses classes;
    CPlatform platform{classes.get()};
    EXPECT_EQ(platform.getModel().getModelName(), "slider1.kfm");
    EXPECT_EQ(platform.getToStartEvent(), "");
    EXPECT_EQ(platform.getActiveSound(), "");
    EXPECT_EQ(platform.getCourseFilename(), "");
    EXPECT_EQ(platform.getStartPosition().x, 0.0F);
    EXPECT_EQ(platform.getStartOrientation(), kNoTurn);
    EXPECT_EQ(platform.getEndPosition().z, 0.0F);
    EXPECT_EQ(platform.getEndOrientation(), kNoTurn);
    EXPECT_EQ(platform.getState(), EPlatformState::kAtStart);
    EXPECT_EQ(platform.getParam(), 0.0F);
    EXPECT_EQ(platform.getTravelTimeToStart(), 2.0F);
    EXPECT_EQ(platform.getTravelTimeToEnd(), 2.0F);
    EXPECT_EQ(platform.getGroundType(), EGroundType::kDefault);
    EXPECT_FALSE(platform.isOneShot());
    EXPECT_EQ(platform.getBlockVirtualDirectorFlag(), 0);
    EXPECT_FALSE(platform.isRenderedInBackgroundWhenNotMoving());
    EXPECT_EQ(platform.getCameraWhileMoving(), "");
    EXPECT_FALSE(platform.isPlottedAsBoxInShadow());
    EXPECT_EQ(platform.getGoalParam(), 0.0F);
    EXPECT_EQ(platform.getCurrentMovementRate(), 0.0F);
    EXPECT_TRUE(platform.getAttachedActors().empty());
    EXPECT_FALSE(platform.isPushed());
    EXPECT_FALSE(platform.isFogRecomputed());
    EXPECT_TRUE(platform.isPlottedInShadow());
    EXPECT_EQ(platform.allowBulletHoles(), 1);
}

class CPlatformArchiveTest : public ::testing::Test {
protected:
    CPlatformArchiveTest() {
        crate_.setActorName("Crate");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(platform_, CPlatform::kType, saved_version, fields);
        archive.addActor(crate_);
        platform_.archive(archive.get());
        EXPECT_EQ(platform_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CPlatform platform_{classes_.get()};
    CTestActor crate_{kTestBaseType};
};

// PlatformSecretPanel of HQ-ACT1.MSN, moving and carrying a crate.
TEST_F(CPlatformArchiveTest, APlatformIsReadWithItsEndsAndWhatItCarries) {
    read(11, "\t\"SECRETPANEL2.KFM\"    // modelName\n\t\"CloseSecretPanel\"    // toStartEvent\n"
             "\t\"OpenSecretPanel\"    // toEndEvent\n\t\"Stopped\"    // stopEvent\n"
             "\t\"go.wav\"    // startSound\n\t\"halt.wav\"    // stopSound\n"
             "\t\"door-slide1.wav\"    // activeSound\n\t\"\"    // courseFilename\n"
             "\t44.4472,0.0128601,24.6236    // startPos\n\t1,0,0,0    // origOrient\n"
             "\t44.6243,0.0128601,21.1569    // endPos\n\t0,1,0,0    // endOrient\n"
             "\t3    // state\n\t0.5    // param\n\t2    // travelTimeToStart\n"
             "\t3    // travelTimeToEnd\n\t7    // groundType\n\t1    // oneShot\n"
             "\t1    // blockVirtualDirectorFlag\n\t1    // renderInBackgroundWhenNotMovingFlag\n"
             "\t\"shhq0007\"    // cameraWhileMoving\n\t1    // plotAsBoxInShadow\n"
             "\t1    // goalParam\n\t0.25    // currentMovementRate\n\t2    // attachCount\n"
             "\t\"Crate\"\t\t// attach actor\n\t\"(none)\"\t\t// attach actor\n\t1    // pushFlag\n"
             "\t1    // recomputeFog\n\t0    // plotInShadowFlag\n");
    EXPECT_EQ(platform_.getModel().getModelName(), "SECRETPANEL2.KFM");
    EXPECT_EQ(platform_.getToStartEvent(), "CloseSecretPanel");
    EXPECT_EQ(platform_.getToEndEvent(), "OpenSecretPanel");
    EXPECT_EQ(platform_.getStopEvent(), "Stopped");
    EXPECT_EQ(platform_.getStartSound(), "go.wav");
    EXPECT_EQ(platform_.getStopSound(), "halt.wav");
    EXPECT_EQ(platform_.getActiveSound(), "door-slide1.wav");
    EXPECT_EQ(platform_.getStartPosition().z, 24.6236F);
    EXPECT_EQ(platform_.getStartOrientation(), kNoTurn);
    EXPECT_EQ(platform_.getEndPosition().x, 44.6243F);
    EXPECT_EQ(platform_.getEndOrientation(), (common::CQuaternion4f{.x = 1.0F}));
    EXPECT_EQ(platform_.getState(), EPlatformState::kMovingToEnd);
    EXPECT_EQ(platform_.getParam(), 0.5F);
    EXPECT_EQ(platform_.getTravelTimeToEnd(), 3.0F);
    EXPECT_EQ(platform_.getGroundType(), EGroundType::kWood);
    EXPECT_TRUE(platform_.isOneShot());
    EXPECT_EQ(platform_.getBlockVirtualDirectorFlag(), 1);
    EXPECT_TRUE(platform_.isRenderedInBackgroundWhenNotMoving());
    EXPECT_EQ(platform_.getCameraWhileMoving(), "shhq0007");
    EXPECT_TRUE(platform_.isPlottedAsBoxInShadow());
    EXPECT_EQ(platform_.getGoalParam(), 1.0F);
    EXPECT_EQ(platform_.getCurrentMovementRate(), 0.25F);
    EXPECT_THAT(platform_.getAttachedActors(), ElementsAre(&crate_, nullptr));
    EXPECT_TRUE(platform_.isPushed());
    EXPECT_TRUE(platform_.isFogRecomputed());
    EXPECT_FALSE(platform_.isPlottedInShadow());
}

// One on a course has no ends of its own; before version 7 both trips took as long.
TEST_F(CPlatformArchiveTest, AnOldPlatformOnACourseHasNoEndsAndOneTravelTime) {
    read(1, "\"lift.kfm\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"lift.crs\" // courseFilename\n"
            "1\n0\n5 // travelTimeToStart\n2 // groundType\n");
    EXPECT_EQ(platform_.getCourseFilename(), "lift.crs");
    EXPECT_EQ(platform_.getEndOrientation(), kNoTurn);
    EXPECT_EQ(platform_.getState(), EPlatformState::kAtEnd);
    EXPECT_EQ(platform_.getTravelTimeToEnd(), 5.0F);
    EXPECT_EQ(platform_.getGroundType(), EGroundType::kConcrete);
    EXPECT_TRUE(platform_.getAttachedActors().empty());
}

TEST_F(CPlatformArchiveTest, MoreThanTenAttachedActorsIsFatal) {
    EXPECT_THAT(
        [this] {
            read(8, "\"p.kfm\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"c.crs\"\n0\n0\n2\n2\n0\n"
                    "0\n0\n0\n\"\"\n0\n0\n0\n11 // attachCount\n");
        },
        ThrowsMessage<common::CFatalError>(
            StrEq("CPlatform::archive - too many attached actors.")));
}

// The fields up to the attached actors for a version 8 platform between unturned ends.
constexpr std::string_view kBetweenEnds = "\"p.kfm\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n"
                                          "0,0,0\n1,0,0,0\n4,8,12\n1,0,0,0\n0\n0.25 // param\n"
                                          "2\n2\n0\n0\n0\n0\n\"\"\n0\n0\n0\n";

TEST_F(CPlatformArchiveTest, SettingUpCarriesEachActorReadOnce) {
    read(8, std::string(kBetweenEnds) + "3 // attachCount\n\"Crate\"\n\"(none)\"\n\"Crate\"\n");
    platform_.setup();
    EXPECT_THAT(platform_.getAttachedActors(), ElementsAre(&crate_));
}

TEST_F(CPlatformArchiveTest, SettingUpPutsItAsFarAlongAsItsParamBetweenItsEnds) {
    read(8, std::string(kBetweenEnds) + "0\n");
    platform_.setup();
    EXPECT_EQ(platform_.getLocation().position.x, 1.0F);
    EXPECT_EQ(platform_.getLocation().position.y, 2.0F);
    EXPECT_EQ(platform_.getLocation().position.z, 3.0F);
    EXPECT_EQ(platform_.getOrientation().x, 0.0F);
    EXPECT_EQ(platform_.getOrientation().z, 0.0F);
}

// A param that isn't a number goes to the end.
TEST_F(CPlatformArchiveTest, AParamPastEitherEndIsHeldThere) {
    for (const auto &[param, x] : {std::pair{"-1", 0.0F}, {"2", 4.0F}, {"nan", 4.0F}}) {
        std::string fields(kBetweenEnds);
        fields.replace(fields.find("0.25"), 4, param);
        read(8, fields + "0\n");
        platform_.setup();
        EXPECT_EQ(platform_.getLocation().position.x, x) << param;
        EXPECT_EQ(platform_.getParam(), x / 4.0F) << param;
    }
}

// A course of two frames ten apart along x, marked to loop.
class CPlatformCourseTest : public engine::CPodFixture {
protected:
    CPlatformCourseTest() {
        givenFile("data\\lift.crs",
                  "// course\n1\n// count, loop\n2,1\n// frames\n0,0,0,1,0,0,0\n10,0,0,1,0,0,0\n");
    }

    CTestClasses classes_{dosio_};
    CPlatform platform_{classes_.get()};
};

// Three quarters along a course that looped would be halfway back to its start.
TEST_F(CPlatformCourseTest, APlatformOnACourseFollowsItWithoutLooping) {
    CTestFieldsArchive archive(platform_, CPlatform::kType, 1,
                               "\"p.kfm\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"\"\n\"lift.crs\"\n"
                               "0\n0.75\n2\n0\n");
    platform_.archive(archive.get());
    platform_.setup();
    EXPECT_EQ(platform_.getLocation().position.x, 10.0F);
}

TEST(CPlatform, AnActorIsAttachedOnceAndNoneIsPassedOver) {
    CTestClasses classes;
    CPlatform platform{classes.get()};
    std::vector<std::unique_ptr<CTestActor>> actors;
    for (std::size_t i = 0; i <= CPlatform::kMaxAttachedActors; ++i) {
        actors.push_back(std::make_unique<CTestActor>(kTestBaseType));
    }
    platform.attachActor(nullptr);
    platform.attachActor(actors[0].get());
    platform.attachActor(actors[0].get());
    EXPECT_THAT(platform.getAttachedActors(), ElementsAre(actors[0].get()));
    for (std::size_t i = 1; i < CPlatform::kMaxAttachedActors; ++i) {
        platform.attachActor(actors[i].get());
    }
    EXPECT_THAT([&] { platform.attachActor(actors.back().get()); },
                ThrowsMessage<common::CFatalError>(StrEq("CPlatform::attachActor - too many!")));
}

TEST(CPlatform, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CPlatform platform{classes.get()};
    const NotPortedCalls calls = {
        {"process", [&] { platform.process(0.0F); }},
        {"renderOpaque", [&] { static_cast<void>(platform.renderOpaque()); }},
        {"renderBackground", [&] { platform.renderBackground(0); }},
        {"getBoundingBox", [&] { static_cast<void>(platform.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(platform.getCollisionType(nullptr)); }},
    };
    expectEachQuitsNotPorted("CPlatform", calls);
}

TEST(CPlatform, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPlatform>);
}

TEST(CPlatform, IsConcrete) {
    static_assert(!std::is_abstract_v<CPlatform>);
}

TEST(CPlatform, Constructors) {
    static_assert(std::is_constructible_v<CPlatform, CActor &>);
}

TEST(CPlatform, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPlatform::setup), void (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::process), void (CPlatform::*)(float)>);
    static_assert(std::is_same_v<decltype(&CPlatform::renderOpaque), int (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::renderBackground), void (CPlatform::*)(int)>);
    static_assert(std::is_same_v<decltype(&CPlatform::getBoundingBox),
                                 CBoundingBox3D *(CPlatform::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CPlatform::getCollisionType),
                                 ECollisionType (CPlatform::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::getGroundType), EGroundType (CPlatform::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::getBlockVirtualDirectorFlag), int (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::allowBulletHoles), int (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::getActorType),
                                 const CDemonActorType &(CPlatform::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::archive), void (CPlatform::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::startMovement), void (CPlatform::*)(float, float)>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::attachActor), void (CPlatform::*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
