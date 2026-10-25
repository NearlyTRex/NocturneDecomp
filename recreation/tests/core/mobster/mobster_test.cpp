#include "core/actor/demonactortype.h"
#include "core/mobster/mobster.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMobster, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CMobster>);
}

TEST(CMobster, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMobster>);
}

TEST(CMobster, IsConcrete) {
    static_assert(!std::is_abstract_v<CMobster>);
}

TEST(CMobster, Constructors) {
    static_assert(std::is_constructible_v<CMobster>);
}

TEST(CMobster, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMobster::setup), void (CMobster::*)()>);
    static_assert(std::is_same_v<decltype(&CMobster::process), void (CMobster::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMobster::getCollisionType),
                                 ECollisionType (CMobster::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getTargetPoints),
                                 int (CMobster::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getActorType),
                                 const CDemonActorType &(CMobster::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CMobster::archive), void (CMobster::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CMobster::processDamage), void (CMobster::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CMobster::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CMobster::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CMobster::reset), void (CMobster::*)()>);
}

TEST(CMobster, ItsRecordIsVersion7UnderCEnemy) {
    EXPECT_EQ(CMobster::kType.class_name, "CMobster");
    EXPECT_EQ(CMobster::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CMobster::kType.factory_func, nullptr);
    EXPECT_EQ(CMobster::kType.latest_version, 7);
}

} // namespace
} // namespace nocturne::core
