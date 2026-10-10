#include "core/dog/zombiedog.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CZombieDog, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CZombieDog>);
}

TEST(CZombieDog, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CZombieDog>);
}

TEST(CZombieDog, IsConcrete) {
    static_assert(!std::is_abstract_v<CZombieDog>);
}

TEST(CZombieDog, Constructors) {
    static_assert(std::is_constructible_v<CZombieDog>);
}

TEST(CZombieDog, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CZombieDog::setup), void (CZombieDog::*)()>);
    static_assert(std::is_same_v<decltype(&CZombieDog::process), void (CZombieDog::*)(float)>);
    static_assert(std::is_same_v<decltype(&CZombieDog::getTargetPoints),
                                 int (CZombieDog::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CZombieDog::getActorType), CDemonActorType *(CZombieDog::*)()>);
    static_assert(std::is_same_v<decltype(&CZombieDog::archive), void (CZombieDog::*)()>);
    static_assert(
        std::is_same_v<decltype(&CZombieDog::processDamage), void (CZombieDog::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
