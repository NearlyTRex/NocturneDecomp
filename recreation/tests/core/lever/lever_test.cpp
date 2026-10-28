#include "core/actor/demonactortype.h"
#include "core/lever/lever.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLever, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CLever>);
}

TEST(CLever, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLever>);
}

TEST(CLever, IsConcrete) {
    static_assert(!std::is_abstract_v<CLever>);
}

TEST(CLever, Constructors) {
    static_assert(std::is_constructible_v<CLever>);
}

TEST(CLever, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLever::setup), void (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::process), void (CLever::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLever::renderOpaque), int (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::getBoundingBox),
                                 CBoundingBox3D *(CLever::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CLever::getCollisionType),
                                 ECollisionType (CLever::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CLever::getActorType),
                                 const CDemonActorType &(CLever::*)() const>);
    static_assert(std::is_same_v<decltype(&CLever::archive), void (CLever::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CLever::setState), void (CLever::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLever::activate), void (CLever::*)()>);
    static_assert(std::is_same_v<decltype(&CLever::getHandlePosition),
                                 common::CVector3f *(CLever::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CLever::isAccessibleFrom), int (CLever::*)(common::CVector3f *)>);
}

TEST(CLever, ItsRecordIsVersion8UnderCDemonActor) {
    EXPECT_EQ(CLever::kType.class_name, "CLever");
    EXPECT_EQ(CLever::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CLever::kType.factory_func, nullptr);
    EXPECT_EQ(CLever::kType.latest_version, 8);
}

} // namespace
} // namespace nocturne::core
