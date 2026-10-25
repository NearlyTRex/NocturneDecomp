#include "core/actor/demonactortype.h"
#include "core/beast/beast.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBeast, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBeast>);
}

TEST(CBeast, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBeast>);
}

TEST(CBeast, IsConcrete) {
    static_assert(!std::is_abstract_v<CBeast>);
}

TEST(CBeast, Constructors) {
    static_assert(std::is_constructible_v<CBeast>);
}

TEST(CBeast, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBeast::setup), void (CBeast::*)()>);
    static_assert(std::is_same_v<decltype(&CBeast::process), void (CBeast::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBeast::getCollisionType),
                                 ECollisionType (CBeast::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBeast::getTargetPoints), int (CBeast::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBeast::getActorType),
                                 const CDemonActorType &(CBeast::*)() const>);
    static_assert(std::is_same_v<decltype(&CBeast::archive), void (CBeast::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CBeast::processDamage), void (CBeast::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBeast::getDeathState), EDeathState (CBeast::*)()>);
}

TEST(CBeast, ItsRecordIsVersion1UnderCEnemy) {
    EXPECT_EQ(CBeast::kType.class_name, "CBeast");
    EXPECT_EQ(CBeast::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CBeast::kType.factory_func, nullptr);
    EXPECT_EQ(CBeast::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
