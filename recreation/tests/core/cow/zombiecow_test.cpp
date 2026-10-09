#include "core/cow/zombiecow.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CZombieCow, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CZombieCow>);
}

TEST(CZombieCow, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CZombieCow>);
}

TEST(CZombieCow, IsConcrete) {
    static_assert(!std::is_abstract_v<CZombieCow>);
}

TEST(CZombieCow, Constructors) {
    static_assert(std::is_constructible_v<CZombieCow>);
}

TEST(CZombieCow, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CZombieCow::setup), void (CZombieCow::*)()>);
    static_assert(std::is_same_v<decltype(&CZombieCow::process), void (CZombieCow::*)(float)>);
    static_assert(std::is_same_v<decltype(&CZombieCow::getTargetPoints),
                                 int (CZombieCow::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CZombieCow::getActorType), CDemonActorType *(CZombieCow::*)()>);
    static_assert(std::is_same_v<decltype(&CZombieCow::archive), void (CZombieCow::*)()>);
    static_assert(
        std::is_same_v<decltype(&CZombieCow::processDamage), void (CZombieCow::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
