#include "core/trigger/trigger.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTrigger, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTrigger>);
}

TEST(CTrigger, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTrigger>);
}

TEST(CTrigger, IsConcrete) {
    static_assert(!std::is_abstract_v<CTrigger>);
}

TEST(CTrigger, Constructors) {
    static_assert(std::is_constructible_v<CTrigger>);
}

TEST(CTrigger, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTrigger::setup), void (CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::process), void (CTrigger::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTrigger::renderTransparent), int (CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::getBoundingBox),
                                 CBoundingBox3D *(CTrigger::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::getCollisionType),
                                 ECollisionType (CTrigger::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::getTargetPoints),
                                 int (CTrigger::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::evaluateTriggerCondition),
                                 float (CTrigger::*)(CDemonActor *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::processActionButton), int (CTrigger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::onLaserHit), void (CTrigger::*)(SLaserInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::getActorType), CDemonActorType *(CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::archive), void (CTrigger::*)()>);
    static_assert(std::is_same_v<decltype(&CTrigger::onProjectileHit), void (CTrigger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTrigger::acceptsDamageFrom), int (CTrigger::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTrigger::applyDamage), void (CTrigger::*)(float)>);
}

} // namespace
} // namespace nocturne::core
