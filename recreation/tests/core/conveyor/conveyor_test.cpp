#include "core/actor/demonactortype.h"
#include "core/conveyor/conveyor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CConveyor, DerivesFromCPlatform) {
    static_assert(std::is_base_of_v<CPlatform, CConveyor>);
}

TEST(CConveyor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CConveyor>);
}

TEST(CConveyor, IsConcrete) {
    static_assert(!std::is_abstract_v<CConveyor>);
}

TEST(CConveyor, Constructors) {
    static_assert(std::is_constructible_v<CConveyor>);
}

TEST(CConveyor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CConveyor::setup), void (CConveyor::*)()>);
    static_assert(std::is_same_v<decltype(&CConveyor::process), void (CConveyor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CConveyor::renderOpaque), int (CConveyor::*)()>);
    static_assert(std::is_same_v<decltype(&CConveyor::renderBackground), void (CConveyor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CConveyor::getBoundingBox),
                                 CBoundingBox3D *(CConveyor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CConveyor::getCollisionType),
                                 ECollisionType (CConveyor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CConveyor::getActorType),
                                 const CDemonActorType &(CConveyor::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CConveyor::archive), void (CConveyor::*)(CActorArchive &)>);
}

TEST(CConveyor, ItsRecordIsVersion2UnderCPlatform) {
    EXPECT_EQ(CConveyor::kType.class_name, "CConveyor");
    EXPECT_EQ(CConveyor::kType.parent_type, &CPlatform::kType);
    EXPECT_EQ(CConveyor::kType.factory_func, nullptr);
    EXPECT_EQ(CConveyor::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
