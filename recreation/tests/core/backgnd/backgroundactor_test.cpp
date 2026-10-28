#include "core/actor/demonactortype.h"
#include "core/actor/groundtype.h"
#include "core/backgnd/backgroundactor.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBackgroundActor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CBackgroundActor>);
}

TEST(CBackgroundActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBackgroundActor>);
}

TEST(CBackgroundActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CBackgroundActor>);
}

TEST(CBackgroundActor, Constructors) {
    static_assert(std::is_constructible_v<CBackgroundActor>);
}

TEST(CBackgroundActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBackgroundActor::setup), void (CBackgroundActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::process), void (CBackgroundActor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::renderOpaque), int (CBackgroundActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::renderBackground),
                                 void (CBackgroundActor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getBoundingBox),
                                 CBoundingBox3D *(CBackgroundActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getCollisionType),
                                 ECollisionType (CBackgroundActor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getGroundType),
                                 EGroundType (CBackgroundActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getActorType),
                                 const CDemonActorType &(CBackgroundActor::*)() const>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::archive),
                                 void (CBackgroundActor::*)(CActorArchive &)>);
}

TEST(CBackgroundActor, ItsRecordIsVersion2UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CBackgroundActor::kType.class_name, "CBackgroundActor");
    EXPECT_EQ(CBackgroundActor::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBackgroundActor::kType.latest_version, 2);
    ASSERT_NE(CBackgroundActor::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CBackgroundActor::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CBackgroundActor::kType);
}

TEST(CBackgroundActor, SceneryIsACandleNothingCollidesWithOnDefaultGround) {
    CBackgroundActor scenery;
    EXPECT_EQ(scenery.getModel().getModelName(), "candle.kfm");
    EXPECT_FALSE(scenery.isCollidedWith());
    EXPECT_EQ(scenery.getGroundType(), EGroundType::kDefault);
}

TEST(CBackgroundActor, SceneryIsReadWithItsModelAndGround) {
    CBackgroundActor scenery;
    CTestFieldsArchive archive(scenery, CBackgroundActor::kType, 2,
                               "\"chair.kfm\" // modelName\n1 // collideWithMe\n7 // groundType\n");
    scenery.archive(archive.get());
    EXPECT_EQ(scenery.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(scenery.getModel().getModelName(), "chair.kfm");
    EXPECT_TRUE(scenery.isCollidedWith());
    EXPECT_EQ(scenery.getGroundType(), EGroundType::kWood);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CBackgroundActor, AVersionOneSceneryKeepsTheDefaultGround) {
    CBackgroundActor scenery;
    CTestFieldsArchive archive(scenery, CBackgroundActor::kType, 1, "\"chair.kfm\"\n0\n");
    scenery.archive(archive.get());
    EXPECT_EQ(scenery.getGroundType(), EGroundType::kDefault);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CBackgroundActor, ProcessingLeavesSceneryAsItIs) {
    CBackgroundActor scenery;
    scenery.setActorName("Candle");
    scenery.process(1.0F);
    EXPECT_EQ(scenery.getActorName(), "Candle");
    EXPECT_EQ(scenery.getModel().getModelName(), "candle.kfm");
}

TEST(CBackgroundActor, TheFunctionsNotPortedYetQuit) {
    CBackgroundActor scenery;
    const NotPortedCalls calls = {
        {"setup", [&] { scenery.setup(); }},
        {"renderOpaque", [&] { static_cast<void>(scenery.renderOpaque()); }},
        {"renderBackground", [&] { scenery.renderBackground(0); }},
        {"getBoundingBox", [&] { static_cast<void>(scenery.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(scenery.getCollisionType(nullptr)); }},
    };
    expectEachQuitsNotPorted("CBackgroundActor", calls);
}

} // namespace
} // namespace nocturne::core
