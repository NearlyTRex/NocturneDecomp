#include "core/enemy/enemy.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CEnemy, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CEnemy>);
}

TEST(CEnemy, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CEnemy>);
}

TEST(CEnemy, IsConcrete) {
    static_assert(!std::is_abstract_v<CEnemy>);
}

TEST(CEnemy, Constructors) {
    static_assert(std::is_constructible_v<CEnemy>);
}

TEST(CEnemy, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEnemy::setup), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::renderBackground), void (CEnemy::*)(int)>);
    static_assert(std::is_same_v<decltype(&CEnemy::getTargetPoints), int (CEnemy::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::archive), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::releaseVictim), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::onVictimLost), void (CEnemy::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CEnemy::processDamage), void (CEnemy::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CEnemy::getTargetPoint), CVector3f *(CEnemy::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::updateVictim), void (CEnemy::*)(float)>);
    static_assert(std::is_same_v<decltype(&CEnemy::randomize), void (CEnemy::*)()>);
    static_assert(std::is_same_v<decltype(&CEnemy::testAttackRadius),
                                 int (CEnemy::*)(CVector3f *, float, SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::testAttackLine),
                                 int (CEnemy::*)(CVector3f *, CVector3f *, SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::canSeeTarget), int (CEnemy::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::setVictim), void (CEnemy::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CEnemy::updatePatrol), int (CEnemy::*)(float)>);
}

} // namespace
} // namespace nocturne::core
