#include "core/actor/demonactortype.h"
#include "core/barrier/barrier.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBarrier, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CBarrier>);
}

TEST(CBarrier, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBarrier>);
}

TEST(CBarrier, IsConcrete) {
    static_assert(!std::is_abstract_v<CBarrier>);
}

TEST(CBarrier, Constructors) {
    static_assert(std::is_constructible_v<CBarrier>);
}

TEST(CBarrier, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBarrier::setup), void (CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::renderTransparent), int (CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::getBoundingBox),
                                 CBoundingBox3D *(CBarrier::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBarrier::getCollisionType),
                                 ECollisionType (CBarrier::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBarrier::updateCollisionData), void (CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::getActorType),
                                 const CDemonActorType &(CBarrier::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CBarrier::archive), void (CBarrier::*)(CActorArchive &)>);
}

TEST(CBarrier, ItsRecordIsVersion2UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CBarrier::kType.class_name, "CBarrier");
    EXPECT_EQ(CBarrier::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBarrier::kType.latest_version, 2);
    ASSERT_NE(CBarrier::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CBarrier::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CBarrier::kType);
}

TEST(CBarrier, ABarrierIsAFiveUnitCubeThatStopsEveryClassAndPaths) {
    const CBarrier barrier;
    EXPECT_EQ(barrier.getSize().x, 5.0F);
    EXPECT_EQ(barrier.getSize().y, 5.0F);
    EXPECT_EQ(barrier.getSize().z, 5.0F);
    EXPECT_EQ(barrier.getEffectClassNameList(), "");
    EXPECT_TRUE(barrier.isAddedToPathGrid());
}

TEST(CBarrier, ABarrierIsReadWithTheClassesItStops) {
    CBarrier barrier;
    CTestFieldsArchive archive(barrier, CBarrier::kType, 2,
                               "1,2,3 // size\n\"CImp CBat\"\n0 // addToPathGrid\n");
    barrier.archive(archive.get());
    EXPECT_EQ(barrier.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(barrier.getSize().y, 2.0F);
    EXPECT_EQ(barrier.getEffectClassNameList(), "CImp CBat");
    EXPECT_FALSE(barrier.isAddedToPathGrid());
    EXPECT_TRUE(archive.isFinished());
}

TEST(CBarrier, AVersionOneBarrierHasOnlyItsSize) {
    CBarrier barrier;
    CTestFieldsArchive archive(barrier, CBarrier::kType, 1, "1,2,3\n");
    barrier.archive(archive.get());
    EXPECT_EQ(barrier.getSize().z, 3.0F);
    EXPECT_TRUE(barrier.isAddedToPathGrid());
    EXPECT_TRUE(archive.isFinished());
}

TEST(CBarrier, TheFunctionsNotPortedYetQuit) {
    CBarrier barrier;
    const NotPortedCalls calls = {
        {"setup", [&] { barrier.setup(); }},
        {"renderTransparent", [&] { static_cast<void>(barrier.renderTransparent()); }},
        {"getBoundingBox", [&] { static_cast<void>(barrier.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(barrier.getCollisionType(nullptr)); }},
        {"updateCollisionData", [&] { barrier.updateCollisionData(); }},
    };
    expectEachQuitsNotPorted("CBarrier", calls);
}

} // namespace
} // namespace nocturne::core
