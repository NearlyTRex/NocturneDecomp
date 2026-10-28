#include "core/actor/demonactortype.h"
#include "core/larva/larva.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLarva, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CLarva>);
}

TEST(CLarva, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLarva>);
}

TEST(CLarva, IsConcrete) {
    static_assert(!std::is_abstract_v<CLarva>);
}

TEST(CLarva, Constructors) {
    static_assert(std::is_constructible_v<CLarva>);
}

TEST(CLarva, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLarva::setup), void (CLarva::*)()>);
    static_assert(std::is_same_v<decltype(&CLarva::process), void (CLarva::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CLarva::getTargetPoints), int (CLarva::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CLarva::getActorType),
                                 const CDemonActorType &(CLarva::*)() const>);
    static_assert(std::is_same_v<decltype(&CLarva::archive), void (CLarva::*)(CActorArchive &)>);
    static_assert(
        std::is_same_v<decltype(&CLarva::processDamage), void (CLarva::*)(SDamageInfo *)>);
}

TEST(CLarva, ItsRecordIsVersion2UnderCEnemy) {
    EXPECT_EQ(CLarva::kType.class_name, "CLarva");
    EXPECT_EQ(CLarva::kType.parent_type, &CEnemy::kType);
    EXPECT_EQ(CLarva::kType.factory_func, nullptr);
    EXPECT_EQ(CLarva::kType.latest_version, 2);
}

} // namespace
} // namespace nocturne::core
