#include "core/actor/demonactortype.h"
#include "core/flies/flies.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlies, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CFlies>);
}

TEST(CFlies, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlies>);
}

TEST(CFlies, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlies>);
}

TEST(CFlies, Constructors) {
    static_assert(std::is_constructible_v<CFlies>);
}

TEST(CFlies, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFlies::setup), void (CFlies::*)()>);
    static_assert(std::is_same_v<decltype(&CFlies::process), void (CFlies::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFlies::renderOpaque), int (CFlies::*)()>);
    static_assert(std::is_same_v<decltype(&CFlies::getBoundingBox),
                                 CBoundingBox3D *(CFlies::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFlies::getCollisionType),
                                 ECollisionType (CFlies::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CFlies::getActorType),
                                 const CDemonActorType &(CFlies::*)() const>);
    static_assert(std::is_same_v<decltype(&CFlies::archive), void (CFlies::*)(CActorArchive &)>);
}

TEST(CFlies, ItsRecordIsVersion3UnderCDemonActor) {
    EXPECT_EQ(CFlies::kType.class_name, "CFlies");
    EXPECT_EQ(CFlies::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CFlies::kType.factory_func, nullptr);
    EXPECT_EQ(CFlies::kType.latest_version, 3);
}

} // namespace
} // namespace nocturne::core
