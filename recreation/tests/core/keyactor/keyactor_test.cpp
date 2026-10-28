#include "core/actor/demonactortype.h"
#include "core/keyactor/keyactor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CKeyActor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CKeyActor>);
}

TEST(CKeyActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CKeyActor>);
}

TEST(CKeyActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeyActor>);
}

TEST(CKeyActor, Constructors) {
    static_assert(std::is_constructible_v<CKeyActor>);
}

TEST(CKeyActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeyActor::setup), void (CKeyActor::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyActor::process), void (CKeyActor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CKeyActor::renderOpaque), int (CKeyActor::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyActor::getBoundingBox),
                                 CBoundingBox3D *(CKeyActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CKeyActor::getCollisionType),
                                 ECollisionType (CKeyActor::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CKeyActor::onPickup), void (CKeyActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CKeyActor::canPickup), int (CKeyActor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CKeyActor::getActorType),
                                 const CDemonActorType &(CKeyActor::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CKeyActor::archive), void (CKeyActor::*)(CActorArchive &)>);
}

TEST(CKeyActor, ItsRecordIsVersion3UnderCDemonActor) {
    EXPECT_EQ(CKeyActor::kType.class_name, "CKeyActor");
    EXPECT_EQ(CKeyActor::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CKeyActor::kType.factory_func, nullptr);
    EXPECT_EQ(CKeyActor::kType.latest_version, 3);
}

} // namespace
} // namespace nocturne::core
