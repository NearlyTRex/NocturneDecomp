#include "core/actor/demonactortype.h"
#include "core/actor/groundtype.h"
#include "core/backgnd/backgroundactor.h"
#include "core/box/boundingbox3d.h"
#include "core/dmodel/keyframedmodel.h"
#include "tests/mocks/core/keyframedactorfixture.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/oneframemodel.h"
#include "tests/mocks/core/testclasses.h"
#include "tests/mocks/core/testfieldsarchive.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
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
    static_assert(std::is_constructible_v<CBackgroundActor, CActor &>);
}

TEST(CBackgroundActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBackgroundActor::setup), void (CBackgroundActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::process), void (CBackgroundActor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::renderOpaque), int (CBackgroundActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::renderBackground),
                                 void (CBackgroundActor::*)(int, const SActorRenderOwners &)>);
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
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> actor = CBackgroundActor::kType.factory_func(classes.get());
    EXPECT_EQ(&actor->getActorType(), &CBackgroundActor::kType);
}

TEST(CBackgroundActor, SceneryIsACandleNothingCollidesWithOnDefaultGround) {
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
    EXPECT_EQ(scenery.getModel().getModelName(), "candle.kfm");
    EXPECT_FALSE(scenery.isCollidedWith());
    EXPECT_EQ(scenery.getGroundType(), EGroundType::kDefault);
}

TEST(CBackgroundActor, SceneryIsReadWithItsModelAndGround) {
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
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
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
    CTestFieldsArchive archive(scenery, CBackgroundActor::kType, 1, "\"chair.kfm\"\n0\n");
    scenery.archive(archive.get());
    EXPECT_EQ(scenery.getGroundType(), EGroundType::kDefault);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CBackgroundActor, ProcessingLeavesSceneryAsItIs) {
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
    scenery.setActorName("Candle");
    scenery.process(1.0F);
    EXPECT_EQ(scenery.getActorName(), "Candle");
    EXPECT_EQ(scenery.getModel().getModelName(), "candle.kfm");
}

TEST(CBackgroundActor, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
    const NotPortedCalls calls = {
        {"renderOpaque", [&] { static_cast<void>(scenery.renderOpaque()); }},
        {"getCollisionType", [&] { static_cast<void>(scenery.getCollisionType(nullptr)); }},
    };
    expectEachQuitsNotPorted("CBackgroundActor", calls);
}

class CBackgroundActorBoundsTest : public engine::CPodFixture {};

TEST_F(CBackgroundActorBoundsTest, ItsBoxIsItsModelsFirstFrames) {
    givenFile("models\\candle.kfm", oneFrameModel());
    CTestClasses classes{dosio_};
    classes.getKeyFramedModel().load("candle.kfm");
    CBackgroundActor scenery{classes.get()};
    scenery.setup();
    CBoundingBox3D box;
    EXPECT_EQ(scenery.getBoundingBox(&box), &box);
    expectOneFrameBounds(box);
}

TEST(CBackgroundActor, SettingUpFindsItsModel) {
    CTestClasses classes;
    CBackgroundActor scenery{classes.get()};
    EXPECT_CALL(classes.getKeyFramedModels(), loadModel(::testing::StrEq("candle.kfm")))
        .WillOnce(::testing::ReturnRef(classes.getKeyFramedModel()));
    scenery.setup();
}

TEST(CBackgroundActor, ItCollidesOnlyWhenItsFileSaysTo) {
    for (const bool collide_with_me : {false, true}) {
        CTestClasses classes;
        CBackgroundActor scenery{classes.get()};
        CTestFieldsArchive archive(scenery, CBackgroundActor::kType, 1,
                                   std::format("\"candle.kfm\"\n{}\n", collide_with_me ? 1 : 0));
        scenery.archive(archive.get());
        scenery.setup();
        EXPECT_EQ(scenery.isCollisionDisabled(), !collide_with_me);
    }
}

class CBackgroundActorDrawTest : public CKeyFramedActorFixture {
protected:
    CBackgroundActorDrawTest() {
        ready(scenery_);
    }

    CBackgroundActor scenery_{classes_.get()};
};

// Scenery is drawn into the backdrop in its layer, while its box is visible.
TEST_F(CBackgroundActorDrawTest, SceneryIsDrawnIntoTheBackdropInItsLayer) {
    scenery_.renderBackground(1, render_owners_);
    EXPECT_TRUE(drawn());
}

TEST_F(CBackgroundActorDrawTest, OutsideItsLayerSceneryIsLeftOut) {
    scenery_.renderBackground(0, render_owners_);
    EXPECT_FALSE(drawn());
}

TEST_F(CBackgroundActorDrawTest, HiddenSceneryIsNotDrawn) {
    hideEverything();
    scenery_.renderBackground(1, render_owners_);
    EXPECT_FALSE(drawn());
}

} // namespace
} // namespace nocturne::core
