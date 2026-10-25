#include "core/actor/demonactortype.h"
#include "core/backgnd/backgroundactor.h"

#include <gtest/gtest.h>

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

TEST(CBackgroundActor, ItsRecordIsVersion2UnderCDemonActor) {
    EXPECT_EQ(CBackgroundActor::kType.class_name, "CBackgroundActor");
    EXPECT_EQ(CBackgroundActor::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBackgroundActor::kType.factory_func, nullptr);
    EXPECT_EQ(CBackgroundActor::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
