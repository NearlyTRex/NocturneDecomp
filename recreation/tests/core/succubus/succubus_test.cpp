#include "core/actor/demonactortype.h"
#include "core/succubus/succubus.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSuccubus, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CSuccubus>);
}

TEST(CSuccubus, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSuccubus>);
}

TEST(CSuccubus, IsConcrete) {
    static_assert(!std::is_abstract_v<CSuccubus>);
}

TEST(CSuccubus, Constructors) {
    static_assert(std::is_constructible_v<CSuccubus>);
}

TEST(CSuccubus, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSuccubus::setup), void (CSuccubus::*)()>);
    static_assert(std::is_same_v<decltype(&CSuccubus::process), void (CSuccubus::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSuccubus::renderOpaque), int (CSuccubus::*)()>);
    static_assert(std::is_same_v<decltype(&CSuccubus::getCollisionType),
                                 ECollisionType (CSuccubus::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CSuccubus::getTargetPoints),
                                 int (CSuccubus::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSuccubus::getActorType),
                                 const CDemonActorType &(CSuccubus::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSuccubus::archive), void (CSuccubus::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CSuccubus::processDamage), void (CSuccubus::*)(SDamageInfo *)>);
}

TEST(CSuccubus, ItsRecordIsVersion1UnderCEnemy) {
    EXPECT_EQ(CSuccubus::kType.class_name, "CSuccubus");
    EXPECT_EQ(CSuccubus::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CSuccubus::kType.factory_func, nullptr);
    EXPECT_EQ(CSuccubus::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
