#include "core/actor/demonactortype.h"
#include "core/werewolf/werewolf.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWerewolf, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CWerewolf>);
}

TEST(CWerewolf, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWerewolf>);
}

TEST(CWerewolf, IsConcrete) {
    static_assert(!std::is_abstract_v<CWerewolf>);
}

TEST(CWerewolf, Constructors) {
    static_assert(std::is_constructible_v<CWerewolf>);
}

TEST(CWerewolf, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWerewolf::setup), void (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::process), void (CWerewolf::*)(float)>);
    static_assert(std::is_same_v<decltype(&CWerewolf::renderTransparent), int (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::getTargetPoints),
                                 int (CWerewolf::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CWerewolf::getActorType),
                                 const CDemonActorType &(CWerewolf::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::archive), void (CWerewolf::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::processDamage), void (CWerewolf::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::getDeathState), EDeathState (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::setWalkTarget),
                                 void (CWerewolf::*)(CDemonActor *, float, float)>);
}

TEST(CWerewolf, ItsRecordIsVersion6UnderCEnemy) {
    EXPECT_EQ(CWerewolf::kType.class_name, "CWerewolf");
    EXPECT_EQ(CWerewolf::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CWerewolf::kType.factory_func, nullptr);
    EXPECT_EQ(CWerewolf::kType.latest_version, 6);
}

} // namespace
} // namespace nocturne::core
