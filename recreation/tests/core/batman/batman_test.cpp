#include "core/actor/demonactortype.h"
#include "core/batman/batman.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBatman, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBatman>);
}

TEST(CBatman, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBatman>);
}

TEST(CBatman, IsConcrete) {
    static_assert(!std::is_abstract_v<CBatman>);
}

TEST(CBatman, Constructors) {
    static_assert(std::is_constructible_v<CBatman>);
}

TEST(CBatman, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBatman::setup), void (CBatman::*)()>);
    static_assert(std::is_same_v<decltype(&CBatman::process), void (CBatman::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBatman::renderOpaque), int (CBatman::*)()>);
    static_assert(std::is_same_v<decltype(&CBatman::getCollisionType),
                                 ECollisionType (CBatman::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBatman::getTargetPoints), int (CBatman::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBatman::getActorType),
                                 const CDemonActorType &(CBatman::*)() const>);
    static_assert(std::is_same_v<decltype(&CBatman::archive), void (CBatman::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CBatman::processDamage), void (CBatman::*)(SDamageInfo *)>);
}

TEST(CBatman, ItsRecordIsVersion3UnderCEnemy) {
    EXPECT_EQ(CBatman::kType.class_name, "CBatman");
    EXPECT_EQ(CBatman::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CBatman::kType.factory_func, nullptr);
    EXPECT_EQ(CBatman::kType.latest_version, 3);
}

} // namespace
} // namespace nocturne::core
