#include "core/boxactor/boxactor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBoxActor, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBoxActor>);
}

TEST(CBoxActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBoxActor>);
}

TEST(CBoxActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CBoxActor>);
}

TEST(CBoxActor, Constructors) {
    static_assert(std::is_constructible_v<CBoxActor>);
}

TEST(CBoxActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBoxActor::setup), void (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::process), void (CBoxActor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::renderOpaque), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::renderTransparent), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getBoundingBox),
                                 CBoundingBox3D *(CBoxActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getCollisionType),
                                 ECollisionType (CBoxActor::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getGroundType), EGroundType (CBoxActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getBlockVirtualDirectorFlag), int (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::setPositionAndOrientation),
                                 void (CBoxActor::*)(CVector3f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::onPickup), void (CBoxActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getAllowedMeleeAttackTypes), int (CBoxActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::canPickup), int (CBoxActor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::pickup), void (CBoxActor::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::onDropped), void (CBoxActor::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoxActor::getCarrier), CDemonActor *(CBoxActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBoxActor::getActorType), CDemonActorType *(CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::archive), void (CBoxActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBoxActor::resolveRayPush),
                                 void (CBoxActor::*)(CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
