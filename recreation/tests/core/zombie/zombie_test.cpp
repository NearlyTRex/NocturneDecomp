#include "core/zombie/zombie.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CZombie, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CZombie>);
}

TEST(CZombie, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CZombie>);
}

TEST(CZombie, IsConcrete) {
    static_assert(!std::is_abstract_v<CZombie>);
}

TEST(CZombie, Constructors) {
    static_assert(std::is_constructible_v<CZombie>);
}

TEST(CZombie, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CZombie::setup), void (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::process), void (CZombie::*)(float)>);
    static_assert(std::is_same_v<decltype(&CZombie::renderOpaque), int (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::renderTransparent), int (CZombie::*)()>);
    static_assert(
        std::is_same_v<decltype(&CZombie::getTargetPoints), int (CZombie::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CZombie::shouldIgnoreForTargeting), int (CZombie::*)()>);
    static_assert(
        std::is_same_v<decltype(&CZombie::getActorType), CDemonActorType *(CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::archive), void (CZombie::*)()>);
    static_assert(std::is_same_v<decltype(&CZombie::isGrabbable), int (CZombie::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::canBeGrabbed), int (CZombie::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::getGrabbed), int (CZombie::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::processDamage), void (CZombie::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CZombie::canBeAttracted), int (CZombie::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CZombie::getCarryObjToBodyXForm),
                                 CMatrix3x4f *(CZombie::*)(int, CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
