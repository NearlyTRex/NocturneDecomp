#include "core/actor/actor.h"
#include "core/actor/collisiontype.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/flame/flame.h"
#include "core/flame/flametype.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlame, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CFlame>);
}

TEST(CFlame, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlame>);
}

TEST(CFlame, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlame>);
}

TEST(CFlame, Constructors) {
    static_assert(std::is_constructible_v<CFlame, CActor &>);
}

TEST(CFlame, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFlame::setup), void (CFlame::*)()>);
    static_assert(std::is_same_v<decltype(&CFlame::process), void (CFlame::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFlame::renderTransparent), int (CFlame::*)()>);
    static_assert(std::is_same_v<decltype(&CFlame::renderBackground), void (CFlame::*)(int)>);
    static_assert(std::is_same_v<decltype(&CFlame::getBoundingBox),
                                 CBoundingBox3D *(CFlame::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFlame::getCollisionType),
                                 ECollisionType (CFlame::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CFlame::getActorType),
                                 const CDemonActorType &(CFlame::*)() const>);
    static_assert(std::is_same_v<decltype(&CFlame::archive), void (CFlame::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CFlame::hide), void (CFlame::*)()>);
}

TEST(CFlame, ItsRecordIsVersion7UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CFlame::kType.class_name, "CFlame");
    EXPECT_EQ(CFlame::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CFlame::kType.latest_version, 7);
    ASSERT_NE(CFlame::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CFlame::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CFlame::kType);
}

TEST(CFlame, AFlameIsALitTransparentTorchThatBurnsNobody) {
    CTestClasses classes;
    const CFlame flame(classes.get());
    EXPECT_EQ(flame.getFlameSize().x, 1.0F);
    EXPECT_EQ(flame.getFlameSize().y, 2.0F);
    EXPECT_EQ(flame.getFlameSize().z, 1.0F);
    EXPECT_EQ(flame.getFlameType(), EFlameType::kTorch);
    EXPECT_EQ(flame.getGlobeScalar(), 1.0F);
    EXPECT_EQ(flame.getOnEvent(), "");
    EXPECT_EQ(flame.getOffEvent(), "");
    EXPECT_TRUE(flame.isFlameOn());
    EXPECT_EQ(flame.getIntensity(), 0.5F);
    EXPECT_EQ(flame.getRandomness(), 0.05F);
    EXPECT_FALSE(flame.burnsHero());
    EXPECT_FALSE(flame.burnsEnemies());
    EXPECT_TRUE(flame.isVisible());
    EXPECT_TRUE(flame.isTransparent());
}

// Flames don't all flicker in step, and the start never moves the sim stream, even in a sim frame.
TEST(CFlame, AFlameStartsAtACosmeticPointInItsAnimation) {
    CTestClasses classes;
    CTestClasses same;
    for (CTestClasses *each : {&classes, &same}) {
        each->getGame().is_processing = 1;
        each->get().setRandomSeed(5);
    }
    const CFlame flame(classes.get());
    EXPECT_EQ(flame.getAnimationTime(), same.get().getCosmeticFloatFromRange(0.0F, 8.0F));
    EXPECT_EQ(classes.get().getRandomFloatFromRange(0.0F, 1.0F),
              same.get().getRandomFloatFromRange(0.0F, 1.0F));
}

class CFlameArchiveTest : public ::testing::Test {
protected:
    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(flame_, CFlame::kType, saved_version, fields);
        flame_.archive(archive.get());
        EXPECT_EQ(flame_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CTestClasses classes_;
    CFlame flame_{classes_.get()};
};

// FlameColonelLite of HQ-ACT1.MSN, but sized, blue and burning both. Both events are saved as
// onEvent.
TEST_F(CFlameArchiveTest, AFlameIsReadWithItsEventsFlickerAndBurning) {
    read(7, "\t1,3,0.5    // flameSize\n\t2    // whichFlame\n\t0.75    // globeScalar\n"
            "\t\"FlameOn\"    // onEvent\n\t\"FlameOff\"    // onEvent\n\t0    // flameState\n"
            "\t0.25    // intensity\n\t0.1    // randomness\n\t1    // burnHero\n"
            "\t1    // burnEnemy\n");
    EXPECT_EQ(flame_.getFlameSize().y, 3.0F);
    EXPECT_EQ(flame_.getFlameSize().z, 0.5F);
    EXPECT_EQ(flame_.getFlameType(), EFlameType::kBlue);
    EXPECT_EQ(flame_.getGlobeScalar(), 0.75F);
    EXPECT_EQ(flame_.getOnEvent(), "FlameOn");
    EXPECT_EQ(flame_.getOffEvent(), "FlameOff");
    EXPECT_FALSE(flame_.isFlameOn());
    EXPECT_EQ(flame_.getIntensity(), 0.25F);
    EXPECT_EQ(flame_.getRandomness(), 0.1F);
    EXPECT_TRUE(flame_.burnsHero());
    EXPECT_TRUE(flame_.burnsEnemies());
}

TEST_F(CFlameArchiveTest, AVersionSixFlameDoesNotBurn) {
    read(6, "1,2,1\n3\n1\n\"FlameOn\"\n\"FlameOff\"\n1\n0.5\n0.05\n");
    EXPECT_EQ(flame_.getFlameType(), EFlameType::kNone);
    EXPECT_EQ(flame_.getRandomness(), 0.05F);
    EXPECT_FALSE(flame_.burnsHero());
}

TEST_F(CFlameArchiveTest, AVersionFiveFlameHasItsStateButNotItsFlicker) {
    read(5, "1,2,1\n1\n1\n\"on\"\n\"off\"\n0\n");
    EXPECT_FALSE(flame_.isFlameOn());
    EXPECT_EQ(flame_.getIntensity(), 0.5F);
}

TEST_F(CFlameArchiveTest, AVersionFourFlameHasBothEvents) {
    read(4, "1,2,1\n1\n1\n\"on\"\n\"off\"\n");
    EXPECT_EQ(flame_.getOffEvent(), "off");
    EXPECT_TRUE(flame_.isFlameOn());
}

TEST_F(CFlameArchiveTest, AVersionThreeFlameHasOnlyItsOnEvent) {
    read(3, "1,2,1\n1\n1\n\"on\"\n");
    EXPECT_EQ(flame_.getOnEvent(), "on");
    EXPECT_EQ(flame_.getOffEvent(), "");
}

TEST_F(CFlameArchiveTest, AVersionTwoFlameHasItsLook) {
    read(2, "1,2,1\n4\n2\n");
    EXPECT_EQ(flame_.getFlameType(), EFlameType::kBody);
    EXPECT_EQ(flame_.getGlobeScalar(), 2.0F);
    EXPECT_EQ(flame_.getOnEvent(), "");
}

TEST_F(CFlameArchiveTest, AVersionOneFlameHasOnlyItsSize) {
    read(1, "2,4,6\n");
    EXPECT_EQ(flame_.getFlameSize().x, 2.0F);
    EXPECT_EQ(flame_.getFlameType(), EFlameType::kTorch);
}

// The top is the height plus a double tenth, rounded once to a float.
TEST(CFlame, ItsBoxStandsOnItsBaseWithATenthToSpare) {
    CTestClasses classes;
    CFlame flame(classes.get());
    CBoundingBox3D box;
    EXPECT_EQ(flame.getBoundingBox(&box), &box);
    EXPECT_EQ(box.min.x, -0.5F);
    EXPECT_EQ(box.min.y, -0.1F);
    EXPECT_EQ(box.min.z, -0.5F);
    EXPECT_EQ(box.max.x, 0.5F);
    EXPECT_EQ(box.max.y, static_cast<float>(2.0 + 0.1));
    EXPECT_EQ(box.max.z, 0.5F);
}

TEST(CFlame, NothingCollidesWithAFlame) {
    CTestClasses classes;
    CFlame flame(classes.get());
    EXPECT_EQ(flame.getCollisionType(nullptr), ECollisionType::kNone);
}

TEST(CFlame, HidingAFlameMakesItInvisible) {
    CTestClasses classes;
    CFlame flame(classes.get());
    flame.hide();
    EXPECT_FALSE(flame.isVisible());
}

TEST(CFlame, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CFlame flame(classes.get());
    const NotPortedCalls calls = {
        {"setup", [&] { flame.setup(); }},
        {"process", [&] { flame.process(0.0F); }},
        {"renderTransparent", [&] { static_cast<void>(flame.renderTransparent()); }},
        {"renderBackground", [&] { flame.renderBackground(0); }},
    };
    expectEachQuitsNotPorted("CFlame", calls);
}

} // namespace
} // namespace nocturne::core
