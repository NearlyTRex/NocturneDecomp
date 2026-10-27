#include "core/actor/demonactortype.h"
#include "core/litecone/lightcone.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightCone, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CLightCone>);
}

TEST(CLightCone, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLightCone>);
}

TEST(CLightCone, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightCone>);
}

TEST(CLightCone, Constructors) {
    static_assert(std::is_constructible_v<CLightCone>);
}

TEST(CLightCone, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightCone::setup), void (CLightCone::*)()>);
    static_assert(std::is_same_v<decltype(&CLightCone::process), void (CLightCone::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLightCone::renderTransparent), int (CLightCone::*)()>);
    static_assert(std::is_same_v<decltype(&CLightCone::getBoundingBox),
                                 CBoundingBox3D *(CLightCone::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CLightCone::getCollisionType),
                                 ECollisionType (CLightCone::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CLightCone::getActorType),
                                 const CDemonActorType &(CLightCone::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CLightCone::archive), void (CLightCone::*)(CActorArchive &)>);
}

TEST(CLightCone, ItsRecordIsVersion2UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CLightCone::kType.class_name, "CLightCone");
    EXPECT_EQ(CLightCone::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CLightCone::kType.latest_version, 2);
    ASSERT_NE(CLightCone::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CLightCone::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CLightCone::kType);
}

TEST(CLightCone, AConeIsAFiftySixDegreeLightThatIsOnWithNoEvents) {
    const CLightCone cone;
    EXPECT_EQ(cone.getFov(), 56.0F);
    EXPECT_EQ(cone.getFalloff(), 6.0F);
    EXPECT_EQ(cone.getState(), 1);
    EXPECT_EQ(cone.getOnEvent(), "none");
    EXPECT_EQ(cone.getOffEvent(), "none");
}

TEST(CLightCone, AConeIsReadWithItsStateAndEvents) {
    CLightCone cone;
    CTestFieldsArchive archive(
        cone, CLightCone::kType, 2,
        "40 // fov\n3 // falloff\n0 // state\n\"lightsOn\"\n\"lightsOff\"\n");
    cone.archive(archive.get());
    EXPECT_EQ(cone.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(cone.getFov(), 40.0F);
    EXPECT_EQ(cone.getFalloff(), 3.0F);
    EXPECT_EQ(cone.getState(), 0);
    EXPECT_EQ(cone.getOnEvent(), "lightsOn");
    EXPECT_EQ(cone.getOffEvent(), "lightsOff");
    EXPECT_TRUE(archive.isFinished());
}

TEST(CLightCone, AVersionOneConeHasOnlyItsShape) {
    CLightCone cone;
    CTestFieldsArchive archive(cone, CLightCone::kType, 1, "40\n3\n");
    cone.archive(archive.get());
    EXPECT_EQ(cone.getFov(), 40.0F);
    EXPECT_EQ(cone.getState(), 1);
    EXPECT_EQ(cone.getOnEvent(), "none");
    EXPECT_TRUE(archive.isFinished());
}

TEST(CLightCone, TheFunctionsNotPortedYetQuit) {
    CLightCone cone;
    const NotPortedCalls calls = {
        {"setup", [&] { cone.setup(); }},
        {"process", [&] { cone.process(0.0F); }},
        {"renderTransparent", [&] { static_cast<void>(cone.renderTransparent()); }},
        {"getBoundingBox", [&] { static_cast<void>(cone.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(cone.getCollisionType(nullptr)); }},
    };
    expectEachQuitsNotPorted("CLightCone", calls);
}

} // namespace
} // namespace nocturne::core
