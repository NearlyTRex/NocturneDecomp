#include "core/actor/demonactortype.h"
#include "core/stone/templestone.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTempleStone, DerivesFromCBoxActor) {
    static_assert(std::is_base_of_v<CBoxActor, CTempleStone>);
}

TEST(CTempleStone, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTempleStone>);
}

TEST(CTempleStone, IsConcrete) {
    static_assert(!std::is_abstract_v<CTempleStone>);
}

TEST(CTempleStone, Constructors) {
    static_assert(std::is_constructible_v<CTempleStone>);
}

TEST(CTempleStone, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CTempleStone::canPickup), int (CTempleStone::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTempleStone::getActorType),
                                 const CDemonActorType &(CTempleStone::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CTempleStone::archive), void (CTempleStone::*)(CActorArchive &)>);
}

TEST(CTempleStone, ItsRecordIsVersion1UnderCBoxActor) {
    EXPECT_EQ(CTempleStone::kType.class_name, "CTempleStone");
    EXPECT_EQ(CTempleStone::kType.parent_type, &CBoxActor::kType);
    EXPECT_EQ(CTempleStone::kType.factory_func, nullptr);
    EXPECT_EQ(CTempleStone::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
