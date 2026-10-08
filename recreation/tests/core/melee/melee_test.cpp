#include "core/melee/melee.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMelee, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CMelee>);
}

TEST(CMelee, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMelee>);
}

TEST(CMelee, IsConcrete) {
    static_assert(!std::is_abstract_v<CMelee>);
}

TEST(CMelee, Constructors) {
    static_assert(std::is_constructible_v<CMelee>);
}

TEST(CMelee, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMelee::process), void (CMelee::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMelee::getAllowedMeleeAttackTypes), int (CMelee::*)()>);
    static_assert(std::is_same_v<decltype(&CMelee::fillAttackDamageInfo),
                                 void (CMelee::*)(int, SDamageInfo *, CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CMelee::playAttackHitEffects),
                                 void (CMelee::*)(int, SDamageInfo *, CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CMelee::canPickup), int (CMelee::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CMelee::getActorType), CDemonActorType *(CMelee::*)()>);
    static_assert(std::is_same_v<decltype(&CMelee::archive), void (CMelee::*)()>);
    static_assert(std::is_same_v<decltype(&CMelee::setWeaponState), void (CMelee::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMelee::fire), int (CMelee::*)()>);
    static_assert(std::is_same_v<decltype(&CMelee::getDamage), float (CMelee::*)()>);
    static_assert(std::is_same_v<decltype(&CMelee::renderAimBeam), void (CMelee::*)()>);
}

} // namespace
} // namespace nocturne::core
