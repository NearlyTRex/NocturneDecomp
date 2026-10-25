#include "core/actor/demonactortype.h"
#include "core/grave/grave.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGrave, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CGrave>);
}

TEST(CGrave, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGrave>);
}

TEST(CGrave, IsConcrete) {
    static_assert(!std::is_abstract_v<CGrave>);
}

TEST(CGrave, Constructors) {
    static_assert(std::is_constructible_v<CGrave>);
}

TEST(CGrave, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGrave::setup), void (CGrave::*)()>);
    static_assert(std::is_same_v<decltype(&CGrave::process), void (CGrave::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGrave::renderOpaque), int (CGrave::*)()>);
    static_assert(std::is_same_v<decltype(&CGrave::renderBackground), void (CGrave::*)(int)>);
    static_assert(std::is_same_v<decltype(&CGrave::getBoundingBox),
                                 CBoundingBox3D *(CGrave::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CGrave::getCollisionType),
                                 ECollisionType (CGrave::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CGrave::getActorType),
                                 const CDemonActorType &(CGrave::*)() const>);
    static_assert(std::is_same_v<decltype(&CGrave::archive), void (CGrave::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CGrave::startAnimation), void (CGrave::*)()>);
}

TEST(CGrave, ItsRecordIsVersion4UnderCDemonActor) {
    EXPECT_EQ(CGrave::kType.class_name, "CGrave");
    EXPECT_EQ(CGrave::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CGrave::kType.factory_func, nullptr);
    EXPECT_EQ(CGrave::kType.latest_version, 4);
}

} // namespace
} // namespace nocturne::core
