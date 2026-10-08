#include "core/batcreat/batcreature.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBatCreature, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBatCreature>);
}

TEST(CBatCreature, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBatCreature>);
}

TEST(CBatCreature, IsConcrete) {
    static_assert(!std::is_abstract_v<CBatCreature>);
}

TEST(CBatCreature, Constructors) {
    static_assert(std::is_constructible_v<CBatCreature>);
}

TEST(CBatCreature, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBatCreature::setup), void (CBatCreature::*)()>);
    static_assert(std::is_same_v<decltype(&CBatCreature::process), void (CBatCreature::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBatCreature::getCollisionType),
                                 ECollisionType (CBatCreature::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBatCreature::getTargetPoints),
                                 int (CBatCreature::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBatCreature::getActorType),
                                 CDemonActorType *(CBatCreature::*)()>);
    static_assert(std::is_same_v<decltype(&CBatCreature::archive), void (CBatCreature::*)()>);
    static_assert(std::is_same_v<decltype(&CBatCreature::processDamage),
                                 void (CBatCreature::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
