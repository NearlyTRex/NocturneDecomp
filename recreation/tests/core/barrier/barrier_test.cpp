#include "core/actor/demonactortype.h"
#include "core/barrier/barrier.h"

#include <gtest/gtest.h>

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

TEST(CBarrier, ItsRecordIsVersion2UnderCDemonActor) {
    EXPECT_EQ(CBarrier::kType.class_name, "CBarrier");
    EXPECT_EQ(CBarrier::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBarrier::kType.factory_func, nullptr);
    EXPECT_EQ(CBarrier::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
