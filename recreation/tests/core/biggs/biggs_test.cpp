#include "core/actor/demonactortype.h"
#include "core/biggs/biggs.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBiggs, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBiggs>);
}

TEST(CBiggs, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBiggs>);
}

TEST(CBiggs, IsConcrete) {
    static_assert(!std::is_abstract_v<CBiggs>);
}

TEST(CBiggs, Constructors) {
    static_assert(std::is_constructible_v<CBiggs>);
}

TEST(CBiggs, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBiggs::setup), void (CBiggs::*)()>);
    static_assert(std::is_same_v<decltype(&CBiggs::process), void (CBiggs::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBiggs::renderOpaque), int (CBiggs::*)()>);
    static_assert(std::is_same_v<decltype(&CBiggs::getCollisionType),
                                 ECollisionType (CBiggs::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBiggs::getTargetPoints), int (CBiggs::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBiggs::getActorType),
                                 const CDemonActorType &(CBiggs::*)() const>);
    static_assert(std::is_same_v<decltype(&CBiggs::archive), void (CBiggs::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CBiggs::processDamage), void (CBiggs::*)(SDamageInfo *)>);
}

TEST(CBiggs, ItsRecordIsVersion1UnderCEnemy) {
    EXPECT_EQ(CBiggs::kType.class_name, "CBiggs");
    EXPECT_EQ(CBiggs::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CBiggs::kType.factory_func, nullptr);
    EXPECT_EQ(CBiggs::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
