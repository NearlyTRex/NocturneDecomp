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
    static_assert(
        std::is_same_v<decltype(&CWerewolf::getTargetPoints), int (CWerewolf::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::getActorType), CDemonActorType *(CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::archive), void (CWerewolf::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::processDamage), void (CWerewolf::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CWerewolf::getDeathState), EDeathState (CWerewolf::*)()>);
    static_assert(std::is_same_v<decltype(&CWerewolf::setWalkTarget),
                                 void (CWerewolf::*)(CDemonActor *, float, float)>);
}

} // namespace
} // namespace nocturne::core
