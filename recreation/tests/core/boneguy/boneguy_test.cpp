#include "core/actor/demonactortype.h"
#include "core/boneguy/boneguy.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBoneGuy, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBoneGuy>);
}

TEST(CBoneGuy, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBoneGuy>);
}

TEST(CBoneGuy, IsConcrete) {
    static_assert(!std::is_abstract_v<CBoneGuy>);
}

TEST(CBoneGuy, Constructors) {
    static_assert(std::is_constructible_v<CBoneGuy>);
}

TEST(CBoneGuy, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBoneGuy::setup), void (CBoneGuy::*)()>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::process), void (CBoneGuy::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::renderOpaque), int (CBoneGuy::*)()>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::renderTransparent), int (CBoneGuy::*)()>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::getCollisionType),
                                 ECollisionType (CBoneGuy::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::getTargetPoints),
                                 int (CBoneGuy::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::getActorType),
                                 const CDemonActorType &(CBoneGuy::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CBoneGuy::archive), void (CBoneGuy::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CBoneGuy::processDamage), void (CBoneGuy::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CBoneGuy::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CBoneGuy::reset), void (CBoneGuy::*)()>);
}

TEST(CBoneGuy, ItsRecordIsVersion5UnderCEnemy) {
    EXPECT_EQ(CBoneGuy::kType.class_name, "CBoneGuy");
    EXPECT_EQ(CBoneGuy::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CBoneGuy::kType.factory_func, nullptr);
    EXPECT_EQ(CBoneGuy::kType.latest_version, 5);
}

} // namespace
} // namespace nocturne::core
