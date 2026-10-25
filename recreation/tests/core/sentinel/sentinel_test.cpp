#include "core/actor/demonactortype.h"
#include "core/sentinel/sentinel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSentinel, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CSentinel>);
}

TEST(CSentinel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSentinel>);
}

TEST(CSentinel, IsConcrete) {
    static_assert(!std::is_abstract_v<CSentinel>);
}

TEST(CSentinel, Constructors) {
    static_assert(std::is_constructible_v<CSentinel>);
}

TEST(CSentinel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSentinel::setup), void (CSentinel::*)()>);
    static_assert(std::is_same_v<decltype(&CSentinel::process), void (CSentinel::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSentinel::getCollisionType),
                                 ECollisionType (CSentinel::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CSentinel::getTargetPoints),
                                 int (CSentinel::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSentinel::getActorType),
                                 const CDemonActorType &(CSentinel::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSentinel::archive), void (CSentinel::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CSentinel::processDamage), void (CSentinel::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CSentinel::attractActorToward),
                                 int (CSentinel::*)(CDemonActor *, common::CVector3f *)>);
}

TEST(CSentinel, ItsRecordIsVersion2UnderCEnemy) {
    EXPECT_EQ(CSentinel::kType.class_name, "CSentinel");
    EXPECT_EQ(CSentinel::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CSentinel::kType.factory_func, nullptr);
    EXPECT_EQ(CSentinel::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
