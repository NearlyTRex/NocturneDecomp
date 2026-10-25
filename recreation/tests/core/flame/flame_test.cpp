#include "core/actor/demonactortype.h"
#include "core/flame/flame.h"

#include <gtest/gtest.h>

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
    static_assert(std::is_constructible_v<CFlame>);
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

TEST(CFlame, ItsRecordIsVersion7UnderCDemonActor) {
    EXPECT_EQ(CFlame::kType.class_name, "CFlame");
    EXPECT_EQ(CFlame::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CFlame::kType.factory_func, nullptr);
    EXPECT_EQ(CFlame::kType.latest_version, 7);
}

} // namespace
} // namespace nocturne::core
