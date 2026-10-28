#include "core/actor/demonactortype.h"
#include "core/drip/drip.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDrip, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CDrip>);
}

TEST(CDrip, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDrip>);
}

TEST(CDrip, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrip>);
}

TEST(CDrip, Constructors) {
    static_assert(std::is_constructible_v<CDrip>);
}

TEST(CDrip, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDrip::setup), void (CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::process), void (CDrip::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDrip::renderOpaque), int (CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::getBoundingBox),
                                 CBoundingBox3D *(CDrip::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDrip::getCollisionType),
                                 ECollisionType (CDrip::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CDrip::getActorType), const CDemonActorType &(CDrip::*)() const>);
    static_assert(std::is_same_v<decltype(&CDrip::archive), void (CDrip::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CDrip::reset), void (CDrip::*)()>);
}

TEST(CDrip, ItsRecordIsVersion6UnderCDemonActor) {
    EXPECT_EQ(CDrip::kType.class_name, "CDrip");
    EXPECT_EQ(CDrip::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CDrip::kType.factory_func, nullptr);
    EXPECT_EQ(CDrip::kType.latest_version, 6);
}

} // namespace
} // namespace nocturne::core
