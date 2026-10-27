#include "core/actor/demonactortype.h"
#include "core/health/healthitem.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHealthItem, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CHealthItem>);
}

TEST(CHealthItem, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHealthItem>);
}

TEST(CHealthItem, IsConcrete) {
    static_assert(!std::is_abstract_v<CHealthItem>);
}

TEST(CHealthItem, Constructors) {
    static_assert(std::is_constructible_v<CHealthItem>);
}

TEST(CHealthItem, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHealthItem::setup), void (CHealthItem::*)()>);
    static_assert(std::is_same_v<decltype(&CHealthItem::process), void (CHealthItem::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHealthItem::renderOpaque), int (CHealthItem::*)()>);
    static_assert(std::is_same_v<decltype(&CHealthItem::getBoundingBox),
                                 CBoundingBox3D *(CHealthItem::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CHealthItem::getCollisionType),
                                 ECollisionType (CHealthItem::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::onPickup), void (CHealthItem::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::canPickup), int (CHealthItem::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CHealthItem::getActorType),
                                 const CDemonActorType &(CHealthItem::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::archive), void (CHealthItem::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::useItem), int (CHealthItem::*)(CCharacter *)>);
}

TEST(CHealthItem, ItsRecordIsVersion3UnderCDemonActorAndMissionsCanCreateOne) {
    EXPECT_EQ(CHealthItem::kType.class_name, "CHealthItem");
    EXPECT_EQ(CHealthItem::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CHealthItem::kType.latest_version, 3);
    ASSERT_NE(CHealthItem::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CHealthItem::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CHealthItem::kType);
}

TEST(CHealthItem, AHealthItemGivesBackFiftyHitPointsOnce) {
    const CHealthItem item;
    EXPECT_EQ(item.getModel().getModelName(), "bullet.kfm");
    EXPECT_EQ(item.getUseCount(), 1);
    EXPECT_EQ(item.getHpRestored(), 50.0F);
}

TEST(CHealthItem, AHealthItemIsReadWithItsModelAndUses) {
    CHealthItem item;
    CTestFieldsArchive archive(item, CHealthItem::kType, 3,
                               "\"medkit.kfm\"\n3 // useCount\n25 // hpRestored\n");
    item.archive(archive.get());
    EXPECT_EQ(item.getLocation().area_id, CTestFieldsArchive::kArea);
    EXPECT_EQ(item.getModel().getModelName(), "medkit.kfm");
    EXPECT_EQ(item.getUseCount(), 3);
    EXPECT_EQ(item.getHpRestored(), 25.0F);
    EXPECT_TRUE(archive.isFinished());
}

// Version 2 also held a shown name, which is passed over.
TEST(CHealthItem, AVersionTwoHealthItemsNameIsDropped) {
    CHealthItem item;
    CTestFieldsArchive archive(item, CHealthItem::kType, 2,
                               "\"medkit.kfm\"\n3\n25\n\"Medkit\" // descriptiveName\n");
    item.archive(archive.get());
    EXPECT_EQ(item.getHpRestored(), 25.0F);
    EXPECT_TRUE(archive.isFinished());
}

TEST(CHealthItem, ProcessingLeavesTheItemAsItIs) {
    CHealthItem item;
    item.process(1.0F);
    EXPECT_EQ(item.getUseCount(), 1);
    EXPECT_EQ(item.getHpRestored(), 50.0F);
}

TEST(CHealthItem, TheFunctionsNotPortedYetQuit) {
    CHealthItem item;
    const NotPortedCalls calls = {
        {"setup", [&] { item.setup(); }},
        {"renderOpaque", [&] { static_cast<void>(item.renderOpaque()); }},
        {"getBoundingBox", [&] { static_cast<void>(item.getBoundingBox(nullptr)); }},
        {"getCollisionType", [&] { static_cast<void>(item.getCollisionType(nullptr)); }},
        {"onPickup", [&] { item.onPickup(nullptr); }},
        {"canPickup", [&] { static_cast<void>(item.canPickup(nullptr)); }},
    };
    expectEachQuitsNotPorted("CHealthItem", calls);
}

} // namespace
} // namespace nocturne::core
