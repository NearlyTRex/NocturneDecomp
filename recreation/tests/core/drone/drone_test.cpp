#include "core/actor/demonactortype.h"
#include "core/drone/drone.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDrone, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CDrone>);
}

TEST(CDrone, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDrone>);
}

TEST(CDrone, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrone>);
}

TEST(CDrone, Constructors) {
    static_assert(std::is_constructible_v<CDrone>);
}

TEST(CDrone, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDrone::setup), void (CDrone::*)()>);
    static_assert(std::is_same_v<decltype(&CDrone::process), void (CDrone::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CDrone::getTargetPoints), int (CDrone::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDrone::getActorType),
                                 const CDemonActorType &(CDrone::*)() const>);
    static_assert(std::is_same_v<decltype(&CDrone::archive), void (CDrone::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CDrone::processDamage), void (CDrone::*)(SDamageInfo *)>);
}

TEST(CDrone, ItsRecordIsVersion2UnderCEnemy) {
    EXPECT_EQ(CDrone::kType.class_name, "CDrone");
    EXPECT_EQ(CDrone::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CDrone::kType.factory_func, nullptr);
    EXPECT_EQ(CDrone::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
